/*
 * Generated by TASKING Pin Mapper for AURIX
 * - device  : TC37XPD
 * - package : LQFP176
 */

/*
 * Instructions on how to build this generated file and the Infineon's iLLD library with the TASKING  VX-toolset
 * for TriCore:
 * 1. Provide appropriate include paths to the compiler (-I option) to locate the iLLD library.
 * 2. Provide macro IFX_CFG_USE_COMPILER_DEFAULT_LINKER to the compiler (-D option) to prevent multiple
 *    definitions of symbol '_START' (in cstart.c and IfxCpu_CStart0.c).
 * 3. Disable compiler option 'Automatic inclusion of .sfr files' (-H option) to prevent macros to be redefined.
 */

#ifndef AURIX_PIN_MAPPINGS_H_
#define AURIX_PIN_MAPPINGS_H_

/* Infineon's iLLD library include files */

#include <Port/Io/IfxPort_Io.h>

#include <_PinMap/IfxPort_PinMap.h>


/* Symbolic names for GPIO ports */

// p00_5
#define IFXCFG_PORT_M_LED1_GREEN                IfxPort_P00_5
#define IFXCFG_PORT_M_LED1_GREEN_MODE           IfxPort_Mode_outputOpenDrainGeneral
#define IFXCFG_PORT_M_LED1_GREEN_PAD_DRIVER     IfxPort_PadDriver_cmosAutomotiveSpeed4

// p00_6
#define IFXCFG_PORT_M_LED2_GREEN                IfxPort_P00_6
#define IFXCFG_PORT_M_LED2_GREEN_MODE           IfxPort_Mode_outputOpenDrainGeneral
#define IFXCFG_PORT_M_LED2_GREEN_PAD_DRIVER     IfxPort_PadDriver_cmosAutomotiveSpeed4

// p00_7
#define IFXCFG_PORT_M_BUTTON1                   IfxPort_P00_7
#define IFXCFG_PORT_M_BUTTON1_MODE              IfxPort_Mode_inputPullUp
#define IFXCFG_PORT_M_BUTTON1_PAD_DRIVER        IfxPort_PadDriver_cmosAutomotiveSpeed1


/* Generic port I/O configuration */

#define IFXCFG_P00_5_IO_CONFIG                  { &IFXCFG_PORT_M_LED1_GREEN, IFXCFG_PORT_M_LED1_GREEN_MODE, IFXCFG_PORT_M_LED1_GREEN_PAD_DRIVER }
#define IFXCFG_P00_6_IO_CONFIG                  { &IFXCFG_PORT_M_LED2_GREEN, IFXCFG_PORT_M_LED2_GREEN_MODE, IFXCFG_PORT_M_LED2_GREEN_PAD_DRIVER }
#define IFXCFG_P00_7_IO_CONFIG                  { &IFXCFG_PORT_M_BUTTON1, IFXCFG_PORT_M_BUTTON1_MODE, IFXCFG_PORT_M_BUTTON1_PAD_DRIVER }


/* Initialization routines */

extern void gpio_init_pins(void);


#endif /* AURIX_PIN_MAPPINGS_H_ */
