################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/generated/images/src/__designer/Blue_ProgressIndicators_bg_small_progress_indicator_bg_square_0_degrees.cpp \
../TouchGFX/generated/images/src/__designer/Blue_ProgressIndicators_fill_tiling_red_yellow_fadeyellowred_small_transparent.cpp 

OBJS += \
./TouchGFX/generated/images/src/__designer/Blue_ProgressIndicators_bg_small_progress_indicator_bg_square_0_degrees.o \
./TouchGFX/generated/images/src/__designer/Blue_ProgressIndicators_fill_tiling_red_yellow_fadeyellowred_small_transparent.o 

CPP_DEPS += \
./TouchGFX/generated/images/src/__designer/Blue_ProgressIndicators_bg_small_progress_indicator_bg_square_0_degrees.d \
./TouchGFX/generated/images/src/__designer/Blue_ProgressIndicators_fill_tiling_red_yellow_fadeyellowred_small_transparent.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/generated/images/src/__designer/Blue_ProgressIndicators_bg_small_progress_indicator_bg_square_0_degrees.o: ../TouchGFX/generated/images/src/__designer/Blue_ProgressIndicators_bg_small_progress_indicator_bg_square_0_degrees.cpp
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -I../TouchGFX/gui/include -I../FATFS/App -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../TouchGFX/generated/fonts/include -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../TouchGFX/generated/texts/include -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../TouchGFX/generated/images/include -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/target/generated -I../Drivers/CMSIS/Include -I../Core/Inc -I../TouchGFX/generated/gui_generated/include -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I../FATFS/Target -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../TouchGFX/App -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FatFs/src -I../TouchGFX/target -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-threadsafe-statics -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"TouchGFX/generated/images/src/__designer/Blue_ProgressIndicators_bg_small_progress_indicator_bg_square_0_degrees.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
TouchGFX/generated/images/src/__designer/Blue_ProgressIndicators_fill_tiling_red_yellow_fadeyellowred_small_transparent.o: ../TouchGFX/generated/images/src/__designer/Blue_ProgressIndicators_fill_tiling_red_yellow_fadeyellowred_small_transparent.cpp
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -I../TouchGFX/gui/include -I../FATFS/App -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../TouchGFX/generated/fonts/include -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../TouchGFX/generated/texts/include -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../TouchGFX/generated/images/include -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/target/generated -I../Drivers/CMSIS/Include -I../Core/Inc -I../TouchGFX/generated/gui_generated/include -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I../FATFS/Target -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../TouchGFX/App -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FatFs/src -I../TouchGFX/target -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-threadsafe-statics -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"TouchGFX/generated/images/src/__designer/Blue_ProgressIndicators_fill_tiling_red_yellow_fadeyellowred_small_transparent.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

