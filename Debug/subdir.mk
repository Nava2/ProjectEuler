################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Main.cpp \
../P010.cpp \
../P011.cpp \
../P7.cpp \
../P8.cpp \
../P9.cpp \
../Utils.cpp 

OBJS += \
./Main.o \
./P010.o \
./P011.o \
./P7.o \
./P8.o \
./P9.o \
./Utils.o 

CPP_DEPS += \
./Main.d \
./P010.d \
./P011.d \
./P7.d \
./P8.d \
./P9.d \
./Utils.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


