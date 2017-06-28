/***************************************************************************//**
 * @file    temp.c
 * @brief   Main file.
 * @details	Communicates with the tmp006 temperature sensor and prints data.
 ******************************************************************************/


#include <stdio.h>
#include "tmp006.h"


/**************************************************************************//**
 * @brief 	Main loop.
 *****************************************************************************/
int main(int argc, char **argv)
{
	char *device = "/dev/i2c-1";

	if (!tmp006Init(device)) while (1);

	printf("======== tmp006 ========\n");

	while (1) {
		tmp006ReadObjTemp();
		printf("temperature : %.2lf 'C\n", tmp006.t_obj);
		usleep(1000000);
	}
	return 0;
}
