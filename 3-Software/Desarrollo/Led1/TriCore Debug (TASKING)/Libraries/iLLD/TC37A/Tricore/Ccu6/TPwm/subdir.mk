################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
"../Libraries/iLLD/TC37A/Tricore/Ccu6/TPwm/IfxCcu6_TPwm.c" 

COMPILED_SRCS += \
"Libraries/iLLD/TC37A/Tricore/Ccu6/TPwm/IfxCcu6_TPwm.src" 

C_DEPS += \
"./Libraries/iLLD/TC37A/Tricore/Ccu6/TPwm/IfxCcu6_TPwm.d" 

OBJS += \
"Libraries/iLLD/TC37A/Tricore/Ccu6/TPwm/IfxCcu6_TPwm.o" 


# Each subdirectory must supply rules for building sources it contributes
"Libraries/iLLD/TC37A/Tricore/Ccu6/TPwm/IfxCcu6_TPwm.src":"../Libraries/iLLD/TC37A/Tricore/Ccu6/TPwm/IfxCcu6_TPwm.c" "Libraries/iLLD/TC37A/Tricore/Ccu6/TPwm/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc37x "-fC:/Proyectos/20220123 Control Motores/3-Software/Desarrollo/Led1/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc37x -Y0 -N0 -Z0 -o "$@" "$<"
"Libraries/iLLD/TC37A/Tricore/Ccu6/TPwm/IfxCcu6_TPwm.o":"Libraries/iLLD/TC37A/Tricore/Ccu6/TPwm/IfxCcu6_TPwm.src" "Libraries/iLLD/TC37A/Tricore/Ccu6/TPwm/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"

clean: clean-Libraries-2f-iLLD-2f-TC37A-2f-Tricore-2f-Ccu6-2f-TPwm

clean-Libraries-2f-iLLD-2f-TC37A-2f-Tricore-2f-Ccu6-2f-TPwm:
	-$(RM) ./Libraries/iLLD/TC37A/Tricore/Ccu6/TPwm/IfxCcu6_TPwm.d ./Libraries/iLLD/TC37A/Tricore/Ccu6/TPwm/IfxCcu6_TPwm.o ./Libraries/iLLD/TC37A/Tricore/Ccu6/TPwm/IfxCcu6_TPwm.src

.PHONY: clean-Libraries-2f-iLLD-2f-TC37A-2f-Tricore-2f-Ccu6-2f-TPwm
