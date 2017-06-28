/***************************************************************************//**
 * @file    autopilot.c
 * @brief   High level functions for interfacing with the autopilot board via
 *			serial interface (UART or Serial USB) and read paparazzi telemetry
 *			messages.
 ******************************************************************************/


#include "autopilot.h"


/***************************************************************************//**
 * @brief   Initialiazes UART serial port.
 * @param	Name of the port.
 * @param	Baud rate.
 * @return  Serial file descriptor.
 ******************************************************************************/
int autopilotUartOpen(const char *device, const int baud)
{
	/*
	Apply some basic serial port settings to the provided file
	descriptor. In particular, baud rate, parity, stop bits, etc...

	For details of what does what, see:
	http://man7.org/linux/man-pages/man3/termios.3.html
	*/

	struct termios settings;

	if ((fd = open (device, O_RDONLY)) == -1)
	{
		printf ("Unable to open serial device: %s\n", device);
		return -1;
	}

	tcgetattr(fd, &settings);

	/*
	Settings copied from the open source Paparazzi project:
	https://github.com/paparazzi/paparazzi/blob/master/sw/lib/ocaml/cserial.c
	*/

	/* input modes */
	settings.c_iflag &= ~(IGNBRK|BRKINT|IGNPAR|PARMRK|INPCK|ISTRIP|INLCR|IGNCR|ICRNL|IXON|IXANY|IXOFF|IMAXBEL);
	settings.c_iflag |= BRKINT;

	/* output_flags */
	settings.c_oflag  &=~(OPOST|ONLCR|OCRNL|ONOCR|ONLRET);

	/* control modes */
	settings.c_cflag &= ~(CSIZE|CSTOPB|CREAD|PARENB|PARODD|HUPCL|CLOCAL|CRTSCTS);

	settings.c_cflag |= CREAD|CS8|CLOCAL;

	/* local modes */
	settings.c_lflag &= ~(ISIG|ICANON|IEXTEN|ECHO|FLUSHO|PENDIN);
	settings.c_lflag |= NOFLSH;

	cfsetspeed(&settings, BAUDRATE);

	// Set up non-blocking serial port read
	fcntl(fd, F_SETFL, O_NONBLOCK);

	tcsetattr(fd, TCSADRAIN, &settings); /* apply the settings */

	return fd;
}


/***************************************************************************//**
 * @brief   Calls the posix read() function on the provided serial port file
 * 			descriptor.
 * @return 	
 ******************************************************************************/
uint8_t uartGetByte()
{
    read(fd, &raw_message_buffer, 1);
    return raw_message_buffer;
}


/***************************************************************************//**
 * @brief   Checks if a byte is available in the serial port.
 * @return 	
 ******************************************************************************/
int uartBytesAvailable()
{
  int bytesAvailable;
  ioctl(fd, FIONREAD, &bytesAvailable);

  return bytesAvailable;
}


/***************************************************************************//**
 * @brief   Initialiazes USB as serial port.
 * @param	Name of the port.
 * @param	Baud rate.
 * @return  Serial file descriptor.
 ******************************************************************************/
int autopilotSerialUsbOpen (const char *device, const int baud)
{
	/*
	Apply some basic serial port settings to the provided file
	descriptor. In particular, baud rate, parity, stop bits, etc...

	For details of what does what, see:
	http://man7.org/linux/man-pages/man3/termios.3.html
	*/

	struct termios settings;

	if ((fd = open (device, O_RDONLY)) == -1)
	{
		printf ("Unable to open serial device: %s\n", device);
		return -1;
	}

	tcgetattr(fd, &settings);

	/*
	Settings copied from the open source Paparazzi project:
	https://github.com/paparazzi/paparazzi/blob/master/sw/lib/ocaml/cserial.c
	*/

	/* input modes */
	settings.c_iflag &= ~(IGNBRK|BRKINT|IGNPAR|PARMRK|INPCK|ISTRIP|INLCR|IGNCR|ICRNL|IXON|IXANY|IXOFF|IMAXBEL);
	settings.c_iflag |= BRKINT;

	/* output_flags */
	settings.c_oflag  &=~(OPOST|ONLCR|OCRNL|ONOCR|ONLRET);

	/* control modes */
	settings.c_cflag &= ~(CSIZE|CSTOPB|CREAD|PARENB|PARODD|HUPCL|CLOCAL|CRTSCTS);

	settings.c_cflag |= CREAD|CS8|CLOCAL;

	/* local modes */
	settings.c_lflag &= ~(ISIG|ICANON|IEXTEN|ECHO|FLUSHO|PENDIN);
	settings.c_lflag |= NOFLSH;

	cfsetspeed(&settings, BAUDRATE);

	// Set up non-blocking serial port read
	fcntl(fd, F_SETFL, O_NONBLOCK);

	tcsetattr(fd, TCSADRAIN, &settings); /* apply the settings */

	return fd;
}


/***************************************************************************//**
 * @brief   Reads message from autopilot via USB Serial.
 ******************************************************************************/
void autopilotSerialUsbRead(void)
{
	read(fd, &parsed_message_buffer, MESSAGE_BUFFER_LENGTH);
}

