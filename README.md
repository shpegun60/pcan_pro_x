# PEAK PCAN PRO/PRO FD firmware builded for STM32F4VE board (STM32CubeIDE)
forked from: [GitHub Page](https://github.com/dreampet/pcan_pro_x) 

Target hardware:
* [STM32 F4VE Board](https://stm32-base.org/boards/STM32F407VET6-STM32-F4VE-V2.0.html)
![pict](https://stm32-base.org/assets/img/boards/STM32F407VET6_STM32_F4VE_V2.0-2.jpg)


WARNING!!!
- CAN WORKS ONLY 1Mbit/sec (see cubeIde settings)!!! The code for selecting the speed was commented out, as it was not needed for internal tasks see "pcanpro_can.c" and "pcanpro_fd_protocol.c"

- build selector is now located in "pcanpro_variant.h"
```c
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

```


Pinout:
* For view please Open STM32CubeIde 

Features:
- Works out of the box in Linux
- Works with Linux PCAN-View ( needs to install [PEAK Linux drivers][pld] )
- Works with [BUSMASTER][bsmw] and [PEAK PCAN-View][pvw] in Windows


Limits:
- PRO FD firmware does not support FD frames cause bxCAN not supports it, but it will works with classic CAN
- Some protocol specific messages not implemented yet
- Be sure to use **PB14/PB15** pins for USB if you wants **PRO/PRO FD**

Toolchain:
- STM32CubeIDE

Tips:
- PRO FD firmware has better performance on windows ( due internal PEAK driver implementation )
