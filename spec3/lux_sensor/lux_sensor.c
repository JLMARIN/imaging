/***************************************************************************//**
 * @file    lux_sensor.c
 * @brief   Main file.
 * @details	Communicates with the tls2561 lux sensor and prints data.
 ******************************************************************************/


#include <stdio.h>
#include "tls2561.h"


/**************************************************************************//**
 * @brief 	Main loop.
 *****************************************************************************/
int main(int argc, char **argv)
{
	char *device = "/dev/i2c-1";

	if (!tls2561Init(device)) while (1);

	printf("======== tls2561 (light sensor) ========\n");

	while (1) {
		if (tls2561GetLight()) {
			printf("light : %u lux\n", tls2561.light);
		}
		usleep(1000000);
	}
	return 0;
}

