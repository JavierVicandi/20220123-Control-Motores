/*
 * \file Ifx_Osci.h
 * \brief  Osci
 * \ingroup
 * \version
 * \copyright Copyright (c) 2019 Infineon Technologies AG. All rights reserved.
 *
 *                            IMPORTANT NOTICE
 *
 * Use of this file is subject to the terms of use agreed between (i) you or
 * the company in which ordinary course of business you are acting and (ii)
 * Infineon Technologies AG or its licensees. If and as long as no such terms
 * of use are agreed, use of this file is subject to following:
 *
 * Boost Software License - Version 1.0 - August 17th, 2003
 *
 * Permission is hereby granted, free of charge, to any person or organization
 * obtaining a copy of the software and accompanying documentation covered by
 * this license (the "Software") to use, reproduce, display, distribute,
 * execute, and transmit the Software, and to prepare derivative works of the
 * Software, and to permit third-parties to whom the Software is furnished to
 * do so, all subject to the following:
 *
 * The copyright notices in the Software and this entire statement, including
 * the above license grant, this restriction and the following disclaimer, must
 * be included in all copies of the Software, in whole or in part, and all
 * derivative works of the Software, unless such copies or derivative works are
 * solely in the form of machine-executable object code generated by a source
 * language processor.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */
/*\defgroup library_sysse_hwindependant_debug_osci Oscilloscope
 * \ingroup library_sysse_hwindependant_debug
 *
 * \defgroup library_sysse_hwindependant_debug_osci_cDriver C driver
 * \ingroup library_sysse_hwindependant_debug_osci
 *
 * \defgroup library_sysse_hwindependant_debug_osci_cppWrapper C++ wrapper
 * \ingroup library_sysse_hwindependant_debug_osci
 */
#ifndef IFX_OSCI_H
#define IFX_OSCI_H

#include "Ifx_Osci_Cfg.h"
#include "Bsp.h"
#include "IFX_Cf32.h"

#define IFX_OSCI_VERSION_MAJOR ((uint8)1)
#define IFX_OSCI_VERSION_MINOR ((uint8)0)
#define IFX_OSCI_VERSION_PARCH ((uint8)0)

