#pragma once

#include "main.h"

//#define DEF_PCAN_PRO
#define DEF_PCAN_PRO_FD
//#define DEF_PCAN_FD
//#define DEF_PCAN_X6


#ifdef DEF_PCAN_PRO
#	define PCAN_PRO 1
#	define INCLUDE_LIN_INTERFACE 1
#	define USB_CAN_PROTO
#elif defined(DEF_PCAN_PRO_FD)
#	define PCAN_PRO_FD 1
#	define INCLUDE_LIN_INTERFACE 1
#	define USB_FDCAN_PROTO
#elif defined(DEF_PCAN_FD)
#	define PCAN_FD 1
#	define INCLUDE_LIN_INTERFACE 0
#	define USB_FDCAN_PROTO
#elif defined(DEF_PCAN_X6)
#	define PCAN_X6 1
#	define INCLUDE_LIN_INTERFACE 0
#	define USB_FDCAN_PROTO
#endif



//#define DEVEBOX32F4

//#if (defined DEVEBOX32F4)
//#define CAN1_RX       B, 8, MODE_AF_PP, PULLUP, SPEED_FREQ_VERY_HIGH, AF9_CAN1
//#define CAN1_TX       B, 9, MODE_AF_PP, NOPULL, SPEED_FREQ_VERY_HIGH, AF9_CAN1
//
//#define CAN2_RX       B, 5, MODE_AF_PP, PULLUP, SPEED_FREQ_VERY_HIGH, AF9_CAN2
//#define CAN2_TX       B, 6, MODE_AF_PP, NOPULL, SPEED_FREQ_VERY_HIGH, AF9_CAN2
//
//#define IO_LED_STAT   C, 10, MODE_OUTPUT_PP, NOPULL, SPEED_FREQ_MEDIUM, NOAF
//#define IO_LED_TX0    A, 2, MODE_OUTPUT_PP, NOPULL, SPEED_FREQ_MEDIUM, NOAF
//#define IO_LED_RX0    A, 3, MODE_OUTPUT_PP, NOPULL, SPEED_FREQ_MEDIUM, NOAF
//#define IO_LED_TX1    C, 6, MODE_OUTPUT_PP, NOPULL, SPEED_FREQ_MEDIUM, NOAF
//#define IO_LED_RX1    C, 7, MODE_OUTPUT_PP, NOPULL, SPEED_FREQ_MEDIUM, NOAF
//
//#define IO_LED_HI     PIN_HI
//#define IO_LED_LOW    PIN_LOW
//
//#define IO_HW_INIT()
//#elif (defined HEXV2_CLONE)
//#define CAN1_RX       D, 0, MODE_AF_PP, PULLUP, SPEED_FREQ_VERY_HIGH, AF9_CAN1
//#define CAN1_TX       D, 1, MODE_AF_PP, NOPULL, SPEED_FREQ_VERY_HIGH, AF9_CAN1
///* red */
//#define IO_LED_STAT   C, 10, MODE_OUTPUT_PP, NOPULL, SPEED_FREQ_MEDIUM, NOAF
///* blue */
//#define IO_LED_TX0    E, 0, MODE_OUTPUT_PP, NOPULL, SPEED_FREQ_MEDIUM, NOAF
///* green */
//#define IO_LED_RX0    B, 9, MODE_OUTPUT_PP, NOPULL, SPEED_FREQ_MEDIUM, NOAF
//
//#define IO_LED_HI     PIN_LOW
//#define IO_LED_LOW    PIN_HI
//
//#define CAN1_S        E, 10, MODE_OUTPUT_OD, PULLUP, SPEED_FREQ_MEDIUM, NOAF
//#define IO_HW_INIT()  PORT_ENABLE_CLOCK( PIN_PORT( CAN1_S ), PIN_PORT( CAN1_S ) );\
//                      PIN_LOW( CAN1_S );\
//                      PIN_INIT( CAN1_S )
//
//#elif (defined EMPTY_STUB)
//#define IO_HW_INIT()
//#else
//#error Invalid hardware
//#endif
