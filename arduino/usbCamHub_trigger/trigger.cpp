/*
 * Copyright (C) 2018 Jorge Marin <jlmarinmarcano@gmail.com>
 */

/**
 * @file    trigger.cpp
 * @brief   High level functions for controlling the triggers
 */


#include "defs.h"
#include "trigger.h"

/**
 * @brief   Initializes the trigger output pins
 */
void trigger_init()
{
	DDRD |= 0b11111100;		// set pins 2 to 7 as outputs
}

/**
 * @brief   Sends a pulse in the trigger output pins
 */
void trigger_pulse()
{
	PORTD = 0b11111100;
	delayMicroseconds(PULSE_TIME_US);
	PORTD = 0;
}
