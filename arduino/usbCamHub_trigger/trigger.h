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

void trigger_init();
void trigger_pulse();

#endif  /* TRIGGER_H */
