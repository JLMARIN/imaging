
/***************************************************************************//**
 * @file    tls2561.c
 * @brief   High level functions for interfacing with the tls2561.
 ******************************************************************************/


#include <stdio.h>
#include <math.h>
#include <wiringPi.h>
#include <wiringPiI2C.h>
#include "tls2561_reg.h"
#include "tls2561.h"


tls2561_typeDef tls2561;
int16_t tls2561I2cDev;


/***************************************************************************//**
 * @brief   Writes 8 bits of data to the i2c bus.
 * @param   Target register to write to.
 * @param   Value to write.
 ******************************************************************************/
static void tls2561Write8(uint8_t reg, uint8_t value)
{
	wiringPiI2CWriteReg8(tls2561I2cDev, reg, value);
}


/***************************************************************************//**
 * @brief   Reads 8 bits of data from the i2c bus.
 * @param   Register to read from.
 * @return 	Value read.
 ******************************************************************************/
static uint8_t tls2561Read8(uint8_t reg)
{
	return wiringPiI2CReadReg8(tls2561I2cDev, reg);
}


/***************************************************************************//**
 * @brief   Reads 16 bits of data from the i2c bus.
 * @param   Register to read from.
 * @return 	Value read.
 ******************************************************************************/
static uint16_t tls2561Read16(uint8_t reg)
{
	uint16_t val = wiringPiI2CReadReg16(tls2561I2cDev, reg);
	return ((val & 0xFF) << 8) | (val >> 8);
}


/***************************************************************************//**
 * @brief   Turns on sensor.
 ******************************************************************************/
static void tls2561Enable(void)
{
	tls2561Write8(TSL2561_COMMAND_BIT | TSL2561_REG_CONTROL, TSL2561_CONTROL_POWERON);
}


/***************************************************************************//**
 * @brief   Turns off sensor.
 ******************************************************************************/
static void tls2561Disable(void)
{
	tls2561Write8(TSL2561_COMMAND_BIT | TSL2561_REG_CONTROL, TSL2561_CONTROL_POWEROFF);
}


/***************************************************************************//**
 * @brief   Gets data from the sensor.
 ******************************************************************************/
static void tls2561GetData(uint16_t *broadband, uint16_t *ir)
{
	/* Turn the device on */
	tls2561Enable();

	/* Wait x ms for ADC to complete */
	switch (tls2561.devIntTime)
	{
	case TSL2561_INTEGRATIONTIME_13MS:
		delay(TSL2561_DELAY_INTTIME_13MS);  // KTOWN: Was 14ms
		break;
	case TSL2561_INTEGRATIONTIME_101MS:
		delay(TSL2561_DELAY_INTTIME_101MS); // KTOWN: Was 102ms
		break;
	default:
		delay(TSL2561_DELAY_INTTIME_402MS); // KTOWN: Was 403ms
		break;
	}

	/* Reads a two byte value from channel 0 (visible + infrared) */
	*broadband = tls2561Read16(TSL2561_COMMAND_BIT | TSL2561_WORD_BIT | TSL2561_REG_CHAN0_LOW);

	/* Reads a two byte value from channel 1 (infrared) */
	*ir = tls2561Read16(TSL2561_COMMAND_BIT | TSL2561_WORD_BIT | TSL2561_REG_CHAN1_LOW);

	/* Turn the device off to save power */
	tls2561Disable();
}


/***************************************************************************//**
 * @brief	Initializes the tls2561.
 * @param 	String with i2c port to use.
 * @return 	Status of initialization. 1 if success.
 ******************************************************************************/
bool tls2561Init(const char *device)
{
	tls2561I2cDev = wiringPiI2CSetupInterface(device, TSL2561_ADDR_FLOAT);
	if (tls2561I2cDev < 0) {
		printf("ERROR: tls2561 open failed\n");
		return false;
	}

	tls2561GetDeviceId();			// read device ID

	if (tls2561.dev_id != 0x0A)
		return false;
	
	/* Set default integration time and gain */
	tls2561SetIntegrationTimeAndGain(TSL2561_INTEGRATIONTIME_101MS, TSL2561_GAIN_1X);
	
	/* Enable automatic gain */
	tls2561EnableAutoRange(true);

	/* Note: by default, the device is in power down mode on bootup */
	tls2561Disable();

	return true;
}


/***************************************************************************//**
 * @brief	Enables auto range (gain).
 ******************************************************************************/
void tls2561EnableAutoRange(bool enable)
{
	tls2561.autoGain = enable;
}


/***************************************************************************//**
 * @brief	Reads device ID.
 ******************************************************************************/
