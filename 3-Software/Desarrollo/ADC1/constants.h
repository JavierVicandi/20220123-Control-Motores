//------------------------------------------------------------------------
//	constants.h 
//	This file contains the common defines of the application
//	Pertenece al proyecto ??? Versión 
// Copyright (C) 2.025 Microelectrónica Maser. All rights reserved.
//
//	Developped: 	Javier Vicandi   	Date: 
//	Modified:     Date:                                  
//	Tested:				Date:			                                         
//	Approved:			Date:	
//
//--------------------------------------------------------------------------
// Define to prevent recursive inclusion -------------
#ifndef _CONSTANTS_H_
#define _CONSTANTS_H_

//----------------INCLUDES 
#include <stdint.h>				//Para uso de tipos enteros con notación indicando tamaño
#include <stdbool.h>			//Para uso de tipo bool con valores true y false

//---------------DEFINICIONES
//Para funciones de inicialización y configuración de periféricos implementadas por el desarrollador

//Definiciones generales:

//Para iniciar variables
#define CERO_U8					(uint8_t)(0U)			//0 para variables unsigned de 8 bits o índice inicial para recorrer arrays menores de 256 elementos
#define CERO_U16				(uint16_t)(0U)		//0 para variables unsigned de 16 bits
#define CERO_U32				(uint32_t)(0U)		//0 para variables unsigned de 32 bits
#define CERO_U64				(uint64_t)(0U)		//0 para variables unsigned de 64 bits
#define CERO_S16				(int16_t)(0)			//0 para variables signed de 16 bits
#define UNO_U8					(uint8_t)(1U)
#define UNO_U16					(uint16_t)(1U)
#define DOS_U8					(uint8_t)(2U)
#define TRES_U8					(uint8_t)(3U)
#define CUATRO_U8				(uint8_t)(4U)


//Para desplazamientos
#define	SHIFT_1BIT_U8			(uint8_t)(1U)
#define	SHIFT_2BIT_U8			(uint8_t)(2U)
#define	SHIFT_3BIT_U8			(uint8_t)(3U)
#define	SHIFT_4BIT_U8			(uint8_t)(4U)
#define	SHIFT_5BIT_U8			(uint8_t)(5U)
#define	SHIFT_6BIT_U8			(uint8_t)(6U)
#define	SHIFT_7BIT_U8			(uint8_t)(7U)
#define	SHIFT_8BIT_U8			(uint8_t)(8U)		
#define	SHIFT_10BIT_U8			(uint8_t)(10U)	
#define	SHIFT_12BIT_U8			(uint8_t)(12U)
#define	SHIFT_16BIT_U8			(uint8_t)(16U)
#define	SHIFT_24BIT_U8			(uint8_t)(24U)

#endif /* _CONSTANTS_H_ */

//************************ (C) COPYRIGHT MASERMIC *****END OF FILE****
