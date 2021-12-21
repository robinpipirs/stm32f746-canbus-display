# Ecumaster black race dash
![can_display_irl](can_display_irl_2.jpg)   
Application running on STM32F746G.
\
\
![touchgfx_small](touchgfx_small.png)   
TouchGFX.   

\
\
This project is built on the stm32f746g-discovery board.
It was intended to be an diy solution to a race dash.

IDE used: STM32CubeIDE 1.3.0.
Gfx tool: TouchGFX 4.13.0 Designer.

## Hardware requirements
![cantranceiver](can_tranceiver_connection.png)
1. You need an can bus tranceiver, I have used the SN65HVD230.
2. Can TX is connected  to PB9 on mcu.
3. Can RX is connected to PB8 on mcu.

## Case
1. 3d printable case is in the making.

## Getting started developing
1. Clone project.
2. Install STM32CubeIDE 1.3.0 and TouchGFX 4.13.0.
3. Open EcumasterBlackCanWithTouchGFX.IOC.
4. Click Additional Software.
5. Make sure STMicroelectronics.X-CUBE-TOUCHGFX 4.13.0 is installed and Application is set to TouchGFX generator.

## Good to know when coding
- Project uses C and C++.
- To work on GFX open: `project root/TouchGFX/EcumasterBlackCanWithTouchGFX.touchgfx` with TouchGFX.
- Text resources in TouchGFX are set up as wildcard buffers.
- Mapping of data to screen buffers are done in `MainView::updateVal(uint8_t* newValue)` which you find in  : `project explorer/TouchGFX/gui/src/main_screen/MainView.cpp`. If you are planning on extending the struct you need to do a search. Data is sent from main through a FreeRTOS queue. And handled in TouchGFX part of the code. 
- Canbus input data is handled in `project root/Core/Src/main.c` in function `void HAL_CAN_RxFifo0MsgPendingCallback(CAN_HandleTypeDef *hcan)`.
- Do not be afraid to experiment. Have fun!

## Ecumaster emu black settings
Image bellow shows the can settings used for the display to work with ecumaster.      
![ecumaster_can_settings](ecumaster_bl_can_settings_1.png)      