void tls2561GetDeviceId(void)
{
	tls2561.dev_id = tls2561Read8(TSL2561_REG_ID);
}


/***************************************************************************//**
 * @brief	Sets integration time and gain for the sensor.
 ******************************************************************************/
void tls2561SetIntegrationTimeAndGain(tsl2561IntegrationTime_t time, tsl2561Gain_t gain)
{
	/* Turn the device on */
	tls2561Enable();

	/* Update the timing register */
	tls2561Write8(TSL2561_COMMAND_BIT | TSL2561_REG_TIMING, time | gain);

	/* Update saved value */
	tls2561.devIntTime = time;
	tls2561.devGain = gain;

	/* Turn the device off to save power */
	tls2561Disable();
}


/***************************************************************************//**
 * @brief	Gets luminosity measurement from sensor.
 ******************************************************************************/
void tls2561GetLuminosity(uint16_t *broadband, uint16_t *ir)
{
	bool valid = false;

	/* If Auto gain disabled get a single reading and continue */
	if(!tls2561.autoGain)
	{
		tls2561GetData (broadband, ir);
		return;
	}

	/* Read data until we find a valid range */
	bool _agcCheck = false;
	
	do
	{
		uint16_t _b, _ir;
		uint16_t _hi, _lo;

		/* Get the hi/low threshold for the current integration time */
		switch(tls2561.devIntTime)
		{
			case TSL2561_INTEGRATIONTIME_13MS:
				_hi = TSL2561_AGC_THI_13MS;
				_lo = TSL2561_AGC_TLO_13MS;
				break;
			case TSL2561_INTEGRATIONTIME_101MS:
				_hi = TSL2561_AGC_THI_101MS;
				_lo = TSL2561_AGC_TLO_101MS;
				break;
			default:
				_hi = TSL2561_AGC_THI_402MS;
				_lo = TSL2561_AGC_TLO_402MS;
				break;
		}

		tls2561GetData(&_b, &_ir);

		//printf("b = %u , ir = %u\n", _b, _ir);

		/* Run an auto-gain check if we haven't already done so ... */
		if (!_agcCheck)
		{
			if ((_b < _lo) && (tls2561.devGain == TSL2561_GAIN_1X))
			{
				/* Increase the gain and try again */
				tls2561SetIntegrationTimeAndGain(tls2561.devIntTime, TSL2561_GAIN_16X);
				/* Drop the previous conversion results */
				tls2561GetData(&_b, &_ir);
				/* Set a flag to indicate we've adjusted the gain */
				_agcCheck = true;
			}
			else if ((_b > _hi) && (tls2561.devGain == TSL2561_GAIN_16X))
			{
				/* Drop gain to 1x and try again */
				tls2561SetIntegrationTimeAndGain(tls2561.devIntTime, TSL2561_GAIN_1X);
				/* Drop the previous conversion results */
				tls2561GetData(&_b, &_ir);
				/* Set a flag to indicate we've adjusted the gain */
				_agcCheck = true;
			}
			else
			{
				/* Nothing to look at here, keep moving ....
				   Reading is either valid, or we're already at the chips limits */
				*broadband = _b;
				*ir = _ir;
				valid = true;
			}
		}
		else
		{
			/* If we've already adjusted the gain once, just return the new results.
			   This avoids endless loops where a value is at one extreme pre-gain,
			   and the the other extreme post-gain */
			*broadband = _b;
			*ir = _ir;
			valid = true;
		}
	} while (!valid);
}


/***************************************************************************//**
 * @brief	Calculates lux value from sensor measurements.
 ******************************************************************************/
