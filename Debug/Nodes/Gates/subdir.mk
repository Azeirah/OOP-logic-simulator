################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Nodes/Gates/AndGate.cpp \
../Nodes/Gates/NandGate.cpp \
../Nodes/Gates/NorGate.cpp \
../Nodes/Gates/NotGate.cpp \
../Nodes/Gates/OrGate.cpp \
../Nodes/Gates/XorGate.cpp 

OBJS += \
./Nodes/Gates/AndGate.o \
./Nodes/Gates/NandGate.o \
./Nodes/Gates/NorGate.o \
./Nodes/Gates/NotGate.o \
./Nodes/Gates/OrGate.o \
./Nodes/Gates/XorGate.o 

CPP_DEPS += \
./Nodes/Gates/AndGate.d \
./Nodes/Gates/NandGate.d \
./Nodes/Gates/NorGate.d \
./Nodes/Gates/NotGate.d \
./Nodes/Gates/OrGate.d \
./Nodes/Gates/XorGate.d 


# Each subdirectory must supply rules for building sources it contributes
Nodes/Gates/%.o: ../Nodes/Gates/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


