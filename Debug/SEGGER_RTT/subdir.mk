################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../SEGGER_RTT/SEGGER_RTT.c \
../SEGGER_RTT/SEGGER_RTT_printf.c 

OBJS += \
./SEGGER_RTT/SEGGER_RTT.o \
./SEGGER_RTT/SEGGER_RTT_printf.o 

C_DEPS += \
./SEGGER_RTT/SEGGER_RTT.d \
./SEGGER_RTT/SEGGER_RTT_printf.d 


# Each subdirectory must supply rules for building sources it contributes
SEGGER_RTT/%.o SEGGER_RTT/%.su SEGGER_RTT/%.cyclo: ../SEGGER_RTT/%.c SEGGER_RTT/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F429xx -c -I../Core/Inc -I../LWIP/App -I../LWIP/Target -I../Middlewares/Third_Party/LwIP/src/include -I../Middlewares/Third_Party/LwIP/system -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Drivers/BSP/Components/lan8742 -I../Middlewares/Third_Party/LwIP/src/include/netif/ppp -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Middlewares/Third_Party/LwIP/src/include/lwip -I../Middlewares/Third_Party/LwIP/src/include/lwip/apps -I../Middlewares/Third_Party/LwIP/src/include/lwip/priv -I../Middlewares/Third_Party/LwIP/src/include/lwip/prot -I../Middlewares/Third_Party/LwIP/src/include/netif -I../Middlewares/Third_Party/LwIP/src/include/compat/posix -I../Middlewares/Third_Party/LwIP/src/include/compat/posix/arpa -I../Middlewares/Third_Party/LwIP/src/include/compat/posix/net -I../Middlewares/Third_Party/LwIP/src/include/compat/posix/sys -I../Middlewares/Third_Party/LwIP/src/include/compat/stdc -I../Middlewares/Third_Party/LwIP/system/arch -I../Drivers/CMSIS/Include -I../SEGGER_RTT -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-SEGGER_RTT

clean-SEGGER_RTT:
	-$(RM) ./SEGGER_RTT/SEGGER_RTT.cyclo ./SEGGER_RTT/SEGGER_RTT.d ./SEGGER_RTT/SEGGER_RTT.o ./SEGGER_RTT/SEGGER_RTT.su ./SEGGER_RTT/SEGGER_RTT_printf.cyclo ./SEGGER_RTT/SEGGER_RTT_printf.d ./SEGGER_RTT/SEGGER_RTT_printf.o ./SEGGER_RTT/SEGGER_RTT_printf.su

.PHONY: clean-SEGGER_RTT

