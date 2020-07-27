################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
LCD_Draw_custom_char.lss \

FLASH_IMAGE += \
LCD_Draw_custom_char.hex \

EEPROM_IMAGE += \
LCD_Draw_custom_char.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: LCD_Draw_custom_char.elf secondary-outputs

# Tool invocations
LCD_Draw_custom_char.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,LCD_Draw_custom_char.map -mmcu=atmega32 -o "LCD_Draw_custom_char.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

LCD_Draw_custom_char.lss: LCD_Draw_custom_char.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S LCD_Draw_custom_char.elf  >"LCD_Draw_custom_char.lss"
	@echo 'Finished building: $@'
	@echo ' '

LCD_Draw_custom_char.hex: LCD_Draw_custom_char.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex LCD_Draw_custom_char.elf  "LCD_Draw_custom_char.hex"
	@echo 'Finished building: $@'
	@echo ' '

LCD_Draw_custom_char.eep: LCD_Draw_custom_char.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex LCD_Draw_custom_char.elf  "LCD_Draw_custom_char.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: LCD_Draw_custom_char.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 LCD_Draw_custom_char.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) LCD_Draw_custom_char.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
