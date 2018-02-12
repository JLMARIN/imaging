/*
 * Copyright (C) 2018 Jorge Marin <jlmarinmarcano@gmail.com>
 */

/**
 * @file    defs.h
 * @brief   Header file with main definitions
 */

#include "Arduino.h"

#ifndef DEFS_H
#define DEFS_H

/******************************************************************************
 * Definitions
 *****************************************************************************/
// hardware/software version information
#define HARDWARE_VERSION      "1.0" // hardware version
#define FIRMWARE_VERSION      "1.2" // firmware version

// configuration definitions
#define EEPROM_ADDRESS      (  0 )  // starting address

// pin definitions
#define LED               	( 13 )	// LED pin
#define BUTTON              ( 11 )	// button pin

/******************************************************************************
 * Private types/enumerations/objects/variables
 *****************************************************************************/
// global variables
extern uint16_t     period_ms;
extern bool         update_trigger_period;
extern bool         send_single_trigger;
extern bool         trigger_enabled;
extern bool		    update_trigger_state;

#endif  /* DEFS_H */
