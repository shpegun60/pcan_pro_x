# PEAK PCAN PRO/PRO FD firmware builded for STM32 F4VE board (STM32CubeIDE)
forked from: [GitHub Page](https://github.com/dreampet/pcan_pro_x) 

Target hardware:
* [STM32 F4VE Board](https://stm32-base.org/boards/STM32F407VET6-STM32-F4VE-V2.0.html)
![pict](https://stm32-base.org/assets/img/boards/STM32F407VET6_STM32_F4VE_V2.0-2.jpg)


Pinout:
|PIN/PINS|DESCRIPTION|
| ------ | ------ |
|PC10|STATUS LED|
|PA2/PA3|TX/RX CAN1 LED|
|PC6/PC7|TX/RX CAN2 LED|
|PB8/PB9|CAN1 RX/TX|
|PB5/PB6|CAN2 RX/TX|
|PB14/PB15 |USB HS DM/DP|
|PA11/PA12 |USB FS DM/DP*|

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
