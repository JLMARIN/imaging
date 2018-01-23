/*
 * Copyright (C) 2018 Jorge Marin <jlmarinmarcano@gmail.com>
 */

/**
 * @file    uart.h
 * @brief   High level functions for uart communication
 */


#ifndef UART_H
#define UART_H

#include "Arduino.h"

void uart_read_and_decode();
void uart_decode();

#endif  /* UART_H */