/**
 * @file pinmapping.h
 *
 * @brief Default GPIO pin mapping
 *
 */

#pragma once

/**
 * Input Pins
 */

// Switches/Buttons
#define PIN_POWERSWITCH 255
#define PIN_BREWSWITCH  22
#define PIN_STEAMSWITCH 21
#define PIN_WATERSWITCH 255

#define PIN_ROTARY_DT  255 // Rotary encoder data pin
#define PIN_ROTARY_CLK 255 // Rotary encoder clock pin
#define PIN_ROTARY_SW  255 // Rotary encoder switch

// Sensors
#define PIN_TEMPSENSOR      3
#define PIN_WATERTANKSENSOR 255
#define PIN_HXDAT           19 // Brew scale data pin 1
#define PIN_HXDAT2          21 // Brew scale data pin 2
#define PIN_HXCLK           20 // Brew scale clock pin

/**
 * Output pins
 */

// Relays
#define PIN_VALVE  15
#define PIN_PUMP   18
#define PIN_HEATER 10

// LEDs
#define PIN_STATUSLED 255
#define PIN_BREWLED   255
#define PIN_STEAMLED  255

// Periphery
#define PIN_ZC 0 // Dimmer circuit Zero Crossing

/**
 * Bidirectional Pins
 */
#define PIN_I2CSCL 7
#define PIN_I2CSDA 6