#ifdef __cplusplus
extern "C" {
#endif


/** \addtogroup library_sysse_hwindependant_debug_osci_cDriver
 * \{ */

#define IFX_OSCI_MARKER "1eyeOsci"

typedef enum
{
    Ifx_Osci_DataType_Unknown           = 0,      /**<\brief Unknown data type */
    Ifx_Osci_DataType_Float32           = 1,      /**<\brief Signal data type is float32 */
    Ifx_Osci_DataType_SInt16            = 2,      /**<\brief Signal data type is sint16 */
    Ifx_Osci_DataType_UInt16            = 3,      /**<\brief Signal data type is uint16 */
    Ifx_Osci_DataType_SInt32            = 4,      /**<\brief Signal data type is sint32 */
    Ifx_Osci_DataType_UInt32            = 5,      /**<\brief Signal data type is uint32 */
    Ifx_Osci_DataType_FixPoint16        = 6,      /**<\brief Signal data type is FixPoint16 */
    Ifx_Osci_DataType_FixPoint32        = 7,      /**<\brief Signal data type is FixPoint32 */
    Ifx_Osci_DataType_SInt8             = 8,      /**<\brief Signal data type is sint8 */
    Ifx_Osci_DataType_UInt8             = 9,      /**<\brief Signal data type is uint8 */
    Ifx_Osci_DataType_boolean           = 10,     /**<\brief Signal data type is boolean */
    Ifx_Osci_DataType_SInt64            = 11,     /**<\brief Signal data type is sint64 */
    Ifx_Osci_DataType_UInt64            = 12,     /**<\brief Signal data type is uint64 */
    Ifx_Osci_DataType_FctPtr_Float32    = 13,     /**<\brief Signal data type is a function pointer to float32 */
    Ifx_Osci_DataType_FctPtr_SInt16     = 14,     /**<\brief Signal data type is a function pointer to sint16 */
    Ifx_Osci_DataType_FctPtr_UInt16     = 15,     /**<\brief Signal data type is a function pointer to uint16 */
    Ifx_Osci_DataType_FctPtr_SInt32     = 16,     /**<\brief Signal data type is a function pointer to sint32 */
    Ifx_Osci_DataType_FctPtr_UInt32     = 17,     /**<\brief Signal data type is a function pointer to uint32 */
    Ifx_Osci_DataType_FctPtr_FixPoint16 = 18,     /**<\brief Signal data type is a function pointer to FixPoint16 */
    Ifx_Osci_DataType_FctPtr_FixPoint32 = 19,     /**<\brief Signal data type is a function pointer to FixPoint32 */
    Ifx_Osci_DataType_FctPtr_SInt8      = 20,     /**<\brief Signal data type is a function pointer to sint8 */
    Ifx_Osci_DataType_FctPtr_UInt8      = 21,     /**<\brief Signal data type is a function pointer to uint8 */
    Ifx_Osci_DataType_FctPtr_boolean    = 22,     /**<\brief Signal data type is a function pointer to boolean */
    Ifx_Osci_DataType_FctPtr_SInt64     = 23,     /**<\brief Signal data type is a function pointer to sint64 */
    Ifx_Osci_DataType_FctPtr_UInt64     = 24,      /**<\brief Signal data type is a function pointer to uint64 */
    Ifx_Osci_DataType_Align32Bit        = 0x7FFFFFFF
} Ifx_Osci_DataType;

typedef enum
{
    Ifx_Osci_TriggerMode_normal     = 0,     /*  */
    Ifx_Osci_TriggerMode_automatic  = 1,     /* the measurement runs continually */
    Ifx_Osci_TriggerMode_inverted   = 2 /*  the measurement runs continually and stops when the trigger is reached    */,
    Ifx_Osci_TriggerMode_align32Bit = 0x7FFFFFFF
} Ifx_Osci_TriggerMode;

typedef enum
{
    Ifx_Osci_TriggerState_armed        = 1,
    Ifx_Osci_TriggerState_triggered    = 2,
    Ifx_Osci_TriggerState_stopped      = 3,
    Ifx_Osci_TriggerState_dataTransfer = 4,
    Ifx_Osci_TriggerState_align32Bit   = 0x7FFFFFFF
} Ifx_Osci_TriggerState;

typedef enum
{
    Ifx_Osci_TriggerEdge_falling    = 0, /* The trigger will detect falling edges */
    Ifx_Osci_TriggerEdge_rising     = 1, /* The trigger will detect rising edges */
    Ifx_Osci_TriggerEdge_align32Bit = 0x7FFFFFFF
} Ifx_Osci_TriggerEdge;

typedef enum
{
    Ifx_Osci_Operation_clr,
    Ifx_Osci_Operation_add,
    Ifx_Osci_Operation_sub,
    Ifx_Osci_Operation_mul,
    Ifx_Osci_Operation_div,
    Ifx_Osci_Operation_set,
    Ifx_Osci_Operation_atan2
} Ifx_Osci_Operation;

typedef enum
{
    Ifx_Osci_SignalType_sine,
    Ifx_Osci_SignalType_square
} Ifx_Osci_SignalType;

/**
 * @brief Signal ID. 1st signal have an ID of 0. undefined signal have an ID of \ref IFX_OSCI_NO_SIGNAL
 */
typedef sint32 Ifx_Osci_SignalId;

/**
 * @brief Channel ID. 1st channel have an ID of 0. undefined channel have an ID of \ref IFX_OSCI_NO_CHANNEL
 */
typedef sint32 Ifx_Osci_ChannelId;

#define IFX_OSCI_NO_SIGNAL  ((Ifx_Osci_SignalId) - 1)
#define IFX_OSCI_NO_CHANNEL ((Ifx_Osci_ChannelId) - 1)

/** \brief Oscilloscope channel object. */
typedef struct Ifx_Osci_Signal
{
    Ifx_Osci_SignalId id;
    pchar name;
    const void* source;     /**<\brief Pointer to the signal source (global variable address or function pointer)*/
    float32 (*getFctPtr)(const struct Ifx_Osci_Signal* source);
    Ifx_Osci_DataType type; /**<\brief Specifies the signal data type */
    sint32 qFormatShift;    /**<\brief Specifies the shifts if type is FixPoint16 or FixPoint32 */
} Ifx_Osci_Signal;

/** \brief Oscilloscope channel object. */
#if defined(__HIGHTEC__)
typedef struct __attribute__ ((__packed__))
#elif defined(__TASKING__)
typedef struct
#else
typedef struct
#endif
{
    Ifx_Osci_Signal* signal;
    float32* values; /**<\brief pointer to the array of values for this channel */
} Ifx_Osci_Channel;

extern float32 (* getFctPtrArray[])(const Ifx_Osci_Signal* source);

typedef struct
{
    float32 dcOffset;                   /**< \brief DC offset */
    float32 pTot;                       /**< \brief Total power at half spectrum */
    float32 pPeak;                      /**< \brief Peak power */
    float32 fPeak;                      /**< \brief Peak frequency */
    float32 pSig;                       /**< \brief Signal power */
    float32 pnd;                        /**< \brief Noise and Distortion */
    float32 signalPeakDb;               /**< \brief Signal Peak in DB */
    float32 signalNoiseDistortionDb;    /**< \brief Signal + Noise + Distortion in dB*/
    float32 noiseDistortionDb;          /**< \brief Noise + Distortion in DB */
    float32 sinad;                      /**< \brief SINAD in DB*/
    float32 enob;                       /**< \brief ENOB = %f bits in bits*/
}Ifx_Osci_analyzeResult;

/** \brief Oscilloscope trigger object */
#if defined(__HIGHTEC__)
typedef struct __attribute__ ((__packed__))
#elif defined(__TASKING__)
typedef struct
#else
typedef struct
#endif
{
    Ifx_Osci_TriggerState state;       /**< \brief */
    Ifx_Osci_TriggerMode mode;         /**< \brief */
    Ifx_Osci_TriggerEdge edge;         /**< \brief */
    float32 level;                     /**< \brief */
    float32 previousValue;             /**< \brief */
    uint32 position;
    uint16 source;                      /**< \brief */
    uint8 single;
    uint8 arm;
    uint32 reserved_1;
    uint64 reserved_2;
} Ifx_Osci_Trigger;

#define IFX_OSCI_TRIGGER_STRUCT_SIZE (40)

#if defined(__HIGHTEC__)
typedef struct __attribute__ ((__packed__))
#elif defined(__TASKING__)
typedef struct
#else
typedef struct
#endif
{
    uint64 marker;
    struct
    {
        uint8 major;
        uint8 minor;
        uint8 patch;
        uint8 dummy;
    }Version;
}Ifx_Osci_OneEye;
#define IFX_OSCI_ONEEYE_STRUCT_SIZE (12)

#if defined(__HIGHTEC__)
typedef struct __attribute__ ((__packed__))
#elif defined(__TASKING__)
typedef struct
#else
typedef struct
#endif
{
    uint32 signalListAddr;
    uint32 channelListAddr;
    uint32 valuesAddr;
} Ifx_Osci_Header;
#define IFX_OSCI_HEADER_STRUCT_SIZE (12)

#if defined(__HIGHTEC__)
typedef struct __attribute__ ((__packed__))
#elif defined(__TASKING__)
#pragma warning 586 // W586: unnamed struct/union field 13/12/2024 16:39:39
// Code which would generate warning 586.
typedef struct
#else
typedef struct
#endif
{
    union
    {
        struct
        {
            uint32 remoteControlled : 2;        /**< 3: remote controlled, 2 not remote controlled, 0 no action */
            uint32 enable : 2;                  /**< 3: enable, 2: disable, else no action */
            uint32 single : 2;                  /**< 3: change to single, 2: change to not single, else no action */
            uint32 armTrigger : 1;              /**< 1: arm trigger, else no action */
            uint32 forceTrigger : 1;            /**< 1: force trigger, else no action */
            uint32 dataTransfered : 1;          /**< 1: notify data transfered, else no action   */
            uint32 triggerMode : 3;             /**< 4: set to normal mode, 5 set to automatic mode, 6 set to inverted mode , else no action */
            uint32 triggerEdge : 2;             /**< 2: set to rising edge, 3: set to falling edge, else no action */
            uint32 setBufferDepth : 1;          /**< 1: set buffer depth, else no action */
            uint32 setSamplingInterval : 1;     /**< 1: set sampling interval, else no action */
            uint32 setTriggerLevel : 1;         /**< 1: set trigger level, else no action */
            uint32 setTriggerSource : 1;        /**< 1: set trigger source, else no action */
            uint32 setTriggerPosition : 1;      /**< 1: set trigger position, else no action */
            uint32 : 13;
        };
        uint32 flags1;
    };
    uint32 bufferDepth;
    uint32 triggerPosition;
    float32 triggerLevel;
    uint16 samplingInterval;
    uint16 triggerSource;          /**< Trigger source */
    uint32 reserved_2;  /* Reserved for future use*/
    uint16 reserved_3;  /* Reserved for future use*/
    uint8 reserved_4;   /* Reserved for future use*/
    union
    {
        struct
        {
            uint8 : 6;  /**< 1: update request is pending, 2 updating, 0 no update pending */
            uint8 updateRequest : 2; /**< 1: update request is pending, 2 updating, 0 no update pending */
        };
        uint8 flags2;
    };
}Ifx_Osci_ControlInterface;

#define IFX_OSCI_CONTROLINTERFACE_STRUCT_SIZE (28)

/** \brief Oscilloscope object. */
#if defined(__HIGHTEC__)
typedef struct __attribute__ ((__packed__))
#elif defined(__TASKING__)
typedef struct
#else
typedef struct
#endif
{
    Ifx_Osci_OneEye oneEyeOsci;
    Ifx_Osci_Header header;
    uint16 maxNumOfChannels;                                                        /**< \brief Number of acquired data per channel */
    uint16 maxNumOfSignals;                                                         /**< \brief Number of acquired data per channel */
    uint32 maxNumOfSamples;                                                         /**< \brief Number of acquired data per channel */
    uint32 checkMark;	/* Used for data consistency for GUI interface */
    Ifx_Osci_ControlInterface controlInterface;
    Ifx_Osci_Trigger trigger;                                                      /**< \brief */
    float32 samplePeriod;                                                          /**< \brief */
    uint32 dataLength;                                                             /**< \brief Number of acquired data per channel */
    uint16 samplingInterval;                                                       /**< \brief */
    boolean enabled;
    boolean remoteControlled;


    Ifx_TickTime startTime;                                                        /**< \brief */
    uint16 samplingIntervalTmp;                                                    /**< \brief */
    uint16 readIndex;                                                              /**< \brief */
    uint16 writeIndex;                                                             /**< \brief */
    uint16 usedSignals;                                                            /**< \brief number of active channels */
    boolean  dataTransfered;
    boolean autoAddChannels;                                                       /* if TRUE, when adding a signal it will map the next free channel to this signal */
    boolean stateChanged;
    uint8 dummy;	/*Ensure signalList is aligned on 16 bit */
    Ifx_Osci_Signal signalList[IFX_OSCI_CFG_MAX_NUM_OF_SIGNALS];
    Ifx_Osci_Channel channels[IFX_OSCI_CFG_MAX_NUM_OF_CHANNELS];                   /*actually array of Ifx_Osci_Channel allocated at runtime*/
    float32 values[IFX_OSCI_CFG_MAX_NUM_OF_CHANNELS][IFX_OSCI_CFG_NUM_OF_SAMPLES]; /*actually array[allocatedChannels] of array[dataLength] of float32 allocated at runtime*/
    struct
    {
        cfloat32 in[IFX_OSCI_CFG_FFT_LENGTH];
        Ifx_Osci_analyzeResult result;

        union
        {
            cfloat32 X[IFX_OSCI_CFG_FFT_LENGTH];
            float32 db[IFX_OSCI_CFG_FFT_LENGTH / 2];
            float32 pwr[IFX_OSCI_CFG_FFT_LENGTH / 2];
        }       out;
        uint32 padLength;
        sint32 span;
        uint16 length;              /**< \brief FFT buffer length. Must be bigger or equal to dataLength to enable FFT. Must be smaller or equal to IFX_OSCI_CFG_FFT_LENGTH */
        uint16 source;
        boolean enabled;
    } fft;
}Ifx_Osci;
#define IFX_OSCI_OSCI_STRUCT_OFFSET_OF_CHECKMARK (IFX_OSCI_ONEEYE_STRUCT_SIZE+IFX_OSCI_HEADER_STRUCT_SIZE+8)

typedef struct
{
    float32 samplePeriod;             /**< \brief Sample period in s (used as information by the oscilloscope internally) */
    Ifx_Osci_TriggerMode triggerMode; /**< \brief Trigger mode */
    boolean autoAddChannels;          /* if TRUE, when adding a signal it will map the next free channel to this signal */
} Ifx_Osci_Config;

pchar                            Ifx_Osci_getDataTypeName(Ifx_Osci_DataType type);
float32                          Ifx_Osci_valueGet(Ifx_Osci_Channel* channel);
void                             Ifx_Osci_stepForced(Ifx_Osci* osci);
void                             Ifx_Osci_step(Ifx_Osci* osci);

void                          Ifx_Osci_setDepth(Ifx_Osci* osci, uint32 depth);
Ifx_Osci_SignalId                Ifx_Osci_addSignal(Ifx_Osci* osci, pchar name, Ifx_Osci_DataType type, const void* source, sint16 qFormatShift);
/**
 * @brief Return the signal ID that match the signal name
 * @param osci
 * @param name Name of the signal
 * @return Return the signal ID that match the signal name
 */
Ifx_Osci_SignalId                Ifx_Osci_getSignalIdFromName(Ifx_Osci* osci, pchar name);

IFX_INLINE Ifx_Osci_TriggerState Ifx_Osci_getTriggerState(Ifx_Osci* osci)
{ return osci->trigger.state; }

boolean            Ifx_Osci_associateSignalToChannel(Ifx_Osci* osci, Ifx_Osci_SignalId signalId, Ifx_Osci_ChannelId channelId);
Ifx_Osci_SignalId  Ifx_Osci_getChannelSignal(Ifx_Osci* osci, Ifx_Osci_ChannelId channelId);
float32*           Ifx_Osci_getChannelDataPointer(Ifx_Osci* osci, Ifx_Osci_ChannelId channelId);

boolean            Ifx_Osci_init(Ifx_Osci* osci, Ifx_Osci_Config* config);
void               Ifx_Osci_setSamplingPeriod(Ifx_Osci* osci, float32 samplePeriod);
float32            Ifx_Osci_getSamplingPeriod(Ifx_Osci* osci);
void               Ifx_Osci_initConfig(Ifx_Osci_Config* config);
boolean            Ifx_Osci_getNextData(Ifx_Osci* osci, float32* data);
float32            Ifx_Lut_squareWave(float32 angle);
void               Ifx_Osci_doSignalOperation(Ifx_Osci* osci, Ifx_Osci_Channel* result, Ifx_Osci_Channel* a, Ifx_Osci_Operation op, Ifx_Osci_SignalType type, float32 freq, float32 ampl, float32 offset, float32 phase);
void               Ifx_Osci_doChannelOperation(Ifx_Osci* osci, Ifx_Osci_Channel* result, Ifx_Osci_Channel* a, Ifx_Osci_Operation op, Ifx_Osci_Channel* b);
void               Ifx_Osci_analyze(Ifx_Osci* osci);
void               Ifx_Osci_start(Ifx_Osci* osci);
boolean            Ifx_Osci_isRunning(Ifx_Osci* osci);
void               Ifx_Osci_stop(Ifx_Osci* osci);
void               Ifx_Osci_setTriggerLevel(Ifx_Osci* osci, float32 level);
void               Ifx_Osci_setTriggerSource(Ifx_Osci* osci, uint16 channel);
void               Ifx_Osci_setTriggerEdge(Ifx_Osci* osci, Ifx_Osci_TriggerEdge edge);
void               Ifx_Osci_forceTrigger(Ifx_Osci* osci);
void               Ifx_Osci_setSamplingInterval(Ifx_Osci* osci, uint16 interval);
boolean Ifx_Osci_isStateChanged(Ifx_Osci* osci);

void Ifx_Osci_setRemoteControl(Ifx_Osci* osci, boolean value);


IFX_INLINE float32 Ifx_Osci_getTriggerLevel(Ifx_Osci* osci)
{ return osci->trigger.level; }
IFX_INLINE uint16  Ifx_Osci_getTriggerSource(Ifx_Osci* osci)
{ return osci->trigger.source; }

IFX_INLINE Ifx_Osci_TriggerMode Ifx_Osci_getTriggerMode(Ifx_Osci* osci)
{ return osci->trigger.mode; }
IFX_INLINE Ifx_Osci_TriggerEdge Ifx_Osci_getTriggerEdge(Ifx_Osci* osci)
{ return osci->trigger.edge; }

IFX_INLINE uint16 Ifx_Osci_getSamplingInterval(Ifx_Osci* osci)
{ return osci->samplingInterval; }
IFX_INLINE uint16  Ifx_Osci_getUsedSignals(Ifx_Osci* osci)
{ return osci->usedSignals; }
IFX_INLINE uint32 Ifx_Osci_getDepth(Ifx_Osci* osci)
{ return osci->dataLength; }
IFX_INLINE uint32 Ifx_Osci_getMaxDepth(void)
{ return IFX_OSCI_CFG_NUM_OF_SAMPLES; }

IFX_INLINE uint16           Ifx_Osci_getNumberOfChannels(Ifx_Osci* osci)
{ return osci->maxNumOfChannels; }
IFX_INLINE Ifx_Osci_Signal* Ifx_Osci_getSignalInfo(Ifx_Osci* osci, Ifx_Osci_SignalId signalId)
{ return signalId < osci->usedSignals ? &osci->signalList[signalId] : NULL_PTR; }

void Ifx_Osci_setTriggerSingle(Ifx_Osci* osci, boolean value);
IFX_INLINE boolean Ifx_Osci_getTriggerSingle(Ifx_Osci* osci)
{ return osci->trigger.single; }
void Ifx_Osci_setTriggerMode(Ifx_Osci* osci, Ifx_Osci_TriggerMode mode);
void Ifx_Osci_armTrigger(Ifx_Osci* osci);
void Ifx_Osci_setDataTransfered(Ifx_Osci* osci);
void Ifx_Osci_setControl(Ifx_Osci* osci, Ifx_Osci_ControlInterface *actions);

void Ifx_Osci_clearControldata(Ifx_Osci_ControlInterface *actions);
#ifdef __cplusplus
}
#endif

/** \} */
#endif