uint32_t tls2561CalculateLux(uint16_t broadband, uint16_t ir)
{
	unsigned long chScale;
	unsigned long channel1;
	unsigned long channel0;  

	/* Make sure the sensor isn't saturated! */
	uint16_t clipThreshold;
	switch (tls2561.devIntTime)
	{
		case TSL2561_INTEGRATIONTIME_13MS:
			clipThreshold = TSL2561_CLIPPING_13MS;
			break;
		case TSL2561_INTEGRATIONTIME_101MS:
			clipThreshold = TSL2561_CLIPPING_101MS;
			break;
		default:
			clipThreshold = TSL2561_CLIPPING_402MS;
			break;
	}

	/* Return 65536 lux if the sensor is saturated */
	if ((broadband > clipThreshold) || (ir > clipThreshold))
	{
		return 65536;
	}

	/* Get the correct scale depending on the intergration time */
	switch (tls2561.devIntTime)
	{
		case TSL2561_INTEGRATIONTIME_13MS:
			chScale = TSL2561_LUX_CHSCALE_TINT0;
			break;
		case TSL2561_INTEGRATIONTIME_101MS:
			chScale = TSL2561_LUX_CHSCALE_TINT1;
			break;
		default: /* No scaling ... integration time = 402ms */
			chScale = (1 << TSL2561_LUX_CHSCALE);
			break;
	}

	/* Scale for gain (1x or 16x) */
	if (!tls2561.devGain) chScale = chScale << 4;

	/* Scale the channel values */
	channel0 = (broadband * chScale) >> TSL2561_LUX_CHSCALE;
	channel1 = (ir * chScale) >> TSL2561_LUX_CHSCALE;

	/* Find the ratio of the channel values (Channel1/Channel0) */
	unsigned long ratio1 = 0;
	if (channel0 != 0) ratio1 = (channel1 << (TSL2561_LUX_RATIOSCALE+1)) / channel0;

	/* round the ratio value */
	unsigned long ratio = (ratio1 + 1) >> 1;

	unsigned int b, m;

#ifdef TSL2561_PACKAGE_CS
	if ((ratio >= 0) && (ratio <= TSL2561_LUX_K1C))
		{b=TSL2561_LUX_B1C; m=TSL2561_LUX_M1C;}
	else if (ratio <= TSL2561_LUX_K2C)
		{b=TSL2561_LUX_B2C; m=TSL2561_LUX_M2C;}
	else if (ratio <= TSL2561_LUX_K3C)
		{b=TSL2561_LUX_B3C; m=TSL2561_LUX_M3C;}
	else if (ratio <= TSL2561_LUX_K4C)
		{b=TSL2561_LUX_B4C; m=TSL2561_LUX_M4C;}
	else if (ratio <= TSL2561_LUX_K5C)
		{b=TSL2561_LUX_B5C; m=TSL2561_LUX_M5C;}
	else if (ratio <= TSL2561_LUX_K6C)
		{b=TSL2561_LUX_B6C; m=TSL2561_LUX_M6C;}
	else if (ratio <= TSL2561_LUX_K7C)
		{b=TSL2561_LUX_B7C; m=TSL2561_LUX_M7C;}
	else if (ratio > TSL2561_LUX_K8C)
		{b=TSL2561_LUX_B8C; m=TSL2561_LUX_M8C;}
#else
	if ((ratio >= 0) && (ratio <= TSL2561_LUX_K1T))
		{b=TSL2561_LUX_B1T; m=TSL2561_LUX_M1T;}
	else if (ratio <= TSL2561_LUX_K2T)
		{b=TSL2561_LUX_B2T; m=TSL2561_LUX_M2T;}
	else if (ratio <= TSL2561_LUX_K3T)
		{b=TSL2561_LUX_B3T; m=TSL2561_LUX_M3T;}
	else if (ratio <= TSL2561_LUX_K4T)
		{b=TSL2561_LUX_B4T; m=TSL2561_LUX_M4T;}
	else if (ratio <= TSL2561_LUX_K5T)
		{b=TSL2561_LUX_B5T; m=TSL2561_LUX_M5T;}
	else if (ratio <= TSL2561_LUX_K6T)
		{b=TSL2561_LUX_B6T; m=TSL2561_LUX_M6T;}
	else if (ratio <= TSL2561_LUX_K7T)
		{b=TSL2561_LUX_B7T; m=TSL2561_LUX_M7T;}
	else if (ratio > TSL2561_LUX_K8T)
		{b=TSL2561_LUX_B8T; m=TSL2561_LUX_M8T;}
#endif

	unsigned long temp;
	temp = ((channel0 * b) - (channel1 * m));

	/* Do not allow negative lux value */
	if (temp < 0) temp = 0;

	/* Round lsb (2^(LUX_SCALE-1)) */
	temp += (1 << (TSL2561_LUX_LUXSCALE-1));

	/* Strip off fractional portion */
	uint32_t lux = temp >> TSL2561_LUX_LUXSCALE;

	/* Signal I2C had no errors */
	return lux;
}


/***************************************************************************//**
 * @brief	Gets final light value.
 ******************************************************************************/
bool tls2561GetLight(void)
{
	uint16_t broadband, ir;

	/* get luminosity measurement */
	tls2561GetLuminosity(&broadband, &ir);

	/* calculate actual lux */
	tls2561.light = tls2561CalculateLux(broadband, ir);

	if (tls2561.light == 65536) {
		return false;
	}

	return true;
}

