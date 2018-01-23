/*
 * Copyright (C) 2018 Jorge Marin <jlmarinmarcano@gmail.com>
 */

/**
 * @file    main.ino
 * @brief   Main code for the USB camera HUB development board. This code takes
 * 			care of generating and controlling the trigger signals that
 * 			activate cameras when working in trigger mode.
 */


#include <Arduino.h>
#include <TaskScheduler.h>
#include <EEPROM.h>

#include "defs.h"
#include "uart.h"
#include "trigger.h"

/******************************************************************************
 * Private types/enumerations/objects/variables
 *****************************************************************************/
// global variables
uint16_t 	period_ms;
bool		update_trigger_period = false;
bool        send_single_trigger = false;
bool        trigger_enabled = true;

/******************************************************************************
 * Prototypes
 *****************************************************************************/
// callback functions prototypes
void tReadATCommandsCallback();
void tSendTriggerCallback();

// private functions prototypes
void read_eeprom();
void send_trigger();

/******************************************************************************
 * Scheduler and tasks
 *****************************************************************************/
// scheduler
Scheduler runner;

// tasks
Task tReadATCommands(100, TASK_FOREVER, &tReadATCommandsCallback, &runner, true);
Task tSendTrigger(1000, TASK_FOREVER, &tSendTriggerCallback, &runner, false);

/******************************************************************************
 * Setup
 *****************************************************************************/
void setup()
{
	Serial.begin(115200);

	Serial.println(F("\n----------------------------------"));
	Serial.println(F("USB Camera HUB Board"));
	Serial.print(F("Hardware version: v")); Serial.println(HARDWARE_VERSION);
	Serial.print(F("Firmware version: v")); Serial.println(FIRMWARE_VERSION);
	Serial.println(F("----------------------------------"));

	// configure LED
	pinMode(LED, OUTPUT);

	// initialize triggers
	trigger_init();

	// read trigger period from eeprom
	read_eeprom();

	// set trigger task interval and enable
	tSendTrigger.setInterval(period_ms);
	tSendTrigger.enable();

	// start scheduler
	runner.startNow();
}

/******************************************************************************
 * Main Loop
 *****************************************************************************/
void loop()
{
	runner.execute();
}

/******************************************************************************
 * Private functions
 *****************************************************************************/
/**
 * @brief   Reads content of eeprom and extracts trigger period
 */
void read_eeprom()
{
	EEPROM.get(EEPROM_ADDRESS, period_ms);
	Serial.println(F("Trigger period retrieved from EEPROM"));
	if (period_ms < 10)
	{
		Serial.println(F("Trigger period is too small (< 10ms). Setting to default (1000ms)"));
		period_ms = 1000;	
	}
	else
	{
		Serial.print(F("Trigger period (ms) = ")); Serial.println(period_ms);
	}
}

/**
 * @brief   Sends a single trigger pulse
 */
void send_trigger()
{
	digitalWrite(LED, HIGH);
	trigger_pulse();
	delay(50);
	digitalWrite(LED, LOW);
}

/******************************************************************************
 * Callbacks
 *****************************************************************************/
/**
 * @brief   Sends a trigger pulse
 */
void tSendTriggerCallback()
{
	if (trigger_enabled)
	{
		send_trigger();
	}
}

/**
 * @brief   Reads commands coming from the serial port
 */
void tReadATCommandsCallback()
{
	uart_read_and_decode();

	if (update_trigger_period)
	{
		tSendTrigger.setInterval(period_ms);
		update_trigger_period = false;
	}

	if (send_single_trigger)
	{
		send_trigger();
		send_single_trigger = false;
	}
}
