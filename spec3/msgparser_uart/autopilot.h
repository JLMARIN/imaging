/***************************************************************************//**
 * @file    autopilot.h
 * @brief   High level functions for interfacing with the autopilot board via
 *			serial interface (UART or Serial USB) and read paparazzi telemetry
 *			messages.
 ******************************************************************************/


#ifndef __AUTOPILOT_H__
#define __AUTOPILOT_H__


#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <termios.h>
#include <unistd.h>
#include <stdint.h>
#include <stdint.h>
#include <sys/types.h>

#include <sys/ioctl.h>
#include "pprzlink/pprz_transport.h"
#include "configuration.h"
#include "messages.h"


/* Global variables */
bool 	msg_available;
uint8_t parsed_message_buffer[MESSAGE_BUFFER_LENGTH];
int 	fd; 					// Global serial file descriptor
uint8_t raw_message_buffer;


/* autopilot functions */
int autopilotUartOpen(const char *device, const int baud);
uint8_t uartGetByte();
int uartBytesAvailable();
int autopilotSerialUsbOpen(const char *device, const int baud);
void autopilotSerialUsbRead(void);

#endif  /* __AUTOPILOT_H__ */
