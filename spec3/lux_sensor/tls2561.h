/***************************************************************************//**
 * @file    tls2561.h
 * @brief   High level functions for interfacing with the tls2561.
 *          The tls2561 is a low power digital luminosity (light) sensor.
 ******************************************************************************/


#ifndef __TLS2561_H__
#define __TLS2561_H__

#include <stdint.h>
#include <stdbool.h>

/* i2c definitions (7-bit address) */
#define TSL2561_ADDR_LOW          (0x29)
#define TSL2561_ADDR_FLOAT        (0x39)    // Default address (pin left floating)
#define TSL2561_ADDR_HIGH         (0x49)

/* defintion of delay times */
#define TSL2561_DELAY_INTTIME_13MS    (15)
#define TSL2561_DELAY_INTTIME_101MS   (120)
#define TSL2561_DELAY_INTTIME_402MS   (450)

/**
 * enumeration for integration time options
 */
typedef enum
{
	TSL2561_INTEGRATIONTIME_13MS      = 0x00,    // 13.7ms
	TSL2561_INTEGRATIONTIME_101MS     = 0x01,    // 101ms
	TSL2561_INTEGRATIONTIME_402MS     = 0x02     // 402ms
}
tsl2561IntegrationTime_t;

/**
 * enumeration for gain options
 */
typedef enum
{
	TSL2561_GAIN_1X                   = 0x00,    // No gain
	TSL2561_GAIN_16X                  = 0x10,    // 16x gain
}
tsl2561Gain_t;

/**
 * struct to keep sensor related data
 */
typedef struct
{
	uint8_t 	dev_id;			// Device ID (should be 0x0A)
	uint32_t	light;			// light value in lux
	
	tsl2561IntegrationTime_t 	devIntTime;
	tsl2561Gain_t 				devGain;
	bool						autoGain;
} tls2561_typeDef;

extern tls2561_typeDef tls2561;

/* tls2561 functions */
bool tls2561Init(const char *device);
void tls2561GetDeviceId(void);
void tls2561EnableAutoRange(bool enable);
void tls2561SetIntegrationTimeAndGain(tsl2561IntegrationTime_t time, tsl2561Gain_t gain);
void tls2561GetLuminosity (uint16_t *broadband, uint16_t *ir);
uint32_t tls2561CalculateLux(uint16_t broadband, uint16_t ir);
bool tls2561GetLight(void);

#endif  /* __TLS2561_H__ */
