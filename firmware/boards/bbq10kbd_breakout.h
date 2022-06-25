#pragma once

#define USB_VID				0x1209
#define USB_PID				0xB182
#define USB_PRODUCT			"BBQ10KBD"

#define PIN_INT				0
#define PIN_BKL				0

#define PIN_SDA				0
#define PIN_SCL				0

#define PIN_TP_RESET		0
#define PIN_TP_MOTION		0
#define PIN_TP_SHUTDOWN		0

#define PIN_PUPPET_SDA		0
#define PIN_PUPPET_SCL		0

#define NUM_OF_ROWS			7
#define PINS_ROWS \
	1, \
	2, \
	3, \
	4, \
	5, \
	6, \
	7

#define NUM_OF_COLS			5
#define PINS_COLS \
	18,  \
	19,  \
	20, \
	21, \
	22

#define NUM_OF_BTNS			1
#define PINS_BTNS \
	10,
#define BTN_KEYS \
	{ KEY_BTN_RIGHT2 },

#define PIN_GPIOEXP0		15
#define PIN_GPIOEXP1		17
//#define PIN_GPIOEXP2		19
//#define PIN_GPIOEXP3		21
#define PIN_GPIOEXP4		26

#define PICO_DEFAULT_UART			0
//#define PICO_DEFAULT_UART_TX_PIN	20
