
/***************************************************************************//**
 * @file    tmp006.c
 * @brief   High level functions for interfacing with the tmp006.
 ******************************************************************************/


#include <stdio.h>
#include <math.h>
#include <wiringPiI2C.h>
#include "tmp006_reg.h"
#include "tmp006.h"


tmp006_data_struct tmp006;
int16_t tmp006I2cDev;


/***************************************************************************//**
 * @brief   Writes 16 bits of data to the i2c bus.
 * @param   Target register to write to.
 * @param   Value to write.
 ******************************************************************************/
static void tmp006Write16(uint8_t reg, int16_t value)
{
	wiringPiI2CWriteReg16(tmp006I2cDev, reg, ((value & 0xFF) << 8) | (value >> 8));
}


/***************************************************************************//**
 * @brief   Reads 16 bits of data from the i2c bus.
 * @param   Register to read from.
 * @return 	Value read.
 ******************************************************************************/
static uint16_t tmp006Read16(uint8_t reg)
{
	uint16_t val = wiringPiI2CReadReg16(tmp006I2cDev, reg);
	return ((val & 0xFF) << 8) | (val >> 8);
}


/***************************************************************************//**
 * @brief	Initializes the tmp006.
 * @param 	String with i2c port to use.
 * @return 	Status of initialization. 1 if success.
 ******************************************************************************/
bool tmp006Init(const char *device)
{
	tmp006I2cDev = wiringPiI2CSetupInterface(device, TMP006_I2C_ADDR);
	if (tmp006I2cDev < 0) {
		printf("ERROR: tmp006 open failed\n");
		return false;
	}

	tmp006Write16(TMP006_CONFIG, TMP006_CFG_MODE_ON | TMP006_CFG_16SAMPLE | TMP006_CFG_DRDY_DIS);

	tmp006GetManufacturerId();		// read manufacturer ID
	tmp006GetDeviceId();			// read device ID

	if (tmp006.man_id == TMP006_MAN_ID_VAL && tmp006.dev_id == TMP006_DEV_ID_VAL) {
		return true;
	}
	else {
		return false;
	}
}


/***************************************************************************//**
 * @brief	Reads manufacturer ID.
 ******************************************************************************/
void tmp006GetManufacturerId(void)
{
	tmp006.man_id = tmp006Read16(TMP006_MFRID);
}


/***************************************************************************//**
 * @brief	Reads device ID.
 ******************************************************************************/
void tmp006GetDeviceId(void)
{
	tmp006.dev_id = tmp006Read16(TMP006_DEVID);
}


/***************************************************************************//**
 * @brief	Reads sensor die temperature.
 ******************************************************************************/
void tmp006ReadDieTemp(void)
{
	int16_t raw_die_temp = tmp006Read16(TMP006_TAMB) >> 2;
	tmp006.t_die = RAW_TDIE_TO_CELSIUS( (double)raw_die_temp );
}


/***************************************************************************//**
 * @brief	Reads thermopile voltage.
 ******************************************************************************/
void tmp006ReadObjVoltage(void)
{
	int16_t raw_volt = tmp006Read16(TMP006_VOBJ);
	tmp006.v_obj = RAW_VOBJ_TO_VOLTS( (double)raw_volt );
}


/***************************************************************************//**
 * @brief	Calculates object temperature.
 ******************************************************************************/
void tmp006ReadObjTemp(void)
{
	tmp006ReadDieTemp();			// get die temperature
	tmp006ReadObjVoltage();			// get obj voltage

	double Vobj = tmp006.v_obj;
	double Tdie = CELSIUS_TO_KELVIN(tmp006.t_die);

	double tdie_tref = Tdie - TMP006_TREF;

	double S = ( 1 + TMP006_A1*tdie_tref + TMP006_A2*tdie_tref*tdie_tref );
	S *= TMP006_S0;
	S /= 10000000;
	S /= 10000000;

	double Vos = TMP006_B0 + TMP006_B1*tdie_tref + TMP006_B2*tdie_tref*tdie_tref;

	double fVobj = ( Vobj - Vos ) + TMP006_C2*(Vobj - Vos)*(Vobj - Vos);

	double Tobj_kelvin = sqrt(sqrt(Tdie * Tdie * Tdie * Tdie + fVobj/S));

	tmp006.t_obj = KELVIN_TO_CELSIUS( Tobj_kelvin );
}
