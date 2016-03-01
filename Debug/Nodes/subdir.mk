################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Nodes/Circuit.cpp \
../Nodes/EndNode.cpp \
../Nodes/LogicGate.cpp \
../Nodes/StartNode.cpp 

OBJS += \
./Nodes/Circuit.o \
./Nodes/EndNode.o \
./Nodes/LogicGate.o \
./Nodes/StartNode.o 

CPP_DEPS += \
./Nodes/Circuit.d \
./Nodes/EndNode.d \
./Nodes/LogicGate.d \
./Nodes/StartNode.d 


# Each subdirectory must supply rules for building sources it contributes
Nodes/%.o: ../Nodes/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


