################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: Arm Compiler'
	"D:/ti/ccs1220/ccs/tools/compiler/ti-cgt-armllvm_2.1.2.LTS/bin/tiarmclang.exe" -c -mcpu=cortex-m4 -mfloat-abi=soft -mfpu=none -mlittle-endian -mthumb -Oz -I"D:/ti/simplelink_cc32xx_sdk_6_10_00_05/source/ti/net/atcmd" -I"D:/344/workspace_v12/adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang" -I"D:/344/workspace_v12/adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang/Debug" -I"D:/ti/simplelink_cc32xx_sdk_6_10_00_05/source" -I"D:/ti/simplelink_cc32xx_sdk_6_10_00_05/source/ti/posix/ticlang" -DDeviceFamily_CC3220 -gdwarf-3 -march=armv7e-m -MMD -MP -MF"$(basename $(<F)).d_raw" -MT"$(@)" -I"D:/344/workspace_v12/adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang/Debug/syscfg"  $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

build-1829757439: ../adcsinglechannel.syscfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: SysConfig'
	"D:/ti/ccs1220/ccs/utils/sysconfig_1.15.0/sysconfig_cli.bat" -s "D:/ti/simplelink_cc32xx_sdk_6_10_00_05/.metadata/product.json" --script "D:/344/workspace_v12/adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang/adcsinglechannel.syscfg" -o "syscfg" --compiler ticlang
	@echo 'Finished building: "$<"'
	@echo ' '

syscfg/ti_drivers_config.c: build-1829757439 ../adcsinglechannel.syscfg
syscfg/ti_drivers_config.h: build-1829757439
syscfg/ti_utils_build_linker.cmd.genlibs: build-1829757439
syscfg/syscfg_c.rov.xs: build-1829757439
syscfg/ti_utils_runtime_model.gv: build-1829757439
syscfg/ti_utils_runtime_Makefile: build-1829757439
syscfg/: build-1829757439

syscfg/%.o: ./syscfg/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: Arm Compiler'
	"D:/ti/ccs1220/ccs/tools/compiler/ti-cgt-armllvm_2.1.2.LTS/bin/tiarmclang.exe" -c -mcpu=cortex-m4 -mfloat-abi=soft -mfpu=none -mlittle-endian -mthumb -Oz -I"D:/ti/simplelink_cc32xx_sdk_6_10_00_05/source/ti/net/atcmd" -I"D:/344/workspace_v12/adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang" -I"D:/344/workspace_v12/adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang/Debug" -I"D:/ti/simplelink_cc32xx_sdk_6_10_00_05/source" -I"D:/ti/simplelink_cc32xx_sdk_6_10_00_05/source/ti/posix/ticlang" -DDeviceFamily_CC3220 -gdwarf-3 -march=armv7e-m -MMD -MP -MF"syscfg/$(basename $(<F)).d_raw" -MT"$(@)" -I"D:/344/workspace_v12/adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang/Debug/syscfg"  $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

build-1232550401: ../image.syscfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: SysConfig'
	"D:/ti/ccs1220/ccs/utils/sysconfig_1.15.0/sysconfig_cli.bat" -s "D:/ti/simplelink_cc32xx_sdk_6_10_00_05/.metadata/product.json" --script "D:/344/workspace_v12/adcsinglechannel_CC3235SF_LAUNCHXL_tirtos_ticlang/image.syscfg" -o "syscfg" --compiler ticlang
	@echo 'Finished building: "$<"'
	@echo ' '

syscfg/RegDomainSum5.csv: build-1232550401 ../image.syscfg
syscfg/RegDomainSum24.csv: build-1232550401
syscfg/ti_drivers_net_wifi_config.json: build-1232550401
syscfg/: build-1232550401


