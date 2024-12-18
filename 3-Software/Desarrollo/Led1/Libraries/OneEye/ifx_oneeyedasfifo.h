/**
 * \file Ifx_OneEyeDasFifo.h
 * \brief Source file for our basebar on each display
 *
 * \copyright Copyright (c) 2019 Infineon Technologies AG. All rights reserved.
 *
 *
 *
 *                                 IMPORTANT NOTICE
 *
 *
 * Use of this file is subject to the terms of use agreed between (i) you or
 * the company in which ordinary course of business you are acting and (ii)
 * Infineon Technologies AG or its licensees. If and as long as no such
 * terms of use are agreed, use of this file is subject to following:


 * Boost Software License - Version 1.0 - August 17th, 2003

 * Permission is hereby granted, free of charge, to any person or
 * organization obtaining a copy of the software and accompanying
 * documentation covered by this license (the "Software") to use, reproduce,
 * display, distribute, execute, and transmit the Software, and to prepare
 * derivative works of the Software, and to permit third-parties to whom the
 * Software is furnished to do so, all subject to the following:

 * The copyright notices in the Software and this entire statement, including
 * the above license grant, this restriction and the following disclaimer, must
 * be included in all copies of the Software, in whole or in part, and all
 * derivative works of the Software, unless such copies or derivative works are
 * solely in the form of machine-executable object code generated by a source
 * language processor.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.

 *
 */

#ifndef IFX_ONEEYEDASFIFO_H
#define IFX_ONEEYEDASFIFO_H

#include "Platform_Types.h"
#include "Ifx_Types.h"

typedef union
{
        struct
        {
                volatile uint32 active :10;
                volatile uint32 ready :10;
                volatile uint32 writepos :10;
                volatile uint32 dummy :2;
        } data;
        volatile uint32 value;
} Ifx_OneEyeDasFifo_ToOneEyeControl;

typedef struct
{
        volatile uint32 rxBeg; // position of first byte to read
        volatile uint32 rxEnd; // position of last byte to read
} Ifx_OneEyeDasFifo_FromOneEyeControl;

typedef struct
{
        volatile Ifx_OneEyeDasFifo_ToOneEyeControl control;
        char * data;
        volatile uint32 readPos;
} Ifx_OneEyeDasFifo_ToOneEye;

typedef struct
{
        volatile Ifx_OneEyeDasFifo_FromOneEyeControl control;
        char * data;
} Ifx_OneEyeDasFifo_FromOneEye;

typedef struct
{
        Ifx_OneEyeDasFifo_ToOneEye tx;
        Ifx_OneEyeDasFifo_FromOneEye rx;
        uint32 size;
} Ifx_OneEyeDasFifo;

typedef struct
{
        uint32 size;    // size in bytes, limited to maximum 1024 bytes
} Ifx_OneEyeDasFifo_Config;

Ifx_SizeT Ifx_OneEyeDasFifo_write (Ifx_OneEyeDasFifo * fifo, char * src, Ifx_SizeT count, Ifx_TickTime timeout);
Ifx_SizeT Ifx_OneEyeDasFifo_read (Ifx_OneEyeDasFifo * fifo, char * dst, Ifx_SizeT * count, Ifx_TickTime timeout);
void Ifx_OneEyeDasFifo_clearRx (Ifx_OneEyeDasFifo * fifo);
void Ifx_OneEyeDasFifo_clearTx (Ifx_OneEyeDasFifo * fifo);

void Ifx_OneEyeDasFifo_initConfig(Ifx_OneEyeDasFifo_Config * config);
boolean Ifx_OneEyeDasFifo_init (Ifx_OneEyeDasFifo * fifo, Ifx_OneEyeDasFifo_Config * config);

#endif
