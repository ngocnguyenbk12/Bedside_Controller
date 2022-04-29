################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Modbus/port/portevent.c \
../Modbus/port/portserial.c \
../Modbus/port/porttimer.c 

C_DEPS += \
./Modbus/port/portevent.d \
./Modbus/port/portserial.d \
./Modbus/port/porttimer.d 

OBJS += \
./Modbus/port/portevent.o \
./Modbus/port/portserial.o \
./Modbus/port/porttimer.o 


# Each subdirectory must supply rules for building sources it contributes
Modbus/port/%.o: ../Modbus/port/%.c Modbus/port/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -I../../Core/Inc -I../../TouchGFX/App -I../../TouchGFX/target/generated -I../../TouchGFX/target -I../../Drivers/STM32F7xx_HAL_Driver/Inc -I../../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I../../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../../Drivers/CMSIS/Include -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/gui/include -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../Drivers/BSP/STM32746G-Discovery -I../../Drivers/BSP/Components/ft5336 -I../../LIBJPEG/App -I../../LIBJPEG/Target -I../../Middlewares/Third_Party/LibJPEG/include -I../../TouchGFX/generated/videos/include -I"D:/LuanVanOnTheGo/TouchGFXProject/Touchgfx_mxide/Touch_mxide_v2/STM32CubeIDE/Modbus/ascii" -I"D:/LuanVanOnTheGo/TouchGFXProject/Touchgfx_mxide/Touch_mxide_v2/STM32CubeIDE/Modbus/include" -I"D:/LuanVanOnTheGo/TouchGFXProject/Touchgfx_mxide/Touch_mxide_v2/STM32CubeIDE/Modbus/port" -I"D:/LuanVanOnTheGo/TouchGFXProject/Touchgfx_mxide/Touch_mxide_v2/STM32CubeIDE/Modbus/rtu" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Modbus-2f-port

clean-Modbus-2f-port:
	-$(RM) ./Modbus/port/portevent.d ./Modbus/port/portevent.o ./Modbus/port/portserial.d ./Modbus/port/portserial.o ./Modbus/port/porttimer.d ./Modbus/port/porttimer.o

.PHONY: clean-Modbus-2f-port

