################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := D:/ti/ccs1220/ccs/tools/compiler/ti-cgt-armllvm_2.1.2.LTS

GEN_OPTS__FLAG := @"D:/344/workspace_v12/tirtos_builds_cc32xx_release_ticlang/Debug/configPkg/compiler.opt" 
GEN_CMDS__FLAG := -Wl,-l"D:/344/workspace_v12/tirtos_builds_cc32xx_release_ticlang/Debug/configPkg/linker.cmd" 

ORDERED_OBJS += \
"./adcsinglechannel.o" \
"./syscfg/ti_drivers_config.o" \
"./main_tirtos.o" \
"../cc32xxsf_tirtos.cmd" \
-Wl,-lti_utils_build_linker.cmd.genlibs \
$(GEN_CMDS__FLAG) \
-Wl,-l"ti/devices/cc32xx/driverlib/ticlang/Release/driverlib.a" \
-Wl,-llibc.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang.out \

EXE_OUTPUTS__QUOTED += \
"adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang.out" \

CUSTOM_TOOL_OUTPUTS_208713628 += \
adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang.bin \

CUSTOM_TOOL_OUTPUTS_208713628__QUOTED += \
"adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang.bin" \

CUSTOM_TOOL_OUTPUTS_564938666 += \
syscfg/adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang.sli \

CUSTOM_TOOL_OUTPUTS_564938666__QUOTED += \
"syscfg\adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang.sli" \


# All Target
all: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang.out" secondary-outputs

dependents:
	-cd D:/344/workspace_v12/tirtos_builds_cc32xx_release_ticlang/Debug && $(MAKE) clean all

# Tool invocations
adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS) D:/344/workspace_v12/tirtos_builds_cc32xx_release_ticlang/Debug/tirtos_builds_cc32xx_release_ticlang.lib
	@echo 'Building target: "$@"'
	@echo 'Invoking: Arm Linker'
	"D:/ti/ccs1220/ccs/tools/compiler/ti-cgt-armllvm_2.1.2.LTS/bin/tiarmclang.exe" -mcpu=cortex-m4 -mfloat-abi=soft -mfpu=none -mlittle-endian -mthumb -Oz -DDeviceFamily_CC3220 -gdwarf-3 -march=armv7e-m -Wl,-m"adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang.map" -Wl,-i"D:/ti/simplelink_cc32xx_sdk_6_10_00_05/source" -Wl,-i"D:/ti/simplelink_cc32xx_sdk_6_10_00_05/kernel/tirtos/packages" -Wl,-i"D:/344/workspace_v12/adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang/MCU+Image/syscfg" -Wl,-i"D:/ti/ccs1220/ccs/tools/compiler/ti-cgt-armllvm_2.1.2.LTS/lib" -Wl,--diag_wrap=off -Wl,--display_error_number -Wl,--warn_sections -Wl,--xml_link_info="adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang_linkInfo.xml" -Wl,--rom_model -o "adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang.bin: $(EXE_OUTPUTS) adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang.out
	@echo 'Building secondary target: "$@"'
	@echo 'Invoking: TI Arm ObjCopy'
	"D:/ti/ccs1220/ccs/tools/compiler/ti-cgt-armllvm_2.1.2.LTS/bin/tiarmobjcopy" -O binary --only-section .text --only-section .const --only-section .cinit --only-section .rodata --only-section .resetVecs "adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang.out" "adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang.bin"
	@echo 'Finished building secondary target: "$@"'
	@echo ' '

syscfg/adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang.sli: $(EXE_OUTPUTS) adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang.bin syscfg/ti_drivers_net_wifi_config.json
	@echo 'Building secondary target: "$@"'
	@echo 'Invoking: Image Creator'
	"D:/ti/simplelink_cc32xx_sdk_6_10_00_05/source/ti/drivers/net/imagecreator/bin/SLImageCreator.exe" syscfg create_image --sdk_path "D:/ti/simplelink_cc32xx_sdk_6_10_00_05" --json "D:/344/workspace_v12/adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang/MCU+Image/syscfg/ti_drivers_net_wifi_config.json" --file "D:/344/workspace_v12/adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang/MCU+Image/syscfg/adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang.sli" --mcu "D:/344/workspace_v12/adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang/MCU+Image/adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang.bin"
	@echo 'Finished building secondary target: "$@"'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(CUSTOM_TOOL_OUTPUTS_208713628__QUOTED)$(CUSTOM_TOOL_OUTPUTS_564938666__QUOTED)$(GEN_MISC_FILES__QUOTED)$(GEN_FILES__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "adcsinglechannel.o" "syscfg\ti_drivers_config.o" "main_tirtos.o" 
	-$(RM) "adcsinglechannel.d" "syscfg\ti_drivers_config.d" "main_tirtos.d" 
	-$(RMDIR) $(GEN_MISC_DIRS__QUOTED)
	-@echo 'Finished clean'
	-@echo ' '

secondary-outputs: $(CUSTOM_TOOL_OUTPUTS_208713628) $(CUSTOM_TOOL_OUTPUTS_564938666)

.PHONY: all clean dependents
.SECONDARY:
D:/344/workspace_v12/tirtos_builds_cc32xx_release_ticlang/Debug/tirtos_builds_cc32xx_release_ticlang.lib:

-include ../makefile.targets

