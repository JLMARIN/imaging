/*
 * Copyright (C) 2018 Jorge Marin <jlmarinmarcano@gmail.com>
 */

/**
 * @file    uart.cpp
 * @brief   High level functions for uart communication
 */


#include <EEPROM.h>

#include "defs.h"
#include "uart.h"

String inputString, command, value;

/**
 * @brief   Reads and decodes data comming from the uart serial port
 * @return	True if something was received from the serial port
 */
bool uart_read_and_decode()
{
	if (Serial.available()) {
		inputString = Serial.readStringUntil('\n');
		inputString.trim();

		//Serial.println(inputString);

		uart_decode();

		inputString = "";

		return true;
	}
	return false;
}

/**
 * @brief   Reads and decodes data comming from the uart serial port
 */
void uart_decode()
{
	int8_t equalSign = inputString.indexOf('=');

	if (equalSign != -1) {
		command = inputString.substring(0, equalSign);
		value = inputString.substring(equalSign + 1);
	} else {
		command = inputString;
	}

	// --------------------------------------------------------------------------
	if (command == "AT") {
		Serial.print(F("> OK\n"));
	}

	// --------------------------------------------------------------------------
	else if (command == "AT+VERSION?") {
		Serial.print(F("> Hardware version: v")); Serial.println(HARDWARE_VERSION);
		Serial.print(F("> Firmware version: v")); Serial.println(FIRMWARE_VERSION);
	}

	// --------------------------------------------------------------------------
	else if (command == "AT+STOP") {
		trigger_enabled = false;
		update_trigger_state = true;
		Serial.println(F("Automatic trigger mode stopped"));
	}

	// --------------------------------------------------------------------------
	else if (command == "AT+START") {
		trigger_enabled = true;
		update_trigger_state = true;
		Serial.println(F("Automatic trigger mode started"));
	}

	// --------------------------------------------------------------------------
	else if (command == "AT+TRIGGER") {
		if (!trigger_enabled)
		{
			Serial.println(F("Sending single trigger signal"));
			send_single_trigger = true;
		}
	}

	// --------------------------------------------------------------------------
	else if (command == "AT+PERIOD?") {
		Serial.print(F("Trigger period (ms) = "));
		Serial.println(period_ms);
	}

	// --------------------------------------------------------------------------
	else if (command == "AT+PERIOD" && equalSign != -1) {
		period_ms = value.toInt();
		EEPROM.put(EEPROM_ADDRESS, period_ms);
		Serial.print(F("Trigger period (ms) = "));
		Serial.println(period_ms);
		update_trigger_period = true;
	}
}
