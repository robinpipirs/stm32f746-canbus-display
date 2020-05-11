################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include TouchGFX/target/generated/subdir.mk
-include TouchGFX/target/subdir.mk
-include TouchGFX/gui/src/model/subdir.mk
-include TouchGFX/gui/src/main_screen/subdir.mk
-include TouchGFX/gui/src/common/subdir.mk
-include TouchGFX/generated/texts/src/subdir.mk
-include TouchGFX/generated/images/src/__designer/subdir.mk
-include TouchGFX/generated/images/src/subdir.mk
-include TouchGFX/generated/gui_generated/src/main_screen/subdir.mk
-include TouchGFX/generated/gui_generated/src/common/subdir.mk
-include TouchGFX/generated/fonts/src/subdir.mk
-include TouchGFX/build/MINGW32_NT-6.2/gui/src/model/subdir.mk
-include TouchGFX/build/MINGW32_NT-6.2/gui/src/main_screen/subdir.mk
-include TouchGFX/build/MINGW32_NT-6.2/gui/src/common/subdir.mk
-include TouchGFX/build/MINGW32_NT-6.2/generated/simulator/src/subdir.mk
-include TouchGFX/build/MINGW32_NT-6.2/generated/gui_generated/src/main_screen/subdir.mk
-include TouchGFX/build/MINGW32_NT-6.2/generated/gui_generated/src/common/subdir.mk
-include TouchGFX/build/MINGW32_NT-6.2/generated/fonts/src/subdir.mk
-include TouchGFX/App/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/subdir.mk
-include Middlewares/Third_Party/FatFs/src/option/subdir.mk
-include Middlewares/Third_Party/FatFs/src/subdir.mk
-include FATFS/Target/subdir.mk
-include FATFS/App/subdir.mk
-include Drivers/STM32F7xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
EcumasterBlackCanWithTouchGFX.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
EcumasterBlackCanWithTouchGFX.list \

OBJCOPY_BIN += \
EcumasterBlackCanWithTouchGFX.bin \


# All Target
all: EcumasterBlackCanWithTouchGFX.elf secondary-outputs

# Tool invocations
EcumasterBlackCanWithTouchGFX.elf: $(OBJS) $(USER_OBJS) C:\STM32CubeIDE\workspace_1.3.0\EcumasterBlackCanWithTouchGFX\STM32F746NGHX_FLASH.ld
	arm-none-eabi-g++ -o "EcumasterBlackCanWithTouchGFX.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m7 -T"C:\STM32CubeIDE\workspace_1.3.0\EcumasterBlackCanWithTouchGFX\STM32F746NGHX_FLASH.ld" --specs=nosys.specs -Wl,-Map="EcumasterBlackCanWithTouchGFX.map" -Wl,--gc-sections -static -L"C:\STM32CubeIDE\workspace_1.3.0\EcumasterBlackCanWithTouchGFX\Middlewares\ST\touchgfx\lib\core\cortex_m7\gcc" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -lstdc++ -lsupc++ -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

EcumasterBlackCanWithTouchGFX.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "EcumasterBlackCanWithTouchGFX.list"
	@echo 'Finished building: $@'
	@echo ' '

EcumasterBlackCanWithTouchGFX.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "EcumasterBlackCanWithTouchGFX.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
