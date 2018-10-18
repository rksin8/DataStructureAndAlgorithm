################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/LinkedListTest.cpp \
../src/Node.cpp \
../src/SinglyLinkedList.cpp 

OBJS += \
./src/LinkedListTest.o \
./src/Node.o \
./src/SinglyLinkedList.o 

CPP_DEPS += \
./src/LinkedListTest.d \
./src/Node.d \
./src/SinglyLinkedList.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


