/*
 * Copyright (C) 2018 Jorge Marin <jlmarinmarcano@gmail.com>
 */

/**
 * @file    trigger.h
 * @brief   High level functions for controlling the triggers
 */


#ifndef TRIGGER_H
#define TRIGGER_H

#include "Arduino.h"

#define PULSE_TIME_US          10

#define TRIGG6                 0x80
#define TRIGG5                 0x40
#define TRIGG4                 0x20
#define TRIGG3                 0x10
#define TRIGG2                 0x08
#define TRIGG1                 0x04

void trigger_init();
void trigger_pulse(uint8_t pins);

#endif  /* TRIGGER_H */
