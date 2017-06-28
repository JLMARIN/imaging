/***************************************************************************//**
 * @file    tmp006.h
 * @brief   High level functions for interfacing with the tmp006.
 *          The TMP006 is an infrared thermopile temperature sensor.
 *
 *	      	Sensor Voltage Format:
 *	      	The TMP006 and TMP006B provide 16 bits of data in binary twos
 *	      	complement format. The positive full-scale input produces an output
 *	      	code of 7FFFh. The negative full-scale input produces an output
 *	      	code of 8000h.
 *
 *	      	Full-scale is a 5.12 mV signal. The LSB size is 156.25 nV.
 *
 *	     	Temperature Format:
 *	      	The Temperature Register data format of the TMP006 and TMP006B is
 *	      	reported in a binary twos complement signed integer format, with 1
 *	      	LSB = 1/32°C = 0.03125.
 ******************************************************************************/


#ifndef __TMP006_H__
#define __TMP006_H__

#include <stdint.h>
#include <stdbool.h>

/* i2c definitions */
#define TMP006_I2C_ADDR              0x40    // tmp006 I2C 7-bit address

/* constants for calculating object temperature */
#define TMP006_B0              -0.0000294    // b0 =     -2.94x10ˆ-5
#define TMP006_B1             -0.00000057    // b1 =     -5.70x10ˆ-7
#define TMP006_B2           0.00000000463    // b2 =      4.63x10ˆ-9
#define TMP006_C2                    13.4    // c2 =      13.4
#define TMP006_TREF                298.15    // T_ref =   298.15K
#define TMP006_A1                 0.00175    // a1 =      1.75x10ˆ-3
#define TMP006_A2             -0.00001678    // a2 =     -1.678x10ˆ-5
#define TMP006_S0                     6.4    // * 10^-14

/**
 * macro to convert the raw die temperature to degrees Celsius
 */
#define RAW_TDIE_TO_CELSIUS(x)		( x * 0.03125 )

/**
 * macro to convert the raw object voltage to volts
 */
#define RAW_VOBJ_TO_VOLTS(x)		( (x * 156.25) / 1000000000 )

/**
 * macro to convert from Kelvin to degrees Celsius
 */
#define KELVIN_TO_CELSIUS(x)		( x - 273.15 )

/**
 * macro to convert from degrees Celsius to Kelvin
 */
#define CELSIUS_TO_KELVIN(x)		( x + 273.15 )

/**
 * struct to keep sensor related data
 */
typedef struct
{
	uint16_t man_id;		// Manufacturer ID (should be 0x5449)
	uint16_t dev_id;		// Device ID (should be 0x0067)
	double t_die;			// Raw die temperature (Celsius)
	double v_obj;			// Raw thermopile voltage (Volts)
	double t_obj;			// Object temperature (Celsius)
} tmp006_data_struct;

extern tmp006_data_struct tmp006;

/* tmp006 functions */
bool tmp006Init(const char *device);
void tmp006GetManufacturerId(void);
void tmp006GetDeviceId(void);
void tmp006ReadDieTemp(void);
void tmp006ReadObjVoltage(void);
void tmp006ReadObjTemp(void);

#endif  /* __TMP006_H__ */
