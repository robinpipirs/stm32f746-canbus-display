################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/generated/images/src/__designer/Blue_ProgressIndicators_bg_large_circle_indicator_bg_line_full.cpp \
../TouchGFX/generated/images/src/__designer/Blue_ProgressIndicators_fill_large_circle_indicator_fill_line_full.cpp 

OBJS += \
./TouchGFX/generated/images/src/__designer/Blue_ProgressIndicators_bg_large_circle_indicator_bg_line_full.o \
./TouchGFX/generated/images/src/__designer/Blue_ProgressIndicators_fill_large_circle_indicator_fill_line_full.o 

CPP_DEPS += \
./TouchGFX/generated/images/src/__designer/Blue_ProgressIndicators_bg_large_circle_indicator_bg_line_full.d \
./TouchGFX/generated/images/src/__designer/Blue_ProgressIndicators_fill_large_circle_indicator_fill_line_full.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/generated/images/src/__designer/Blue_ProgressIndicators_bg_large_circle_indicator_bg_line_full.o: ../TouchGFX/generated/images/src/__designer/Blue_ProgressIndicators_bg_large_circle_indicator_bg_line_full.cpp
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -I../TouchGFX/gui/include -I../FATFS/App -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../TouchGFX/generated/fonts/include -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../TouchGFX/generated/texts/include -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../TouchGFX/generated/images/include -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/target/generated -I../Drivers/CMSIS/Include -I../Core/Inc -I../TouchGFX/generated/gui_generated/include -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I../FATFS/Target -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../TouchGFX/App -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FatFs/src -I../TouchGFX/target -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-threadsafe-statics -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"TouchGFX/generated/images/src/__designer/Blue_ProgressIndicators_bg_large_circle_indicator_bg_line_full.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
TouchGFX/generated/images/src/__designer/Blue_ProgressIndicators_fill_large_circle_indicator_fill_line_full.o: ../TouchGFX/generated/images/src/__designer/Blue_ProgressIndicators_fill_large_circle_indicator_fill_line_full.cpp
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -I../TouchGFX/gui/include -I../FATFS/App -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../TouchGFX/generated/fonts/include -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../TouchGFX/generated/texts/include -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../TouchGFX/generated/images/include -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/target/generated -I../Drivers/CMSIS/Include -I../Core/Inc -I../TouchGFX/generated/gui_generated/include -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I../FATFS/Target -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../TouchGFX/App -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FatFs/src -I../TouchGFX/target -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-threadsafe-statics -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"TouchGFX/generated/images/src/__designer/Blue_ProgressIndicators_fill_large_circle_indicator_fill_line_full.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

