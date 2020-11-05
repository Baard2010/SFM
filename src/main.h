/*
 * Copyright (c) 2019 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-BSD-5-Clause-Nordic
 */

#ifndef MAIN_
#define MAIN_

/**@file main.h
 *
 * @brief global variables and functions.
 * @{
 */
#include <device.h>

#define LED_PORT	DT_ALIAS_LED0_GPIOS_CONTROLLER
#define LED		DT_ALIAS_LED0_GPIOS_PIN

extern struct device *led_dev;



#endif /* MAIN_ */
