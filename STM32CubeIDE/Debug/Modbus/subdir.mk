################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Modbus/Modbus.c \
../Modbus/mb.c \
../Modbus/rtu_handle.c 

C_DEPS += \
./Modbus/Modbus.d \
./Modbus/mb.d \
./Modbus/rtu_handle.d 

OBJS += \
./Modbus/Modbus.o \
./Modbus/mb.o \
./Modbus/rtu_handle.o 


# Each subdirectory must supply rules for building sources it contributes
Modbus/%.o: ../Modbus/%.c Modbus/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -I../../Core/Inc -I../../TouchGFX/App -I../../TouchGFX/target/generated -I../../TouchGFX/target -I../../Drivers/STM32F7xx_HAL_Driver/Inc -I../../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I../../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../../Drivers/CMSIS/Include -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/gui/include -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../Drivers/BSP/STM32746G-Discovery -I../../Drivers/BSP/Components/ft5336 -I../../LIBJPEG/App -I../../LIBJPEG/Target -I../../Middlewares/Third_Party/LibJPEG/include -I../../TouchGFX/generated/videos/include -I"D:/LuanVanOnTheGo/TouchGFXProject/Touchgfx_mxide/Touch_mxide_v2/STM32CubeIDE/Modbus/ascii" -I"D:/LuanVanOnTheGo/TouchGFXProject/Touchgfx_mxide/Touch_mxide_v2/STM32CubeIDE/Modbus/include" -I"D:/LuanVanOnTheGo/TouchGFXProject/Touchgfx_mxide/Touch_mxide_v2/STM32CubeIDE/Modbus/port" -I"D:/LuanVanOnTheGo/TouchGFXProject/Touchgfx_mxide/Touch_mxide_v2/STM32CubeIDE/Modbus/rtu" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Modbus

clean-Modbus:
	-$(RM) ./Modbus/Modbus.d ./Modbus/Modbus.o ./Modbus/mb.d ./Modbus/mb.o ./Modbus/rtu_handle.d ./Modbus/rtu_handle.o

.PHONY: clean-Modbus

