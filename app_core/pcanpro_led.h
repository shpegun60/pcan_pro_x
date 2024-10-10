#pragma once
#include <stdint.h>
#include "main.h"

#define IO_LED_TX1(val) HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, val)
#define IO_LED_RX1(val) HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, val)

#define IO_LED_HI(PIN) PIN(GPIO_PIN_RESET)
#define IO_LED_LOW(PIN) PIN(GPIO_PIN_SET)


enum e_pcan_led
{
  LED_CH0_RX,
  LED_CH1_RX,
  LED_CH0_TX,
  LED_CH1_TX,
  LED_STAT,

  LED_TOTAL,
};

enum e_pcan_led_mode
{
  LED_MODE_DEVICE = 0, /* we can control led */
  LED_MODE_BLINK_FAST,
  LED_MODE_BLINK_SLOW,
  LED_MODE_ON,
  LED_MODE_OFF,
};

void pcan_led_init( void );
void pcan_led_set_mode( int led, int mode, uint32_t arg );
void pcan_led_poll( void );
