################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Main.cpp \
../src/P010.cpp \
../src/P011.cpp \
../src/P7.cpp \
../src/P8.cpp \
../src/P9.cpp \
../src/Utils.cpp \
../src/p2.cpp \
../src/p3.cpp \
../src/p4.cpp \
../src/p5.cpp \
../src/p6.cpp 

OBJS += \
./src/Main.o \
./src/P010.o \
./src/P011.o \
./src/P7.o \
./src/P8.o \
./src/P9.o \
./src/Utils.o \
./src/p2.o \
./src/p3.o \
./src/p4.o \
./src/p5.o \
./src/p6.o 

CPP_DEPS += \
./src/Main.d \
./src/P010.d \
./src/P011.d \
./src/P7.d \
./src/P8.d \
./src/P9.d \
./src/Utils.d \
./src/p2.d \
./src/p3.d \
./src/p4.d \
./src/p5.d \
./src/p6.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


