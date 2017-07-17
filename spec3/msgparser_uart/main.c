/***************************************************************************//**
 * @file    main.c
 * @brief   Program to open, read and parse telemetry messages from the
 *			autotpilot board via a UART port.
 ******************************************************************************/


#include "autopilot.h"


FILE *f;
int32_t altitude;

/***************************************************************************//**
 * @brief   Opens text file.
 ******************************************************************************/
int open_text_file(void)
{
	f = fopen("log.txt", "w");

	if (f == NULL)
	{
		printf("Error opening file!\n");
		return 1;
	}

	return 0;
}


/***************************************************************************//**
 * @brief   Identifies and parses waldo message; and prints data.
 ******************************************************************************/
void dl_parse_print_msg(int print, int fprint)
{
	int msg_id = parsed_message_buffer[1];

	if (msg_id == DL_WALDO_MSG)
	{
		//printf("msg id: %u\n", msg_id);

		if (print)
		{		
			printf("yaw:       %f\n", DL_WALDO_MSG_yaw(parsed_message_buffer));
			printf("pitch:     %f\n", DL_WALDO_MSG_pitch(parsed_message_buffer));
			printf("roll:      %f\n", DL_WALDO_MSG_roll(parsed_message_buffer));

			printf("height:    %f\n", DL_WALDO_MSG_est_height(parsed_message_buffer));
			printf("speed:     %u\n", DL_WALDO_MSG_speed(parsed_message_buffer));

			printf("utm_east:  %d\n", DL_WALDO_MSG_utm_east(parsed_message_buffer));
			printf("utm_north: %d\n", DL_WALDO_MSG_utm_north(parsed_message_buffer));
			printf("utm_zone:  %u\n", DL_WALDO_MSG_utm_zone(parsed_message_buffer));
			printf("week:      %u\n", DL_WALDO_MSG_week(parsed_message_buffer));
			printf("altitude:  %u\n", altitude);
			printf("fix:       %u\n", DL_WALDO_MSG_fix(parsed_message_buffer));	
			printf("itow:      %u\n", DL_WALDO_MSG_itow(parsed_message_buffer));
		}

		if (fprint)
		{	
			if (!open_text_file())
			{
				fprintf(f, "yaw=%f\n", DL_WALDO_MSG_yaw(parsed_message_buffer));
				fprintf(f, "pitch=%f\n", DL_WALDO_MSG_pitch(parsed_message_buffer));
				fprintf(f, "roll=%f\n", DL_WALDO_MSG_roll(parsed_message_buffer));

				fprintf(f, "height=%f\n", DL_WALDO_MSG_est_height(parsed_message_buffer));
				fprintf(f, "speed=%u\n", DL_WALDO_MSG_speed(parsed_message_buffer));

				fprintf(f, "utm_east=%d\n", DL_WALDO_MSG_utm_east(parsed_message_buffer));
				fprintf(f, "utm_north=%d\n", DL_WALDO_MSG_utm_north(parsed_message_buffer));
				fprintf(f, "utm_zone=%u\n", DL_WALDO_MSG_utm_zone(parsed_message_buffer));
				fprintf(f, "week=%u\n", DL_WALDO_MSG_week(parsed_message_buffer));
				fprintf(f, "altitude=%u\n", altitude);
				fprintf(f, "fix=%u\n", DL_WALDO_MSG_fix(parsed_message_buffer));	
				fprintf(f, "itow=%u\n", DL_WALDO_MSG_itow(parsed_message_buffer));

				fclose(f);
			}
		}
	}

	if (msg_id == DL_GPS)
	{
		altitude = DL_GPS_alt(parsed_message_buffer);
	}
}


/***************************************************************************//**
 * @brief   Main.
 ******************************************************************************/
int main(void)
{
	printf("Program Started\n");

	struct pprz_transport *reader = malloc(sizeof(struct pprz_transport));

	// Construct link device for serial port
	printf("Linking serial device to pprz\n");
	struct link_device serial_port_dev;
	serial_port_dev.char_available = &uartBytesAvailable;
	serial_port_dev.get_byte = &uartGetByte;

	if (autopilotUartOpen(AUTOPILOT_INPUT_TERMINAL, BAUDRATE) < 0)
		return 1;

	printf("UART has been initialized\n");
	printf("Reading autopilot messages...\n");

	pprz_transport_init(reader);

	for (;;)
	{
		pprz_check_and_parse(&serial_port_dev, reader, parsed_message_buffer, &msg_available);
		if (msg_available) {
			dl_parse_print_msg(PRINT_DATA, SAVE_DATA_TO_TXT);
			msg_available = false;
		}		
	}

	free(reader);
	return 0;
}

