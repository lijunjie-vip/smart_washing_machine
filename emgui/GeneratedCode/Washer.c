/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 9.20
* Profile  : iMX_RT
* Platform : NXP.iMX_RT.RGB565
*
*******************************************************************************/

#include "ewlocale.h"
#include "_CorePropertyObserver.h"
#include "_CoreRoot.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreSystemEvent.h"
#include "_CoreSystemEventHandler.h"
#include "_CoreTimer.h"
#include "_CoreVerticalList.h"
#include "_CoreView.h"
#include "_EffectsInt32Effect.h"
#include "_EffectsRectEffect.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsBorder.h"
#include "_ViewsFrame.h"
#include "_ViewsImage.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_WasherDeviceClass.h"
#include "_WasherHourItemL.h"
#include "_WasherHourItemS.h"
#include "_WasherMinItemL.h"
#include "_WasherMinItemS.h"
#include "_WasherOptItemL.h"
#include "_WasherOptItemS.h"
#include "_WasherOptList.h"
#include "_WasherProgItemL.h"
#include "_WasherProgItemS.h"
#include "_WasherProgList.h"
#include "_WasherSpinItemL.h"
#include "_WasherSpinItemS.h"
#include "_WasherSpinList.h"
#include "_WasherStartButton.h"
#include "_WasherTempItemL.h"
#include "_WasherTempItemS.h"
#include "_WasherTempList.h"
#include "_WasherTimeList.h"
#include "_WasherWasher.h"
#include "Core.h"
#include "Effects.h"
#include "Graphics.h"
#include "Views.h"
#include "Washer.h"

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault0[] =
{
  0x000002D0, /* ratio 51.11 % */
  0xB8001900, 0x80000452, 0x00E80029, 0x0DC00308, 0x010B3200, 0x106879C8, 0x05818200,
  0x0378020F, 0x8AC24CC0, 0x441A300A, 0x472270A8, 0x5E2A6787, 0x48D06824, 0x0D1F39C4,
  0x6578CCAE, 0x15364DA3, 0xE0048813, 0x31000D32, 0x0448CA00, 0x4D8873B9, 0xAA4F0A85,
  0x6824A9DC, 0x43068744, 0xB46004B2, 0x4998000E, 0x78A9B401, 0x000CA760, 0xE2C00030,
  0x580673BA, 0xD2A764B1, 0x60D63B38, 0xD835A9D7, 0x4368CDA6, 0x379DDBAE, 0xB03002EC,
  0xBBCD89D3, 0x8538B353, 0xDAE33809, 0x1B0B61B0, 0xAE788BAC, 0x13671C41, 0x2319DC5B,
  0x949959F2, 0x8C6D7C01, 0xC3E56A79, 0xD82C0197, 0xC7286509, 0x6E191394, 0x8A919CED,
  0x01313C53, 0x5AEA9CE8, 0x003856E8, 0x59DCE45C, 0xAD0BC005, 0x05427C00, 0x912336F0,
  0xF22A79A1, 0xE39089D8, 0x59C989C4, 0x11F10000, 0xD3ABF04D, 0x49B6DA29, 0xDC6E219D,
  0x898E7D38, 0x52A7D0A8, 0x3A19E3EA, 0x2151C874, 0x012F3BF5, 0x9C9EA758, 0xE889D5A3,
  0x2F6CE001, 0xFFEE707F, 0xD02419BA, 0xE5384C54, 0xF9AE4291, 0x065095B4, 0x0E93B015,
  0xD3B05915, 0x7791F771, 0x5210529D, 0x007CD5F7, 0x56D715AC, 0xD7C455C2, 0xC6C99C54,
  0x05AE001C, 0x28148001, 0x4915352E, 0xD066E136, 0xC8C1196C, 0x550A44D0, 0x00405154,
  0x00000000
};

/* Constant values used in this 'C' module only. */
static const XStringRes _Const0000 = { _StringsDefault0, 0x0003 };
static const XStringRes _Const0001 = { _StringsDefault0, 0x000F };
static const XStringRes _Const0002 = { _StringsDefault0, 0x0017 };
static const XStringRes _Const0003 = { _StringsDefault0, 0x0021 };
static const XStringRes _Const0004 = { _StringsDefault0, 0x0029 };
static const XStringRes _Const0005 = { _StringsDefault0, 0x0031 };
static const XStringRes _Const0006 = { _StringsDefault0, 0x003A };
static const XStringRes _Const0007 = { _StringsDefault0, 0x0044 };
static const XStringRes _Const0008 = { _StringsDefault0, 0x004C };
static const XStringRes _Const0009 = { _StringsDefault0, 0x0056 };
static const XStringRes _Const000A = { _StringsDefault0, 0x005D };
static const XStringRes _Const000B = { _StringsDefault0, 0x0064 };
static const XStringRes _Const000C = { _StringsDefault0, 0x006B };
static const XStringRes _Const000D = { _StringsDefault0, 0x0072 };
static const XStringRes _Const000E = { _StringsDefault0, 0x0079 };
static const XStringRes _Const000F = { _StringsDefault0, 0x0080 };
static const XStringRes _Const0010 = { _StringsDefault0, 0x0086 };
static const XStringRes _Const0011 = { _StringsDefault0, 0x008D };
static const XStringRes _Const0012 = { _StringsDefault0, 0x0094 };
static const XStringRes _Const0013 = { _StringsDefault0, 0x009B };
static const XStringRes _Const0014 = { _StringsDefault0, 0x00A2 };
static const XStringRes _Const0015 = { _StringsDefault0, 0x00AA };
static const XStringRes _Const0016 = { _StringsDefault0, 0x00B2 };
static const XRect _Const0017 = {{ 0, 0 }, { 126, 240 }};
static const XPoint _Const0018 = { 0, 96 };
static const XPoint _Const0019 = { 0, 240 };
static const XPoint _Const001A = { 126, 240 };
static const XPoint _Const001B = { 126, 0 };
static const XPoint _Const001C = { 0, 0 };
static const XRect _Const001D = {{ 0, 72 }, { 126, 168 }};
static const XRect _Const001E = {{ 0, 168 }, { 126, 240 }};
static const XRect _Const001F = {{ 0, 0 }, { 126, 72 }};
static const XRect _Const0020 = {{ 10, 70 }, { 110, 100 }};
static const XStringRes _Const0021 = { _StringsDefault0, 0x00BA };
static const XRect _Const0022 = {{ 0, 0 }, { 220, 160 }};
static const XRect _Const0023 = {{ 20, 0 }, { 220, 160 }};
static const XStringRes _Const0024 = { _StringsDefault0, 0x00C5 };
static const XRect _Const0025 = {{ 0, 0 }, { 220, 40 }};
static const XRect _Const0026 = {{ 0, 0 }, { 2, 40 }};
static const XRect _Const0027 = {{ 218, 0 }, { 220, 40 }};
static const XRect _Const0028 = {{ 10, 0 }, { 210, 40 }};
static const XRect _Const0029 = {{ 0, 0 }, { 46, 240 }};
static const XRect _Const002A = {{ 0, 0 }, { 80, 400 }};
static const XColor _Const002B = { 0x00, 0x00, 0x00, 0x00 };
static const XPoint _Const002C = { 46, 240 };
static const XPoint _Const002D = { 46, 0 };
static const XRect _Const002E = {{ 0, 72 }, { 46, 168 }};
static const XRect _Const002F = {{ 0, 168 }, { 46, 240 }};
static const XRect _Const0030 = {{ 0, 0 }, { 46, 72 }};
static const XRect _Const0031 = {{ 5, 70 }, { 45, 100 }};
static const XStringRes _Const0032 = { _StringsDefault0, 0x00CD };
static const XRect _Const0033 = {{ 0, 0 }, { 80, 160 }};
static const XColor _Const0034 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XRect _Const0035 = {{ 0, 0 }, { 80, 40 }};
static const XRect _Const0036 = {{ 78, 0 }, { 80, 40 }};
static const XRect _Const0037 = {{ 10, 0 }, { 80, 40 }};
static const XStringRes _Const0038 = { _StringsDefault0, 0x00D6 };
static const XRect _Const0039 = {{ 10, 0 }, { 80, 160 }};
static const XRect _Const003A = {{ 0, 0 }, { 92, 240 }};
static const XPoint _Const003B = { 92, 240 };
static const XPoint _Const003C = { 92, 0 };
static const XRect _Const003D = {{ 0, 72 }, { 92, 168 }};
static const XRect _Const003E = {{ 0, 168 }, { 92, 240 }};
static const XRect _Const003F = {{ 0, 0 }, { 92, 72 }};
static const XRect _Const0040 = {{ 5, 70 }, { 85, 100 }};
static const XStringRes _Const0041 = { _StringsDefault0, 0x00DF };
static const XRect _Const0042 = {{ 0, 0 }, { 160, 160 }};
static const XRect _Const0043 = {{ 10, 0 }, { 160, 160 }};
static const XRect _Const0044 = {{ 0, 0 }, { 160, 60 }};
static const XRect _Const0045 = {{ 158, 0 }, { 160, 60 }};
static const XRect _Const0046 = {{ 10, 0 }, { 150, 60 }};
static const XRect _Const0047 = {{ 0, 0 }, { 480, 272 }};
static const XColor _Const0048 = { 0x22, 0x61, 0x73, 0xFF };
static const XColor _Const0049 = { 0x00, 0x00, 0x00, 0xFF };
static const XRect _Const004A = {{ 12, 90 }, { 460, 200 }};
static const XColor _Const004B = { 0x00, 0x00, 0x00, 0x80 };
static const XRect _Const004C = {{ 12, 18 }, { 138, 258 }};
static const XRect _Const004D = {{ 138, 18 }, { 184, 258 }};
static const XRect _Const004E = {{ 184, 18 }, { 230, 258 }};
static const XRect _Const004F = {{ 230, 18 }, { 322, 258 }};
static const XRect _Const0050 = {{ 322, 18 }, { 448, 234 }};
static const XRect _Const0051 = {{ 12, 90 }, { 448, 188 }};
static const XColor _Const0052 = { 0xFF, 0xC2, 0x00, 0xFF };
static const XRect _Const0053 = {{ 137, 103 }, { 139, 178 }};
static const XColor _Const0054 = { 0x40, 0x40, 0x40, 0x40 };
static const XRect _Const0055 = {{ 183, 103 }, { 185, 178 }};
static const XRect _Const0056 = {{ 229, 103 }, { 231, 178 }};
static const XRect _Const0057 = {{ 321, 103 }, { 323, 178 }};
static const XRect _Const0058 = {{ 322, 190 }, { 458, 234 }};
static const XRect _Const0059 = {{ 322, 234 }, { 458, 278 }};
static const XRect _Const005A = {{ 10, 240 }, { 320, 270 }};
static const XStringRes _Const005B = { _StringsDefault0, 0x00E6 };
static const XRect _Const005C = {{ 0, 0 }, { 110, 40 }};
static const XRect _Const005D = {{ 109, 0 }, { 110, 40 }};
static const XRect _Const005E = {{ 0, 0 }, { 126, 216 }};
static const XRect _Const005F = {{ 0, 0 }, { 63, 216 }};
static const XPoint _Const0060 = { 0, 216 };
static const XPoint _Const0061 = { 63, 216 };
static const XPoint _Const0062 = { 63, 0 };
static const XRect _Const0063 = {{ 0, 168 }, { 63, 216 }};
static const XRect _Const0064 = {{ 0, 72 }, { 63, 168 }};
static const XRect _Const0065 = {{ 0, 0 }, { 63, 72 }};
static const XRect _Const0066 = {{ 5, 70 }, { 55, 100 }};
static const XStringRes _Const0067 = { _StringsDefault0, 0x0122 };
static const XRect _Const0068 = {{ 63, 0 }, { 126, 216 }};
static const XPoint _Const0069 = { 126, 216 };
static const XRect _Const006A = {{ 63, 168 }, { 126, 216 }};
static const XRect _Const006B = {{ 63, 72 }, { 126, 168 }};
static const XRect _Const006C = {{ 63, 0 }, { 126, 72 }};
static const XRect _Const006D = {{ 53, 72 }, { 73, 168 }};
static const XStringRes _Const006E = { _StringsDefault0, 0x012E };
static const XRect _Const006F = {{ 20, 140 }, { 130, 170 }};
static const XStringRes _Const0070 = { _StringsDefault0, 0x0133 };
static const XRect _Const0071 = {{ 0, 0 }, { 110, 160 }};
static const XRect _Const0072 = {{ 0, 0 }, { 100, 160 }};
static const XStringRes _Const0073 = { _StringsDefault0, 0x0149 };
static const XRect _Const0074 = {{ 10, 0 }, { 110, 160 }};
static const XRect _Const0075 = {{ 0, 0 }, { 1, 40 }};
static const XRect _Const0076 = {{ 108, 0 }, { 110, 40 }};
static const XRect _Const0077 = {{ 0, 0 }, { 136, 44 }};
static const XRect _Const0078 = {{ 0, 0 }, { 138, 48 }};
static const XPoint _Const0079 = { 0, 36 };
static const XPoint _Const007A = { 126, 36 };
static const XRect _Const007B = {{ 0, 0 }, { 126, 36 }};
static const XColor _Const007C = { 0xFF, 0xB6, 0x5F, 0xFF };
static const XStringRes _Const007D = { _StringsDefault0, 0x014F };
static const XStringRes _Const007E = { _StringsDefault0, 0x0158 };
static const XStringRes _Const007F = { _StringsDefault0, 0x0160 };

#ifndef EW_DONT_CHECK_INDEX
  /* This function is used to check the indices when accessing an array.
     If you don't want this verification add the define EW_DONT_CHECK_INDEX
     to your Makefile or project settings. */
  static int EwCheckIndex( int aIndex, int aRange, const char* aFile, int aLine )
  {
    if (( aIndex < 0 ) || ( aIndex >= aRange ))
    {
      EwPrint( "[FATAL ERROR in %s:%d] Array index %d out of bounds %d",
                aFile, aLine, aIndex, aRange );
      EwPanic();
    }
    return aIndex;
  }

  #define EwCheckIndex( aIndex, aRange ) \
    EwCheckIndex( aIndex, aRange, __FILE__, __LINE__ )
#else
  #define EwCheckIndex( aIndex, aRange ) aIndex
#endif

/* Initializer for the class 'Washer::DeviceClass' */
void WasherDeviceClass__Init( WasherDeviceClass _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  CoreSystemEvent__Init( &_this->ProgramUpdateEvent, &_this->_XObject, 0 );
  CoreSystemEvent__Init( &_this->TempUpdateEvent, &_this->_XObject, 0 );
  CoreSystemEvent__Init( &_this->SpinUpdateEvent, &_this->_XObject, 0 );
  CoreSystemEvent__Init( &_this->OptionUpdateEvent, &_this->_XObject, 0 );
  CoreSystemEvent__Init( &_this->HourUpdateEvent, &_this->_XObject, 0 );
  CoreSystemEvent__Init( &_this->MinuteUpdateEvent, &_this->_XObject, 0 );
  CoreSystemEvent__Init( &_this->RunningUpdateEvent, &_this->_XObject, 0 );
  CoreSystemEvent__Init( &_this->SetProgEvent, &_this->_XObject, 0 );
  CoreSystemEvent__Init( &_this->SetTempEvent, &_this->_XObject, 0 );
  CoreSystemEvent__Init( &_this->SetSpinEvent, &_this->_XObject, 0 );
  CoreSystemEvent__Init( &_this->SetOptionEvent, &_this->_XObject, 0 );
  CoreSystemEvent__Init( &_this->SetHourEvent, &_this->_XObject, 0 );
  CoreSystemEvent__Init( &_this->SetMinuteEvent, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WasherDeviceClass );

  /* ... and initialize objects, variables, properties, etc. */
  EwRetainString( &_this->WashingProgram[ 0 ], EwLoadString( &_Const0000 ));
  EwRetainString( &_this->WashingProgram[ 1 ], EwLoadString( &_Const0001 ));
  EwRetainString( &_this->WashingProgram[ 2 ], EwLoadString( &_Const0002 ));
  EwRetainString( &_this->WashingProgram[ 3 ], EwLoadString( &_Const0003 ));
  EwRetainString( &_this->WashingProgram[ 4 ], EwLoadString( &_Const0004 ));
  EwRetainString( &_this->WashingProgram[ 5 ], EwLoadString( &_Const0005 ));
  EwRetainString( &_this->WashingProgram[ 6 ], EwLoadString( &_Const0006 ));
  EwRetainString( &_this->WashingProgram[ 7 ], EwLoadString( &_Const0007 ));
  EwRetainString( &_this->WashingProgram[ 8 ], EwLoadString( &_Const0008 ));
  EwRetainString( &_this->WashingTemp[ 0 ], EwLoadString( &_Const0009 ));
  EwRetainString( &_this->WashingTemp[ 1 ], EwLoadString( &_Const000A ));
  EwRetainString( &_this->WashingTemp[ 2 ], EwLoadString( &_Const000B ));
  EwRetainString( &_this->WashingTemp[ 3 ], EwLoadString( &_Const000C ));
  EwRetainString( &_this->WashingTemp[ 4 ], EwLoadString( &_Const000D ));
  EwRetainString( &_this->WashingTemp[ 5 ], EwLoadString( &_Const000E ));
  EwRetainString( &_this->Options[ 0 ], EwLoadString( &_Const000F ));
  EwRetainString( &_this->Options[ 1 ], EwLoadString( &_Const0010 ));
  EwRetainString( &_this->SpinTurn[ 0 ], EwLoadString( &_Const0011 ));
  EwRetainString( &_this->SpinTurn[ 1 ], EwLoadString( &_Const0012 ));
  EwRetainString( &_this->SpinTurn[ 2 ], EwLoadString( &_Const0013 ));
  EwRetainString( &_this->SpinTurn[ 3 ], EwLoadString( &_Const0014 ));
  EwRetainString( &_this->SpinTurn[ 4 ], EwLoadString( &_Const0015 ));
  EwRetainString( &_this->SpinTurn[ 5 ], EwLoadString( &_Const0016 ));
}

/* Re-Initializer for the class 'Washer::DeviceClass' */
void WasherDeviceClass__ReInit( WasherDeviceClass _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  CoreSystemEvent__ReInit( &_this->ProgramUpdateEvent );
  CoreSystemEvent__ReInit( &_this->TempUpdateEvent );
  CoreSystemEvent__ReInit( &_this->SpinUpdateEvent );
  CoreSystemEvent__ReInit( &_this->OptionUpdateEvent );
  CoreSystemEvent__ReInit( &_this->HourUpdateEvent );
  CoreSystemEvent__ReInit( &_this->MinuteUpdateEvent );
  CoreSystemEvent__ReInit( &_this->RunningUpdateEvent );
  CoreSystemEvent__ReInit( &_this->SetProgEvent );
  CoreSystemEvent__ReInit( &_this->SetTempEvent );
  CoreSystemEvent__ReInit( &_this->SetSpinEvent );
  CoreSystemEvent__ReInit( &_this->SetOptionEvent );
  CoreSystemEvent__ReInit( &_this->SetHourEvent );
  CoreSystemEvent__ReInit( &_this->SetMinuteEvent );
}

/* Finalizer method for the class 'Washer::DeviceClass' */
void WasherDeviceClass__Done( WasherDeviceClass _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( WasherDeviceClass );

  /* Finalize all embedded objects */
  CoreSystemEvent__Done( &_this->ProgramUpdateEvent );
  CoreSystemEvent__Done( &_this->TempUpdateEvent );
  CoreSystemEvent__Done( &_this->SpinUpdateEvent );
  CoreSystemEvent__Done( &_this->OptionUpdateEvent );
  CoreSystemEvent__Done( &_this->HourUpdateEvent );
  CoreSystemEvent__Done( &_this->MinuteUpdateEvent );
  CoreSystemEvent__Done( &_this->RunningUpdateEvent );
  CoreSystemEvent__Done( &_this->SetProgEvent );
  CoreSystemEvent__Done( &_this->SetTempEvent );
  CoreSystemEvent__Done( &_this->SetSpinEvent );
  CoreSystemEvent__Done( &_this->SetOptionEvent );
  CoreSystemEvent__Done( &_this->SetHourEvent );
  CoreSystemEvent__Done( &_this->SetMinuteEvent );

  /* Release all used strings */
  EwReleaseStrings( _this->WashingProgram );
  EwReleaseStrings( _this->WashingTemp );
  EwReleaseStrings( _this->Options );
  EwReleaseStrings( _this->SpinTurn );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_Super );
}

/* 'C' function for method : 'Washer::DeviceClass.OnSetProgramNumber()' */
void WasherDeviceClass_OnSetProgramNumber( WasherDeviceClass _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value >= 9 )
    value = 8;

  if ( value == _this->ProgramNumber )
    return;

  _this->ProgramNumber = value;
  {
    /* Implement here your C code to stop the brewing process in
      the device. If necessary, predeclare the C functions intended
      to be used here. For example: */
    Device_SetProgram( value );
  }
  EwNotifyRefObservers( EwNewRef( _this, WasherDeviceClass_OnGetProgramNumber, WasherDeviceClass_OnSetProgramNumber ), 
    0 );
}

/* 'C' function for method : 'Washer::DeviceClass.OnSetTempNumber()' */
void WasherDeviceClass_OnSetTempNumber( WasherDeviceClass _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value >= 6 )
    value = 5;

  if ( value == _this->TempNumber )
    return;

  _this->TempNumber = value;
  {
    /* Implement here your C code to stop the brewing process in
      the device. If necessary, predeclare the C functions intended
      to be used here. For example: */
    Device_SetTemp( value );
  }
  EwNotifyRefObservers( EwNewRef( _this, WasherDeviceClass_OnGetTempNumber, WasherDeviceClass_OnSetTempNumber ), 
    0 );
}

/* 'C' function for method : 'Washer::DeviceClass.OnSetOptionNumber()' */
void WasherDeviceClass_OnSetOptionNumber( WasherDeviceClass _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value >= 2 )
    value = 1;

  if ( value == _this->OptionNumber )
    return;

  _this->OptionNumber = value;
  {
    /* Implement here your C code to stop the brewing process in
      the device. If necessary, predeclare the C functions intended
      to be used here. For example: */
    Device_SetOption( value );
  }
  EwNotifyRefObservers( EwNewRef( _this, WasherDeviceClass_OnGetOptionNumber, WasherDeviceClass_OnSetOptionNumber ), 
    0 );
}

/* 'C' function for method : 'Washer::DeviceClass.OnSetHour()' */
void WasherDeviceClass_OnSetHour( WasherDeviceClass _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value > 59 )
    value = 59;

  if ( value == _this->Hour )
    return;

  _this->Hour = value;
  {
    /* Implement here your C code to stop the brewing process in
      the device. If necessary, predeclare the C functions intended
      to be used here. For example: */
    Device_SetMinute( value );
  }
  EwNotifyRefObservers( EwNewRef( _this, WasherDeviceClass_OnGetHour, WasherDeviceClass_OnSetHour ), 
    0 );
}

/* 'C' function for method : 'Washer::DeviceClass.OnSetMinute()' */
void WasherDeviceClass_OnSetMinute( WasherDeviceClass _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value > 59 )
    value = 59;

  if ( value == _this->Minute )
    return;

  _this->Minute = value;
  {
    /* Implement here your C code to stop the brewing process in
      the device. If necessary, predeclare the C functions intended
      to be used here. For example: */
    Device_SetSecond( value );
  }
  EwNotifyRefObservers( EwNewRef( _this, WasherDeviceClass_OnGetMinute, WasherDeviceClass_OnSetMinute ), 
    0 );
}

/* 'C' function for method : 'Washer::DeviceClass.OnSetSpinNumber()' */
void WasherDeviceClass_OnSetSpinNumber( WasherDeviceClass _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value >= 6 )
    value = 5;

  if ( value == _this->SpinNumber )
    return;

  _this->SpinNumber = value;
  {
    /* Implement here your C code to stop the brewing process in
      the device. If necessary, predeclare the C functions intended
      to be used here. For example: */
    Device_SetSpin( value );
  }
  EwNotifyRefObservers( EwNewRef( _this, WasherDeviceClass_OnGetSpinNumber, WasherDeviceClass_OnSetSpinNumber ), 
    0 );
}

/* 'C' function for method : 'Washer::DeviceClass.UpdateProgram()' */
void WasherDeviceClass_UpdateProgram( WasherDeviceClass _this, XInt32 aArg1 )
{
  if ( aArg1 < 0 )
    aArg1 = 0;

  if ( aArg1 >= 9 )
    aArg1 = 8;

  if ( aArg1 == _this->ProgramNumber )
    return;

  _this->ProgramNumber = aArg1;
  CoreSystemEvent_Trigger( &_this->ProgramUpdateEvent, 0, 0 );
  EwNotifyRefObservers( EwNewRef( _this, WasherDeviceClass_OnGetProgramNumber, WasherDeviceClass_OnSetProgramNumber ), 
    0 );
}

/* Wrapper function for the non virtual method : 'Washer::DeviceClass.UpdateProgram()' */
void WasherDeviceClass__UpdateProgram( void* _this, XInt32 aArg1 )
{
  WasherDeviceClass_UpdateProgram((WasherDeviceClass)_this, aArg1 );
}

/* 'C' function for method : 'Washer::DeviceClass.OnSetRunning()' */
void WasherDeviceClass_OnSetRunning( WasherDeviceClass _this, XBool value )
{
  if ( _this->Running == value )
    return;

  _this->Running = value;
  CoreSystemEvent_Trigger( &_this->SetProgEvent, 0, 0 );
  CoreSystemEvent_Trigger( &_this->SetTempEvent, 0, 0 );
  CoreSystemEvent_Trigger( &_this->SetSpinEvent, 0, 0 );
  CoreSystemEvent_Trigger( &_this->SetOptionEvent, 0, 0 );
  CoreSystemEvent_Trigger( &_this->SetHourEvent, 0, 0 );
  CoreSystemEvent_Trigger( &_this->SetMinuteEvent, 0, 0 );
  {
    /* Implement here your C code to stop the brewing process in
      the device. If necessary, predeclare the C functions intended
      to be used here. For example: */
    Device_SetRunning( value );
  }
  EwNotifyRefObservers( EwNewRef( _this, WasherDeviceClass_OnGetRunning, WasherDeviceClass_OnSetRunning ), 
    0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void WasherDeviceClass_UpdateTemp( WasherDeviceClass _this, XInt32 aArg1 )
{
  if ( aArg1 < 0 )
    aArg1 = 0;

  if ( aArg1 >= 6 )
    aArg1 = 5;

  if ( aArg1 == _this->TempNumber )
    return;

  _this->TempNumber = aArg1;
  CoreSystemEvent_Trigger( &_this->TempUpdateEvent, 0, 0 );
  EwNotifyRefObservers( EwNewRef( _this, WasherDeviceClass_OnGetTempNumber, WasherDeviceClass_OnSetTempNumber ), 
    0 );
}

/* Wrapper function for the non virtual method : 'Washer::DeviceClass.UpdateTemp()' */
void WasherDeviceClass__UpdateTemp( void* _this, XInt32 aArg1 )
{
  WasherDeviceClass_UpdateTemp((WasherDeviceClass)_this, aArg1 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void WasherDeviceClass_UpdateSpin( WasherDeviceClass _this, XInt32 aArg1 )
{
  if ( aArg1 < 0 )
    aArg1 = 0;

  if ( aArg1 >= 6 )
    aArg1 = 5;

  if ( aArg1 == _this->SpinNumber )
    return;

  _this->SpinNumber = aArg1;
  CoreSystemEvent_Trigger( &_this->SpinUpdateEvent, 0, 0 );
  EwNotifyRefObservers( EwNewRef( _this, WasherDeviceClass_OnGetSpinNumber, WasherDeviceClass_OnSetSpinNumber ), 
    0 );
}

/* Wrapper function for the non virtual method : 'Washer::DeviceClass.UpdateSpin()' */
void WasherDeviceClass__UpdateSpin( void* _this, XInt32 aArg1 )
{
  WasherDeviceClass_UpdateSpin((WasherDeviceClass)_this, aArg1 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void WasherDeviceClass_UpdateOption( WasherDeviceClass _this, XInt32 aArg1 )
{
  if ( aArg1 < 0 )
    aArg1 = 0;

  if ( aArg1 >= 2 )
    aArg1 = 1;

  if ( aArg1 == _this->OptionNumber )
    return;

  _this->OptionNumber = aArg1;
  CoreSystemEvent_Trigger( &_this->OptionUpdateEvent, 0, 0 );
  EwNotifyRefObservers( EwNewRef( _this, WasherDeviceClass_OnGetOptionNumber, WasherDeviceClass_OnSetOptionNumber ), 
    0 );
}

/* Wrapper function for the non virtual method : 'Washer::DeviceClass.UpdateOption()' */
void WasherDeviceClass__UpdateOption( void* _this, XInt32 aArg1 )
{
  WasherDeviceClass_UpdateOption((WasherDeviceClass)_this, aArg1 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void WasherDeviceClass_UpdateMinute( WasherDeviceClass _this, XInt32 aArg1 )
{
  if ( aArg1 < 0 )
    aArg1 = 0;

  if ( aArg1 > 59 )
    aArg1 = 59;

  if ( aArg1 == _this->Hour )
    return;

  _this->Hour = aArg1;
  CoreSystemEvent_Trigger( &_this->HourUpdateEvent, 0, 0 );
  EwNotifyRefObservers( EwNewRef( _this, WasherDeviceClass_OnGetHour, WasherDeviceClass_OnSetHour ), 
    0 );
}

/* Wrapper function for the non virtual method : 'Washer::DeviceClass.UpdateMinute()' */
void WasherDeviceClass__UpdateMinute( void* _this, XInt32 aArg1 )
{
  WasherDeviceClass_UpdateMinute((WasherDeviceClass)_this, aArg1 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void WasherDeviceClass_UpdateSecond( WasherDeviceClass _this, XInt32 aArg1 )
{
  if ( aArg1 < 0 )
    aArg1 = 0;

  if ( aArg1 > 59 )
    aArg1 = 59;

  if ( aArg1 == _this->Minute )
    return;

  _this->Minute = aArg1;
  CoreSystemEvent_Trigger( &_this->MinuteUpdateEvent, 0, 0 );
  EwNotifyRefObservers( EwNewRef( _this, WasherDeviceClass_OnGetMinute, WasherDeviceClass_OnSetMinute ), 
    0 );
}

/* Wrapper function for the non virtual method : 'Washer::DeviceClass.UpdateSecond()' */
void WasherDeviceClass__UpdateSecond( void* _this, XInt32 aArg1 )
{
  WasherDeviceClass_UpdateSecond((WasherDeviceClass)_this, aArg1 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void WasherDeviceClass_UpdateRunning( WasherDeviceClass _this, XBool aArg1 )
{
  if ( aArg1 == _this->Running )
    return;

  _this->Running = aArg1;
  CoreSystemEvent_Trigger( &_this->RunningUpdateEvent, 0, 0 );
  CoreSystemEvent_Trigger( &_this->SetProgEvent, 0, 0 );
  CoreSystemEvent_Trigger( &_this->SetTempEvent, 0, 0 );
  CoreSystemEvent_Trigger( &_this->SetSpinEvent, 0, 0 );
  CoreSystemEvent_Trigger( &_this->SetOptionEvent, 0, 0 );
  CoreSystemEvent_Trigger( &_this->SetHourEvent, 0, 0 );
  CoreSystemEvent_Trigger( &_this->SetMinuteEvent, 0, 0 );
  EwNotifyRefObservers( EwNewRef( _this, WasherDeviceClass_OnGetRunning, WasherDeviceClass_OnSetRunning ), 
    0 );
}

/* Wrapper function for the non virtual method : 'Washer::DeviceClass.UpdateRunning()' */
void WasherDeviceClass__UpdateRunning( void* _this, XBool aArg1 )
{
  WasherDeviceClass_UpdateRunning((WasherDeviceClass)_this, aArg1 );
}

/* Default onget method for the property 'ProgramNumber' */
XInt32 WasherDeviceClass_OnGetProgramNumber( WasherDeviceClass _this )
{
  return _this->ProgramNumber;
}

/* Default onget method for the property 'TempNumber' */
XInt32 WasherDeviceClass_OnGetTempNumber( WasherDeviceClass _this )
{
  return _this->TempNumber;
}

/* Default onget method for the property 'OptionNumber' */
XInt32 WasherDeviceClass_OnGetOptionNumber( WasherDeviceClass _this )
{
  return _this->OptionNumber;
}

/* Default onget method for the property 'Hour' */
XInt32 WasherDeviceClass_OnGetHour( WasherDeviceClass _this )
{
  return _this->Hour;
}

/* Default onget method for the property 'Minute' */
XInt32 WasherDeviceClass_OnGetMinute( WasherDeviceClass _this )
{
  return _this->Minute;
}

/* Default onget method for the property 'SpinNumber' */
XInt32 WasherDeviceClass_OnGetSpinNumber( WasherDeviceClass _this )
{
  return _this->SpinNumber;
}

/* Default onget method for the property 'Running' */
XBool WasherDeviceClass_OnGetRunning( WasherDeviceClass _this )
{
  return _this->Running;
}

/* Variants derived from the class : 'Washer::DeviceClass' */
EW_DEFINE_CLASS_VARIANTS( WasherDeviceClass )
EW_END_OF_CLASS_VARIANTS( WasherDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Washer::DeviceClass' */
EW_DEFINE_CLASS( WasherDeviceClass, XObject, ProgramUpdateEvent, ProgramUpdateEvent, 
                 ProgramUpdateEvent, ProgramUpdateEvent, ProgramNumber, "Washer::DeviceClass" )
EW_END_OF_CLASS( WasherDeviceClass )

/* Initializer for the class 'Washer::ProgList' */
void WasherProgList__Init( WasherProgList _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_XObject, 0 );
  CoreVerticalList__Init( &_this->BottomList, &_this->_XObject, 0 );
  CoreVerticalList__Init( &_this->MainList, &_this->_XObject, 0 );
  CoreVerticalList__Init( &_this->TopList, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->FadeListIn, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Caption, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->FadeCaption, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->FadeListOut, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->Int32Effect, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->AutoDemoEffect, &_this->_XObject, 0 );
  CoreSystemEventHandler__Init( &_this->ProgramUpdateEventHandler, &_this->_XObject, 0 );
  CoreSystemEventHandler__Init( &_this->SetProgEventHandler, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WasherProgList );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0017 );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const0017 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->SlideTouchHandler, _Const0018 );
  CoreSlideTouchHandler_OnSetFriction( &_this->SlideTouchHandler, 0.100000f );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->SimpleTouchHandler, _Const0019 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->SimpleTouchHandler, _Const001A );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->SimpleTouchHandler, _Const001B );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->SimpleTouchHandler, _Const001C );
  CoreView_OnSetLayout((CoreView)&_this->Rectangle, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const001D );
  ViewsRectangle_OnSetColor( &_this->Rectangle, WasherButtonBgColor );
  CoreRectView__OnSetBounds( &_this->BottomList, _Const001E );
  CoreGroup__OnSetOpacity( &_this->BottomList, 0 );
  CoreVerticalList_OnSetItemHeight( &_this->BottomList, 24 );
  CoreVerticalList_OnSetNoOfItems( &_this->BottomList, 9 );
  CoreVerticalList_OnSetItemClass( &_this->BottomList, EW_CLASS( WasherProgItemS ));
  CoreRectView__OnSetBounds( &_this->MainList, _Const001D );
  CoreVerticalList_OnSetItemHeight( &_this->MainList, 96 );
  CoreVerticalList_OnSetNoOfItems( &_this->MainList, 9 );
  CoreVerticalList_OnSetItemClass( &_this->MainList, EW_CLASS( WasherProgItemL ));
  CoreRectView__OnSetBounds( &_this->TopList, _Const001F );
  CoreGroup__OnSetOpacity( &_this->TopList, 0 );
  CoreVerticalList_OnSetItemHeight( &_this->TopList, 24 );
  CoreVerticalList_OnSetNoOfItems( &_this->TopList, 9 );
  CoreVerticalList_OnSetItemClass( &_this->TopList, EW_CLASS( WasherProgItemS ));
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->FadeListIn, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->FadeListIn, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->FadeListIn, 300 );
  CoreRectView__OnSetBounds( &_this->Caption, _Const0020 );
  ViewsText_OnSetAlignment( &_this->Caption, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Caption, EwLoadString( &_Const0021 ));
  ViewsText_OnSetColor( &_this->Caption, WasherCaptionColor );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->FadeCaption, EffectsTimingFastIn_FastOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->FadeCaption, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->FadeCaption, 200 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->FadeListOut, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->FadeListOut, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->FadeListOut, 1000 );
  EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->FadeListOut, 2000 );
  _this->FadeListOut.Value2 = 0;
  _this->FadeListOut.Value1 = 255;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->Int32Effect, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->Int32Effect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->Int32Effect, 200 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->AutoDemoEffect, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->AutoDemoEffect, 300 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BottomList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->MainList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Caption ), 0 );
  _this->SlideTouchHandler.OnEnd = EwNewSlot( _this, WasherProgList_OnEnd );
  _this->SlideTouchHandler.OnStart = EwNewSlot( _this, WasherProgList_OnStart );
  _this->SimpleTouchHandler.OnDrag = EwNewSlot( _this, WasherProgList_OnDrag );
  _this->SimpleTouchHandler.OnRelease = EwNewSlot( _this, WasherProgList_OnRelease );
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, WasherProgList_OnStart );
  _this->BottomList.OnLoadItem = EwNewSlot( _this, WasherProgList_OnLoadBottom );
  _this->MainList.OnUpdate = EwNewSlot( _this, WasherProgList_OnUpdate );
  _this->MainList.OnLoadItem = EwNewSlot( _this, WasherProgList_OnLoadMain );
  CoreVerticalList_OnSetSlideHandler( &_this->MainList, &_this->SlideTouchHandler );
  _this->TopList.OnLoadItem = EwNewSlot( _this, WasherProgList_OnLoadTop );
  _this->FadeListIn.Super1.OnAnimate = EwNewSlot( _this, WasherProgList_onAnimate );
  _this->FadeListIn.Outlet = EwNewRef( &_this->TopList, CoreGroup_OnGetOpacity, 
  CoreGroup__OnSetOpacity );
  ViewsText_OnSetFont( &_this->Caption, EwLoadResource( &WasherDescrFont, ResourcesFont ));
  _this->FadeCaption.Outlet = EwNewRef( &_this->Caption, ViewsText_OnGetOpacity, 
  ViewsText_OnSetOpacity );
  _this->FadeListOut.Super1.OnAnimate = EwNewSlot( _this, WasherProgList_onAnimate );
  _this->FadeListOut.Outlet = EwNewRef( &_this->TopList, CoreGroup_OnGetOpacity, 
  CoreGroup__OnSetOpacity );
  _this->ProgramUpdateEventHandler.OnEvent = EwNewSlot( _this, WasherProgList_onEvent );
  CoreSystemEventHandler_OnSetEvent( &_this->ProgramUpdateEventHandler, &EwGetAutoObject( 
  &WasherDevice, WasherDeviceClass )->ProgramUpdateEvent );
  _this->SetProgEventHandler.OnEvent = EwNewSlot( _this, WasherProgList_onEventSet );
  CoreSystemEventHandler_OnSetEvent( &_this->SetProgEventHandler, &EwGetAutoObject( 
  &WasherDevice, WasherDeviceClass )->SetProgEvent );
}

/* Re-Initializer for the class 'Washer::ProgList' */
void WasherProgList__ReInit( WasherProgList _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
  ViewsRectangle__ReInit( &_this->Rectangle );
  CoreVerticalList__ReInit( &_this->BottomList );
  CoreVerticalList__ReInit( &_this->MainList );
  CoreVerticalList__ReInit( &_this->TopList );
  EffectsInt32Effect__ReInit( &_this->FadeListIn );
  ViewsText__ReInit( &_this->Caption );
  EffectsInt32Effect__ReInit( &_this->FadeCaption );
  EffectsInt32Effect__ReInit( &_this->FadeListOut );
  EffectsInt32Effect__ReInit( &_this->Int32Effect );
  EffectsInt32Effect__ReInit( &_this->AutoDemoEffect );
  CoreSystemEventHandler__ReInit( &_this->ProgramUpdateEventHandler );
  CoreSystemEventHandler__ReInit( &_this->SetProgEventHandler );
}

/* Finalizer method for the class 'Washer::ProgList' */
void WasherProgList__Done( WasherProgList _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( WasherProgList );

  /* Finalize all embedded objects */
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );
  ViewsRectangle__Done( &_this->Rectangle );
  CoreVerticalList__Done( &_this->BottomList );
  CoreVerticalList__Done( &_this->MainList );
  CoreVerticalList__Done( &_this->TopList );
  EffectsInt32Effect__Done( &_this->FadeListIn );
  ViewsText__Done( &_this->Caption );
  EffectsInt32Effect__Done( &_this->FadeCaption );
  EffectsInt32Effect__Done( &_this->FadeListOut );
  EffectsInt32Effect__Done( &_this->Int32Effect );
  EffectsInt32Effect__Done( &_this->AutoDemoEffect );
  CoreSystemEventHandler__Done( &_this->ProgramUpdateEventHandler );
  CoreSystemEventHandler__Done( &_this->SetProgEventHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Slot method to load content of main scroll list. */
void WasherProgList_OnLoadMain( WasherProgList _this, XObject sender )
{
  WasherProgItemL itemView;
  XInt32 itemNo;
  XString caption;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemView = EwCastObject( _this->MainList.View, WasherProgItemL );
  itemNo = _this->MainList.Item;
  caption = 0;

  if (( itemNo >= 0 ) && ( itemNo < 9 ))
    caption = EwGetAutoObject( &WasherDevice, WasherDeviceClass )->WashingProgram[ 
    EwCheckIndex( itemNo, 9 )];

  WasherProgItemL_OnSetCaption( itemView, caption );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->MainList.Super2.Bounds ), _this->MainList.ItemHeight )));
}

/* Slot method to load content of upper scroll list. */
void WasherProgList_OnLoadTop( WasherProgList _this, XObject sender )
{
  WasherProgItemS itemView;
  XInt32 itemNo;
  XString caption;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemView = EwCastObject( _this->TopList.View, WasherProgItemS );
  itemNo = _this->TopList.Item;
  caption = 0;

  if (( itemNo >= 0 ) && ( itemNo < 9 ))
    caption = EwGetAutoObject( &WasherDevice, WasherDeviceClass )->WashingProgram[ 
    EwCheckIndex( itemNo, 9 )];

  WasherProgItemS_OnSetCaption( itemView, caption );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->TopList.Super2.Bounds ), _this->TopList.ItemHeight )));
}

/* Slot method to synchronize the scrolling of the upper/lower list with the current 
   scroll position of the center list. */
void WasherProgList_OnUpdate( WasherProgList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_OnSetScrollOffset( &_this->TopList, (( _this->MainList.ScrollOffset 
  * _this->TopList.ItemHeight ) / _this->MainList.ItemHeight ) + EwGetRectH( _this->TopList.Super2.Bounds ));
  CoreVerticalList_OnSetScrollOffset( &_this->BottomList, (( _this->MainList.ScrollOffset 
  * _this->BottomList.ItemHeight ) / _this->MainList.ItemHeight ) - _this->BottomList.ItemHeight );
}

/* Slot method to load content of lower scroll list. */
void WasherProgList_OnLoadBottom( WasherProgList _this, XObject sender )
{
  WasherProgItemS itemView;
  XInt32 itemNo;
  XString caption;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemView = EwCastObject( _this->BottomList.View, WasherProgItemS );
  itemNo = _this->BottomList.Item;
  caption = 0;

  if (( itemNo >= 0 ) && ( itemNo < 9 ))
    caption = EwGetAutoObject( &WasherDevice, WasherDeviceClass )->WashingProgram[ 
    EwCheckIndex( itemNo, 9 )];

  WasherProgItemS_OnSetCaption( itemView, caption );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->BottomList.Super2.Bounds ), _this->BottomList.ItemHeight )));
}

/* Slot method to change the selection, when the item has reached its parking position. */
void WasherProgList_OnEnd( WasherProgList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  WasherDeviceClass_OnSetProgramNumber( EwGetAutoObject( &WasherDevice, WasherDeviceClass ), 
  -_this->MainList.ScrollOffset / _this->MainList.ItemHeight );
  _this->FadeListOut.Value1 = _this->TopList.Super1.Opacity;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeListOut, 1 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 0 );
  _this->FadeCaption.Value1 = _this->Caption.Opacity;
  _this->FadeCaption.Value2 = 255;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 1 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandler, 1 );
}

/* Slot method to make the upper/lower list visible. */
void WasherProgList_OnStart( WasherProgList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( _this->TopList.Super1.Opacity != 255 ) && !_this->FadeListIn.Super1.Enabled )
  {
    _this->FadeListIn.Value1 = _this->TopList.Super1.Opacity;
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeListIn, 1 );
  }

  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeListOut, 0 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 0 );
  _this->FadeCaption.Value1 = _this->Caption.Opacity;
  _this->FadeCaption.Value2 = 0;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 1 );
}

/* This is a slot method. */
void WasherProgList_onAnimate( WasherProgList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup__OnSetOpacity( &_this->BottomList, _this->TopList.Super1.Opacity );
}

/* 'C' function for method : 'Washer::ProgList.OnDrag()' */
void WasherProgList_OnDrag( WasherProgList _this, XObject sender )
{
  XPoint delta;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  delta = EwMovePointNeg( _this->SimpleTouchHandler.CurrentPos, _this->SimpleTouchHandler.HittingPos );

  if (( delta.Y > 8 ) || ( delta.Y < -8 ))
  {
    CoreRoot_DeflectCursor( CoreView__GetRoot( _this ), ((CoreView)&_this->SlideTouchHandler ), 
    _Const001C );
    CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandler, 0 );
  }
}

/* 'C' function for method : 'Washer::ProgList.OnRelease()' */
void WasherProgList_OnRelease( WasherProgList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->SimpleTouchHandler.AutoDeflected && ( _this->TopList.Super1.Opacity 
      == 255 ))
  {
    XInt32 delta = 0;

    if ( _this->SimpleTouchHandler.CurrentPos.Y < _this->MainList.Super2.Bounds.Point1.Y )
      delta = (( _this->SimpleTouchHandler.CurrentPos.Y - _this->MainList.Super2.Bounds.Point1.Y ) 
      / _this->TopList.ItemHeight ) - 1;
    else
      if ( _this->SimpleTouchHandler.CurrentPos.Y > _this->MainList.Super2.Bounds.Point2.Y )
        delta = (( _this->SimpleTouchHandler.CurrentPos.Y - _this->MainList.Super2.Bounds.Point2.Y ) 
        / _this->BottomList.ItemHeight ) + 1;

    if ( delta != 0 )
    {
      XInt32 item = ( -_this->MainList.ScrollOffset / _this->MainList.ItemHeight ) 
        + delta;
      CoreVerticalList_EnsureVisible( &_this->MainList, item, 1, &_this->Int32Effect, 
      EwNullSlot );
      WasherDeviceClass_OnSetProgramNumber( EwGetAutoObject( &WasherDevice, WasherDeviceClass ), 
      item );
    }
  }

  _this->FadeListOut.Value1 = _this->TopList.Super1.Opacity;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeListOut, 1 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 0 );
  _this->FadeCaption.Value1 = _this->Caption.Opacity;
  _this->FadeCaption.Value2 = 255;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 1 );
}

/* Slot method to trigger the next phase of the auto demo. */
void WasherProgList_AutoDemo( WasherProgList _this, XObject sender )
{
  XInt32 val;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( EwNewSlot( _this, WasherProgList_OnStart ), ((XObject)_this ));
  val = EwGetAutoObject( &WasherDevice, WasherDeviceClass )->ProgramNumber + 1;

  if ( val >= 9 )
    val = 0;

  CoreVerticalList_EnsureVisible( &_this->MainList, val, 1, &_this->AutoDemoEffect, 
  EwNewSlot( _this, WasherProgList_OnEnd ));
}

/* This slot method is executed when the associated system event handler 'SystemEventHandler' 
   receives an event. */
void WasherProgList_onEvent( WasherProgList _this, XObject sender )
{
  XInt32 val;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( EwNewSlot( _this, WasherProgList_DeviceStart ), ((XObject)_this ));
  val = EwGetAutoObject( &WasherDevice, WasherDeviceClass )->ProgramNumber;
  CoreVerticalList_EnsureVisible( &_this->MainList, val, 1, 0, EwNewSlot( _this, 
  WasherProgList_DeviceEnd ));
}

/* 'C' function for method : 'Washer::ProgList.DeviceStart()' */
void WasherProgList_DeviceStart( WasherProgList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );
}

/* 'C' function for method : 'Washer::ProgList.DeviceEnd()' */
void WasherProgList_DeviceEnd( WasherProgList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 0 );
  _this->FadeCaption.Value1 = _this->Caption.Opacity;
  _this->FadeCaption.Value2 = 255;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 1 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandler, 1 );
}

/* This slot method is executed when the associated system event handler 'SystemEventHandler' 
   receives an event. */
void WasherProgList_onEventSet( WasherProgList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwGetAutoObject( &WasherDevice, WasherDeviceClass )->Running )
  {
    CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandler, 0 );
    CoreSlideTouchHandler_OnSetEnabled( &_this->SlideTouchHandler, 0 );
  }
  else
  {
    CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandler, 1 );
    CoreSlideTouchHandler_OnSetEnabled( &_this->SlideTouchHandler, 1 );
  }
}

/* Variants derived from the class : 'Washer::ProgList' */
EW_DEFINE_CLASS_VARIANTS( WasherProgList )
EW_END_OF_CLASS_VARIANTS( WasherProgList )

/* Virtual Method Table (VMT) for the class : 'Washer::ProgList' */
EW_DEFINE_CLASS( WasherProgList, CoreGroup, SlideTouchHandler, SlideTouchHandler, 
                 SlideTouchHandler, SlideTouchHandler, _None, "Washer::ProgList" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( WasherProgList )

/* Initializer for the class 'Washer::ProgItemL' */
void WasherProgItemL__Init( WasherProgItemL _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WasherProgItemL );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0022 );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text, _Const0023 );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0024 ));
  ViewsText_OnSetColor( &_this->Text, WasherButtonTextColor );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &WasherListFontL, ResourcesFont ));
}

/* Re-Initializer for the class 'Washer::ProgItemL' */
void WasherProgItemL__ReInit( WasherProgItemL _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Washer::ProgItemL' */
void WasherProgItemL__Done( WasherProgItemL _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( WasherProgItemL );

  /* Finalize all embedded objects */
  ViewsText__Done( &_this->Text );

  /* Release all used strings */
  EwReleaseString( &_this->Caption );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* 'C' function for method : 'Washer::ProgItemL.OnSetCaption()' */
void WasherProgItemL_OnSetCaption( WasherProgItemL _this, XString value )
{
  EwRetainString( &_this->Caption, value );
  ViewsText_OnSetString( &_this->Text, value );
}

/* Variants derived from the class : 'Washer::ProgItemL' */
EW_DEFINE_CLASS_VARIANTS( WasherProgItemL )
EW_END_OF_CLASS_VARIANTS( WasherProgItemL )

/* Virtual Method Table (VMT) for the class : 'Washer::ProgItemL' */
EW_DEFINE_CLASS( WasherProgItemL, CoreGroup, Text, Text, Text, Text, Caption, "Washer::ProgItemL" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( WasherProgItemL )

/* This is a font resource. */
EW_DEFINE_FONT_RES( WasherListFontS, 14, 4, 0, 16, 0x0001, 0x00C1 )
  EW_GLYPH( 0x0001, 1, -9, 7, 9, 9, 0x00000000 ),
  EW_GLYPH( 0x0020, 0, 0, 0, 0, 3, 0x000000E4 ),                /* ' ' */
  EW_GLYPH( 0x0021, 1, -10, 2, 10, 4, 0x000000E4 ),             /* '!' */
  EW_GLYPH( 0x0022, 1, -10, 4, 4, 6, 0x00000129 ),              /* '"' */
  EW_GLYPH( 0x0023, 0, -9, 7, 9, 7, 0x00000177 ),               /* '#' */
  EW_GLYPH( 0x0024, 0, -11, 7, 13, 7, 0x0000025A ),             /* '$' */
  EW_GLYPH( 0x0025, 0, -10, 11, 10, 12, 0x0000037C ),           /* '%' */
  EW_GLYPH( 0x0026, 0, -9, 9, 9, 9, 0x000004F6 ),               /* '&' */
  EW_GLYPH( 0x0027, 1, -10, 2, 4, 4, 0x00000623 ),              /* ''' */
  EW_GLYPH( 0x0028, 1, -10, 3, 13, 4, 0x0000064A ),             /* '(' */
  EW_GLYPH( 0x0029, 0, -10, 4, 13, 4, 0x000006D6 ),             /* ')' */
  EW_GLYPH( 0x002A, 0, -10, 5, 5, 6, 0x00000764 ),              /* '*' */
  EW_GLYPH( 0x002B, 0, -8, 7, 7, 7, 0x000007CB ),               /* '+' */
  EW_GLYPH( 0x002C, 0, -2, 3, 5, 4, 0x00000838 ),               /* ',' */
  EW_GLYPH( 0x002D, 0, -4, 4, 1, 4, 0x00000875 ),               /* '-' */
  EW_GLYPH( 0x002E, 0, -2, 3, 2, 4, 0x0000088C ),               /* '.' */
  EW_GLYPH( 0x002F, 0, -10, 5, 12, 5, 0x0000089C ),             /* '/' */
  EW_GLYPH( 0x0030, 0, -9, 7, 9, 7, 0x0000093B ),               /* '0' */
  EW_GLYPH( 0x0031, 1, -9, 6, 9, 7, 0x00000A19 ),               /* '1' */
  EW_GLYPH( 0x0032, 0, -9, 7, 9, 7, 0x00000A8D ),               /* '2' */
  EW_GLYPH( 0x0033, 0, -9, 7, 9, 7, 0x00000B63 ),               /* '3' */
  EW_GLYPH( 0x0034, 0, -9, 7, 9, 7, 0x00000C4F ),               /* '4' */
  EW_GLYPH( 0x0035, 0, -9, 7, 9, 7, 0x00000D08 ),               /* '5' */
  EW_GLYPH( 0x0036, 0, -9, 7, 9, 7, 0x00000DE4 ),               /* '6' */
  EW_GLYPH( 0x0037, 0, -9, 7, 9, 7, 0x00000ED3 ),               /* '7' */
  EW_GLYPH( 0x0038, 0, -9, 7, 9, 7, 0x00000F87 ),               /* '8' */
  EW_GLYPH( 0x0039, 0, -9, 7, 9, 7, 0x00001089 ),               /* '9' */
  EW_GLYPH( 0x003A, 0, -7, 3, 7, 4, 0x0000117A ),               /* ':' */
  EW_GLYPH( 0x003B, 0, -7, 3, 10, 4, 0x000011AD ),              /* ';' */
  EW_GLYPH( 0x003C, 0, -8, 7, 6, 7, 0x0000120D ),               /* '<' */
  EW_GLYPH( 0x003D, 0, -7, 7, 4, 7, 0x000012A5 ),               /* '=' */
  EW_GLYPH( 0x003E, 0, -8, 7, 6, 7, 0x00001315 ),               /* '>' */
  EW_GLYPH( 0x003F, 0, -10, 6, 10, 6, 0x000013A9 ),             /* '?' */
  EW_GLYPH( 0x0040, 0, -9, 12, 11, 12, 0x00001459 ),            /* '@' */
  EW_GLYPH( 0x0041, 0, -9, 8, 9, 8, 0x0000164C ),               /* 'A' */
  EW_GLYPH( 0x0042, 1, -9, 7, 9, 8, 0x00001738 ),               /* 'B' */
  EW_GLYPH( 0x0043, 0, -9, 8, 9, 8, 0x00001827 ),               /* 'C' */
  EW_GLYPH( 0x0044, 1, -9, 7, 9, 9, 0x00001905 ),               /* 'D' */
  EW_GLYPH( 0x0045, 1, -9, 6, 9, 8, 0x000019CA ),               /* 'E' */
  EW_GLYPH( 0x0046, 1, -9, 6, 9, 7, 0x00001A6C ),               /* 'F' */
  EW_GLYPH( 0x0047, 0, -9, 8, 9, 9, 0x00001AF7 ),               /* 'G' */
  EW_GLYPH( 0x0048, 1, -9, 7, 9, 9, 0x00001BFC ),               /* 'H' */
  EW_GLYPH( 0x0049, 1, -9, 2, 9, 4, 0x00001C7D ),               /* 'I' */
  EW_GLYPH( 0x004A, 0, -9, 6, 9, 7, 0x00001C9A ),               /* 'J' */
  EW_GLYPH( 0x004B, 1, -9, 7, 9, 8, 0x00001D06 ),               /* 'K' */
  EW_GLYPH( 0x004C, 1, -9, 6, 9, 7, 0x00001DCE ),               /* 'L' */
  EW_GLYPH( 0x004D, 1, -9, 8, 9, 10, 0x00001E24 ),              /* 'M' */
  EW_GLYPH( 0x004E, 1, -9, 7, 9, 9, 0x00001EF3 ),               /* 'N' */
  EW_GLYPH( 0x004F, 0, -9, 9, 9, 10, 0x00001F9D ),              /* 'O' */
  EW_GLYPH( 0x0050, 1, -9, 7, 9, 8, 0x000020AA ),               /* 'P' */
  EW_GLYPH( 0x0051, 0, -9, 9, 11, 10, 0x00002164 ),             /* 'Q' */
  EW_GLYPH( 0x0052, 1, -9, 7, 9, 8, 0x000022BB ),               /* 'R' */
  EW_GLYPH( 0x0053, 0, -9, 7, 9, 8, 0x00002395 ),               /* 'S' */
  EW_GLYPH( 0x0054, 0, -9, 8, 9, 8, 0x00002490 ),               /* 'T' */
  EW_GLYPH( 0x0055, 1, -9, 7, 9, 9, 0x00002518 ),               /* 'U' */
  EW_GLYPH( 0x0056, 0, -9, 8, 9, 7, 0x000025B6 ),               /* 'V' */
  EW_GLYPH( 0x0057, 0, -9, 11, 9, 11, 0x00002698 ),             /* 'W' */
  EW_GLYPH( 0x0058, 0, -9, 7, 9, 7, 0x00002801 ),               /* 'X' */
  EW_GLYPH( 0x0059, 0, -9, 7, 9, 7, 0x000028E7 ),               /* 'Y' */
  EW_GLYPH( 0x005A, 0, -9, 7, 9, 8, 0x0000299D ),               /* 'Z' */
  EW_GLYPH( 0x005B, 1, -10, 3, 12, 4, 0x00002A6F ),             /* '[' */
  EW_GLYPH( 0x005C, 0, -10, 5, 12, 5, 0x00002AB7 ),             /* '\' */
  EW_GLYPH( 0x005D, 0, -10, 3, 12, 4, 0x00002B52 ),             /* ']' */
  EW_GLYPH( 0x005E, 0, -9, 7, 6, 7, 0x00002B97 ),               /* '^' */
  EW_GLYPH( 0x005F, 0, 1, 7, 1, 7, 0x00002C1E ),                /* '_' */
  EW_GLYPH( 0x0060, 2, -10, 3, 2, 8, 0x00002C45 ),              /* '`' */
  EW_GLYPH( 0x0061, 0, -7, 7, 7, 7, 0x00002C5D ),               /* 'a' */
  EW_GLYPH( 0x0062, 1, -10, 7, 10, 8, 0x00002D14 ),             /* 'b' */
  EW_GLYPH( 0x0063, 0, -7, 6, 7, 7, 0x00002DCE ),               /* 'c' */
  EW_GLYPH( 0x0064, 0, -10, 7, 10, 8, 0x00002E6F ),             /* 'd' */
  EW_GLYPH( 0x0065, 0, -7, 7, 7, 7, 0x00002F39 ),               /* 'e' */
  EW_GLYPH( 0x0066, 0, -10, 5, 10, 4, 0x0000300A ),             /* 'f' */
  EW_GLYPH( 0x0067, 0, -7, 7, 10, 7, 0x0000307E ),              /* 'g' */
  EW_GLYPH( 0x0068, 1, -10, 6, 10, 8, 0x000031B2 ),             /* 'h' */
  EW_GLYPH( 0x0069, 0, -9, 3, 9, 4, 0x00003238 ),               /* 'i' */
  EW_GLYPH( 0x006A, -1, -9, 4, 12, 4, 0x00003273 ),             /* 'j' */
  EW_GLYPH( 0x006B, 1, -10, 6, 10, 7, 0x000032DB ),             /* 'k' */
  EW_GLYPH( 0x006C, 1, -10, 2, 10, 4, 0x0000337D ),             /* 'l' */
  EW_GLYPH( 0x006D, 1, -7, 10, 7, 12, 0x000033A9 ),             /* 'm' */
  EW_GLYPH( 0x006E, 1, -7, 6, 7, 8, 0x00003458 ),               /* 'n' */
  EW_GLYPH( 0x006F, 0, -7, 7, 7, 8, 0x000034C6 ),               /* 'o' */
  EW_GLYPH( 0x0070, 1, -7, 7, 10, 8, 0x00003589 ),              /* 'p' */
  EW_GLYPH( 0x0071, 0, -7, 7, 10, 8, 0x00003650 ),              /* 'q' */
  EW_GLYPH( 0x0072, 1, -7, 4, 7, 5, 0x0000372B ),               /* 'r' */
  EW_GLYPH( 0x0073, 0, -7, 6, 7, 6, 0x00003775 ),               /* 's' */
  EW_GLYPH( 0x0074, 0, -9, 5, 9, 5, 0x0000381C ),               /* 't' */
  EW_GLYPH( 0x0075, 1, -7, 6, 7, 8, 0x0000389D ),               /* 'u' */
  EW_GLYPH( 0x0076, 0, -7, 7, 7, 7, 0x00003903 ),               /* 'v' */
  EW_GLYPH( 0x0077, 0, -7, 10, 7, 10, 0x000039B8 ),             /* 'w' */
  EW_GLYPH( 0x0078, 0, -7, 6, 7, 6, 0x00003AC4 ),               /* 'x' */
  EW_GLYPH( 0x0079, 0, -7, 7, 10, 7, 0x00003B6E ),              /* 'y' */
  EW_GLYPH( 0x007A, 0, -7, 6, 7, 6, 0x00003C52 ),               /* 'z' */
  EW_GLYPH( 0x007B, 0, -10, 4, 12, 4, 0x00003CF5 ),             /* '{' */
  EW_GLYPH( 0x007C, 1, -10, 2, 14, 3, 0x00003D91 ),             /* '|' */
  EW_GLYPH( 0x007D, 0, -10, 4, 12, 4, 0x00003DB6 ),             /* '}' */
  EW_GLYPH( 0x007E, 0, -6, 7, 2, 7, 0x00003E3C ),               /* '~' */
  EW_GLYPH( 0x007F, 0, 0, 0, 0, 7, 0x00003E7B ),
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 3, 0x00003E7B ),
  EW_GLYPH( 0x00A1, 1, -7, 2, 10, 4, 0x00003E7B ),
  EW_GLYPH( 0x00A2, 0, -10, 7, 11, 7, 0x00003EBE ),
  EW_GLYPH( 0x00A3, 0, -9, 7, 9, 7, 0x00003FB0 ),
  EW_GLYPH( 0x00A4, 0, -8, 7, 7, 7, 0x0000408E ),
  EW_GLYPH( 0x00A5, 0, -9, 7, 9, 7, 0x00004173 ),
  EW_GLYPH( 0x00A6, 1, -10, 2, 14, 3, 0x00004274 ),
  EW_GLYPH( 0x00A7, 0, -10, 7, 11, 7, 0x000042AA ),
  EW_GLYPH( 0x00A8, 2, -9, 4, 1, 8, 0x000043C5 ),
  EW_GLYPH( 0x00A9, 0, -9, 10, 9, 11, 0x000043DF ),
  EW_GLYPH( 0x00AA, 0, -8, 5, 4, 5, 0x0000454B ),
  EW_GLYPH( 0x00AB, 0, -6, 5, 5, 6, 0x000045A1 ),
  EW_GLYPH( 0x00AC, 0, -5, 7, 4, 7, 0x0000461C ),
  EW_GLYPH( 0x00AD, 0, -4, 4, 1, 4, 0x00004671 ),
  EW_GLYPH( 0x00AE, 0, -11, 6, 7, 6, 0x00004688 ),
  EW_GLYPH( 0x00AF, 2, -9, 4, 1, 8, 0x00004750 ),
  EW_GLYPH( 0x00B0, 0, -10, 5, 4, 5, 0x00004768 ),
  EW_GLYPH( 0x00B1, 0, -8, 7, 8, 7, 0x000047AE ),
  EW_GLYPH( 0x00B2, 0, -12, 5, 6, 5, 0x0000483D ),
  EW_GLYPH( 0x00B3, 0, -12, 5, 6, 5, 0x000048B8 ),
  EW_GLYPH( 0x00B4, 3, -10, 3, 2, 8, 0x00004938 ),
  EW_GLYPH( 0x00B5, 1, -7, 6, 10, 8, 0x00004950 ),
  EW_GLYPH( 0x00B6, 0, -9, 7, 11, 8, 0x000049E2 ),
  EW_GLYPH( 0x00B7, 0, -6, 3, 2, 4, 0x00004A90 ),
  EW_GLYPH( 0x00B8, 2, -1, 3, 4, 8, 0x00004AA0 ),
  EW_GLYPH( 0x00B9, 1, -11, 3, 5, 5, 0x00004AD0 ),
  EW_GLYPH( 0x00BA, 0, -8, 5, 4, 5, 0x00004AF4 ),
  EW_GLYPH( 0x00BB, 0, -6, 6, 5, 6, 0x00004B4C ),
  EW_GLYPH( 0x00BC, 1, -10, 10, 10, 11, 0x00004BB9 ),
  EW_GLYPH( 0x00BD, 1, -10, 10, 10, 12, 0x00004CE7 ),
  EW_GLYPH( 0x00BE, 0, -10, 11, 10, 11, 0x00004E1F ),
  EW_GLYPH( 0x00BF, 0, -7, 6, 10, 6, 0x00004FA9 ),
  EW_GLYPH( 0x00C0, 0, -12, 8, 12, 8, 0x00005056 ),
  EW_GLYPH( 0x00C1, 0, -12, 8, 12, 8, 0x00005178 ),
  EW_GLYPH( 0x00C2, 0, -12, 8, 12, 8, 0x0000529A ),
  EW_GLYPH( 0x00C3, 0, -12, 8, 12, 8, 0x000053C8 ),
  EW_GLYPH( 0x00C4, 0, -11, 8, 11, 8, 0x000054FC ),
  EW_GLYPH( 0x00C5, 0, -12, 8, 12, 8, 0x00005624 ),
  EW_GLYPH( 0x00C6, 0, -9, 11, 9, 12, 0x0000574C ),
  EW_GLYPH( 0x00C7, 0, -9, 8, 12, 8, 0x0000587C ),
  EW_GLYPH( 0x00C8, 1, -12, 6, 12, 8, 0x0000599A ),
  EW_GLYPH( 0x00C9, 1, -12, 6, 12, 8, 0x00005A6C ),
  EW_GLYPH( 0x00CA, 1, -12, 6, 12, 8, 0x00005B3E ),
  EW_GLYPH( 0x00CB, 1, -11, 6, 11, 8, 0x00005C1C ),
  EW_GLYPH( 0x00CC, 0, -12, 3, 12, 4, 0x00005CF6 ),
  EW_GLYPH( 0x00CD, 1, -12, 3, 12, 4, 0x00005D43 ),
  EW_GLYPH( 0x00CE, 0, -12, 4, 12, 4, 0x00005D90 ),
  EW_GLYPH( 0x00CF, 0, -11, 4, 11, 4, 0x00005DF5 ),
  EW_GLYPH( 0x00D0, 0, -9, 9, 9, 9, 0x00005E58 ),
  EW_GLYPH( 0x00D1, 1, -12, 7, 12, 9, 0x00005F52 ),
  EW_GLYPH( 0x00D2, 0, -12, 9, 12, 10, 0x00006041 ),
  EW_GLYPH( 0x00D3, 0, -12, 9, 12, 10, 0x00006187 ),
  EW_GLYPH( 0x00D4, 0, -12, 9, 12, 10, 0x000062CD ),
  EW_GLYPH( 0x00D5, 0, -12, 9, 12, 10, 0x0000641F ),
  EW_GLYPH( 0x00D6, 0, -11, 9, 11, 10, 0x00006577 ),
  EW_GLYPH( 0x00D7, 0, -8, 7, 6, 7, 0x000066C2 ),
  EW_GLYPH( 0x00D8, 0, -10, 9, 11, 10, 0x00006753 ),
  EW_GLYPH( 0x00D9, 1, -12, 7, 12, 9, 0x000068CB ),
  EW_GLYPH( 0x00DA, 1, -12, 7, 12, 9, 0x0000699C ),
  EW_GLYPH( 0x00DB, 1, -12, 7, 12, 9, 0x00006A6D ),
  EW_GLYPH( 0x00DC, 1, -11, 7, 11, 9, 0x00006B4A ),
  EW_GLYPH( 0x00DD, 0, -12, 7, 12, 7, 0x00006C22 ),
  EW_GLYPH( 0x00DE, 1, -9, 7, 9, 8, 0x00006D0B ),
  EW_GLYPH( 0x00DF, 1, -10, 7, 10, 8, 0x00006DCC ),
  EW_GLYPH( 0x00E0, 0, -10, 7, 10, 7, 0x00006EA8 ),
  EW_GLYPH( 0x00E1, 0, -10, 7, 10, 7, 0x00006F8E ),
  EW_GLYPH( 0x00E2, 0, -10, 7, 10, 7, 0x00007074 ),
  EW_GLYPH( 0x00E3, 0, -10, 7, 10, 7, 0x00007170 ),
  EW_GLYPH( 0x00E4, 0, -9, 7, 9, 7, 0x00007274 ),
  EW_GLYPH( 0x00E5, 0, -10, 7, 10, 7, 0x00007365 ),
  EW_GLYPH( 0x00E6, 0, -7, 11, 7, 11, 0x0000745E ),
  EW_GLYPH( 0x00E7, 0, -7, 6, 10, 7, 0x000075B1 ),
  EW_GLYPH( 0x00E8, 0, -10, 7, 10, 7, 0x0000768B ),
  EW_GLYPH( 0x00E9, 0, -10, 7, 10, 7, 0x0000778B ),
  EW_GLYPH( 0x00EA, 0, -10, 7, 10, 7, 0x0000788B ),
  EW_GLYPH( 0x00EB, 0, -9, 7, 9, 7, 0x000079A1 ),
  EW_GLYPH( 0x00EC, 0, -10, 3, 10, 4, 0x00007AAC ),
  EW_GLYPH( 0x00ED, 1, -10, 3, 10, 4, 0x00007AEE ),
  EW_GLYPH( 0x00EE, 0, -10, 4, 10, 4, 0x00007B30 ),
  EW_GLYPH( 0x00EF, 0, -9, 4, 9, 4, 0x00007B92 ),
  EW_GLYPH( 0x00F0, 0, -11, 7, 11, 8, 0x00007BEC ),
  EW_GLYPH( 0x00F1, 1, -10, 6, 10, 8, 0x00007D12 ),
  EW_GLYPH( 0x00F2, 0, -10, 7, 10, 8, 0x00007DCA ),
  EW_GLYPH( 0x00F3, 0, -10, 7, 10, 8, 0x00007EBC ),
  EW_GLYPH( 0x00F4, 0, -10, 7, 10, 8, 0x00007FAE ),
  EW_GLYPH( 0x00F5, 0, -10, 7, 10, 8, 0x000080B6 ),
  EW_GLYPH( 0x00F6, 0, -9, 7, 9, 8, 0x000081C6 ),
  EW_GLYPH( 0x00F7, 0, -8, 7, 6, 7, 0x000082C3 ),
  EW_GLYPH( 0x00F8, 0, -8, 7, 9, 8, 0x00008343 ),
  EW_GLYPH( 0x00F9, 1, -10, 6, 10, 8, 0x0000845C ),
  EW_GLYPH( 0x00FA, 1, -10, 6, 10, 8, 0x000084EE ),
  EW_GLYPH( 0x00FB, 1, -10, 6, 10, 8, 0x00008580 ),
  EW_GLYPH( 0x00FC, 1, -9, 6, 9, 8, 0x00008628 ),
  EW_GLYPH( 0x00FD, 0, -10, 7, 13, 7, 0x000086C6 ),
  EW_GLYPH( 0x00FE, 1, -10, 7, 13, 8, 0x000087D9 ),
  EW_GLYPH( 0x00FF, 0, -9, 7, 12, 7, 0x000088BE ),

  EW_FONT_PIXEL( WasherListFontS, 0x000089DC )                  /* ratio 80.13 % */
    0xBDEF7BBF, 0x29EFB57F, 0xE64DD5FA, 0xF7BF031C, 0x28BEFBC2, 0x4FEF26B3, 0xDEE719FF,
    0xC27D4632, 0xE2335125, 0xFFCFFF7D, 0x6B588889, 0x3E4CCCAD, 0xC63C82F1, 0x35EEEE7D,
    0x97BDBCCE, 0xBB5A4E3C, 0xBD633CEF, 0x38775BBF, 0xA010E413, 0x97F21780, 0xF7DDE2FF,
    0x1630E60C, 0xB7AC175F, 0x8F67897F, 0x7C447A03, 0x7D8889E9, 0xFE67FBEF, 0xE1780F73,
    0xA0D61F3D, 0x7FC98CF2, 0xEAEF8E30, 0x60722017, 0xDF7DDF1C, 0xCF2A7CF7, 0xC6795CA8,
    0x7BEF9EF4, 0x445DF1C7, 0x8DB7800E, 0xA444BBE3, 0xEB2633CA, 0x3BF184EC, 0xC3D60FBF,
    0x3FEAA781, 0x5F1FB861, 0xA86B39C4, 0x738CF988, 0x91ACAFAB, 0xE79E99FD, 0x9EF7EF7F,
    0x6B113FFC, 0x3EE5AA65, 0xFFBF9F29, 0x9820A663, 0xFE78FFE9, 0x58CFBA52, 0x937E1F8C,
    0x80C28CDA, 0x45183040, 0xF8D37E6D, 0xEDF12AC1, 0xF33F45FB, 0x730CFD53, 0x280FC0F6,
    0xEEBDD600, 0xF75EEB5D, 0xFE0A002E, 0xBC66ED8B, 0xB9F2F8BF, 0x813FE7F7, 0x787EF8D1,
    0xFD41E306, 0xE2722BF1, 0x0845D8B9, 0x905B8FEA, 0xCE4BFBBF, 0xB995FBBE, 0x83D627AC,
    0xB00AC07C, 0x27C83D62, 0xE13D659F, 0x3CBF77DD, 0x12FAC1FF, 0x000026EB, 0xCDFF8000,
    0x9FFCC37D, 0x9F7B185F, 0x6F0BE368, 0xDF816781, 0xF033DF0B, 0x61F17C69, 0xF7BDCF3E,
    0x97F7FF31, 0x5E3BDEE2, 0x84DFA6F1, 0xBFBF07EC, 0x0DECEFC6, 0x37CC72B1, 0xBDC6723C,
    0xFB8C0BE7, 0x3F582DC0, 0xF782DFC8, 0xA703C785, 0xFDEFADEE, 0x7BEB7BDD, 0xEF7BDE01,
    0xFBDDFC9F, 0xDEF302C7, 0xFEFFF45D, 0xC6B09E3E, 0xD0ECC300, 0xC67BA639, 0x74D39F41,
    0xDE7973DC, 0xCEB98CB0, 0x9CE59A7F, 0x78CB18CE, 0x9E2093D6, 0x1BE53D57, 0xEE78BFA7,
    0xCF3EF7BD, 0x0F57F7BD, 0x4CCF0BF4, 0xC1540738, 0x104CF048, 0x5FDF6301, 0xBCF77E72,
    0x9DE29E98, 0x9F77C832, 0x9F7FFB29, 0x78C6B59F, 0xE30D573B, 0x9EF7D999, 0x7CFFD4B7,
    0xC673BE21, 0x4FD0D54F, 0x1ACE6440, 0xFFEF1A56, 0x59CEB0C8, 0xC7DF12D2, 0xF8BFF739,
    0xC04FF84F, 0xC27FC27F, 0x8BFE027F, 0xBFBC66ED, 0x27B212F8, 0x559CEFCF, 0x067BDDFF,
    0xF7BBFEA0, 0x39DF9E0C, 0xEF7BDD6B, 0x7BDEEB5D, 0x7BAC02EF, 0x766BBDEF, 0x57E7BAC2,
    0xDFFDDAC4, 0xFBB58805, 0xF3DD6BBF, 0xD339F42B, 0x39DFE7B8, 0x65023196, 0xFBC1EF10,
    0x3BC1440D, 0x902FF800, 0x379EFFEF, 0xDF77B9E1, 0xDE326F7B, 0xF3CC433D, 0xFFEA37D2,
    0x118418EF, 0x4433D9EF, 0x31BEB0E4, 0xAE20661E, 0x0E47AC2F, 0xE799CEB3, 0xEC4F0AFF,
    0xF0F9F733, 0x809E4AF6, 0xFFDEF7DC, 0x82F3803F, 0xDFB81567, 0xF71AC42A, 0xC2CF1EA0,
    0x23E6F759, 0x77EF7B9E, 0xF13D42AC, 0xBF5C88BF, 0xF8AFCF7B, 0x607FF9EE, 0xC27AC046,
    0xF9B7EF77, 0x82DF3DEE, 0x7E303BF1, 0xFDEF77D7, 0xCF77EA4D, 0xBDEEF9E2, 0x44AFF437,
    0x0203E647, 0x07CC8010, 0xB7895FE8, 0x37BDDF3C, 0xF9EF77EA, 0xDCDEEF92, 0xC17AE881,
    0x8C02302E, 0xBC42FF00, 0x3BDDF5F3, 0xBDEEFC76, 0xBDEEF977, 0xF77C000B, 0xFDEEF9FE,
    0xBDDF0003, 0xF7BBF7F7, 0xF7BBE5DE, 0xDDF0002E, 0xF7BBE7FB, 0xC600000F, 0xD4379CEF,
    0xD2739CFF, 0x23587BFB, 0xE78101F3, 0xB9E05FDE, 0xE807CC9F, 0xE79FC3DF, 0xFBE4E73B,
    0x01FCF07B, 0xDEEF8000, 0x7BDDF1FB, 0xE000003F, 0xC00000F7, 0x000000BB, 0x93EA1800,
    0x7ECE3555, 0xFF21EFC7, 0xE07B7103, 0x737C1EFB, 0x20F19DE1, 0xA8E8DDFE, 0x4267A0D5,
    0x01EFEFBE, 0x00000000, 0xDEF77C00, 0xFEF0DBF5, 0x7D61E265, 0x38BB0F3C, 0xF00A9E1F,
    0xF181D7FD, 0x4BF01FFC, 0xFDF8BD60, 0x07CCFCF0, 0x5A8C1AFC, 0xC40CBFA0, 0x2CD60BD7,
    0x85A81FD0, 0xE37FDF67, 0x7C77BEE9, 0x6AFC9774, 0x4F107C8C, 0x9004F201, 0x3C41F327,
    0x57E4BBA5, 0xEF7DD3C3, 0xBDEEFCF8, 0x7BDDF17B, 0x0CF182DF, 0xF77CA7A8, 0xEEF86FF6,
    0x00000FDD, 0xBFEFB3C0, 0x3BDF74F1, 0x7E4BBA3E, 0xC41F3235, 0x09E40153, 0x83E64F20,
    0x4BAFCA78, 0xFB30CF7E, 0xF0FC7BBD, 0x01F3E7FC, 0xFDF7BEEF, 0xC3F77BDD, 0x12FF6F77,
    0x46782C6A, 0xBF7DEEF9, 0x14F9DDF0, 0x6F101AF4, 0x7C4B3583, 0xCBE17CE7, 0x678FFE73,
    0x4EFBCAB3, 0x8D3FFD58, 0x0FAFF7E7, 0x25DCAF46, 0xDEF7CACE, 0xBDEF7E3B, 0xEF1BDEF7,
    0x1BDDF9BD, 0x00000000, 0xBF000000, 0x001FCF07, 0x99800000, 0xE7FC647F, 0x7D53BE30,
    0x7ED5F9EE, 0xA2EFC790, 0x7FE14F1E, 0xF14F1664, 0xE09E7BFB, 0x348FFB29, 0x33D3C16A,
    0xFD1B57E0, 0xFEE93712, 0x8C3E543F, 0xF7F64AFF, 0x863959E7, 0xF5A5259A, 0xCC678CE4,
    0xDB6A7FE2, 0x718CFFB5, 0x41CFF187, 0xB5A94F3D, 0x14C2E41E, 0xD56F8FEA, 0xDE5AC65C,
    0xE7C9BA2F, 0xF57E0F5B, 0x1E1FAF41, 0xFADD16BD, 0x9C86B58D, 0x6FC2DFBF, 0x7398C7F6,
    0xD1FDE9CC, 0x58C9AE5F, 0x273707E7, 0xC00001AC, 0xEDDEF7BD, 0x0BC77BDE, 0xF98C1EBD,
    0xAF40EDC1, 0x9C1F9C89, 0xBDE33C0E, 0xFDDFDEF7, 0x00007FDB, 0x37FFD800, 0x1B507FF1,
    0xEA177022, 0xC1FB008F, 0x7E139173, 0xF7BFFA85, 0x00005EFF, 0xC62F7800, 0x07D6F84D,
    0x3F983F4F, 0x7C7BE4CF, 0xC794DE7F, 0xEF7BDEFF, 0x5B7CB73F, 0x88BFEEFD, 0x6797BFBE,
    0xFD621998, 0x0F7DF60E, 0x722E6F99, 0x1FF4BFDD, 0xFB500000, 0x6E7D82FE, 0x02EA747C,
    0x78464043, 0xDFF27A23, 0xCEF89B37, 0xDDC6FA7F, 0xA2379E39, 0x603980E6, 0x33A62BE4,
    0x5EB00ECE, 0xEEFC4000, 0x7BCFF3FE, 0x6E57C8C2, 0xC0398073, 0x71F8CB18, 0xC47FB77E,
    0xFFC5FE77, 0xC31BCE7F, 0xE399EA32, 0xE6633BDE, 0x233EF7BD, 0xE79FE29A, 0xCA7DC9FC,
    0x87129CF7, 0xECF57D9E, 0x8000000B, 0x3FBDEFB1, 0xF3F6EFFF, 0x12E6988B, 0xFEC9CD35,
    0xEEF2FDDD, 0xBDD64BFB, 0x9E64FFF7, 0x2B9DFB7B, 0xEEAA7DC5, 0x07FEF9DD, 0x77E78000,
    0xEF7BE17F, 0x0BAA6E5A, 0xFE000017, 0x3FE3FF8F, 0xFFE00000, 0x3FF87FF0, 0xC0000000,
    0xF8D6F398, 0xE400000F, 0xE4DE713F, 0x1D6F15FB, 0x1B835BCC, 0xEB59E17D, 0xEB00003F,
    0xBECFFEF9, 0xC7EEFE5F, 0x7DBA9FF9, 0x4F11D4D7, 0x0000150F, 0xFF000000, 0xE17F77E7,
    0x9D2D77BC, 0x0005C2EA, 0x7FCEF880, 0xBF73CFF1, 0x7F65B239, 0x1CC66073, 0x65B23198,
    0xEE79FE7F, 0xDF73FF37, 0x373FF25F, 0x81753A5E, 0x7C232021, 0x6FB13D11, 0xBCFFDF36,
    0x77E20000, 0xE7FAFBF7, 0x2BE4693D, 0x1CC039B7, 0x7F258C60, 0x1F7DDF9C, 0x03BFBEC6,
    0xFED7F800, 0x1B9FFFB9, 0x3AC0002C, 0x7BDE35E7, 0xF8A654AE, 0x7C62FFDF, 0x849AABFB,
    0x655B9F67, 0x5DE09C4E, 0xF6779F7D, 0xE200007D, 0xE79E6F8F, 0x000B7E0E, 0x794F0080,
    0x7B3BF71E, 0xF9FE177A, 0x2B2231FF, 0x3D47EFD2, 0x37EF879E, 0xFDF11922, 0xEB0F99E0,
    0xBAB1FDE5, 0xF7B1678A, 0x19F39118, 0xFB55529E, 0xDEF648D6, 0x51F9FB55, 0xFF9CCCCF,
    0x9EA4C641, 0x6BBA7F52, 0xBF5E7CAD, 0x66217FAF, 0xBA2D4A4D, 0x4735CDFB, 0xF0BBEFBE,
    0x4463EFCF, 0xC7EA188E, 0x987BF3EF, 0xEF589295, 0xB03D4E0F, 0x987F4246, 0xBDC44C67,
    0xF7B8CEF7, 0x0F789397, 0x56A0CF7E, 0x9BC1EF13, 0xFE57DEFB, 0xE2FEAAFF, 0x1FF87090,
    0xFCD63E6B, 0x0F25C3F8, 0x017FFD4F, 0x7BC00000, 0x33FBFBCA, 0xF3192001, 0x091FCC67,
    0x16DFDE4C, 0xC72AD3BF, 0x78EE713D, 0x99E5F7DF, 0x36338122, 0xD05AC132, 0xF1E8FBFD,
    0x39BE65F5, 0x1109111E, 0x1E9BD609, 0x377F7CDE, 0x2FBF7F78, 0x73AC16B0, 0xE7DBEA5E,
    0x85699C84, 0x79D8C267, 0xED6E30EF, 0xB3C0B03B, 0xEEAFC606, 0x22044FBD, 0x7F77EF9E,
    0xBDCF3E5F, 0xCA3919E7, 0x79473233, 0x9EF793E4, 0xEFFF9E39, 0x7E7CBEFE, 0x1ACF3DF8,
    0xBD7DC786, 0x0C6318CD, 0x79FF9DCF, 0xB89EE79F, 0x71EE79F7, 0xE3DCF3EF, 0x0BF007DE,
    0x13846E00, 0xDDDF8800, 0xC5EF3783, 0x5FE0C61D, 0xDBCD49FF, 0xCF158FDF, 0xA5F1555E,
    0xECF77CB5, 0xBCF67831, 0x8F7104AC, 0x3F3CF7E5, 0x4F773BF2, 0xBDCE738C, 0xF6FFA5F7,
    0xEC6ABDF9, 0xEBF9EF78, 0x78731CBF, 0xF0E63904, 0x7BC76308, 0xFD7FD6CE, 0xABDF3FF7,
    0xEDCE738C, 0xFEEF8AFB, 0x6B315998, 0x3FFCCF0F, 0xEFAF1BC4, 0xCC67BEFB, 0x47319E31,
    0xB7EFBEFA, 0xAEF7BDEE, 0x0DBDEF75, 0x7B9F3200, 0x3FF9E67F, 0xE4FBBEC6, 0x3F7677EF,
    0x5738C437, 0xDF7E793F, 0xFB19F7EC, 0x7BBF93EE, 0x7A677E7F, 0xCF03F9F6, 0x605E1B3E,
    0x75EEB002, 0xBAF75AEF, 0x58D00177, 0xCBBDF6F7, 0xEF795F77, 0x8358F993, 0xCBBCC3B9,
    0xDE5DE778, 0x637D89FB, 0xC52B13C4, 0x9AEA3199, 0x7658DEE3, 0xC1FF9BF6, 0xB00000BB,
    0xCF155FC0, 0xEF70BF3D, 0x04F02737, 0x7F79DFA8, 0x540ABE2B, 0x88054000, 0xDF8C057F,
    0x00000179, 0x13FE3EE0, 0xB7AF386A, 0x3FF37CF2, 0xBF100166, 0xEFB98BFB, 0xDF7305FF,
    0x178DEBFF, 0x93CBF7BB, 0xCAC9E195, 0x80BF7BB0, 0x81FF9835, 0xFA1660FF, 0xC00E4405,
    0x872202FB, 0xEF1DE7F5, 0x2227FC6B, 0xB783F787, 0x9FADCF3D, 0x5BDCF488, 0xE60D603F,
    0x983FE07F, 0x91017E85, 0xEF9EF003, 0xEF3910BE, 0xDE3BD27D, 0x106B1F37, 0x783B9839,
    0x1117799B, 0x2EF3BC69, 0x06B0FDEF, 0xFE0C6FB1, 0xA5627883, 0x8CCE217E, 0xD75181C8,
    0xF7185F7C, 0xFAC393C6, 0xEFDFDDF3, 0x2213FE35, 0x6F03F787, 0x3F5B9E7B, 0x6F73D222,
    0x587F58FD, 0x0BC6007F, 0x5E78C0BF, 0x0C54139C, 0xF22B4CCC, 0xF306E7DD, 0xC09CCC07,
    0x82F3813B, 0xDFB81567, 0xF71AC42A, 0xC2CF1EA0, 0x23E6F759, 0x77EF7B9E, 0xF13D42AC,
    0xF05C88BF, 0x04E6609B, 0x0BCE05F3, 0x7EE0559E, 0xDC6B10AB, 0x0B3C7A83, 0x8F9BDD67,
    0xDFBDEE78, 0xC4F50AB1, 0xE17222FF, 0x7DFD07FF, 0x8356BD0D, 0x156782F3, 0xC42ADFB8,
    0x1EA0F71A, 0xF759C2CF, 0x7B9E23E6, 0x42AC77EF, 0x88BFF13D, 0x3F3FF45C, 0xBE137BC8,
    0x2F3837FC, 0xFB815678, 0x71AC42AD, 0x2CF1EA0F, 0x3E6F759C, 0x7EF7B9E2, 0x13D42AC7,
    0xC5C88BFF, 0xF07E79EF, 0x381F9E7B, 0x8156782F, 0xAC42ADFB, 0xF1EA0F71, 0x6F759C2C,
    0xF7B9E23E, 0xD42AC77E, 0xC88BFF13, 0x09FFFE45, 0x27FFF900, 0x56782F38, 0x42ADFB81,
    0xEA0F71AC, 0x759C2CF1, 0xB9E23E6F, 0x2AC77EF7, 0x8BFF13D4, 0xB9CF05C8, 0xBC1FDEF7,
    0x3FBDEEAB, 0xFC0367CC, 0xA17D601A, 0xFB78BDEE, 0xA5EF757E, 0x103F7BDF, 0x0CF40273,
    0x4FF7BDD4, 0x3C59EEFD, 0x86F7BDDF, 0xC8E895FE, 0x0200407C, 0xFD00F990, 0xE796F12B,
    0x5146F7BB, 0xBC1AA7BF, 0x987CF205, 0xE139983F, 0xBDEEFC9D, 0xBDEEF977, 0xF77C000B,
    0xFDEEF9FE, 0xBDDF0003, 0xC4DF87F7, 0xF2F989CC, 0xE5DEF7BB, 0x002EF7BB, 0xE7FBDDF0,
    0x000FF7BB, 0x1FDEF77C, 0xFBFA3FFF, 0xFDAB5E9A, 0xF977BDEE, 0x000BBDEE, 0xF9FEF77C,
    0x0003FDEE, 0xE7F7BDDF, 0x7E3F3CF7, 0xBBF3F3CF, 0xBBE5DEF7, 0xF0002EF7, 0xBBE7FBDD,
    0x7C000FF7, 0xFCDFDEF7, 0xD3BD3999, 0x000001EF, 0xE7339BF0, 0x001EFD7C, 0x7FFE0000,
    0x6BDD7DFD, 0x0003DFB5, 0xF7E00000, 0xF3DFBF3C, 0x001EFCFC, 0xD6000000, 0x5057E7BD,
    0x01EF9CF7, 0xCAC06E9E, 0x2FF75D58, 0x7FBAEAE4, 0x01958121, 0xF7517E9E, 0xFFD0AF9C,
    0x26F790FC, 0xDFB7FCBE, 0x7CCFCF0F, 0xA8C1AFC0, 0x40CBFA05, 0xCD60BD7C, 0x5A81FD02,
    0x99807F30, 0xF04EF013, 0x3C6FFBEC, 0x8F8EF7DD, 0x8D5F92EE, 0x29E20F91, 0xF2009E40,
    0xA7883E64, 0x6AFC9774, 0x1DEFBA78, 0xC09BF01F, 0x17CC09CC, 0x1BFEFB3C, 0xE3BDF74F,
    0x57E4BBA3, 0x7883E463, 0x8027900A, 0xE20F993C, 0xBF25DD29, 0x7BEE9E1A, 0x7FFE07C7,
    0x41AFBFA0, 0xECF0D5AF, 0xDD3C6FFB, 0xEE8F8EF7, 0x918D5F92, 0x4029E20F, 0x64F2009E,
    0x74A7883E, 0x786AFC97, 0x1F1DEFBA, 0x903F3FF4, 0xF2F826F7, 0xFBECF0DF, 0xF7DD3C6F,
    0x92EE8F8E, 0x0F918D5F, 0x9E4029E2, 0x3E64F200, 0x9774A788, 0xBA786AFC, 0xFC1F1DEF,
    0x7E07E79E, 0x6783F3CF, 0xE9E37FDF, 0x747C77BE, 0x8C6AFC97, 0x014F107C, 0x279004F2,
    0xA53C41F3, 0xC357E4BB, 0xF8EF7DD3, 0xFC4F87C4, 0x959FDF3F, 0x56005CFF, 0xFF8973FE,
    0xC003FBE7, 0xF7E9EFB3, 0x3BDF74F1, 0xD25DD1EA, 0xDC47CCA8, 0xBBE076AF, 0xCF782231,
    0x2FE64E30, 0x7BE5511E, 0xC46AFCB6, 0xE3BDF5FE, 0xEFB3DF13, 0xC0FE61BF, 0xC9DE09CC,
    0x07F3C1EF, 0x60000000, 0xFF191FE6, 0x54EF8C39, 0x057E7B9F, 0x273309BF, 0x83DF97CC,
    0x00000FE7, 0x3FCCC000, 0x1873FE32, 0xF73EA9DF, 0x3FFF0AFC, 0x7A35F7F4, 0xF07BF6AD,
    0x000001FC, 0x47F99800, 0xE30E7FC6, 0x9EE7D53B, 0x9E7BF15F, 0xF3CF7E1F, 0xFCF07BF3,
    0x00000001, 0xC647F998, 0x3BE30E7F, 0x5F9EE7D5, 0xE66137E1, 0xB7E2F984, 0x31FD9BF0,
    0x7A731CE6, 0x6B97F47F, 0xC1F9D632, 0x006B09CD, 0xC03DF800, 0xF87EEF77, 0x425FEDEE,
    0xE780053D, 0xCE7BBE59, 0x7E7BBE17, 0x673BE005, 0x1BF671D2, 0xA620C8EA, 0x35620677,
    0x7FF60984, 0xBCF7F207, 0x6F7100E4, 0xF906E4BE, 0xF51A7836, 0xFA22FFBB, 0x619E5EFE,
    0x3BF58866, 0x643DF7D8, 0x75C8B9BE, 0x84EC12FF, 0x41FA137E, 0x88BFEEFD, 0x6797BFBE,
    0xFD621998, 0x0F7DF60E, 0x722E6F99, 0xDF84BFDD, 0x3FFFE60F, 0xD49CE731, 0xE88BFEEF,
    0x86797BFB, 0xEFD62199, 0x90F7DF60, 0xD722E6F9, 0x7FAC4BFD, 0xFBDFF87E, 0x45FF97C7,
    0x88BFEEFD, 0x6797BFBE, 0xFD621998, 0x0F7DF60E, 0x722E6F99, 0xEFC4BFDD, 0x3DF87E79,
    0xDDFA8FCF, 0x7F7D117F, 0x3330CF2F, 0xEC1DFAC4, 0xDF321EFB, 0x7FBAE45C, 0xF8C37B09,
    0xEFC606FD, 0x88DFA837, 0x5EFEFA22, 0x8866619E, 0xF7D83BF5, 0xB9BE643D, 0x92FF75C8,
    0xEB9DDDFA, 0xF7D127FC, 0xFEE7FF77, 0xFCCC33C2, 0xFAC4A7C9, 0x95DEE75D, 0x73AF7DF6,
    0x6F995DEF, 0x23C2FE56, 0x3FE7FDD7, 0x77C4D9EF, 0xEE37D3FE, 0x11BCF1CE, 0x01CC0735,
    0x9D315F23, 0xAFC87671, 0xC85BC2D6, 0xC83721F3, 0x88D3C1B7, 0xFF8BFCEF, 0x86379CFF,
    0xC733D465, 0xCCC677BD, 0x467DEF7B, 0xCF3FC534, 0xD09D83F9, 0x883F426F, 0xFF8BFCEF,
    0x86379CFF, 0xC733D465, 0xCCC677BD, 0x467DEF7B, 0xCF3FC534, 0x07EFC3F9, 0x989FFFF3,
    0x3BE24E73, 0x3FFFE2FF, 0x19618DE7, 0xEF71CCF5, 0xDEF3319D, 0x4D119F7B, 0xFE73CFF1,
    0x0FCF3DF8, 0x11F9E7BF, 0xFF17F9DF, 0x0C6F39FF, 0x8E67A8CB, 0x998CEF7B, 0x8CFBDEF7,
    0x9E7F8A68, 0xBE5B97F3, 0x01FF69ED, 0xFD9D8000, 0x03FE3F66, 0x3F7E0000, 0x739FFFF3,
    0x003FE9CE, 0x9EFC0000, 0x9E7BF7E7, 0x0000FF9F, 0x886FC000, 0x83779F41, 0xB3E88775,
    0xB78DF89A, 0xFDDDFC86, 0xFF7DDCFC, 0x2E258631, 0x92C47230, 0xFFFFBFBF, 0xFF595FDC,
    0xFBDFF8FC, 0xF2FFCBE7, 0x17F77E7F, 0xD2D77BCE, 0x005C2EA9, 0xE41B9000, 0xC469E0DB,
    0x7F8BFE77, 0x91CDFB9E, 0x039BFB2D, 0x8CC0E633, 0xF3FB2D91, 0x09BF73CF, 0x84DFA13B,
    0xF9DF107E, 0xEE79FE2F, 0xECB64737, 0x98CC0E6F, 0xB6463303, 0xCF3FCFEC, 0x3F7E26FD,
    0xC4FFFF98, 0xDF12739C, 0x79FE2FF9, 0xB64737EE, 0xCC0E6FEC, 0x46330398, 0x3FCFECB6,
    0xEB26FDCF, 0xF7FE1F9F, 0x7FE5F1FE, 0x2FF9DF11, 0x37EE79FE, 0x6FECB647, 0x0398CC0E,
    0xECB64633, 0xFDCF3FCF, 0xF9E7BF26, 0x3F3CF7E1, 0xC5FF3BE2, 0xE6FDCF3F, 0xCDFD96C8,
    0x60731981, 0xFD96C8C6, 0xDFB9E7F9, 0x9E424F24, 0xBDEEB004, 0xEF75AEF7, 0x279177BD,
    0xFCEF8801, 0x3FFFEBD7, 0x9723BDE7, 0xE8F9BFAF, 0xE73989EF, 0xF118AC7F, 0x9CBFA27F,
    0xE66FF671, 0x22FF9DF7, 0xF0DBE437, 0x5BF07734, 0x78040000, 0xDFB8F3CA, 0xA27613D9,
    0xDC3F44DF, 0x00016FC1, 0xCF29E010, 0x4F677EE3, 0xFF987EFC, 0x39CE64FF, 0x016FC1DD,
    0x29E01000, 0x677EE3CF, 0xF3CF7E4F, 0x3F3CF7E3, 0x005BF077, 0xCA780400, 0xD9DFB8F3,
    0xBF427613, 0x5DE0FD09, 0x31F7E7F8, 0xF50C4722, 0x3DF9F7E3, 0xAC494ACC, 0x1EA707F7,
    0x3FA12358, 0xFE2633CC, 0x6A000003, 0x3FF05FDF, 0xD4DE3E37, 0x8C808605, 0x49E88BF0,
    0xF7CD9BEC, 0x80002F3F, 0xF0FCF3DF, 0xEF1F9E7B, 0x8FBF3FC2, 0xA8623911, 0xEFCFBF1F,
    0x624A5661, 0xF5383FBD, 0xFD091AC0, 0x01319E61

  EW_FONT_KERNING_CODES( WasherListFontS )
  EW_FONT_KERNING_VALUES( WasherListFontS )
EW_END_OF_FONT_RES( WasherListFontS )

/* Table with links to derived variants of the font resource : 'Washer::ListFontS' */
EW_RES_WITHOUT_VARIANTS( WasherListFontS )

/* This is a font resource. */
EW_DEFINE_FONT_RES( WasherDescrFont, 11, 3, 0, 16, 0x0001, 0x00C1 )
  EW_GLYPH( 0x0001, 1, -7, 6, 7, 7, 0x00000000 ),
  EW_GLYPH( 0x0020, 0, 0, 0, 0, 2, 0x000000A4 ),                /* ' ' */
  EW_GLYPH( 0x0021, 0, -8, 3, 8, 3, 0x000000A4 ),               /* '!' */
  EW_GLYPH( 0x0022, 0, -8, 4, 3, 5, 0x000000DD ),               /* '"' */
  EW_GLYPH( 0x0023, 0, -7, 6, 7, 6, 0x0000010F ),               /* '#' */
  EW_GLYPH( 0x0024, 0, -9, 5, 11, 6, 0x000001BA ),              /* '$' */
  EW_GLYPH( 0x0025, 0, -7, 9, 7, 9, 0x00000286 ),               /* '%' */
  EW_GLYPH( 0x0026, 0, -7, 7, 7, 7, 0x00000381 ),               /* '&' */
  EW_GLYPH( 0x0027, 0, -8, 2, 3, 3, 0x0000044D ),               /* ''' */
  EW_GLYPH( 0x0028, 0, -8, 3, 10, 3, 0x00000466 ),              /* '(' */
  EW_GLYPH( 0x0029, 0, -8, 3, 10, 3, 0x000004B7 ),              /* ')' */
  EW_GLYPH( 0x002A, 0, -8, 4, 4, 5, 0x00000520 ),               /* '*' */
  EW_GLYPH( 0x002B, 0, -7, 6, 7, 6, 0x0000055E ),               /* '+' */
  EW_GLYPH( 0x002C, 0, -1, 3, 3, 3, 0x000005C7 ),               /* ',' */
  EW_GLYPH( 0x002D, 0, -3, 3, 1, 3, 0x000005EF ),               /* '-' */
  EW_GLYPH( 0x002E, 0, -1, 2, 1, 3, 0x000005FE ),               /* '.' */
  EW_GLYPH( 0x002F, 0, -8, 4, 10, 4, 0x00000609 ),              /* '/' */
  EW_GLYPH( 0x0030, 0, -7, 5, 7, 6, 0x00000674 ),               /* '0' */
  EW_GLYPH( 0x0031, 0, -7, 5, 7, 6, 0x00000706 ),               /* '1' */
  EW_GLYPH( 0x0032, 0, -7, 5, 7, 6, 0x0000075D ),               /* '2' */
  EW_GLYPH( 0x0033, 0, -7, 5, 7, 6, 0x000007ED ),               /* '3' */
  EW_GLYPH( 0x0034, 0, -7, 6, 7, 6, 0x0000088F ),               /* '4' */
  EW_GLYPH( 0x0035, 0, -7, 5, 7, 6, 0x00000913 ),               /* '5' */
  EW_GLYPH( 0x0036, 0, -7, 5, 7, 6, 0x000009A5 ),               /* '6' */
  EW_GLYPH( 0x0037, 0, -7, 5, 7, 6, 0x00000A3E ),               /* '7' */
  EW_GLYPH( 0x0038, 0, -7, 5, 7, 6, 0x00000AA9 ),               /* '8' */
  EW_GLYPH( 0x0039, 0, -7, 5, 7, 6, 0x00000B4E ),               /* '9' */
  EW_GLYPH( 0x003A, 0, -5, 2, 5, 3, 0x00000BE2 ),               /* ':' */
  EW_GLYPH( 0x003B, 0, -5, 3, 7, 3, 0x00000C07 ),               /* ';' */
  EW_GLYPH( 0x003C, 0, -6, 6, 4, 6, 0x00000C4D ),               /* '<' */
  EW_GLYPH( 0x003D, 0, -5, 6, 3, 6, 0x00000CA8 ),               /* '=' */
  EW_GLYPH( 0x003E, 0, -6, 6, 4, 6, 0x00000D02 ),               /* '>' */
  EW_GLYPH( 0x003F, 0, -8, 5, 8, 5, 0x00000D53 ),               /* '?' */
  EW_GLYPH( 0x0040, 0, -7, 9, 9, 9, 0x00000DD9 ),               /* '@' */
  EW_GLYPH( 0x0041, 0, -7, 6, 7, 6, 0x00000F37 ),               /* 'A' */
  EW_GLYPH( 0x0042, 1, -7, 5, 7, 7, 0x00000FD6 ),               /* 'B' */
  EW_GLYPH( 0x0043, 0, -7, 6, 7, 6, 0x00001064 ),               /* 'C' */
  EW_GLYPH( 0x0044, 1, -7, 6, 7, 7, 0x00001102 ),               /* 'D' */
  EW_GLYPH( 0x0045, 1, -7, 5, 7, 6, 0x0000118E ),               /* 'E' */
  EW_GLYPH( 0x0046, 1, -7, 5, 7, 6, 0x00001209 ),               /* 'F' */
  EW_GLYPH( 0x0047, 0, -7, 6, 7, 7, 0x00001271 ),               /* 'G' */
  EW_GLYPH( 0x0048, 1, -7, 6, 7, 7, 0x0000132A ),               /* 'H' */
  EW_GLYPH( 0x0049, 1, -7, 1, 7, 3, 0x00001388 ),               /* 'I' */
  EW_GLYPH( 0x004A, 0, -7, 5, 7, 5, 0x00001395 ),               /* 'J' */
  EW_GLYPH( 0x004B, 1, -7, 6, 7, 6, 0x000013E3 ),               /* 'K' */
  EW_GLYPH( 0x004C, 1, -7, 5, 7, 5, 0x0000146D ),               /* 'L' */
  EW_GLYPH( 0x004D, 1, -7, 6, 7, 8, 0x000014A8 ),               /* 'M' */
  EW_GLYPH( 0x004E, 1, -7, 6, 7, 7, 0x00001532 ),               /* 'N' */
  EW_GLYPH( 0x004F, 0, -7, 7, 7, 7, 0x000015A2 ),               /* 'O' */
  EW_GLYPH( 0x0050, 1, -7, 5, 7, 6, 0x0000166C ),               /* 'P' */
  EW_GLYPH( 0x0051, 0, -7, 7, 9, 7, 0x000016DB ),               /* 'Q' */
  EW_GLYPH( 0x0052, 1, -7, 5, 7, 6, 0x000017DB ),               /* 'R' */
  EW_GLYPH( 0x0053, 0, -7, 6, 7, 6, 0x00001865 ),               /* 'S' */
  EW_GLYPH( 0x0054, 0, -7, 6, 7, 6, 0x00001909 ),               /* 'T' */
  EW_GLYPH( 0x0055, 1, -7, 6, 7, 7, 0x00001969 ),               /* 'U' */
  EW_GLYPH( 0x0056, 0, -7, 6, 7, 6, 0x000019C9 ),               /* 'V' */
  EW_GLYPH( 0x0057, 0, -7, 9, 7, 9, 0x00001A69 ),               /* 'W' */
  EW_GLYPH( 0x0058, 0, -7, 6, 7, 6, 0x00001B5A ),               /* 'X' */
  EW_GLYPH( 0x0059, 0, -7, 6, 7, 5, 0x00001BFE ),               /* 'Y' */
  EW_GLYPH( 0x005A, 0, -7, 6, 7, 6, 0x00001C71 ),               /* 'Z' */
  EW_GLYPH( 0x005B, 1, -8, 2, 10, 3, 0x00001D10 ),              /* '[' */
  EW_GLYPH( 0x005C, 0, -8, 4, 10, 4, 0x00001D3A ),              /* '\' */
  EW_GLYPH( 0x005D, 0, -8, 3, 10, 3, 0x00001DA2 ),              /* ']' */
  EW_GLYPH( 0x005E, 0, -7, 5, 5, 6, 0x00001DE1 ),               /* '^' */
  EW_GLYPH( 0x005F, 0, 1, 6, 1, 6, 0x00001E37 ),                /* '_' */
  EW_GLYPH( 0x0060, 1, -8, 3, 2, 6, 0x00001E58 ),               /* '`' */
  EW_GLYPH( 0x0061, 0, -5, 5, 5, 6, 0x00001E69 ),               /* 'a' */
  EW_GLYPH( 0x0062, 0, -8, 6, 8, 6, 0x00001EDC ),               /* 'b' */
  EW_GLYPH( 0x0063, 0, -5, 5, 5, 5, 0x00001F6B ),               /* 'c' */
  EW_GLYPH( 0x0064, 0, -8, 6, 8, 6, 0x00001FDC ),               /* 'd' */
  EW_GLYPH( 0x0065, 0, -5, 5, 5, 6, 0x0000206A ),               /* 'e' */
  EW_GLYPH( 0x0066, 0, -8, 4, 8, 3, 0x000020E8 ),               /* 'f' */
  EW_GLYPH( 0x0067, 0, -5, 6, 7, 6, 0x00002143 ),               /* 'g' */
  EW_GLYPH( 0x0068, 0, -8, 6, 8, 6, 0x00002206 ),               /* 'h' */
  EW_GLYPH( 0x0069, 0, -8, 2, 8, 3, 0x00002273 ),               /* 'i' */
  EW_GLYPH( 0x006A, -1, -8, 3, 10, 3, 0x0000229E ),             /* 'j' */
  EW_GLYPH( 0x006B, 0, -8, 6, 8, 6, 0x000022EA ),               /* 'k' */
  EW_GLYPH( 0x006C, 0, -8, 3, 8, 3, 0x00002361 ),               /* 'l' */
  EW_GLYPH( 0x006D, 0, -5, 9, 5, 9, 0x0000238C ),               /* 'm' */
  EW_GLYPH( 0x006E, 0, -5, 6, 5, 6, 0x0000240E ),               /* 'n' */
  EW_GLYPH( 0x006F, 0, -5, 6, 5, 6, 0x00002462 ),               /* 'o' */
  EW_GLYPH( 0x0070, 0, -5, 6, 7, 6, 0x000024F4 ),               /* 'p' */
  EW_GLYPH( 0x0071, 0, -5, 6, 7, 6, 0x00002587 ),               /* 'q' */
  EW_GLYPH( 0x0072, 0, -5, 4, 5, 4, 0x00002618 ),               /* 'r' */
  EW_GLYPH( 0x0073, 0, -5, 5, 5, 5, 0x00002658 ),               /* 's' */
  EW_GLYPH( 0x0074, 0, -7, 4, 7, 4, 0x000026C9 ),               /* 't' */
  EW_GLYPH( 0x0075, 0, -5, 6, 5, 6, 0x00002722 ),               /* 'u' */
  EW_GLYPH( 0x0076, 0, -5, 5, 5, 5, 0x00002771 ),               /* 'v' */
  EW_GLYPH( 0x0077, 0, -5, 8, 5, 8, 0x000027DC ),               /* 'w' */
  EW_GLYPH( 0x0078, 0, -5, 5, 5, 5, 0x00002881 ),               /* 'x' */
  EW_GLYPH( 0x0079, 0, -5, 5, 7, 5, 0x000028E9 ),               /* 'y' */
  EW_GLYPH( 0x007A, 0, -5, 5, 5, 5, 0x00002968 ),               /* 'z' */
  EW_GLYPH( 0x007B, 0, -8, 3, 10, 3, 0x000029DA ),              /* '{' */
  EW_GLYPH( 0x007C, 1, -8, 1, 11, 3, 0x00002A2C ),              /* '|' */
  EW_GLYPH( 0x007D, 0, -8, 3, 10, 3, 0x00002A3C ),              /* '}' */
  EW_GLYPH( 0x007E, 0, -5, 6, 2, 6, 0x00002AA0 ),               /* '~' */
  EW_GLYPH( 0x007F, 0, 0, 0, 0, 6, 0x00002AD5 ),
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 2, 0x00002AD5 ),
  EW_GLYPH( 0x00A1, 0, -5, 3, 7, 3, 0x00002AD5 ),
  EW_GLYPH( 0x00A2, 0, -8, 5, 9, 6, 0x00002B04 ),
  EW_GLYPH( 0x00A3, 0, -7, 5, 7, 6, 0x00002BAA ),
  EW_GLYPH( 0x00A4, 0, -7, 6, 7, 6, 0x00002C41 ),
  EW_GLYPH( 0x00A5, 0, -7, 6, 7, 6, 0x00002CE5 ),
  EW_GLYPH( 0x00A6, 1, -8, 1, 11, 3, 0x00002D8F ),
  EW_GLYPH( 0x00A7, 0, -8, 5, 9, 6, 0x00002DA5 ),
  EW_GLYPH( 0x00A8, 1, -7, 4, 1, 6, 0x00002E67 ),
  EW_GLYPH( 0x00A9, 0, -8, 8, 9, 8, 0x00002E7B ),
  EW_GLYPH( 0x00AA, 0, -7, 4, 4, 4, 0x00002FA2 ),
  EW_GLYPH( 0x00AB, 0, -5, 5, 4, 5, 0x00002FEC ),
  EW_GLYPH( 0x00AC, 0, -4, 6, 4, 6, 0x0000302E ),
  EW_GLYPH( 0x00AD, 0, -3, 3, 1, 3, 0x00003079 ),
  EW_GLYPH( 0x00AE, 0, -9, 5, 6, 5, 0x00003088 ),
  EW_GLYPH( 0x00AF, 1, -8, 4, 1, 6, 0x00003109 ),
  EW_GLYPH( 0x00B0, 0, -8, 4, 4, 4, 0x0000311F ),
  EW_GLYPH( 0x00B1, 0, -7, 6, 7, 6, 0x0000315F ),
  EW_GLYPH( 0x00B2, 0, -9, 4, 4, 4, 0x000031DA ),
  EW_GLYPH( 0x00B3, 0, -9, 4, 4, 4, 0x0000322E ),
  EW_GLYPH( 0x00B4, 2, -8, 3, 2, 6, 0x0000327A ),
  EW_GLYPH( 0x00B5, 0, -6, 6, 8, 6, 0x0000328B ),
  EW_GLYPH( 0x00B6, 0, -7, 6, 9, 6, 0x00003301 ),
  EW_GLYPH( 0x00B7, 0, -4, 2, 1, 3, 0x00003385 ),
  EW_GLYPH( 0x00B8, 2, -1, 2, 4, 6, 0x00003390 ),
  EW_GLYPH( 0x00B9, 1, -9, 2, 4, 4, 0x000033B9 ),
  EW_GLYPH( 0x00BA, 0, -7, 4, 4, 4, 0x000033D1 ),
  EW_GLYPH( 0x00BB, 0, -5, 5, 4, 5, 0x00003417 ),
  EW_GLYPH( 0x00BC, 1, -7, 8, 7, 9, 0x00003459 ),
  EW_GLYPH( 0x00BD, 1, -7, 8, 7, 9, 0x00003520 ),
  EW_GLYPH( 0x00BE, 0, -7, 9, 7, 9, 0x000035ED ),
  EW_GLYPH( 0x00BF, 0, -5, 5, 7, 5, 0x000036ED ),
  EW_GLYPH( 0x00C0, 0, -9, 6, 9, 6, 0x00003754 ),
  EW_GLYPH( 0x00C1, 0, -9, 6, 9, 6, 0x00003815 ),
  EW_GLYPH( 0x00C2, 0, -9, 6, 9, 6, 0x000038D6 ),
  EW_GLYPH( 0x00C3, 0, -9, 6, 9, 6, 0x000039A1 ),
  EW_GLYPH( 0x00C4, 0, -9, 6, 9, 6, 0x00003A6E ),
  EW_GLYPH( 0x00C5, 0, -10, 6, 10, 6, 0x00003B39 ),
  EW_GLYPH( 0x00C6, 0, -7, 9, 7, 9, 0x00003C02 ),
  EW_GLYPH( 0x00C7, 0, -7, 6, 10, 6, 0x00003CDB ),
  EW_GLYPH( 0x00C8, 1, -9, 5, 9, 6, 0x00003DAF ),
  EW_GLYPH( 0x00C9, 1, -9, 5, 9, 6, 0x00003E4A ),
  EW_GLYPH( 0x00CA, 1, -9, 5, 9, 6, 0x00003EE5 ),
  EW_GLYPH( 0x00CB, 1, -9, 5, 9, 6, 0x00003F84 ),
  EW_GLYPH( 0x00CC, -1, -9, 3, 9, 3, 0x00004029 ),
  EW_GLYPH( 0x00CD, 0, -9, 3, 9, 3, 0x00004060 ),
  EW_GLYPH( 0x00CE, -1, -9, 4, 9, 3, 0x00004097 ),
  EW_GLYPH( 0x00CF, -1, -9, 4, 9, 3, 0x000040E5 ),
  EW_GLYPH( 0x00D0, 0, -7, 7, 7, 7, 0x0000412F ),
  EW_GLYPH( 0x00D1, 1, -9, 6, 9, 7, 0x000041E8 ),
  EW_GLYPH( 0x00D2, 0, -9, 7, 9, 7, 0x00004286 ),
  EW_GLYPH( 0x00D3, 0, -9, 7, 9, 7, 0x00004374 ),
  EW_GLYPH( 0x00D4, 0, -9, 7, 9, 7, 0x00004462 ),
  EW_GLYPH( 0x00D5, 0, -9, 7, 9, 7, 0x0000454D ),
  EW_GLYPH( 0x00D6, 0, -9, 7, 9, 7, 0x00004647 ),
  EW_GLYPH( 0x00D7, 0, -6, 5, 4, 6, 0x0000473F ),
  EW_GLYPH( 0x00D8, 0, -8, 7, 9, 7, 0x00004786 ),
  EW_GLYPH( 0x00D9, 1, -9, 6, 9, 7, 0x00004899 ),
  EW_GLYPH( 0x00DA, 1, -9, 6, 9, 7, 0x0000491B ),
  EW_GLYPH( 0x00DB, 1, -9, 6, 9, 7, 0x0000499D ),
  EW_GLYPH( 0x00DC, 1, -9, 6, 9, 7, 0x00004A2E ),
  EW_GLYPH( 0x00DD, 0, -9, 6, 9, 5, 0x00004ABA ),
  EW_GLYPH( 0x00DE, 1, -7, 5, 7, 6, 0x00004B4F ),
  EW_GLYPH( 0x00DF, 0, -8, 6, 8, 6, 0x00004BC3 ),
  EW_GLYPH( 0x00E0, 0, -8, 5, 8, 6, 0x00004C5F ),
  EW_GLYPH( 0x00E1, 0, -8, 5, 8, 6, 0x00004CF3 ),
  EW_GLYPH( 0x00E2, 0, -8, 5, 8, 6, 0x00004D87 ),
  EW_GLYPH( 0x00E3, 0, -8, 5, 8, 6, 0x00004E2B ),
  EW_GLYPH( 0x00E4, 0, -7, 5, 7, 6, 0x00004EDF ),
  EW_GLYPH( 0x00E5, 0, -8, 5, 8, 6, 0x00004F7C ),
  EW_GLYPH( 0x00E6, 0, -5, 9, 5, 9, 0x0000500E ),
  EW_GLYPH( 0x00E7, 0, -5, 5, 8, 5, 0x000050E1 ),
  EW_GLYPH( 0x00E8, 0, -8, 5, 8, 6, 0x00005183 ),
  EW_GLYPH( 0x00E9, 0, -8, 5, 8, 6, 0x00005222 ),
  EW_GLYPH( 0x00EA, 0, -8, 5, 8, 6, 0x000052C1 ),
  EW_GLYPH( 0x00EB, 0, -7, 5, 7, 6, 0x00005370 ),
  EW_GLYPH( 0x00EC, -1, -8, 3, 8, 3, 0x00005418 ),
  EW_GLYPH( 0x00ED, 0, -8, 3, 8, 3, 0x0000544B ),
  EW_GLYPH( 0x00EE, -1, -8, 4, 8, 3, 0x0000547E ),
  EW_GLYPH( 0x00EF, -1, -7, 4, 7, 3, 0x000054C9 ),
  EW_GLYPH( 0x00F0, 0, -9, 6, 9, 6, 0x0000550E ),
  EW_GLYPH( 0x00F1, 0, -8, 6, 8, 6, 0x000055ED ),
  EW_GLYPH( 0x00F2, 0, -8, 6, 8, 6, 0x00005685 ),
  EW_GLYPH( 0x00F3, 0, -8, 6, 8, 6, 0x0000573B ),
  EW_GLYPH( 0x00F4, 0, -8, 6, 8, 6, 0x000057F1 ),
  EW_GLYPH( 0x00F5, 0, -8, 6, 8, 6, 0x000058B7 ),
  EW_GLYPH( 0x00F6, 0, -7, 6, 7, 6, 0x0000598D ),
  EW_GLYPH( 0x00F7, 0, -6, 6, 5, 6, 0x00005A4B ),
  EW_GLYPH( 0x00F8, 0, -6, 6, 7, 6, 0x00005AB7 ),
  EW_GLYPH( 0x00F9, 0, -8, 6, 8, 6, 0x00005B70 ),
  EW_GLYPH( 0x00FA, 0, -8, 6, 8, 6, 0x00005BE3 ),
  EW_GLYPH( 0x00FB, 0, -8, 6, 8, 6, 0x00005C56 ),
  EW_GLYPH( 0x00FC, 0, -7, 6, 7, 6, 0x00005CD9 ),
  EW_GLYPH( 0x00FD, 0, -8, 5, 10, 5, 0x00005D54 ),
  EW_GLYPH( 0x00FE, 0, -8, 6, 10, 6, 0x00005DF4 ),
  EW_GLYPH( 0x00FF, 0, -7, 5, 9, 5, 0x00005E9E ),

  EW_FONT_PIXEL( WasherDescrFont, 0x00005F47 )                  /* ratio 87.44 % */
    0xC77BDEF7, 0x563DFBE8, 0x5BA9FE66, 0x54CBEF98, 0xBFBECB67, 0x160978A2, 0x33FCD241,
    0x198FF1FE, 0xE4F94A53, 0x9E99CE64, 0xE2FDFEDF, 0xBC4FB759, 0xCEF6F6EB, 0x1004FEBB,
    0x3DAF41D0, 0x615DCEA2, 0xBFBFF964, 0xE5F9DF10, 0x73EE4663, 0xA0F6BBDA, 0x43FFFE43,
    0x7F73BE2E, 0x1FD405BE, 0xFFBFB9DF, 0xFE47FFFA, 0x9DF7CFFF, 0xC019C3FB, 0xFEE77D7A,
    0xF03FFF8C, 0xD7215F9E, 0x17EFDC2E, 0xDFBE98EF, 0xDED471C8, 0x7FEFB7DB, 0x31FE279F,
    0xBB6E6D25, 0x24884884, 0x67EE65D8, 0xB8465E78, 0xC230118F, 0x5E788C7D, 0x3AB7F2BC,
    0x176F6E73, 0xDE003A01, 0xF78DCF3B, 0xA00373CE, 0x5647FC83, 0x6F75BF8C, 0x7EA689FE,
    0xE6C601EC, 0x43C84457, 0x9D607715, 0xDE77E39D, 0x8ACF3E7E, 0x3E781881, 0xF3BF1ACF,
    0xBC3DFCB6, 0x00035F85, 0xDFDFDB88, 0x9CF17F77, 0x0CA7DFBB, 0x09EF2F38, 0xF3F4BFDF,
    0x7777D7BB, 0xDFBF7B8E, 0xEE35C478, 0xFDF71A6F, 0xBAD732CD, 0x19C65EF7, 0x4DEF07E8,
    0xFB78539E, 0xDEFB1DCE, 0xEE7003B9, 0xAFBDE57D, 0xBFCE7885, 0x9DE73BE2, 0xDBEA8ACB,
    0x8CCFFD57, 0x67AC9CF7, 0x99FF8CA8, 0x957F7FE1, 0xEFD9FFC8, 0x759EF7BA, 0x9338D7EF,
    0xAC2EC7F9, 0x6767BC04, 0xF97FA73E, 0xFBF7E953, 0x4F6FACF6, 0xFF3FEA37, 0xFEEF9767,
    0x69EFFD62, 0xF3EE67CC, 0x3169DF89, 0x63DC6FF4, 0x90FF3FE5, 0x3FCBFCFF, 0x1591FF20,
    0x5F988FE3, 0x5F3EFBD4, 0xCFBEF500, 0xF7BDEF17, 0xBDEF7BC6, 0x6F7BDEF1, 0xEF981ECC,
    0x7CC02EF3, 0xDF89779F, 0x17CFB259, 0xFD608863, 0x1718BD88, 0xC83E7859, 0x60DF9CEF,
    0xBDCE7B9C, 0xDE71FFA9, 0xA3B1BE75, 0x598CAC6F, 0x2C1E17E3, 0x77589E27, 0xEBB3C7FD,
    0xFFA3999E, 0xE5FFDFFF, 0xBE0BEFB3, 0xF750210F, 0x1D6A70FF, 0xB13CE751, 0xFD77DEFA,
    0xBDFF9E1F, 0xEF7997F7, 0xDE4F70FE, 0x7BDE4F5B, 0xEF7BC80F, 0x0F677F2B, 0xAACE7FE7,
    0x1FC56539, 0x1EB50FE2, 0x4F73DCB9, 0x90BE7BDD, 0xE887E6F7, 0x66133019, 0xEF233D12,
    0xF7BDCF8D, 0x037BDE46, 0xBCAFBDE4, 0xDEF205F7, 0x37BDEE3B, 0x201BDEF2, 0xBDE57DEF,
    0x77E4002F, 0xCFBB8FFE, 0x98A6B51E, 0x1BDCF7F1, 0x5AADCF7F, 0x7FF72C53, 0x1BF1FD6E,
    0xDEF79000, 0x02DEF792, 0xEF007F00, 0x4F000003, 0xE4FAB9C9, 0xCF1AB3F8, 0xC7EF19BF,
    0x6DEE06B8, 0x426318C6, 0x000FE2FF, 0xDEF20000, 0xEE30771B, 0x8186F8F8, 0x7F3CFB88,
    0x790BBB9E, 0xC1DC9DE0, 0x3D83462F, 0x701FEB11, 0x7E806A1B, 0x7FFBBF18, 0xB7DEE738,
    0xFDF23D6A, 0xE3331FC7, 0x1EB5998F, 0xEE7B9FD9, 0xDDEF71ED, 0x06EDEF23, 0xBCEDEF79,
    0x300037F7, 0x70FFF77E, 0xD56FBDCE, 0x8FFBE47A, 0x1FC6663F, 0xB23D6B33, 0xDBDCE73F,
    0xE7ADF8C3, 0xBBF38E81, 0xF791EEF7, 0xBC862FBE, 0x7B79DFF7, 0x7897EB27, 0x89673ADB,
    0x3C213DDF, 0x9FFFE726, 0x55DFFBE4, 0x9CF7510B, 0xDEF77E7C, 0x7F6EFEFB, 0x000005F7,
    0x05F8FE00, 0x9CC00000, 0xF77F466A, 0xD732763D, 0xCF3FF8AF, 0x3CB9959F, 0x7ECF7E3F,
    0xF9267678, 0xFE32DE6C, 0x4543B8F4, 0xFBF9E31A, 0x9319657F, 0xD561F3B5, 0xC65D623F,
    0xEC3EE329, 0xCC35FE1A, 0x391CC766, 0xBFFBA17F, 0xF9E36B18, 0xDEBBC17E, 0xC7279FD6,
    0xCDBAD92F, 0x5FF9119F, 0x1E18DDF4, 0xDEE20030, 0x7BDC677B, 0xB17BE26A, 0x4FF8C9FE,
    0x75987FA2, 0xD6F75DEE, 0xBEEA0005, 0xE22A83D8, 0x18B504E0, 0x678BB017, 0x1FBC77BF,
    0x7EF00000, 0x0E78C5D8, 0x3CC84FDF, 0xFF8D5A33, 0x363EF7BD, 0x4A73ACBD, 0xBF1AEF9E,
    0xFDFFD66F, 0x11BED679, 0xEB00003F, 0xAFA23F77, 0x98F70E69, 0x39C5FCE9, 0xA9CEB1E3,
    0xB1CEF7DA, 0x88EC7223, 0x05EEFB51, 0xD60001BF, 0xEFB52FF9, 0x6588EC66, 0x9E55396C,
    0x5FE75933, 0x8EFB3FF5, 0xCF1A9EE7, 0xDFFAFFB9, 0xFC79D653, 0xD78463EE, 0x000DD78D,
    0x9F7B9DF0, 0x27EBE711, 0x9D41E9E7, 0xF7BA897F, 0x77BBF39F, 0x93DDFAAD, 0x0000FC4F,
    0xC47EEFAC, 0xC39A677B, 0x7FC8000A, 0x801F89FE, 0xC43FCBFC, 0x598C001F, 0x000FC77B,
    0x3A87CF00, 0xE224F31F, 0x3AB2C53B, 0x800007E2, 0x77FB1598, 0x88FCF7DF, 0xC31EEB3E,
    0x04A6311C, 0xDFEC4000, 0x33BE88FD, 0x000561CD, 0xB52CE758, 0xB18DFDEF, 0xD8CF7E23,
    0xF6A7BF11, 0xFB11BFBD, 0xDF447F77, 0x8F70E698, 0x739FCE99, 0xD3EE63C6, 0xF7FCEB00,
    0x63377DA8, 0x8B632C47, 0xF1FCF2A5, 0xF100BD9E, 0xFD3CFDFB, 0xB1000CF3, 0xF39EABCF,
    0xAA57EE79, 0xB9D63DBE, 0xF8FC4C31, 0xEE7E7DE5, 0x67982203, 0x007F8FC6, 0xB10C6980,
    0x21BE9BEE, 0xFEB3E77E, 0xBF2FF8F5, 0xD1F66119, 0xF6B3DBA5, 0x55576996, 0xC33E47FE,
    0x3DFFEAFC, 0xDCD467DC, 0x93D6F69E, 0x8FEF3953, 0x5FEB6BFB, 0xBF12DF39, 0x14FF51DF,
    0x30A77977, 0xFA54877E, 0x77BDCF36, 0x8737F73C, 0x7F78AF3C, 0xE8FB9D74, 0xDE585C6B,
    0x202C9DE9, 0xF002F3EC, 0x230CEF6E, 0x7FD8FB08, 0x15DE9092, 0x9A62FFF9, 0x3FC3DF7B,
    0x9824D4ED, 0xB3C58800, 0xBEFD15DF, 0xAB18F555, 0xEF7F231E, 0x177EE65B, 0x33FF18B1,
    0x5C867BF5, 0x1BEE679E, 0x3C375ECF, 0x7BEF463F, 0xCEFD6903, 0x2738F5EF, 0xE659EDCC,
    0x738F2CF6, 0xDF9DFAC2, 0xD67E4D67, 0xFADE5CF6, 0x75BFB597, 0x6B9CFBAD, 0xBAD73ADD,
    0xBA17AE75, 0x7D3B3CC1, 0x88D60EE7, 0xAF65D8F9, 0x8EFFF3DD, 0xF1DD7FA5, 0x27B8CE64,
    0xA4D6B99F, 0xF78379CF, 0x113FB3DE, 0x53CCFFCF, 0xF1EEFDF5, 0x0C391C8C, 0xA830E472,
    0x398F77EF, 0x733FF3C2, 0xFECF7697, 0xF8C7FEE4, 0x5BFCF97F, 0xCCE662E6, 0x2A09198A,
    0xEF7BE466, 0x7BDEF1BD, 0xD63A0027, 0xCCB3BEBD, 0x38C46E73, 0x310BF15F, 0x39E6AF9E,
    0x9F7B9E27, 0xFDE67FF8, 0x4FFBCC27, 0xBC007402, 0xEF1B9E77, 0xF006E79D, 0xC46E79DE,
    0xBFB91FFF, 0xE7CA9E31, 0x33EC57B7, 0xBA2233C6, 0xD977FC9F, 0xC3A68B56, 0x8F000060,
    0x7DE71931, 0x00EBE798, 0xC7FDE7BC, 0x0300819C, 0xA839EFD4, 0xB000016F, 0xCF99FF23,
    0xBFB78CF7, 0xFFF207F7, 0x0F9EEFCF, 0x9CBE7BBE, 0x28CC6539, 0xBEA33190, 0xF0FC5C97,
    0xE07F502D, 0x7889E4FF, 0x85BF17E7, 0x9F9CE633, 0x7E775AF5, 0x7E2E4BDF, 0x3FA816F8,
    0x3FFFAFF0, 0xEE5F9DE2, 0x78C6706F, 0xF3D7AD2A, 0x19F62BDB, 0x119E3172, 0x3F7445BE,
    0xBBFE47F5, 0x889E4FFE, 0xF8BE7FFD, 0xCE63382D, 0xEB5EB1F9, 0x2F038FCE, 0x9E6BE362,
    0x63D7183D, 0xDE27F38E, 0xDF09BC44, 0xFBA81087, 0x8EB5387F, 0x589E73A8, 0xFEBBEF7D,
    0x7C9FCF0F, 0xBE06F903, 0xF750210F, 0x1D6A70FF, 0xB13CE751, 0xFD77DEFA, 0xDF3F9E1F,
    0x60C63187, 0x8108318C, 0x5387FFBA, 0xE73A88EB, 0xBEF7D589, 0xFCF0FFEB, 0xE61F7BCD,
    0x0FBE0FBD, 0xFFF75021, 0x511D6A70, 0xFAB13CE7, 0x1FFD77DE, 0xD6B9BF9E, 0xF135AE64,
    0xBA81087D, 0xEB5387FF, 0x89E73A88, 0xEBBEF7D5, 0xF9FCF0FF, 0x180C60FD, 0x02102203,
    0xA70FFF75, 0xCE7511D6, 0x7DEFAB13, 0xF9E1FFD7, 0xDEF739E3, 0xF77D6707, 0xD803AC3E,
    0xE9FEEF8F, 0x7FBBF3BA, 0xE84EF751, 0x92EF77C6, 0xF387B3BF, 0x9CD5673F, 0xF10FE2B2,
    0x5C8F5A87, 0xE4A7B9EE, 0x19E06BAF, 0x9378B6F0, 0xEF7B9378, 0x06F7BC8D, 0x795F7BC8,
    0xBDE40BEF, 0xC837C877, 0x6F7BDC37, 0x4037BDE4, 0x7BCAFBDE, 0xBDEF205F, 0xC631F7C3,
    0x3B9CF618, 0x201BDEF2, 0xBDE57DEF, 0xDEF7902F, 0xE69AD731, 0xF7BDD35A, 0x037BDE46,
    0xBCAFBDE4, 0xDEF205F7, 0x78CDE23B, 0x00003F93, 0xE1BE46F9, 0xDF00000F, 0xC6318C67,
    0x0000035B, 0xE735AE60, 0x003F935A, 0x7BBF0000, 0xFCE7037E, 0xBCF5980F, 0xBE4E7E75,
    0x03FE7E75, 0xF9CE2AE6, 0x0FBDE65F, 0x1DC7DEF3, 0xD83462FC, 0x01FEB113, 0xE806A1B7,
    0xC426F107, 0xFBBF189B, 0xDEE7387F, 0xF23D6AB7, 0x331FC7FD, 0xB5998FE3, 0x7B9FD91E,
    0x7C81EDEE, 0xC60DF203, 0xCE1FFEEF, 0x5AADF7B9, 0xF1FF7C8F, 0x63F8CCC7, 0xF647AD66,
    0x7B7B9EE7, 0x8C60FBE0, 0x6B3D1831, 0x6FBDCE72, 0xFBE47AD5, 0xC6663F8F, 0x3D6B331F,
    0xDCF73FB2, 0xEF7983DB, 0xC3EF7983, 0xC3FFDDF8, 0x55BEF739, 0x3FEF91EB, 0x7F1998FE,
    0xC8F5ACCC, 0x6F73DCFE, 0x135AE60F, 0xF8C9AD73, 0x39C3FFDD, 0xEB55BEF7, 0xFE3FEF91,
    0xCC7F1998, 0xFEC8F5AC, 0x8F6F73DC, 0x7F72B96C, 0xAFEE40BD, 0xEEFE4017, 0xEE7B97BF,
    0xE3D6A399, 0xEFE3FDFD, 0x5FF199ED, 0x75ACCE5F, 0x547FF646, 0xDE35DBDE, 0xC43FFDDF,
    0xF937889B, 0x000017E3, 0x19AA7300, 0x20F7DDFD, 0xE1BE40DF, 0x00005F8F, 0x66A9CC00,
    0x83DF77F4, 0x6318C3EF, 0xEDF78FF8, 0x98000000, 0xEFE8CD53, 0xD6B987BE, 0xFD35AE64,
    0x00000BF1, 0x8CD53980, 0x907BEEFE, 0xF0DF206F, 0xF36EB64B, 0x17FE4467, 0x0786377D,
    0xE43F800C, 0xBDE47BBD, 0xBDEF20DD, 0x06FEF79D, 0xC3CFFCF0, 0x3C57EEEF, 0x06DE0AB9,
    0x187C7613, 0x3E7D116B, 0x2D42F436, 0xCF2539D6, 0x37DF8D77, 0x3CFEFFEB, 0xC6C0DF6B,
    0x9D62AC6A, 0xD77CF253, 0xFEB37DF8, 0xF6B3CFEF, 0x7BC9BA0D, 0xD695AE53, 0x77CF2539,
    0xEB37DF8D, 0x6B3CFEFF, 0x63FE30DF, 0x1ACA73A9, 0x539D61FF, 0xF8D77CF2, 0xEFFEB37D,
    0x0DF6B3CF, 0xAE69AD73, 0x4A73AD35, 0xBF1AEF9E, 0xFDFFD66F, 0xC1BED679, 0xB37B00DE,
    0xBE7929CE, 0x59BEFC6B, 0x59E7F7FF, 0xFE7586FB, 0xCF22CFB5, 0x43B39EFB, 0xB7FF2FEE,
    0xE7F9F6B2, 0xACF1EEFF, 0x7E739DFD, 0xF6AA73AC, 0x88EC73BD, 0xD4623B1C, 0xEF597BBE,
    0x6F033C53, 0xD42F4363, 0xD57F9D62, 0x9E3BECFF, 0xE73C6A7B, 0x4F7FEBFE, 0x56356361,
    0xEABFCEB1, 0xCF1DF67F, 0x739E353D, 0xA7BFF5FF, 0x4DEF26E8, 0xE75A56B9, 0xFB3FF55F,
    0x1A9EE78E, 0xFAFFB9CF, 0x5AE653DF, 0x5A6B5CD3, 0x3FF55FE7, 0x9EE78EFB, 0xFFB9CF1A,
    0x3653DFFA, 0x3F12D4BD, 0xB6ADB000, 0x8000FC4A, 0xE66F796E, 0x007E295A, 0x735AE600,
    0x0FC535AE, 0xDF200000, 0xEF990BF5, 0x7DFB9E1B, 0x6315D7E4, 0xE67AFFDF, 0x8EE6188E,
    0xEFFC67A8, 0x8FF8C37E, 0xAC539D45, 0xFF621FF1, 0x9DF447EE, 0x002B0E69, 0x417A0D80,
    0x9673AC2D, 0xC6FEF7DA, 0x67BF11D8, 0x53DF88EC, 0xC0DFDEFB, 0x0AB0D586, 0xF6A59CEB,
    0x7631BFBD, 0x3B19EFC4, 0xBED4F7E2, 0x46E837F7, 0x5AE49BDE, 0xA9673AC9, 0x8C6FEF7D,
    0xC67BF11D, 0xB53DF88E, 0xE30DFDEF, 0x4E75163F, 0xB07FC6B1, 0xDF6A59CE, 0x47631BFB,
    0x23B19EFC, 0x7BED4F7E, 0x6B5CC37F, 0xAC9AD732, 0xF7DA9673, 0x11D8C6FE, 0x88EC67BF,
    0xDEFB53DF, 0xE037E0DF, 0xBDEF7837, 0xEF7BDE37, 0xC0037E0D, 0xF597E73A, 0x718CFF3F,
    0x7633CE33, 0xE359FFE4, 0x7C63FE7F, 0xD06C2CE7, 0x3F116A0B, 0xA60001FE, 0x6FBAC431,
    0xB0D586C2, 0x0FF1F88A, 0x218D3000, 0xDD137DD6, 0x5C937BC8, 0x7F8FC52B, 0x0C698000,
    0xCC9BEEB1, 0xAD7326B5, 0x03FC7E29, 0x88634C00, 0x8D84DF75, 0x2DE558D5, 0xF51DFBF1,
    0x7797714F, 0x4877E30A, 0x3F136FA5, 0x77EB0000, 0xA6BDE23F, 0xC2B1EE99, 0xE33FF3F9,
    0x8069F6B1, 0xD734D6B9, 0xDF896F9A, 0x8A7FA8EF, 0x1853BCBB, 0x7D2A43BF, 0x0000001B

  EW_FONT_KERNING_CODES( WasherDescrFont )
  EW_FONT_KERNING_VALUES( WasherDescrFont )
EW_END_OF_FONT_RES( WasherDescrFont )

/* Table with links to derived variants of the font resource : 'Washer::DescrFont' */
EW_RES_WITHOUT_VARIANTS( WasherDescrFont )

/* This is a font resource. */
EW_DEFINE_FONT_RES( WasherListFontM, 17, 5, 0, 16, 0x0001, 0x00C1 )
  EW_GLYPH( 0x0001, 1, -12, 10, 12, 11, 0x00000000 ),
  EW_GLYPH( 0x0020, 0, 0, 0, 0, 4, 0x0000017E ),                /* ' ' */
  EW_GLYPH( 0x0021, 1, -13, 3, 13, 5, 0x0000017E ),             /* '!' */
  EW_GLYPH( 0x0022, 1, -13, 5, 5, 7, 0x000001DC ),              /* '"' */
  EW_GLYPH( 0x0023, 0, -11, 9, 11, 9, 0x0000022F ),             /* '#' */
  EW_GLYPH( 0x0024, 0, -13, 8, 15, 9, 0x00000378 ),             /* '$' */
  EW_GLYPH( 0x0025, 0, -12, 14, 12, 14, 0x000004ED ),           /* '%' */
  EW_GLYPH( 0x0026, 0, -12, 11, 12, 11, 0x0000070A ),           /* '&' */
  EW_GLYPH( 0x0027, 1, -13, 2, 5, 4, 0x000008D4 ),              /* ''' */
  EW_GLYPH( 0x0028, 1, -13, 4, 16, 5, 0x000008FB ),             /* '(' */
  EW_GLYPH( 0x0029, 0, -13, 4, 16, 5, 0x000009B3 ),             /* ')' */
  EW_GLYPH( 0x002A, 1, -13, 6, 6, 7, 0x00000A70 ),              /* '*' */
  EW_GLYPH( 0x002B, 0, -10, 9, 9, 9, 0x00000B05 ),              /* '+' */
  EW_GLYPH( 0x002C, 0, -2, 4, 5, 4, 0x00000BB0 ),               /* ',' */
  EW_GLYPH( 0x002D, 0, -5, 5, 1, 5, 0x00000BF5 ),               /* '-' */
  EW_GLYPH( 0x002E, 1, -2, 3, 2, 4, 0x00000C10 ),               /* '.' */
  EW_GLYPH( 0x002F, 0, -13, 7, 16, 6, 0x00000C23 ),             /* '/' */
  EW_GLYPH( 0x0030, 0, -11, 9, 11, 9, 0x00000D20 ),             /* '0' */
  EW_GLYPH( 0x0031, 1, -11, 7, 11, 9, 0x00000E60 ),             /* '1' */
  EW_GLYPH( 0x0032, 0, -11, 9, 11, 9, 0x00000EE8 ),             /* '2' */
  EW_GLYPH( 0x0033, 0, -11, 8, 11, 9, 0x0000101C ),             /* '3' */
  EW_GLYPH( 0x0034, 0, -11, 9, 11, 9, 0x0000115D ),             /* '4' */
  EW_GLYPH( 0x0035, 0, -11, 9, 11, 9, 0x00001264 ),             /* '5' */
  EW_GLYPH( 0x0036, 0, -11, 9, 11, 9, 0x000013AA ),             /* '6' */
  EW_GLYPH( 0x0037, 0, -11, 9, 11, 9, 0x00001504 ),             /* '7' */
  EW_GLYPH( 0x0038, 0, -11, 9, 11, 9, 0x000015F5 ),             /* '8' */
  EW_GLYPH( 0x0039, 0, -11, 9, 11, 9, 0x00001765 ),             /* '9' */
  EW_GLYPH( 0x003A, 1, -9, 3, 9, 4, 0x000018B7 ),               /* ':' */
  EW_GLYPH( 0x003B, 0, -9, 4, 12, 4, 0x000018F8 ),              /* ';' */
  EW_GLYPH( 0x003C, 0, -9, 9, 7, 9, 0x00001972 ),               /* '<' */
  EW_GLYPH( 0x003D, 0, -8, 9, 5, 9, 0x00001A6A ),               /* '=' */
  EW_GLYPH( 0x003E, 0, -9, 9, 7, 9, 0x00001B09 ),               /* '>' */
  EW_GLYPH( 0x003F, 0, -12, 7, 12, 7, 0x00001BFF ),             /* '?' */
  EW_GLYPH( 0x0040, 0, -12, 15, 15, 15, 0x00001CF0 ),           /* '@' */
  EW_GLYPH( 0x0041, 0, -12, 10, 12, 10, 0x00001FE0 ),           /* 'A' */
  EW_GLYPH( 0x0042, 1, -12, 9, 12, 10, 0x0000215C ),            /* 'B' */
  EW_GLYPH( 0x0043, 0, -12, 10, 12, 10, 0x000022AB ),           /* 'C' */
  EW_GLYPH( 0x0044, 1, -12, 10, 12, 11, 0x000023E9 ),           /* 'D' */
  EW_GLYPH( 0x0045, 1, -12, 8, 12, 9, 0x00002517 ),             /* 'E' */
  EW_GLYPH( 0x0046, 1, -12, 8, 12, 9, 0x000025F5 ),             /* 'F' */
  EW_GLYPH( 0x0047, 0, -12, 10, 12, 11, 0x000026BA ),           /* 'G' */
  EW_GLYPH( 0x0048, 1, -12, 10, 12, 11, 0x00002824 ),           /* 'H' */
  EW_GLYPH( 0x0049, 1, -12, 3, 12, 5, 0x000028E6 ),             /* 'I' */
  EW_GLYPH( 0x004A, 0, -12, 8, 12, 8, 0x00002916 ),             /* 'J' */
  EW_GLYPH( 0x004B, 1, -12, 10, 12, 10, 0x000029C6 ),           /* 'K' */
  EW_GLYPH( 0x004C, 1, -12, 8, 12, 9, 0x00002AFB ),             /* 'L' */
  EW_GLYPH( 0x004D, 1, -12, 11, 12, 13, 0x00002B7F ),           /* 'M' */
  EW_GLYPH( 0x004E, 1, -12, 9, 12, 11, 0x00002CE7 ),            /* 'N' */
  EW_GLYPH( 0x004F, 0, -12, 11, 12, 12, 0x00002DDF ),           /* 'O' */
  EW_GLYPH( 0x0050, 1, -12, 9, 12, 10, 0x00002F75 ),            /* 'P' */
  EW_GLYPH( 0x0051, 0, -12, 12, 15, 12, 0x0000307B ),           /* 'Q' */
  EW_GLYPH( 0x0052, 1, -12, 9, 12, 10, 0x0000327F ),            /* 'R' */
  EW_GLYPH( 0x0053, 0, -12, 9, 12, 9, 0x000033AE ),             /* 'S' */
  EW_GLYPH( 0x0054, 0, -12, 10, 12, 9, 0x00003529 ),            /* 'T' */
  EW_GLYPH( 0x0055, 1, -12, 9, 12, 11, 0x000035EB ),            /* 'U' */
  EW_GLYPH( 0x0056, 0, -12, 10, 12, 9, 0x000036C9 ),            /* 'V' */
  EW_GLYPH( 0x0057, 0, -12, 14, 12, 14, 0x0000381A ),           /* 'W' */
  EW_GLYPH( 0x0058, 0, -12, 9, 12, 9, 0x00003A3C ),             /* 'X' */
  EW_GLYPH( 0x0059, 0, -12, 9, 12, 8, 0x00003BA2 ),             /* 'Y' */
  EW_GLYPH( 0x005A, 0, -12, 9, 12, 9, 0x00003CB6 ),             /* 'Z' */
  EW_GLYPH( 0x005B, 1, -13, 4, 16, 5, 0x00003DF5 ),             /* '[' */
  EW_GLYPH( 0x005C, 0, -13, 7, 16, 6, 0x00003E62 ),             /* '\' */
  EW_GLYPH( 0x005D, 0, -13, 4, 16, 5, 0x00003F5C ),             /* ']' */
  EW_GLYPH( 0x005E, 1, -12, 7, 7, 9, 0x00003FC8 ),              /* '^' */
  EW_GLYPH( 0x005F, 0, 1, 9, 1, 9, 0x0000406D ),                /* '_' */
  EW_GLYPH( 0x0060, 3, -13, 4, 3, 9, 0x0000409E ),              /* '`' */
  EW_GLYPH( 0x0061, 1, -9, 7, 9, 9, 0x000040CE ),               /* 'a' */
  EW_GLYPH( 0x0062, 1, -13, 9, 13, 10, 0x000041D6 ),            /* 'b' */
  EW_GLYPH( 0x0063, 0, -9, 8, 9, 8, 0x000042F7 ),               /* 'c' */
  EW_GLYPH( 0x0064, 0, -13, 9, 13, 10, 0x000043DF ),            /* 'd' */
  EW_GLYPH( 0x0065, 0, -9, 9, 9, 9, 0x000044FD ),               /* 'e' */
  EW_GLYPH( 0x0066, 0, -13, 6, 13, 5, 0x00004616 ),             /* 'f' */
  EW_GLYPH( 0x0067, 0, -9, 9, 13, 9, 0x000046BF ),              /* 'g' */
  EW_GLYPH( 0x0068, 1, -13, 8, 13, 10, 0x00004867 ),            /* 'h' */
  EW_GLYPH( 0x0069, 1, -13, 3, 13, 4, 0x00004923 ),             /* 'i' */
  EW_GLYPH( 0x006A, -1, -13, 5, 17, 4, 0x00004966 ),            /* 'j' */
  EW_GLYPH( 0x006B, 1, -13, 8, 13, 9, 0x000049F2 ),             /* 'k' */
  EW_GLYPH( 0x006C, 1, -13, 3, 13, 4, 0x00004AE1 ),             /* 'l' */
  EW_GLYPH( 0x006D, 1, -9, 13, 9, 15, 0x00004B1E ),             /* 'm' */
  EW_GLYPH( 0x006E, 1, -9, 8, 9, 10, 0x00004C27 ),              /* 'n' */
  EW_GLYPH( 0x006F, 0, -9, 9, 9, 9, 0x00004CC3 ),               /* 'o' */
  EW_GLYPH( 0x0070, 1, -9, 9, 13, 10, 0x00004DDC ),             /* 'p' */
  EW_GLYPH( 0x0071, 0, -9, 9, 13, 10, 0x00004F0E ),             /* 'q' */
  EW_GLYPH( 0x0072, 1, -9, 6, 9, 6, 0x0000503D ),               /* 'r' */
  EW_GLYPH( 0x0073, 0, -9, 7, 9, 7, 0x000050AF ),               /* 's' */
  EW_GLYPH( 0x0074, 0, -12, 6, 12, 6, 0x000051B0 ),             /* 't' */
  EW_GLYPH( 0x0075, 1, -9, 8, 9, 10, 0x00005258 ),              /* 'u' */
  EW_GLYPH( 0x0076, 0, -9, 9, 9, 8, 0x000052F2 ),               /* 'v' */
  EW_GLYPH( 0x0077, 0, -9, 13, 9, 13, 0x000053F6 ),             /* 'w' */
  EW_GLYPH( 0x0078, 0, -9, 8, 9, 8, 0x00005583 ),               /* 'x' */
  EW_GLYPH( 0x0079, 0, -9, 9, 13, 8, 0x00005680 ),              /* 'y' */
  EW_GLYPH( 0x007A, 0, -9, 8, 9, 7, 0x000057C7 ),               /* 'z' */
  EW_GLYPH( 0x007B, 0, -13, 5, 16, 5, 0x000058A5 ),             /* '{' */
  EW_GLYPH( 0x007C, 1, -13, 2, 18, 4, 0x0000596B ),             /* '|' */
  EW_GLYPH( 0x007D, 0, -13, 5, 16, 5, 0x0000599A ),             /* '}' */
  EW_GLYPH( 0x007E, 0, -8, 9, 3, 9, 0x00005A7B ),               /* '~' */
  EW_GLYPH( 0x007F, 0, 0, 0, 0, 9, 0x00005AF2 ),
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 4, 0x00005AF2 ),
  EW_GLYPH( 0x00A1, 1, -9, 3, 13, 5, 0x00005AF2 ),
  EW_GLYPH( 0x00A2, 1, -12, 8, 13, 9, 0x00005B56 ),
  EW_GLYPH( 0x00A3, 1, -11, 8, 11, 9, 0x00005C85 ),
  EW_GLYPH( 0x00A4, 0, -10, 9, 9, 9, 0x00005D97 ),
  EW_GLYPH( 0x00A5, 0, -11, 9, 11, 9, 0x00005ED9 ),
  EW_GLYPH( 0x00A6, 1, -13, 2, 18, 4, 0x00006030 ),
  EW_GLYPH( 0x00A7, 0, -12, 9, 13, 9, 0x00006077 ),
  EW_GLYPH( 0x00A8, 2, -12, 6, 2, 9, 0x00006215 ),
  EW_GLYPH( 0x00A9, 0, -12, 13, 13, 13, 0x0000623F ),
  EW_GLYPH( 0x00AA, 0, -11, 6, 6, 6, 0x0000647F ),
  EW_GLYPH( 0x00AB, 0, -8, 7, 7, 8, 0x0000651D ),
  EW_GLYPH( 0x00AC, 0, -6, 9, 5, 9, 0x000065FA ),
  EW_GLYPH( 0x00AD, 0, -5, 5, 1, 5, 0x00006677 ),
  EW_GLYPH( 0x00AE, 0, -13, 8, 7, 7, 0x00006692 ),
  EW_GLYPH( 0x00AF, 2, -12, 6, 1, 9, 0x0000677B ),
  EW_GLYPH( 0x00B0, 0, -12, 6, 4, 6, 0x00006799 ),
  EW_GLYPH( 0x00B1, 0, -11, 9, 11, 9, 0x000067F5 ),
  EW_GLYPH( 0x00B2, 0, -15, 6, 7, 6, 0x000068E0 ),
  EW_GLYPH( 0x00B3, 0, -15, 6, 7, 6, 0x0000698E ),
  EW_GLYPH( 0x00B4, 3, -13, 4, 3, 9, 0x00006A42 ),
  EW_GLYPH( 0x00B5, 1, -9, 8, 13, 10, 0x00006A72 ),
  EW_GLYPH( 0x00B6, 0, -12, 9, 14, 10, 0x00006B53 ),
  EW_GLYPH( 0x00B7, 1, -7, 3, 2, 4, 0x00006C44 ),
  EW_GLYPH( 0x00B8, 3, 0, 4, 4, 9, 0x00006C57 ),
  EW_GLYPH( 0x00B9, 1, -15, 4, 7, 6, 0x00006C92 ),
  EW_GLYPH( 0x00BA, 0, -11, 6, 6, 6, 0x00006CCC ),
  EW_GLYPH( 0x00BB, 1, -8, 7, 7, 8, 0x00006D61 ),
  EW_GLYPH( 0x00BC, 1, -12, 12, 12, 14, 0x00006E2E ),
  EW_GLYPH( 0x00BD, 1, -12, 13, 12, 14, 0x00006FA4 ),
  EW_GLYPH( 0x00BE, 0, -12, 14, 12, 14, 0x00007162 ),
  EW_GLYPH( 0x00BF, 0, -9, 7, 12, 7, 0x00007369 ),
  EW_GLYPH( 0x00C0, 0, -15, 10, 15, 10, 0x00007450 ),
  EW_GLYPH( 0x00C1, 0, -15, 10, 15, 10, 0x0000760C ),
  EW_GLYPH( 0x00C2, 0, -15, 10, 15, 10, 0x000077C8 ),
  EW_GLYPH( 0x00C3, 0, -15, 10, 15, 10, 0x000079A8 ),
  EW_GLYPH( 0x00C4, 0, -15, 10, 15, 10, 0x00007B90 ),
  EW_GLYPH( 0x00C5, 0, -16, 10, 16, 10, 0x00007D64 ),
  EW_GLYPH( 0x00C6, 0, -12, 14, 12, 14, 0x00007F41 ),
  EW_GLYPH( 0x00C7, 0, -12, 10, 16, 10, 0x000080FF ),
  EW_GLYPH( 0x00C8, 1, -15, 8, 15, 9, 0x000082A2 ),
  EW_GLYPH( 0x00C9, 1, -15, 8, 15, 9, 0x000083BA ),
  EW_GLYPH( 0x00CA, 1, -15, 8, 15, 9, 0x000084D2 ),
  EW_GLYPH( 0x00CB, 1, -15, 8, 15, 9, 0x0000860E ),
  EW_GLYPH( 0x00CC, -1, -15, 5, 15, 5, 0x0000873E ),
  EW_GLYPH( 0x00CD, 1, -15, 4, 15, 5, 0x000087B7 ),
  EW_GLYPH( 0x00CE, -1, -15, 6, 15, 5, 0x00008821 ),
  EW_GLYPH( 0x00CF, -1, -15, 6, 15, 5, 0x000088CD ),
  EW_GLYPH( 0x00D0, 0, -12, 11, 12, 11, 0x0000896D ),
  EW_GLYPH( 0x00D1, 1, -15, 9, 15, 11, 0x00008ABB ),
  EW_GLYPH( 0x00D2, 0, -15, 11, 15, 12, 0x00008C1C ),
  EW_GLYPH( 0x00D3, 0, -15, 11, 15, 12, 0x00008DF5 ),
  EW_GLYPH( 0x00D4, 0, -15, 11, 15, 12, 0x00008FCE ),
  EW_GLYPH( 0x00D5, 0, -15, 11, 15, 12, 0x000091CB ),
  EW_GLYPH( 0x00D6, 0, -15, 11, 15, 12, 0x000093D0 ),
  EW_GLYPH( 0x00D7, 0, -9, 8, 7, 9, 0x000095C1 ),
  EW_GLYPH( 0x00D8, 0, -13, 12, 14, 12, 0x000096A1 ),
  EW_GLYPH( 0x00D9, 1, -15, 9, 15, 11, 0x000098DD ),
  EW_GLYPH( 0x00DA, 1, -15, 9, 15, 11, 0x000099F8 ),
  EW_GLYPH( 0x00DB, 1, -15, 9, 15, 11, 0x00009B13 ),
  EW_GLYPH( 0x00DC, 1, -15, 9, 15, 11, 0x00009C52 ),
  EW_GLYPH( 0x00DD, 0, -15, 9, 15, 8, 0x00009D85 ),
  EW_GLYPH( 0x00DE, 1, -12, 9, 12, 10, 0x00009ED6 ),
  EW_GLYPH( 0x00DF, 1, -13, 9, 13, 10, 0x00009FE1 ),
  EW_GLYPH( 0x00E0, 1, -13, 7, 13, 9, 0x0000A135 ),
  EW_GLYPH( 0x00E1, 1, -13, 7, 13, 9, 0x0000A284 ),
  EW_GLYPH( 0x00E2, 1, -13, 7, 13, 9, 0x0000A3D3 ),
  EW_GLYPH( 0x00E3, 1, -12, 7, 12, 9, 0x0000A543 ),
  EW_GLYPH( 0x00E4, 1, -12, 7, 12, 9, 0x0000A6AC ),
  EW_GLYPH( 0x00E5, 1, -13, 7, 13, 9, 0x0000A7FB ),
  EW_GLYPH( 0x00E6, 1, -9, 13, 9, 14, 0x0000A96F ),
  EW_GLYPH( 0x00E7, 0, -9, 8, 13, 8, 0x0000AB65 ),
  EW_GLYPH( 0x00E8, 0, -13, 9, 13, 9, 0x0000ACAD ),
  EW_GLYPH( 0x00E9, 0, -13, 9, 13, 9, 0x0000AE15 ),
  EW_GLYPH( 0x00EA, 0, -13, 9, 13, 9, 0x0000AF7D ),
  EW_GLYPH( 0x00EB, 0, -12, 9, 12, 9, 0x0000B106 ),
  EW_GLYPH( 0x00EC, 0, -13, 4, 13, 4, 0x0000B26C ),
  EW_GLYPH( 0x00ED, 0, -13, 4, 13, 4, 0x0000B2D3 ),
  EW_GLYPH( 0x00EE, -1, -13, 6, 13, 4, 0x0000B33A ),
  EW_GLYPH( 0x00EF, -1, -12, 6, 12, 4, 0x0000B3DC ),
  EW_GLYPH( 0x00F0, 1, -13, 8, 13, 10, 0x0000B45E ),
  EW_GLYPH( 0x00F1, 1, -12, 8, 12, 10, 0x0000B5F4 ),
  EW_GLYPH( 0x00F2, 0, -13, 9, 13, 9, 0x0000B6F4 ),
  EW_GLYPH( 0x00F3, 0, -13, 9, 13, 9, 0x0000B85C ),
  EW_GLYPH( 0x00F4, 0, -13, 9, 13, 9, 0x0000B9C4 ),
  EW_GLYPH( 0x00F5, 0, -12, 9, 12, 9, 0x0000BB4D ),
  EW_GLYPH( 0x00F6, 0, -12, 9, 12, 9, 0x0000BCCD ),
  EW_GLYPH( 0x00F7, 0, -10, 9, 8, 9, 0x0000BE33 ),
  EW_GLYPH( 0x00F8, 0, -10, 9, 11, 9, 0x0000BEE5 ),
  EW_GLYPH( 0x00F9, 1, -13, 8, 13, 10, 0x0000C062 ),
  EW_GLYPH( 0x00FA, 1, -13, 8, 13, 10, 0x0000C147 ),
  EW_GLYPH( 0x00FB, 1, -13, 8, 13, 10, 0x0000C22C ),
  EW_GLYPH( 0x00FC, 1, -12, 8, 12, 10, 0x0000C332 ),
  EW_GLYPH( 0x00FD, 0, -13, 9, 17, 8, 0x0000C416 ),
  EW_GLYPH( 0x00FE, 1, -13, 9, 17, 10, 0x0000C5AC ),
  EW_GLYPH( 0x00FF, 0, -12, 9, 16, 8, 0x0000C6F0 ),

  EW_FONT_PIXEL( WasherListFontM, 0x0000C884 )                  /* ratio 71.58 % */
    0xDEF7BDCF, 0x38886F7B, 0xCF02FEF7, 0xEF0BF4D3, 0xE41627CA, 0xBF01FEEA, 0x8C6604C7,
    0xC1ABBA00, 0xB12BD98C, 0x63572D7E, 0x60AFC3C4, 0x81FF7BDC, 0x5821E710, 0x7E4A4001,
    0xB133AA61, 0xA44175AE, 0xCC4611C8, 0xDE1C2E65, 0x31392642, 0x7F724F27, 0x1F71BDCF,
    0xD777BD77, 0x1CC7C87D, 0xF7D9F73C, 0xDD73D75B, 0x244BBF3B, 0x95939139, 0xF0064958,
    0xF3C0A00B, 0x5F50DF77, 0x3B1E3BDF, 0x3B95F11F, 0x13BCCC12, 0x33BF7F62, 0x3BE7FD61,
    0x2407D741, 0xFD630EBF, 0x79EF71BC, 0xBD8F7C97, 0x9FF8C140, 0xFE06FC0F, 0x18A8BC7D,
    0x42DE3E54, 0xC9916237, 0x916224F3, 0x3E543749, 0xFCBEB2DE, 0x1F7F8F9F, 0xFBFE6FAF,
    0xF9FF8D78, 0xC7C9EFF4, 0xC66B205B, 0x5EFC1322, 0x7C84C8B1, 0xB78F951E, 0xF7F8BDE0,
    0x39DF12F1, 0xF9C5F813, 0x5FD601BF, 0xBBAED600, 0xFBE79C02, 0x167B441A, 0x5F8FF0E6,
    0x8C6BE43D, 0xBE97EB53, 0xCFD0D31A, 0xE48579AD, 0x6A53DF8B, 0x3A7929BC, 0x5BDF73FD,
    0x2EB3C7A7, 0x62E62391, 0x2B31FA2E, 0xF28C577D, 0x00131864, 0x43279318, 0xCCBBE28C,
    0x1F89FA4A, 0xA3F39311, 0x1DC7EA0C, 0xB02564E4, 0x41DC9C92, 0xFCE194FD, 0x06FC4C44,
    0x93CF58CF, 0xAD7BC679, 0xBE97E32F, 0xECFF273B, 0x3A201605, 0x73C00000, 0x7DEE71EF,
    0x738F7B9E, 0x000003EF, 0x0CFA03A2, 0xA30CF4A2, 0xDC627B96, 0x327DFF7B, 0xA783FC80,
    0x3C43FEC0, 0x6F605505, 0x0C8C16B0, 0x1540FDF8, 0x0A780C64, 0x53C43FEC, 0x06EE0550,
    0x0BBBFF3C, 0x7EFBEBF5, 0x4F1EBB83, 0x2EC5D4BD, 0x044641E9, 0x64580458, 0xCF08C83C,
    0xF5E8BFC5, 0xF1979E78, 0x0DFBEF7B, 0xD3859D62, 0x0002F701, 0x00000000, 0x7D5EF780,
    0xCE77C6FF, 0xFFFF906F, 0x729FE339, 0xC243DA2F, 0xE00E6400, 0x73D6051D, 0x80DFECC1,
    0x9E07DF7A, 0x3E309DEF, 0x61BDEF7D, 0x87EEE77C, 0xF7F7BFFB, 0xCAC2BD95, 0x8C0E303F,
    0xF771272F, 0xFFDC41BA, 0x6B909FF7, 0xEEAB80B6, 0x7EB3BD43, 0x1B7EDCE7, 0x3781FCF2,
    0x203CF580, 0xCE0FF7DF, 0x0F8AC0B3, 0x7804F78C, 0x79DBDF63, 0xBDEF77D7, 0x0001779D,
    0xEF7BDC60, 0xDEF74C5D, 0x0C8090BB, 0xFF7D8DC0, 0x7FEFBF0B, 0x0AC66DFB, 0x7F809CCF,
    0x519D8084, 0x56AE61FB, 0xFFEE73BF, 0xB9EF107B, 0xDC7FC1FB, 0x17CB26FB, 0x03F7C59E,
    0x5F39F664, 0xDCFFEF08, 0xE23DF0F8, 0x94C04456, 0xA9158FEA, 0x19DF259F, 0xAECFBFF2,
    0xF7BDEE36, 0xDEE39BDE, 0x04E8EF7B, 0x36F102CB, 0xEF80B330, 0x50166407, 0x90127006,
    0xF9801013, 0xB307FFBF, 0xC57E7BDF, 0xE1E632AE, 0x7CAC101F, 0x9C8833C5, 0xBFE5EFE7,
    0x30ACDFFE, 0xCEFACDC6, 0x1CAA810F, 0x4CECA6F5, 0xCDEF71BF, 0xFCE7BC4B, 0xCF79FE06,
    0x78C69FFF, 0xC03F5CC3, 0xD43A232D, 0x9EE3FC97, 0xCEFC62FD, 0x7EC00CE9, 0x74FE7C80,
    0xD39393C9, 0x3E9B3EF7, 0x0127BC19, 0xFA064FA0, 0x127BC0A4, 0x419F4000, 0xD4619E94,
    0xF5004F72, 0xBFFEC83D, 0x3B7F32FF, 0xF3C57FCE, 0x9E0779E6, 0x603BCF37, 0xFF9C76FE,
    0xDFFF640A, 0xDEF73D7F, 0x9E7DEF7B, 0xF7BDEF7B, 0x3C00003E, 0xEF7BDEF7, 0x80B79E7D,
    0x12BFF78A, 0xF673FFD1, 0x9EF181EF, 0xF78C1EF8, 0xFF44F7C4, 0x47BFD9CF, 0x095FFBC5,
    0x15E7BECF, 0xEAFFDF6F, 0x00D465D8, 0x0FE66133, 0xBB897FA3, 0x20F8C41E, 0xEA05807A,
    0xF9E0004C, 0x06FFFB9D, 0x73DCFB90, 0xE20B3EF7, 0xCC457EFE, 0x7DF07BFD, 0x52FB880B,
    0xFFE7D16B, 0xF9D2232E, 0x2BBDC778, 0xB92AD399, 0x640B48BE, 0x64A427AA, 0xEB0440CD,
    0x9088C861, 0xF29DF22B, 0xEA794F36, 0xFB9D77BE, 0x7BC3FF16, 0xFF3BE37E, 0x00357307,
    0x622BF538, 0xFFEE403E, 0x05DF773D, 0xAC07FB88, 0xEFF8031A, 0x9EA207E7, 0x665603FF,
    0x23FF80E5, 0x3F510FC7, 0x7D960F7E, 0xBFE0E76F, 0xFC77BDEE, 0xC7A86D44, 0xE39D828A,
    0xF7E2A05F, 0xFFEF7BDC, 0xCF7B9C0D, 0x3BC607F3, 0xF1806012, 0xBBDCE0CE, 0xFBDCE367,
    0xF6403DCF, 0x00B9017C, 0xE6F902CF, 0x8EF7B9CB, 0xCEFD40FF, 0xFBF313DD, 0x1A5FDB9F,
    0xE9DA93DD, 0x0AB0131B, 0x00000E20, 0x00AA0071, 0x8C109CDE, 0xC5ED49EE, 0xF6E7FEFA,
    0xEF7B9EB7, 0xDCE03DF9, 0x407DFFFB, 0x0133FFCC, 0x3D803EA3, 0x00005200, 0x05D80148,
    0xE6203AA8, 0x7B9C1F37, 0xE797BFFF, 0x7DEF7BDE, 0xFBDEF738, 0x70000000, 0xCE2FBDEE,
    0x0005F7BD, 0xB9C00000, 0xB9F7DEF7, 0x1F7BDEF7, 0x3EF7BDCE, 0x00000000, 0x8BEF7B9C,
    0x017DEF73, 0x60000000, 0xDFFEE77C, 0xF7FFFE60, 0xF764B1DE, 0xBF4DF90A, 0x00AB0131,
    0x7B8000E2, 0xDC1C5FEF, 0xF802ACDB, 0xDBC60272, 0xE60EE42B, 0xE3BDEFB7, 0xE780DCFF,
    0x00000006, 0xDEE70000, 0xF7383F7B, 0x0001FBDE, 0x00000000, 0x000373C0, 0x58000000,
    0x00000037, 0x00000000, 0xC46E0400, 0xA67C8FB8, 0x7EEF7BF1, 0x750373DA, 0xF5BF201F,
    0x034FB880, 0xEB780F9F, 0x3E339804, 0x8257BBA0, 0x417CCD67, 0xA0C0F5D3, 0xB1DE01AA,
    0x78DEB900, 0x0000006E, 0x00000000, 0x00000000, 0x8EF7BDCE, 0x775836E7, 0x905F80F1,
    0xCF123206, 0xF209E787, 0x037EF85B, 0x23118F99, 0x7EFD77E0, 0x1E78ACC0, 0x4CDF9E20,
    0x00FE79C0, 0xBF002D4F, 0x784EE780, 0xE6401D2E, 0x099E8C0B, 0xF4069EA2, 0x0D98C053,
    0xBC409CE8, 0x039600BF, 0x14F007E8, 0x7E73BF3C, 0xE73BFD05, 0xAD45BFFC, 0x1EECC3DF,
    0xE66078CE, 0x96A01EAB, 0x0049C038, 0x53FC0388, 0x9BCAB015, 0x8CFCCC0F, 0xF7664DFE,
    0xE7FEFD60, 0xB9E5BFFC, 0x97FFDEF7, 0x3B5EF738, 0xC01E7E41, 0x05E44038, 0xB9C9CBE3,
    0xB9C6E4F7, 0x0006FFF7, 0xC0000000, 0x57E73BF3, 0x9CE77FA0, 0xEB50B7FF, 0x3D7F30F7,
    0x2781E338, 0x2A80AA3F, 0x012702E2, 0x3FC03880, 0xF15602A9, 0x3F3303E6, 0xCC3DFAC6,
    0xF7EE81EE, 0xC0B7EFDE, 0x01E71DDC, 0x0019CF58, 0xC9EE757E, 0xFF7BDEE7, 0x7BDCE06F,
    0xCDE30372, 0x0C094807, 0x8A3B8C03, 0xF9FFEF73, 0x0BF6DCE3, 0x7405F2B0, 0x0355403D,
    0x77E3173A, 0x7FE45EEE, 0xE1BFDB9F, 0x43DA8B1B, 0x7E3FC00C, 0xF737D403, 0xFFE781EF,
    0xCC076FAE, 0x780FE5FD, 0xF4C0196A, 0xAEB315FF, 0xFF9EFA3D, 0xF7BDD6BF, 0xAC6F7BDE,
    0xEF79AF7B, 0x0000000D, 0x00000000, 0x00000000, 0xE0375800, 0x000000B9, 0x40000000,
    0x99018402, 0xCAFC0F15, 0xFCE896FB, 0xE6F7DD59, 0xCC0FF73F, 0xEC07BF1B, 0x6A078A8A,
    0xF151B91B, 0x48F614F0, 0x0A78397E, 0x0FE64A23, 0xE03956D6, 0x8A81765F, 0xB540FEA7,
    0xAC166E02, 0xFD81DF0B, 0x8915030E, 0xA861E5BC, 0x2E31E322, 0x62B36355, 0xFFFE1E78,
    0xB87FF17F, 0x1A455549, 0x18722783, 0x33F9E591, 0x750F3D62, 0x7FF21633, 0x2466B737,
    0x95067C9E, 0xA35D81FB, 0x56039CC8, 0x33F8A80C, 0x359E44EE, 0x637E1F9E, 0x6AE531E9,
    0x3E5FB672, 0xF06AEF68, 0x3FC0A7CE, 0x97CF1816, 0xD9A9FA13, 0x9ABDAA78, 0x99DE299E,
    0x46B0FC73, 0xFB8C36FF, 0x8DF031DC, 0xAC4BC6A7, 0x1CD27E97, 0xEF3E350F, 0xC6B9DE0F,
    0x07FB2784, 0x00004CFC, 0xF7800000, 0xDDEF7BDE, 0xFDEF7BDE, 0x07AE8179, 0xBC417CAC,
    0x346FC133, 0xB7034F18, 0x05F2B01E, 0x3D04CEF1, 0x7BCCE41A, 0xB9F7BDEF, 0x1FEF2FF7,
    0x00000000, 0xFDE40000, 0x37FC0BBF, 0x154027A8, 0x02D41BB8, 0x7FB00CF1, 0x4A4079E0,
    0x6F603CF0, 0x2A804F50, 0xB2A82F70, 0xFBADFDEE, 0x00000001, 0x75800000, 0xF05BCC3F,
    0x3D118BAD, 0x7CF3EF93, 0x69BE3D62, 0xBA73293E, 0xEF77E378, 0xDFDEF7BD, 0x23C5F9B7,
    0xBEF657DE, 0xFB9C45A7, 0x69BC6B9F, 0xF7CF1FAC, 0xEFFE319F, 0xFDCF53BD, 0xCF06CF24,
    0x5DE5CC2F, 0xBADA7FE7, 0x00000000, 0xFFBBF1C8, 0xB7BEF185, 0xE97C49DF, 0x67601FA9,
    0x23200300, 0x3783DF80, 0xDDCF3674, 0xC607FC77, 0x186FCE77, 0x8767BCFF, 0xA32B0ECE,
    0x0C04807E, 0xDC0FE310, 0x8C7CC3A7, 0x4F67B8FF, 0x00005DC0, 0xEEFC6000, 0x3FE3267F,
    0x67493EEE, 0x07EA268B, 0x88030090, 0x33DF80DC, 0xF7CC17C5, 0x83EFFF77, 0x31A73BF1,
    0xD1DCFBFE, 0x53D12D74, 0xC188C5D4, 0xF0BDEF77, 0x1DEF7BDD, 0xB5D01751, 0xFF1878C2,
    0xCF0D3DFF, 0xFBF12EFF, 0x025194EE, 0xB1BEDB58, 0x00037DB6, 0x00000000, 0x7BDEFFE6,
    0xF7BF667F, 0x55BE7FB3, 0xE001FA9E, 0x7CF3CAB7, 0xFDF7D1AC, 0xEEFB5592, 0xF7C049C2,
    0x6FCF7B9C, 0x5EF73EE8, 0x9088559D, 0x5D5629D1, 0xFFFBBEDB, 0x000175AF, 0xDF190000,
    0xF5F19339, 0x5F14DF79, 0x00808A5A, 0x00000000, 0x13E813E8, 0x00001758, 0xD0027D00,
    0x02EB0027, 0x00000000, 0xC7EC0800, 0x0BADABBA, 0x80000000, 0xEB301FEF, 0x897F4606,
    0x1BE0AB38, 0x70D6D605, 0x7A40E7B2, 0x39BC0B9E, 0x000005D7, 0xDFC9E000, 0xFDDF8DFA,
    0x2CE7BC57, 0xFAEF7E9E, 0x87BA7DBE, 0xE713A5F8, 0x26581531, 0x00000012, 0x00000000,
    0xBF1BF580, 0xBF4F2673, 0xFC537DE7, 0x008052D2, 0x00000000, 0xF9CEFC60, 0xE7DFF182,
    0x259FA1DA, 0xFD46F1BE, 0x23018AA1, 0xEA223018, 0x59FA550F, 0xF1AF1BE2, 0xB1DAE7DF,
    0xFF77E37E, 0xB7BF4F0B, 0xD2FC49DF, 0xCEC03F53, 0x0A400600, 0xD0E857E0, 0xDFF9E4D9,
    0xDCE41FF1, 0x000037F7, 0x77E30000, 0x8CB7F3FF, 0x14FBB8FF, 0xA89A2D9D, 0x0C02401F,
    0x7E037220, 0x305F14CF, 0x1FFDDFDF, 0x2BBBFF98, 0x60000000, 0x69BEC6FD, 0xFCA6E7BE,
    0x00000425, 0x3BF90000, 0x9C4E1BE7, 0xB3630FF3, 0xF02BD3D2, 0x837DDFBD, 0x83EAFFF5,
    0x0DFC9EFA, 0xBDF72BB1, 0x40AC7F37, 0xFF406274, 0xB6F6FBED, 0x00000BEF, 0x13F11800,
    0xEFDB9EFC, 0x001F711F, 0x80000000, 0x8F9FE480, 0x77EB3CD1, 0x7FBC2FDE, 0x0397C798,
    0x47F232FF, 0xA1E7873C, 0xCE1CBF14, 0xF9E518C2, 0x8CF7EFC3, 0x029C6782, 0xBCC3EA39,
    0xF383EE78, 0xA6C76294, 0xF53732A2, 0x2A846316, 0x5DA66631, 0x313D61EC, 0x7529B3CA,
    0x8A23BAB7, 0xAECAA318, 0x8DFBF01A, 0x07EFC6A1, 0x319E1463, 0xDC61F718, 0xA7E9B31A,
    0x8D3D56BC, 0x944DFB7E, 0x7C9FA131, 0x6BDBE631, 0x753E6770, 0x5CDE6CCD, 0xF8E787FD,
    0x6329C0E5, 0xBF2E787C, 0x7A61E3C5, 0xB5D442EC, 0x0F2ADC2E, 0x3980BA3C, 0x078FF02E,
    0xD6780BD8, 0xBF7DC60F, 0x7BDEF704, 0x7FDEF70F, 0x05CDE0BC, 0x9E885D4F, 0x630BDA03,
    0xC0F5B836, 0xBDEF751C, 0x74FE7983, 0x010789FF, 0xF08C6003, 0xBD9E95EC, 0x00023192,
    0xD07C8024, 0x007E7FFD, 0xAC000000, 0xF99D63FB, 0xB1213310, 0x87E62620, 0xF5DE7F5E,
    0x6601FD67, 0x9E2080C0, 0x50F3CEB4, 0xF2183DFF, 0xFC8CF7BD, 0xCE39BE47, 0x99D45FB9,
    0x4E0D33A8, 0xB0102448, 0x4616F888, 0xCFA20203, 0xE3FE2FFC, 0xF9584F37, 0xABF4C63D,
    0x18803100, 0x8EF01540, 0xD8B463DF, 0xE25EF3D1, 0x40BDCFFB, 0x3DDFFE80, 0xFB739F79,
    0x5EA1BEB2, 0xFB836A00, 0xEE3FBDD4, 0x40FEFFDF, 0x8C062780, 0xDE3FC1B7, 0x050DEF7B,
    0xFB5BE31E, 0x318DFEEE, 0xDF3DBEDF, 0xCD4B79E1, 0x0FF8991F, 0x3C1FF132, 0x33F9A96F,
    0xDFB7DBE6, 0xED7FC737, 0xEB3FD7BB, 0xF51DC626, 0x7439DE34, 0xDF26ACA5, 0x581BDF9F,
    0xB8C59E35, 0xDEE3FF37, 0xD8EEF718, 0x77B8C6F7, 0xB8C6F7DB, 0x06F7DB77, 0x0FCF0000,
    0xCC77A800, 0x6A000175, 0xBE237FDF, 0x48C81EEF, 0x5BF231A3, 0xF6FAEF01, 0xFD76626D,
    0xC587CFFE, 0xFCC44F38, 0x7DE11075, 0xC69EFB9F, 0x262AFFFA, 0xCC11DE78, 0xCA83230E,
    0x9C61F77B, 0x2C1633CC, 0xBE7BEF44, 0xE7BEC601, 0xE2177B9E, 0x7B3C959C, 0x88DFBC3F,
    0x6BE59CEF, 0xB9E7F96A, 0x152C5544, 0x2077162D, 0x12C43026, 0xD2811813, 0xDF8FB9A2,
    0x2BDCF372, 0x237D619E, 0xEF9673BF, 0x3C9D3DC5, 0xB720FDFF, 0x0B3DCF73, 0x725E7FEB,
    0xEFE61A9F, 0x77FF339F, 0x98CF9997, 0x827EDE6A, 0xEE2BE57C, 0x7DF3F717, 0x78C6FBE3,
    0xF19678D6, 0xBE2CF1AC, 0x10DF7C6F, 0x3DFB8BF7, 0xEF7BDEF7, 0xEF7B9E7D, 0x000137BD,
    0x71ADF800, 0xDFCBFDEF, 0xEE7137F9, 0xC77ADAD9, 0x8B70DFDD, 0xB2DC7B18, 0xBD63D8E7,
    0x21BEFC63, 0x1B5B3DCE, 0xAC3BDEF7, 0xDDFC9673, 0x7F204BFB, 0x1E12FEF7, 0x00017C40,
    0x8F7B9E00, 0xDCF3EF73, 0x1F7B9C7B, 0x3B100000, 0x7B9E0300, 0x3EF7BDEF, 0xF8B4FFE6,
    0x7E2B3DEF, 0xE7204F91, 0xB8C3DE43, 0xFCFF10EF, 0x9FFA9FDD, 0x9CEF7D8F, 0xBC3C473A,
    0xCF7835FF, 0x6197F378, 0xFC9EFFE4, 0xFC4F3FB1, 0x3F3C6FBC, 0x541655F8, 0x00000000,
    0xFC658080, 0x7BDDF883, 0xDDF6309F, 0x001257E3, 0xED601318, 0x78FB8FF3, 0x04C4047B,
    0x11800024, 0x6A005F00, 0xD72053F7, 0x000002F7, 0xD8800000, 0xEB0327D5, 0x99397BE1,
    0xEF8E76F3, 0x000DF18C, 0xE7FEA000, 0x19CEF88B, 0xAFC355BF, 0xAFC35580, 0xFC673BE2,
    0xF705F0BE, 0x9E79FEEF, 0xFA3E79EF, 0x3F427E89, 0xF3D44FD1, 0x7F39F3D5, 0xCEF8CFE7,
    0x7C60DF80, 0x80062A03, 0x93CF006E, 0xAC01BA00, 0xF817BC2F, 0xD1FF0296, 0xC82FD13F,
    0x7E06BE9A, 0xEBBF51AF, 0xDC63CF92, 0x0BDE5D7B, 0xE033BE30, 0x01BE3037, 0x6E800315,
    0x01279E00, 0x7D6006E8, 0x81A7FF31, 0xEF7FC56F, 0xFF47FC59, 0x09F22FC4, 0xF9C84D64,
    0xDE42F7E0, 0x8C1E7C83, 0x17BC0EFB, 0xFDDFCFF1, 0xC0F9FFA9, 0x3BDF606F, 0x3A062A27,
    0x06E83C47, 0x9E0D7FEF, 0xC67BC127, 0x2FE4374B, 0xF0BEB0C3, 0x27BFF95E, 0x60A5BE7F,
    0xFA2FCFFE, 0x6405FA27, 0xFC035F4D, 0xD77EA35E, 0xE31E7C85, 0x7BC2EBDE, 0x03FBF001,
    0xC60FEFC0, 0x62077E03, 0xC2E5F86E, 0x9BEF03AA, 0x79101888, 0xF71D7AC3, 0x7DF87FFC,
    0x0058BF00, 0xFB8805BF, 0x031AAC07, 0x07E7EFF8, 0x03FF9EA2, 0x80E56656, 0x0FC723FF,
    0x0F7E3F51, 0xE76F7D96, 0xBDEEBFE0, 0x6D44FC77, 0x828AC7A8, 0xA05FE39D, 0x1FBE07E2,
    0xB00FC560, 0x7FB8807E, 0x8031AAC0, 0x207E7EFF, 0x603FF9EA, 0xF80E5665, 0x10FC723F,
    0x60F7E3F5, 0x0E76F7D9, 0x7BDEEBFE, 0x86D44FC7, 0xD828AC7A, 0x2A05FE39, 0x0CE7187E,
    0x3BF7E710, 0x9E7FF101, 0x7FB8807F, 0x8031AAC0, 0x207E7EFF, 0x603FF9EA, 0xF80E5665,
    0x10FC723F, 0x60F7E3F5, 0x0E76F7D9, 0x7BDEEBFE, 0x86D44FC7, 0xD828AC7A, 0x2A05FE39,
    0x8F7FC47E, 0xEEFE60B9, 0x73584DFD, 0xB8807FEC, 0x31AAC07F, 0x7E7EFF80, 0x3FF9EA20,
    0x0E566560, 0xFC723FF8, 0xF7E3F510, 0x76F7D960, 0xDEEBFE0E, 0xD44FC77B, 0x28AC7A86,
    0x05FE39D8, 0x338C7E2A, 0x44B019C6, 0xF3275058, 0x07FB8814, 0xF8031AAC, 0xA207E7EF,
    0x5603FF9E, 0xFF80E566, 0x510FC723, 0x960F7E3F, 0xE0E76F7D, 0x77BDEEBF, 0xA86D44FC,
    0x9D828AC7, 0xE2A05FE3, 0x13FFFC87, 0x03F7DEF8, 0xEFBDF800, 0x8034C80F, 0xFF006355,
    0xD440FCFD, 0xCAC07FF3, 0x7FF01CAC, 0xEA21F8E4, 0xB2C1EFC7, 0xFC1CEDEF, 0x8EF7BDD7,
    0xF50DA89F, 0x73B05158, 0xFC540BFC, 0xF7BDFF80, 0x7303FBDE, 0xDEF7BA8C, 0x0BBDF81F,
    0xA0016980, 0x6358007F, 0x3FDEF752, 0xF7BA8DBC, 0xBBE2B1FE, 0xFEF100B7, 0x7805BDEE,
    0xF98800B3, 0x04C7A001, 0x7FBDEF75, 0x3DDCEFD4, 0xB9FFBF31, 0x3DD1A5FD, 0x31BE9DA9,
    0xE200AB01, 0x07100000, 0xCDE00AA0, 0x9EE8C109, 0xEFAC5ED4, 0x0B7F6E7F, 0xBDBF7BF5,
    0x3805EF80, 0x9DBCC099, 0x5F80FBF0, 0xF0B7E02C, 0xBDEF7BDC, 0x7BDEE70F, 0x0000001F,
    0xC5F7BDCE, 0x00BEF7B9, 0x38000000, 0xC2FBDEF7, 0x7E2B03F7, 0xDCF0FD60, 0x0FBDEF7B,
    0x1F7BDEE7, 0xCE000000, 0xB9C5F7BD, 0x0000BEF7, 0xF7380000, 0xCE32FBDE, 0xFBF38819,
    0xCFFE209D, 0xBDCF0FF3, 0x70FBDEF7, 0x01F7BDEE, 0xDCE00000, 0x7B9C5F7B, 0x00000BEF,
    0xEF738000, 0xC671AFBD, 0xC2258338, 0x29E64EA2, 0xDEF7BDCF, 0xBDEE70FB, 0x000001F7,
    0x5F7BDCE0, 0x0BEF7B9C, 0x80000000, 0xAFBDEF73, 0x2C5F87DF, 0x1B9E16FC, 0x00000000,
    0xDF000000, 0xF59F8ACF, 0x0001B9E3, 0x00000000, 0x3886738C, 0xF889DFBF, 0x783FCF3F,
    0x0000006E, 0x00000000, 0x319C6000, 0xAC2258CE, 0x78A7993A, 0x0000006E, 0x00000000,
    0xEF7B8000, 0xEFA01DDD, 0x602763BD, 0xF005E2FC, 0x4F2800D6, 0x10EF7D5D, 0x77BEAEA2,
    0x800A4000, 0x4ABF0052, 0xFA0FB6A0, 0x207FAEDE, 0x85CC7BFE, 0x37F7BBF9, 0xFFD8E6B1,
    0xCF09DCF0, 0x7CC803A5, 0x4133D181, 0x7E80D3D4, 0x01B3180A, 0xF788139D, 0x0072C017,
    0x029E00FD, 0x2FC00FBF, 0x02DF8016, 0x7E73BF3C, 0xE73BFD05, 0xAD45BFFC, 0x1EECC3DF,
    0xE66078CE, 0x96A01EAB, 0x0049C038, 0x53FC0388, 0x9BCAB015, 0x8CFCCC0F, 0xF7664DFE,
    0xE7FEFD60, 0xF805BFFC, 0x7E2B007E, 0x7807EB00, 0x0AFCE77E, 0xF9CE77FA, 0xBF5A8B7F,
    0x9C3DD987, 0x57CCC0F1, 0x712D403D, 0x10009380, 0x2AA7F807, 0x1F379560, 0xFD19F998,
    0xC1EECC9B, 0xF9CFFDFA, 0x738C0B7F, 0xF7E71006, 0xFFE2013B, 0xCF00FF3C, 0x415F9CEF,
    0xFF39CEFF, 0xF7EB516F, 0x3387BB30, 0xAAF9981E, 0x0E25A807, 0xE2001270, 0x0554FF00,
    0x03E6F2AC, 0x7FA33F33, 0x583DD993, 0xFF39FFBF, 0xF7FC416F, 0xDFCC0B98, 0xD609BFBD,
    0xE01FFB1C, 0x2BF39DF9, 0xE739DFE8, 0xFD6A2DFF, 0x70F7661E, 0x5F3303C6, 0xC4B500F5,
    0x40024E01, 0xAA9FE01C, 0x7CDE5580, 0xF467E660, 0x07BB326F, 0xE73FF7EB, 0x67182DFF,
    0x12C0338C, 0x993A8161, 0x3BF3C0A7, 0xBFD057E7, 0x5BFFCE73, 0xCC3DFAD4, 0x078CE1EE,
    0x01EABE66, 0x9C03896A, 0xC0388004, 0xAB01553F, 0xCCC0F9BC, 0x64DFE8CF, 0xEFD60F76,
    0x5BFFCE7F, 0x73F5037C, 0x577D43FE, 0x7DF5FF7D, 0x0B7ECD45, 0xEA2DFB35, 0x2BEFAFFB,
    0x77D43FE7, 0xDFA80801, 0xD9E7BF39, 0x6739DF58, 0xD1877EFF, 0x623587BF, 0xAF83E6F1,
    0x6B0AB0F2, 0x61E455BE, 0x40277F7C, 0xFE40379C, 0x82715F7D, 0x9E1637AA, 0xF0FA8BE2,
    0x2B91178C, 0xDC1EBF3C, 0x73DF6FDF, 0xD4F385BE, 0x015F9CEF, 0x8BF00FBF, 0xAC2DF805,
    0x005CF01B, 0x00000000, 0xC2012000, 0x078ACC80, 0x4B7DE57E, 0xEEACFE74, 0xE09FF37B,
    0x7E2B01FB, 0xDD61FAC0, 0x0002E780, 0x00000000, 0x06100900, 0xF03C5664, 0xA25BEF2B,
    0xDF7567F3, 0x38C4FF9B, 0xDF9C4067, 0xFFE204EF, 0x6EB0FF3C, 0x000173C0, 0x00000000,
    0x03080480, 0xF81E2B32, 0xD12DF795, 0xEFBAB3F9, 0xCE327FCD, 0x89606718, 0xF32750B0,
    0x9E037594, 0x0000000B, 0x24000000, 0x59901840, 0xBCAFC0F1, 0x9FCE896F, 0xFE6F7DD5,
    0xB01FBE13, 0x1FAC07E2, 0xFB8C36FC, 0x8DF031DC, 0xAC4BC6A7, 0x1CD27E97, 0xEF3E350F,
    0xC6B9DE0F, 0x07FB2784, 0x00004CFC, 0x73C00000, 0xB9C00003, 0xCE25FFF7, 0x900ED7BD,
    0x0718099F, 0x7C60BC88, 0x9EF738B9, 0xF7B9C1DC, 0x000006FF, 0x17CE77E4, 0x3F9DEEB8,
    0xFC45FC9E, 0x4FF82916, 0xF781AAA0, 0x8132201D, 0x7E02DFA8, 0xCC13FEFD, 0x89A881AB,
    0xF10AA29C, 0x6F9AB73F, 0x103C5F83, 0x936A0BEF, 0x1169EFBD, 0x1AE7FEE7, 0xC7EB1A6F,
    0x8C67FDF3, 0xD4EF7BFF, 0xB3C93F73, 0x730BF3C1, 0x9FF9D779, 0x2783FB06, 0x01BEF07E,
    0xF7DEC8BB, 0xFF7388B4, 0x8D378D73, 0xFEF9E3F5, 0xBDFFC633, 0x9FB9EA77, 0xF9E0D9E4,
    0xEBBCB985, 0xDEC34FFC, 0xC45CE6B0, 0x217DFBF7, 0xC8FF11FE, 0x88B4F7DE, 0x8D73FF73,
    0xE3F58D37, 0xC633FEF9, 0xEA77BDFF, 0xD9E49FB9, 0xB985F9E0, 0x4FFCEBBC, 0xD63DFF13,
    0xBF7BBEB4, 0xFFB1AE65, 0x69EFBD91, 0xE7FEE711, 0xEB1A6F1A, 0x67FDF3C7, 0xEF7BFF8C,
    0xC93F73D4, 0x0BF3C1B3, 0xF9D77973, 0xCC9C669F, 0xEA582C33, 0xDECA9E64, 0x7388B4F7,
    0x378D73FF, 0xF9E3F58D, 0xFFC633FE, 0xB9EA77BD, 0xE0D9E49F, 0xBCB985F9, 0xA34FFCEB,
    0xFFC2FFFE, 0xBFF8FF7D, 0xFFF51FEF, 0x4F7DEC97, 0x3FF7388B, 0x58D378D7, 0x3FEF9E3F,
    0x7BDFFC63, 0x49FB9EA7, 0x5F9E0D9E, 0xCEBBCB98, 0x7DECB4FF, 0xCFFD65FF, 0x3DCE2217,
    0x19F7BBDF, 0xA34DE37F, 0x1CDE17D6, 0x3CFFEFCC, 0xFF8CF181, 0x7BACEF77, 0xF73D4DEF,
    0xDEF75193, 0x71B3E77B, 0x2FCF009F, 0x9FEAFD62, 0xB3AEF2C6, 0xEFB7EFED, 0xF39DF185,
    0xEF3FC61B, 0xC3B3A1D9, 0x201FA8CA, 0xF8C40301, 0x30E9F703, 0xEE3FE31F, 0x7BF193D9,
    0xEF80DF7F, 0xCC264E05, 0x06DF09DB, 0xE201E2FC, 0xC1B5017D, 0x18D39DF8, 0x68EE7DFF,
    0x29E896BA, 0xE0C462EA, 0xF85EF7BB, 0x8EF7BDEE, 0x5AE80BA8, 0xFF8C3C61, 0xEC069EFF,
    0x07E2780F, 0xBB006FBC, 0xD39DF8C0, 0xEE7DFF18, 0xE896BA68, 0xC462EA29, 0x5EF7BBE0,
    0xF7BDEEF8, 0xE80BA88E, 0x8C3C615A, 0x069EFFFF, 0x9CD606F6, 0xFDFBE20B, 0x23FC40BE,
    0x3BF181FE, 0xFBFE31A7, 0x2D74D1DC, 0xC5D453D1, 0xEF77C188, 0x7BDDF0BD, 0x17511DEF,
    0x78C2B5D0, 0x3DFFFF18, 0x9E64E30D, 0x750B0581, 0xFC614F32, 0xFF8C69CE, 0x5D34773E,
    0x7514F44B, 0xDDF06231, 0xF77C2F7B, 0xD4477BDE, 0x30AD7405, 0x7FFFC61E, 0x7E6DF34F,
    0xA5F788F1, 0x0002EB36, 0x7F600000, 0xDF79F89E, 0x01758BB0, 0xB0000000, 0x4B9CD637,
    0x17DFBF7C, 0x07F88FF1, 0x000002EB, 0x30000000, 0x0B19E64E, 0x53CC9D56, 0x00000BAC,
    0x80000000, 0x8FD12BF1, 0xF5DFBE71, 0xD366A310, 0xF0737EFD, 0xE5E67AEE, 0x1DFFDDF9,
    0xDDFFBF55, 0x4539EED7, 0xC20D8E57, 0xF11B5900, 0x7E25AEEC, 0xFBFE33CF, 0xFE23F1DC,
    0xFAC9AC7B, 0x7316FDEE, 0xEB0FFD8D, 0x4CE77E37, 0xFBCF7E9E, 0xA5A5F8A6, 0x00000100,
    0x6F800000, 0x00F17E03, 0xDA80BEF1, 0xF9CEFC60, 0xE7DFF182, 0x259FA1DA, 0xFD46F1BE,
    0x23018AA1, 0xEA223018, 0x59FA550F, 0xF1AF1BE2, 0x01DAE7DF, 0xF13C07F6, 0x8037DE03,
    0xCEFC605D, 0xDFF182F9, 0x9FA1DAE7, 0x46F1BE25, 0x018AA1FD, 0x22301823, 0xFA550FEA,
    0xAF1BE259, 0xDAE7DFF1, 0x6B037B01, 0xFDF105CE, 0xFE205F7E, 0xF8C0FF11, 0xE305F39D,
    0x43B5CFBF, 0xE37C4B3F, 0x1543FA8D, 0x60304603, 0xAA1FD444, 0x37C4B3F4, 0xCFBFE35E,
    0xEFF883B5, 0x77D626B1, 0xD730B7EF, 0xF8C0FFD8, 0xE305F39D, 0x43B5CFBF, 0xE37C4B3F,
    0x1543FA8D, 0x60304603, 0xAA1FD444, 0x37C4B3F4, 0xCFBFE35E, 0x327183B5, 0x8582C0CF,
    0x30A7993A, 0xC17CE77E, 0xED73EFF8, 0xDF12CFD0, 0x50FEA378, 0x0C1180C5, 0x87F51118,
    0xF12CFD2A, 0xEFF8D78D, 0xDD40ED73, 0x0016EA02, 0xBDEE7800, 0x3CFBDEF7, 0xEF7BDEF7,
    0x6EA0007D, 0x77E30001, 0xE35F37CE, 0xF78DCE3F, 0x7E469FA7, 0xAEBE7F51, 0x719EF1E2,
    0xE3CF3982, 0x17BBD444, 0x8A47FCAB, 0xDF7D78DF, 0xD8763738, 0x2F9CEFCF, 0x17E06DF0,
    0x05F7880F, 0x23FDE36A, 0x000003EE, 0x90100000, 0x9A31F3FC, 0xFBCEFD67, 0x781FD805,
    0x37DE07E2, 0x7FBC2EC0, 0x00007DC4, 0x02000000, 0x463E7F92, 0x79DFACF3, 0xC1BD80BF,
    0xBE21739A, 0xE20BEFDF, 0xEF0FF11F, 0x001F711F, 0x80000000, 0x8F9FE480, 0x77EB3CD1,
    0x27182FDE, 0x2C160CF3, 0xF29E64EA, 0x01F711FE, 0x00000000, 0xF9FE4808, 0x7EB3CD18,
    0xEC02FDE7, 0x07E2780F, 0xBB006FBC, 0x1CF0FFA0, 0x65381CBF, 0xE5CF0F8C, 0x4C3C78B7,
    0xBA885D8F, 0xE55B85D6, 0x30174781, 0xF1FE05C7, 0xCF017B00, 0xEFB8C1FA, 0x002EB097,
    0x8C000000, 0xE84FFDDF, 0xFC4F76F7, 0xC03F53D2, 0x400600CE, 0xE857E00A, 0xFB38D9D0,
    0xFCC0FF8E, 0x0000DFDF, 0xC9C60000, 0x160B033C, 0xA29E64EA, 0xBF1CF0FF, 0x8C65381C,
    0xB7E5CF0F, 0x8F4C3C78, 0xD6BA885D, 0x81E55B85, 0xC7301747, 0x00F1FE05, 0xFACF017B,
    0x97EFB8C1, 0x00000000

  EW_FONT_KERNING_CODES( WasherListFontM )
  EW_FONT_KERNING_VALUES( WasherListFontM )
EW_END_OF_FONT_RES( WasherListFontM )

/* Table with links to derived variants of the font resource : 'Washer::ListFontM' */
EW_RES_WITHOUT_VARIANTS( WasherListFontM )

/* This is a font resource. */
EW_DEFINE_FONT_RES( WasherListFontL, 21, 6, 0, 16, 0x0001, 0x00C1 )
  EW_GLYPH( 0x0001, 1, -14, 11, 14, 14, 0x00000000 ),
  EW_GLYPH( 0x0020, 0, 0, 0, 0, 4, 0x000001D4 ),                /* ' ' */
  EW_GLYPH( 0x0021, 1, -15, 4, 15, 6, 0x000001D4 ),             /* '!' */
  EW_GLYPH( 0x0022, 1, -14, 7, 5, 9, 0x00000267 ),              /* '"' */
  EW_GLYPH( 0x0023, 0, -13, 10, 13, 11, 0x000002D0 ),           /* '#' */
  EW_GLYPH( 0x0024, 1, -16, 9, 19, 11, 0x00000471 ),            /* '$' */
  EW_GLYPH( 0x0025, 0, -14, 17, 14, 18, 0x00000667 ),           /* '%' */
  EW_GLYPH( 0x0026, 0, -14, 13, 14, 13, 0x0000091B ),           /* '&' */
  EW_GLYPH( 0x0027, 1, -14, 3, 5, 5, 0x00000B6F ),              /* ''' */
  EW_GLYPH( 0x0028, 1, -15, 5, 19, 7, 0x00000BA1 ),             /* '(' */
  EW_GLYPH( 0x0029, 0, -15, 5, 19, 7, 0x00000CA9 ),             /* ')' */
  EW_GLYPH( 0x002A, 1, -15, 7, 7, 9, 0x00000DA3 ),              /* '*' */
  EW_GLYPH( 0x002B, 0, -12, 10, 11, 11, 0x00000E56 ),           /* '+' */
  EW_GLYPH( 0x002C, 1, -2, 4, 6, 5, 0x00000F27 ),               /* ',' */
  EW_GLYPH( 0x002D, 0, -6, 6, 1, 7, 0x00000F87 ),               /* '-' */
  EW_GLYPH( 0x002E, 1, -3, 3, 3, 5, 0x00000FA6 ),               /* '.' */
  EW_GLYPH( 0x002F, 0, -15, 8, 18, 8, 0x00000FD8 ),             /* '/' */
  EW_GLYPH( 0x0030, 0, -13, 10, 13, 11, 0x0000111A ),           /* '0' */
  EW_GLYPH( 0x0031, 1, -13, 9, 13, 11, 0x000012A2 ),            /* '1' */
  EW_GLYPH( 0x0032, 0, -13, 10, 13, 11, 0x00001366 ),           /* '2' */
  EW_GLYPH( 0x0033, 0, -13, 10, 13, 11, 0x000014DD ),           /* '3' */
  EW_GLYPH( 0x0034, 0, -13, 10, 13, 11, 0x00001682 ),           /* '4' */
  EW_GLYPH( 0x0035, 0, -13, 10, 13, 11, 0x000017B7 ),           /* '5' */
  EW_GLYPH( 0x0036, 1, -13, 9, 13, 11, 0x0000193B ),            /* '6' */
  EW_GLYPH( 0x0037, 0, -13, 10, 13, 11, 0x00001AEC ),           /* '7' */
  EW_GLYPH( 0x0038, 0, -13, 10, 13, 11, 0x00001C29 ),           /* '8' */
  EW_GLYPH( 0x0039, 0, -13, 10, 13, 11, 0x00001DFA ),           /* '9' */
  EW_GLYPH( 0x003A, 1, -11, 3, 11, 5, 0x00001FA7 ),             /* ':' */
  EW_GLYPH( 0x003B, 1, -11, 4, 15, 5, 0x00002025 ),             /* ';' */
  EW_GLYPH( 0x003C, 0, -11, 10, 8, 11, 0x000020DD ),            /* '<' */
  EW_GLYPH( 0x003D, 0, -9, 10, 5, 11, 0x00002201 ),             /* '=' */
  EW_GLYPH( 0x003E, 0, -11, 10, 8, 11, 0x000022B1 ),            /* '>' */
  EW_GLYPH( 0x003F, 0, -14, 8, 14, 9, 0x000023CA ),             /* '?' */
  EW_GLYPH( 0x0040, 1, -13, 16, 16, 18, 0x00002505 ),           /* '@' */
  EW_GLYPH( 0x0041, 0, -14, 12, 14, 12, 0x0000287E ),           /* 'A' */
  EW_GLYPH( 0x0042, 1, -14, 11, 14, 13, 0x00002A58 ),           /* 'B' */
  EW_GLYPH( 0x0043, 1, -14, 11, 14, 12, 0x00002BFB ),           /* 'C' */
  EW_GLYPH( 0x0044, 1, -14, 11, 14, 13, 0x00002DA6 ),           /* 'D' */
  EW_GLYPH( 0x0045, 1, -14, 9, 14, 11, 0x00002F21 ),            /* 'E' */
  EW_GLYPH( 0x0046, 1, -14, 9, 14, 11, 0x00003032 ),            /* 'F' */
  EW_GLYPH( 0x0047, 1, -14, 11, 14, 13, 0x00003127 ),           /* 'G' */
  EW_GLYPH( 0x0048, 1, -14, 11, 14, 14, 0x000032EC ),           /* 'H' */
  EW_GLYPH( 0x0049, 1, -14, 3, 14, 6, 0x000033D4 ),             /* 'I' */
  EW_GLYPH( 0x004A, 0, -14, 9, 14, 10, 0x0000340A ),            /* 'J' */
  EW_GLYPH( 0x004B, 1, -14, 12, 14, 12, 0x000034E2 ),           /* 'K' */
  EW_GLYPH( 0x004C, 1, -14, 9, 14, 10, 0x00003679 ),            /* 'L' */
  EW_GLYPH( 0x004D, 1, -14, 13, 14, 16, 0x00003720 ),           /* 'M' */
  EW_GLYPH( 0x004E, 1, -14, 11, 14, 14, 0x000038DD ),           /* 'N' */
  EW_GLYPH( 0x004F, 1, -14, 12, 14, 14, 0x00003A1F ),           /* 'O' */
  EW_GLYPH( 0x0050, 1, -14, 11, 14, 12, 0x00003C1B ),           /* 'P' */
  EW_GLYPH( 0x0051, 1, -14, 13, 17, 14, 0x00003D72 ),           /* 'Q' */
  EW_GLYPH( 0x0052, 1, -14, 11, 14, 12, 0x00003FE8 ),           /* 'R' */
  EW_GLYPH( 0x0053, 0, -14, 11, 14, 11, 0x00004166 ),           /* 'S' */
  EW_GLYPH( 0x0054, 0, -14, 11, 14, 12, 0x00004342 ),           /* 'T' */
  EW_GLYPH( 0x0055, 1, -14, 11, 14, 14, 0x00004433 ),           /* 'U' */
  EW_GLYPH( 0x0056, 0, -14, 11, 14, 11, 0x0000454E ),           /* 'V' */
  EW_GLYPH( 0x0057, 0, -14, 16, 14, 17, 0x000046F5 ),           /* 'W' */
  EW_GLYPH( 0x0058, 0, -14, 11, 14, 11, 0x0000499C ),           /* 'X' */
  EW_GLYPH( 0x0059, 0, -14, 10, 14, 10, 0x00004B6E ),           /* 'Y' */
  EW_GLYPH( 0x005A, 0, -14, 11, 14, 12, 0x00004CC8 ),           /* 'Z' */
  EW_GLYPH( 0x005B, 2, -15, 4, 18, 7, 0x00004E64 ),             /* '[' */
  EW_GLYPH( 0x005C, 0, -15, 8, 18, 8, 0x00004EDA ),             /* '\' */
  EW_GLYPH( 0x005D, 0, -15, 5, 18, 7, 0x0000501F ),             /* ']' */
  EW_GLYPH( 0x005E, 1, -14, 9, 8, 11, 0x000050AF ),             /* '^' */
  EW_GLYPH( 0x005F, 0, 2, 11, 1, 11, 0x00005194 ),              /* '_' */
  EW_GLYPH( 0x0060, 3, -15, 5, 3, 12, 0x000051CD ),             /* '`' */
  EW_GLYPH( 0x0061, 1, -10, 9, 10, 11, 0x00005208 ),            /* 'a' */
  EW_GLYPH( 0x0062, 1, -15, 10, 15, 12, 0x00005354 ),           /* 'b' */
  EW_GLYPH( 0x0063, 1, -10, 9, 10, 10, 0x000054AC ),            /* 'c' */
  EW_GLYPH( 0x0064, 1, -15, 9, 15, 12, 0x000055BE ),            /* 'd' */
  EW_GLYPH( 0x0065, 1, -10, 9, 10, 11, 0x00005708 ),            /* 'e' */
  EW_GLYPH( 0x0066, 0, -15, 7, 15, 6, 0x00005865 ),             /* 'f' */
  EW_GLYPH( 0x0067, 0, -10, 11, 14, 11, 0x00005933 ),           /* 'g' */
  EW_GLYPH( 0x0068, 1, -15, 9, 15, 12, 0x00005B57 ),            /* 'h' */
  EW_GLYPH( 0x0069, 1, -14, 3, 14, 5, 0x00005C49 ),             /* 'i' */
  EW_GLYPH( 0x006A, -1, -14, 5, 18, 5, 0x00005C97 ),            /* 'j' */
  EW_GLYPH( 0x006B, 1, -15, 10, 15, 11, 0x00005D37 ),           /* 'k' */
  EW_GLYPH( 0x006C, 1, -15, 4, 15, 5, 0x00005E6C ),             /* 'l' */
  EW_GLYPH( 0x006D, 1, -10, 15, 10, 18, 0x00005EC9 ),           /* 'm' */
  EW_GLYPH( 0x006E, 1, -10, 9, 10, 12, 0x00006008 ),            /* 'n' */
  EW_GLYPH( 0x006F, 1, -10, 10, 10, 12, 0x000060C6 ),           /* 'o' */
  EW_GLYPH( 0x0070, 1, -10, 10, 14, 12, 0x00006219 ),           /* 'p' */
  EW_GLYPH( 0x0071, 1, -10, 9, 14, 12, 0x0000637F ),            /* 'q' */
  EW_GLYPH( 0x0072, 1, -10, 7, 10, 7, 0x000064DE ),             /* 'r' */
  EW_GLYPH( 0x0073, 0, -10, 9, 10, 9, 0x00006570 ),             /* 's' */
  EW_GLYPH( 0x0074, 0, -13, 7, 13, 7, 0x000066BB ),             /* 't' */
  EW_GLYPH( 0x0075, 1, -10, 9, 10, 12, 0x00006782 ),            /* 'u' */
  EW_GLYPH( 0x0076, 0, -10, 10, 10, 10, 0x00006834 ),           /* 'v' */
  EW_GLYPH( 0x0077, 0, -10, 15, 10, 15, 0x00006974 ),           /* 'w' */
  EW_GLYPH( 0x0078, 0, -10, 10, 10, 10, 0x00006B47 ),           /* 'x' */
  EW_GLYPH( 0x0079, 0, -10, 10, 14, 10, 0x00006C85 ),           /* 'y' */
  EW_GLYPH( 0x007A, 0, -10, 9, 10, 9, 0x00006E1A ),             /* 'z' */
  EW_GLYPH( 0x007B, 0, -15, 6, 18, 7, 0x00006F30 ),             /* '{' */
  EW_GLYPH( 0x007C, 1, -16, 3, 21, 5, 0x0000703C ),             /* '|' */
  EW_GLYPH( 0x007D, 0, -15, 6, 18, 7, 0x00007085 ),             /* '}' */
  EW_GLYPH( 0x007E, 0, -9, 10, 3, 11, 0x00007182 ),             /* '~' */
  EW_GLYPH( 0x007F, 0, 0, 0, 0, 11, 0x00007207 ),
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 4, 0x00007207 ),
  EW_GLYPH( 0x00A1, 1, -10, 4, 14, 6, 0x00007207 ),
  EW_GLYPH( 0x00A2, 1, -14, 9, 15, 11, 0x00007296 ),
  EW_GLYPH( 0x00A3, 1, -13, 9, 13, 11, 0x00007409 ),
  EW_GLYPH( 0x00A4, 0, -12, 10, 10, 11, 0x0000756B ),
  EW_GLYPH( 0x00A5, 0, -13, 10, 13, 11, 0x000076F0 ),
  EW_GLYPH( 0x00A6, 1, -16, 3, 21, 5, 0x0000788C ),
  EW_GLYPH( 0x00A7, 0, -14, 10, 15, 11, 0x000078F3 ),
  EW_GLYPH( 0x00A8, 3, -14, 6, 2, 12, 0x00007AF3 ),
  EW_GLYPH( 0x00A9, 1, -14, 14, 14, 16, 0x00007B1B ),
  EW_GLYPH( 0x00AA, 0, -13, 7, 8, 7, 0x00007DF1 ),
  EW_GLYPH( 0x00AB, 0, -9, 8, 8, 9, 0x00007EBD ),
  EW_GLYPH( 0x00AC, 0, -7, 10, 6, 11, 0x00007FA9 ),
  EW_GLYPH( 0x00AD, 0, -6, 6, 1, 7, 0x0000803B ),
  EW_GLYPH( 0x00AE, 0, -15, 9, 8, 9, 0x0000805A ),
  EW_GLYPH( 0x00AF, 3, -14, 6, 1, 12, 0x00008183 ),
  EW_GLYPH( 0x00B0, 0, -14, 7, 5, 7, 0x000081A3 ),
  EW_GLYPH( 0x00B1, 0, -12, 10, 12, 11, 0x0000822B ),
  EW_GLYPH( 0x00B2, 0, -17, 7, 8, 8, 0x00008337 ),
  EW_GLYPH( 0x00B3, 0, -17, 7, 8, 8, 0x000083FF ),
  EW_GLYPH( 0x00B4, 4, -15, 5, 3, 12, 0x000084E9 ),
  EW_GLYPH( 0x00B5, 1, -10, 9, 15, 12, 0x00008524 ),
  EW_GLYPH( 0x00B6, 0, -14, 10, 16, 12, 0x0000862F ),
  EW_GLYPH( 0x00B7, 1, -9, 3, 3, 5, 0x00008744 ),
  EW_GLYPH( 0x00B8, 4, -1, 4, 6, 12, 0x00008776 ),
  EW_GLYPH( 0x00B9, 1, -17, 4, 8, 8, 0x000087D2 ),
  EW_GLYPH( 0x00BA, 0, -13, 7, 8, 8, 0x00008805 ),
  EW_GLYPH( 0x00BB, 1, -9, 7, 8, 9, 0x000088C9 ),
  EW_GLYPH( 0x00BC, 1, -14, 16, 14, 17, 0x000089B9 ),
  EW_GLYPH( 0x00BD, 1, -14, 15, 14, 17, 0x00008BB6 ),
  EW_GLYPH( 0x00BE, 0, -14, 17, 14, 17, 0x00008DC0 ),
  EW_GLYPH( 0x00BF, 1, -10, 8, 14, 9, 0x00009076 ),
  EW_GLYPH( 0x00C0, 0, -17, 12, 17, 12, 0x0000919D ),
  EW_GLYPH( 0x00C1, 0, -17, 12, 17, 12, 0x000093C7 ),
  EW_GLYPH( 0x00C2, 0, -17, 12, 17, 12, 0x000095F1 ),
  EW_GLYPH( 0x00C3, 0, -17, 12, 17, 12, 0x0000982F ),
  EW_GLYPH( 0x00C4, 0, -17, 12, 17, 12, 0x00009A77 ),
  EW_GLYPH( 0x00C5, 0, -18, 12, 18, 12, 0x00009CB1 ),
  EW_GLYPH( 0x00C6, 0, -14, 17, 14, 18, 0x00009F03 ),
  EW_GLYPH( 0x00C7, 1, -14, 11, 19, 12, 0x0000A136 ),
  EW_GLYPH( 0x00C8, 1, -17, 9, 17, 11, 0x0000A371 ),
  EW_GLYPH( 0x00C9, 1, -17, 9, 17, 11, 0x0000A4C9 ),
  EW_GLYPH( 0x00CA, 1, -17, 9, 17, 11, 0x0000A621 ),
  EW_GLYPH( 0x00CB, 1, -17, 9, 17, 11, 0x0000A78D ),
  EW_GLYPH( 0x00CC, 0, -17, 5, 17, 6, 0x0000A8F5 ),
  EW_GLYPH( 0x00CD, 1, -17, 5, 17, 6, 0x0000A982 ),
  EW_GLYPH( 0x00CE, 0, -17, 6, 17, 6, 0x0000AA0F ),
  EW_GLYPH( 0x00CF, 0, -17, 6, 17, 6, 0x0000AAC1 ),
  EW_GLYPH( 0x00D0, 0, -14, 13, 14, 14, 0x0000AB6F ),
  EW_GLYPH( 0x00D1, 1, -17, 11, 17, 14, 0x0000AD21 ),
  EW_GLYPH( 0x00D2, 1, -17, 12, 17, 14, 0x0000AECE ),
  EW_GLYPH( 0x00D3, 1, -17, 12, 17, 14, 0x0000B11A ),
  EW_GLYPH( 0x00D4, 1, -17, 12, 17, 14, 0x0000B366 ),
  EW_GLYPH( 0x00D5, 1, -17, 12, 17, 14, 0x0000B5C6 ),
  EW_GLYPH( 0x00D6, 1, -17, 12, 17, 14, 0x0000B830 ),
  EW_GLYPH( 0x00D7, 1, -11, 9, 9, 11, 0x0000BA8C ),
  EW_GLYPH( 0x00D8, 1, -15, 12, 16, 14, 0x0000BBBF ),
  EW_GLYPH( 0x00D9, 1, -17, 11, 17, 14, 0x0000BE79 ),
  EW_GLYPH( 0x00DA, 1, -17, 11, 17, 14, 0x0000BFE1 ),
  EW_GLYPH( 0x00DB, 1, -17, 11, 17, 14, 0x0000C149 ),
  EW_GLYPH( 0x00DC, 1, -17, 11, 17, 14, 0x0000C2C5 ),
  EW_GLYPH( 0x00DD, 0, -17, 10, 17, 10, 0x0000C43D ),
  EW_GLYPH( 0x00DE, 1, -14, 11, 14, 13, 0x0000C5E1 ),
  EW_GLYPH( 0x00DF, 1, -15, 11, 15, 12, 0x0000C740 ),
  EW_GLYPH( 0x00E0, 1, -15, 9, 15, 11, 0x0000C8EF ),
  EW_GLYPH( 0x00E1, 1, -15, 9, 15, 11, 0x0000CAA0 ),
  EW_GLYPH( 0x00E2, 1, -15, 9, 15, 11, 0x0000CC51 ),
  EW_GLYPH( 0x00E3, 1, -14, 9, 14, 11, 0x0000CE1A ),
  EW_GLYPH( 0x00E4, 1, -14, 9, 14, 11, 0x0000CFD2 ),
  EW_GLYPH( 0x00E5, 1, -15, 9, 15, 11, 0x0000D17A ),
  EW_GLYPH( 0x00E6, 1, -10, 15, 10, 17, 0x0000D33B ),
  EW_GLYPH( 0x00E7, 1, -10, 9, 15, 10, 0x0000D58C ),
  EW_GLYPH( 0x00E8, 1, -15, 9, 15, 11, 0x0000D71D ),
  EW_GLYPH( 0x00E9, 1, -15, 9, 15, 11, 0x0000D8DF ),
  EW_GLYPH( 0x00EA, 1, -15, 9, 15, 11, 0x0000DAA1 ),
  EW_GLYPH( 0x00EB, 1, -14, 9, 14, 11, 0x0000DC7B ),
  EW_GLYPH( 0x00EC, 0, -15, 5, 15, 5, 0x0000DE34 ),
  EW_GLYPH( 0x00ED, 1, -15, 5, 15, 5, 0x0000DEC3 ),
  EW_GLYPH( 0x00EE, 0, -15, 6, 15, 5, 0x0000DF52 ),
  EW_GLYPH( 0x00EF, 0, -14, 6, 14, 5, 0x0000E008 ),
  EW_GLYPH( 0x00F0, 1, -16, 10, 16, 12, 0x0000E0A0 ),
  EW_GLYPH( 0x00F1, 1, -14, 9, 14, 12, 0x0000E2B9 ),
  EW_GLYPH( 0x00F2, 1, -15, 10, 15, 12, 0x0000E3E3 ),
  EW_GLYPH( 0x00F3, 1, -15, 10, 15, 12, 0x0000E5A0 ),
  EW_GLYPH( 0x00F4, 1, -15, 10, 15, 12, 0x0000E75D ),
  EW_GLYPH( 0x00F5, 1, -14, 10, 14, 12, 0x0000E932 ),
  EW_GLYPH( 0x00F6, 1, -14, 10, 14, 12, 0x0000EAF5 ),
  EW_GLYPH( 0x00F7, 0, -12, 10, 10, 11, 0x0000ECA8 ),
  EW_GLYPH( 0x00F8, 1, -11, 10, 12, 12, 0x0000ED8C ),
  EW_GLYPH( 0x00F9, 1, -15, 9, 15, 12, 0x0000EF5D ),
  EW_GLYPH( 0x00FA, 1, -15, 9, 15, 12, 0x0000F074 ),
  EW_GLYPH( 0x00FB, 1, -15, 9, 15, 12, 0x0000F18B ),
  EW_GLYPH( 0x00FC, 1, -14, 9, 14, 12, 0x0000F2BA ),
  EW_GLYPH( 0x00FD, 0, -15, 10, 19, 10, 0x0000F3C8 ),
  EW_GLYPH( 0x00FE, 1, -15, 10, 19, 12, 0x0000F5C7 ),
  EW_GLYPH( 0x00FF, 0, -14, 10, 18, 10, 0x0000F765 ),

  EW_FONT_PIXEL( WasherListFontL, 0x0000F95A )                  /* ratio 67.76 % */
    0xF7BDEF71, 0x78FF7BDE, 0x0337BDEE, 0x635833CF, 0xDE2D1DE1, 0x5EABA079, 0xF9EAA82F,
    0x02C3D006, 0xF1024454, 0xAF02F5BE, 0x673055D5, 0x63D0D51B, 0x6C87E3D2, 0xDDF01A8C,
    0x82216F7B, 0x810099BD, 0x24006045, 0xB7B37411, 0x6318C631, 0x7197718C, 0x90A42017,
    0x62221843, 0x2F58988A, 0x197FE0BD, 0x8B993309, 0x7BBF1DFF, 0x3FF7FFF3, 0xFF71DDEE,
    0x5612B064, 0x91620B12, 0xDD5FB8C9, 0xE33EF3DB, 0xBEB7BECE, 0x9AC990FB, 0x21232730,
    0x00200A53, 0xE20006CF, 0x92F9E5FD, 0x8EEFFD7F, 0x90DF8D4F, 0xB00616BF, 0x7EC804E2,
    0xBB980AEE, 0xEFC82EFA, 0xF902F4FF, 0x17E02F1B, 0xF444E011, 0x5359E1FF, 0x6FB9EF7F,
    0x97FB58B7, 0xCF00027B, 0xB39DF106, 0x73F01E40, 0x1BA137F6, 0xF7E579E2, 0x6909AC61,
    0x01B70390, 0xD203C780, 0x036F0720, 0x3EFCB4F1, 0xE77C5573, 0xF6717E2C, 0x3F5EFD37,
    0x7C537F67, 0x32AB2CE7, 0x1F7E579E, 0x1A4FEF10, 0x267A00E4, 0x497AC800, 0xBFA01C83,
    0xDF969E20, 0xF82D6307, 0xC4DFD9C5, 0x017FDDF8, 0x5F7F719C, 0x335F3300, 0x0521080A,
    0x01674210, 0x00757E65, 0x03FEBD59, 0xC0DF2E81, 0xBD5DE13A, 0x455F81DE, 0xF3F567CE,
    0xCB5C6A1F, 0xBD7FCBE5, 0xF13F9655, 0xC978DFCF, 0x12CF2739, 0xBFB78667, 0xF7FC7B7B,
    0x1771CBF3, 0x31110E42, 0xA79E2BF1, 0x7C632778, 0x855246FC, 0x210F4871, 0x0420C060,
    0xA838C1E9, 0x63246FC2, 0x9E27787C, 0xD912FCA7, 0xD6493DF8, 0x72A0FD87, 0xC0C83C30,
    0x1E60003C, 0x543C3064, 0xD643F60E, 0xB249EFC7, 0x84420F21, 0x9FF8E7D0, 0xF30FFDE7,
    0x33E658FF, 0xC9AEFD38, 0x080BBD37, 0x0001B580, 0xF7180000, 0xEF7BCEDE, 0x3B7BDC6F,
    0x003FBDEF, 0xD6000000, 0x787CE786, 0x3DF8D9E2, 0x673F3DF1, 0xDEF7B887, 0x8FF59D5F,
    0xE07E3FDF, 0x80BB03F9, 0x814307F5, 0x05CF015F, 0x27A81463, 0x720FEFC0, 0x008CF02C,
    0x1EA207FB, 0x3EE09950, 0x8D40FD40, 0x1005FE01, 0x82BFB9EF, 0xFEEFB3FF, 0x5A6E398A,
    0xE073FCD9, 0x60B3D237, 0x92C06258, 0x24012401, 0x6A92C062, 0x1CDCB0C1, 0xD4F48DF8,
    0x7E2F2B4D, 0x3FFBBECF, 0xF05DDF50, 0xEFC03DFB, 0x0000006E, 0x00000000, 0xE0000000,
    0x7BEB77B9, 0x3DFFE887, 0xB9D7625F, 0x7BD27637, 0x078FCF88, 0x00C02462, 0x8E80D8A8,
    0x03A3BC09, 0x504CF9CC, 0x5F181F5D, 0xF3FC607E, 0x88FF101F, 0x4BBDEF7B, 0x57E7BEF4,
    0x9BDF55F8, 0x2EDF87BF, 0xC021C6F1, 0x05CC8098, 0xC1F8CEA2, 0x03717E7B, 0x2F6BBBDE,
    0x13B3BC60, 0x480F2DB0, 0x60DF7C73, 0x3D8C73BE, 0x7EFF3DCE, 0xE02F7181, 0x0263BC00,
    0xBE205F35, 0x7C6FC05A, 0x00DE7CC0, 0x5F80ABD9, 0x74EF7BAC, 0xF7BDEFFF, 0x01FEE9DE,
    0xEE000000, 0x1FDEF7BD, 0xFEF7BDF4, 0x06180108, 0x3A600420, 0xF585EEE7, 0xFD7F739C,
    0xAD62BF23, 0x09BF801A, 0xD46E0180, 0x7E8A6FD8, 0xDC6FC63A, 0x626FC77B, 0x45EEE77C,
    0xBEF7FFFD, 0x85737C5B, 0x0BC667E7, 0x9CC011EC, 0xA5F39DF9, 0xFE7BEF9C, 0x61BF12F3,
    0xA131CE74, 0xE081E79C, 0xBB1E0F1F, 0x56F19766, 0xCF7D7F79, 0xDEF713F3, 0x2BBDEF7B,
    0xDEF7BDEE, 0x9E780B1A, 0x8035E80B, 0xAF807E35, 0x01791812, 0x033B00A5, 0x44404CF0,
    0x08018600, 0xDCF78807, 0x7DCEC0FD, 0xD99937FB, 0x020FE6A9, 0x0F150CFF, 0x7FFC8476,
    0x3C2D631D, 0x367FDD63, 0xC7A79DF3, 0xFCC75744, 0x87F111DB, 0x217119CE, 0x8C2B9BF0,
    0xF7B3D39B, 0x3076A7BD, 0x897CE77E, 0xDD73EFFA, 0x3E259FA4, 0xEF86C62D, 0x44F0C009,
    0xEF0861FC, 0xAC6F4533, 0x5A7DDDFE, 0x3FF7FEB0, 0x33B0131F, 0xEB1FAC81, 0x933CE30D,
    0xDFDEF791, 0x1FEB3A8F, 0xEAFC7FBF, 0xB3A8002C, 0xC7FBF1FE, 0x8FF2CEAF, 0xD4FC7F9F,
    0xE0000059, 0x789E1F39, 0x7C4F7E36, 0x01D9CFCF, 0xCC42FD90, 0x7D4BAFFD, 0x3DFF57F7,
    0xFF8DFFF3, 0x004613BF, 0xFFF37FF9, 0xDDF5095F, 0x1FBFEFDF, 0xB5FFB988, 0xDEF7BDC7,
    0xDC6FEF7B, 0xF7BDEF7B, 0x600000FE, 0xBDEF7BDC, 0xF7C6FEF7, 0xF4EFD200, 0x6FCEF880,
    0x780AF7FC, 0xA7DBF77E, 0xF9E20B01, 0x3A77EF9D, 0x7B1BFBBE, 0xA77E90AF, 0xB9DF1807,
    0xBDE6E6FF, 0x1DDAF5BF, 0x804028E6, 0x67107E31, 0x81C6F82C, 0x3FC25FAA, 0xB016701E,
    0x4FF7E05E, 0xE540B950, 0xFFDF3C02, 0xD409DD9E, 0xCF7DDCFF, 0xAFCC17B5, 0x7A304F7F,
    0xFFD1937F, 0x876F9007, 0xFFD60EFB, 0xAE54BFF4, 0xCEFF45CA, 0xFBA87CC9, 0xC3BAE45F,
    0x73E6E0CE, 0x2EE0C6F9, 0x078C1888, 0x007FD899, 0xCCF19FCF, 0xF195EC99, 0x1D38DB1B,
    0xFB5AC7FB, 0x6F73CF7F, 0xDE1F334F, 0xBBEC6BB3, 0x2BF7E21F, 0xBEFCF000, 0x12FA82AF,
    0xDEFFEE78, 0x007FEE7B, 0xFC01BBCC, 0xEA202473, 0x59600F17, 0xCFF00FCF, 0xD44123D8,
    0xD9603CA3, 0x3FC0FC46, 0xA8891A8A, 0xA583D707, 0x1F9FBDEE, 0xBDEF71FE, 0x55148E77,
    0x5CB1EFE0, 0x8FF3F150, 0x7191A807, 0xFFF7BDEF, 0xEF7BCC26, 0xF1809DC9, 0x129007C6,
    0xEA03F860, 0xEF79858E, 0xEF30B9FD, 0xBFDFFFBD, 0x35DEB901, 0x2C014A00, 0xB202B600,
    0x7BCC1AD7, 0xC35FCDEF, 0xFFF73BF3, 0xFFBF7E26, 0xBC7F27B9, 0x7E327FCF, 0x00E731AF,
    0x8600FCFC, 0x00133001, 0x18026600, 0x0FCFC006, 0xC1333C60, 0xC3EE7BE0, 0xDF83FDF8,
    0x727B9CEF, 0xEF7BDC47, 0xEF304DF9, 0x017FBBDD, 0x3F3FFAE4, 0x019F3180, 0x1803F3F0,
    0x80130006, 0x94016000, 0x00F7F00D, 0x72099AC6, 0xF3179FFD, 0x3F7FBDDE, 0xEF7BDEE2,
    0xBDE67FBD, 0x003FDEF7, 0x30000000, 0x8FF7BDEF, 0x7FBDEF79, 0x00000000, 0xEF798000,
    0xBDC6F7BD, 0xFF7BDEF7, 0xBDEF7BCC, 0x0000007F, 0xBCC00000, 0xE63FDEF7, 0x01FEF7BD,
    0x00000000, 0xDCEFD400, 0x7EF07BF3, 0xE8EF7BFF, 0x0CFFAEF0, 0xCE723BD1, 0x07E7C201,
    0x99800C30, 0xEF7B8000, 0xDEE1335D, 0x7E0030CB, 0x99E3007E, 0xFE7BE003, 0x7E4B4433,
    0x3BBDFFBF, 0x05F713F6, 0x00000FEE, 0x00000000, 0xDEF7BCC0, 0x7BDE617B, 0x0000BDEF,
    0x00000000, 0xF7100000, 0x00000005, 0x0EEB0000, 0x00000000, 0x00000000, 0x0C000000,
    0xFF88C7F8, 0x8AF53C2F, 0xBBF6F71D, 0xFE217DC4, 0xC6F800FF, 0xBF5BC009, 0x3D739801,
    0x80D5D180, 0x7180D13C, 0x19E03446, 0xA00F59BF, 0x6A068E9F, 0x6240B9D1, 0x7400378E,
    0x39AA8034, 0xE2D1BC00, 0x000000BE, 0x00000000, 0x00000000, 0x30000000, 0xBEF7BDEF,
    0xFB026F71, 0x18C0783E, 0x37E07E30, 0xF3C246A0, 0x8C3E3383, 0x0F7E2031, 0x8E605ABE,
    0x3C403AC1, 0x38051A9F, 0x3C00FFE5, 0x003F59E3, 0xF80073AB, 0x58C007F2, 0x201D0013,
    0x3FB81FEE, 0x998C01B2, 0x88069F00, 0xCCC0067E, 0x03C7A00B, 0xE80354F0, 0xF318025C,
    0x6F68018D, 0x009DE200, 0x1A0018D6, 0x6FCF7DAC, 0xEFAFEC42, 0xBE1FBF39, 0x9F73C5BC,
    0x909BD54F, 0x0F7F19F3, 0x227BF3F0, 0x00C46181, 0x26600130, 0xA00C3980, 0xF01F9F8C,
    0x26678DF7, 0x2FD3358C, 0x7FF3C3EF, 0xDEFF625E, 0x88FF4E73, 0xFFBDEF7B, 0x7BDE60AF,
    0x404DF8EF, 0x4600D5BE, 0xE0030024, 0x37C600C9, 0xEF7BCC5E, 0xEF30BB19, 0x0137FFBD,
    0x00000000, 0xED600000, 0xC4137E7B, 0xF39EFAFE, 0xB797C1FB, 0x51F3EE78, 0x7CE426F5,
    0xF807BF86, 0x812279F9, 0x60018861, 0x01330002, 0xCA00C34C, 0xFE03F3F0, 0x84CD467E,
    0x97C19EB1, 0xF939E1F7, 0xEFAFEC43, 0x58076FED, 0x005DE9FF, 0x0866FADE, 0xF7FFAFC0,
    0xBDEF716E, 0x980DFFF7, 0x5FE3DEF7, 0x068DF180, 0x00000730, 0xF8C029E2, 0x77BDE634,
    0xF7981EC7, 0x1D01274E, 0x98EF100D, 0x401B2B00, 0x633C0347, 0x77BEE626, 0xF5FDE277,
    0xC63F5DBD, 0x5FB515FC, 0x1D20031E, 0x0BB51A80, 0xF7E39FF0, 0xFFDE205F, 0x201FFD1A,
    0x03FCACFB, 0xD8028CF4, 0x1FE018C2, 0x993BFEE5, 0x1DFB0DF3, 0xB7FF9EFB, 0x7BDEF73C,
    0x7DF7BDEF, 0xDF5BBDEE, 0x00005F7B, 0x00000000, 0x00000000, 0x00000000, 0xFB880000,
    0x0007F702, 0x00000000, 0x00000000, 0x46400000, 0xA7AE1826, 0xE962FC06, 0x756B0771,
    0xB3DEEBB0, 0x403ED37F, 0x0517F7DC, 0x60FE5D96, 0x40B233C7, 0xA8993C3D, 0x60F3F3F8,
    0xA8D88C5B, 0xE427AC0A, 0x528FF0D8, 0xF6D8A81E, 0x7EA55048, 0x0515CDC0, 0x8039BC54,
    0xDE60A278, 0xE03BDE07, 0xA1FC7FF7, 0xC46B3C14, 0x91FE6440, 0xA83CF7F1, 0x30D30AF8,
    0xC54FD922, 0x4DFC7B60, 0x66450F6A, 0x61C88658, 0x8C8B59FC, 0x44AA52BF, 0x7FCB3C6E,
    0x0F1F23B0, 0x54A2AA46, 0x6C6AD81A, 0x3C077B8C, 0xE5541EFE, 0x046B9103, 0xAC173E76,
    0x90F12828, 0x5FF607E7, 0xD1CC2ACE, 0x8DF8D1BC, 0x63C77887, 0xD7CAC366, 0xF8F40AAF,
    0xA33C0BE5, 0x1E910266, 0x03C77B40, 0x3473BE72, 0x5CE96378, 0xF1A97AA8, 0x370B9D06,
    0x183F1CDA, 0x04EFC6B5, 0x98DDF9C4, 0x78D6E330, 0x63A51BE1, 0xE35364F2, 0x77851DE3,
    0x3C2F18D4, 0xC078F6E3, 0x3302F557, 0x018C01E2, 0x00000000, 0xEF7B9E00, 0xF2DEF7BD,
    0xFDEF7BDC, 0xC74028C7, 0x0E678C05, 0xCC068DC0, 0x9D1006F1, 0x02F1D00B, 0xB402AAC6,
    0x4CD4F017, 0x56036740, 0x7AF100FE, 0xDEF7BDEF, 0xD9FDEF75, 0x000007F7, 0x00000000,
    0xF5FDF600, 0x180AFC07, 0x03FA80A3, 0x0C6A02FF, 0x2DC07EA0, 0x3C4132A0, 0x01FFF00F,
    0xB188046B, 0x781FDF80, 0x03C7201E, 0x95F8173C, 0x3CFBDEE7, 0x000026F7, 0x00000000,
    0x3C000000, 0xEEFC26F7, 0x0FACF900, 0x02B7D6FC, 0x89CCBEB1, 0xC3EF8635, 0x528D63EF,
    0x797510F9, 0xBBF6EF13, 0xEF7BDEF7, 0x8FF623BD, 0x7F24CF38, 0x7FEF9E1D, 0xEF778BCF,
    0x7B2F5BFB, 0xE016A786, 0xBEB1831F, 0xFFBF137F, 0xEB79B7B9, 0x11893EFF, 0x88F11803,
    0x77EBD2F5, 0xEE31F1FF, 0x00000002, 0x31800400, 0xF437FDF7, 0x3F9EDFF9, 0xB79E1D3C,
    0x014A1706, 0x000C01D2, 0x589C05CB, 0x7574537C, 0x8CFFCE70, 0xDDFCC4DF, 0xFAF87BF3,
    0x4F983BDC, 0x5F1FA23F, 0x003C604C, 0xFC01E300, 0xFD5601E2, 0xEFCBD61E, 0x1BD9EF7D,
    0x00017FE0, 0x58980000, 0xF89FFBFF, 0x29F77DBD, 0xE88F7EB3, 0x8C03C5F4, 0x27200007,
    0xBC01C9E0, 0x88FC8679, 0x7DE7FEBD, 0xFDFFAC1F, 0x77EFC1BF, 0xF9BFCDEE, 0xF1DF219C,
    0xF3224F7C, 0x7BDEEA3F, 0xDEE7866F, 0xC77DEF7B, 0x0272FC02, 0x9A327AAB, 0xDCF77F5F,
    0x8B39DF0B, 0x5267FEB7, 0x002410CF, 0xDFEEAB9E, 0x03FDD573, 0x00000000, 0xBF200000,
    0x37BDEF73, 0x1BEF76C4, 0x5F1BC37D, 0x0843F598, 0x30BF5C04, 0x79ACC5EB, 0x107BFFEF,
    0x7BFB9F6B, 0x78028D60, 0xF3DEF7BC, 0x7FE7C87B, 0xA5F1BDEF, 0x4D710FEF, 0x478EC175,
    0x67B219CD, 0xEEFCDF87, 0x71A7B1BD, 0x00000017, 0x8C600200, 0xF38D3DDF, 0x935DF77D,
    0x3F8AC37C, 0x0004C607, 0x00000000, 0x78D39E00, 0x05DC634E, 0x9E000000, 0x34E780D3,
    0x0005DC60, 0x00000000, 0xF53F0400, 0x71CDE7DE, 0x0000001F, 0xD0000000, 0xBAB980B7,
    0x205CF540, 0x7905E7BF, 0xCF578123, 0x17AAEE02, 0x30D1EA74, 0x400D7318, 0x02EE35E7,
    0x00000000, 0x9E35C000, 0x731DC735, 0x7E34FFDF, 0xF3DC2CF7, 0xFB7DEBBF, 0xAA1FB3BD,
    0xA5F9EBC3, 0x0F48B976, 0x13000064, 0x00000000, 0x00000000, 0xE78EE300, 0xFEE34F77,
    0x49AEFBBF, 0xE7F15875, 0x000098C2, 0x00000000, 0xF3DF6B00, 0xDF6F7E26, 0xEB30F63D,
    0xEB8DF92B, 0x8C67828B, 0x09BF80F1, 0x6FE098C0, 0x8CF0597E, 0xF92DEB31, 0xEBEFCB8D,
    0xC61EC7BB, 0x7FDF731D, 0xDBFF39C3, 0xC3A787F3, 0x42E0D6F3, 0x803A4029, 0x80B96001,
    0x11EF8B13, 0xFEFC1D5D, 0x137E33FF, 0x057F7FFA, 0x00000001, 0x67FEFFD6, 0xEFB7BF5F,
    0xDFACD33E, 0xE2F87A23, 0x0003C601, 0xE4F01390, 0x433CDE00, 0xF5EC437E, 0x8879EF3F,
    0x2D5F9CEF, 0xC0000080, 0x9FF9E3B8, 0x2465F7C1, 0xF60DEFB9, 0x00000000, 0xFFAC0000,
    0xEFD15F3D, 0x9E2E6F7B, 0xE60F44A7, 0x79EF8133, 0xBF112BFF, 0xC27BBCFD, 0x440D9BE8,
    0x6159E445, 0xEF644F3C, 0xE1F3CF7B, 0x9826417D, 0xBDD66F30, 0xEF755E6B, 0x00000002,
    0x33D40900, 0xF3FF5D04, 0xFB81F73E, 0x00000003, 0xC2000000, 0x85F15240, 0x73BF837A,
    0x37D1EFF6, 0xF9FCEEA1, 0x8C731FE0, 0x97E2D607, 0x333F8A83, 0xE22C9C7E, 0x4E07A879,
    0xF07E278E, 0x018F6FC4, 0xC07EB3D6, 0xDCF13197, 0x791B7989, 0x51D8B967, 0xA8551528,
    0x699D8239, 0x46F11A67, 0x35294551, 0x6C46D9E2, 0xECBB6E46, 0x3CAA14A5, 0x57F8C55B,
    0x4654C760, 0xBF286D54, 0x828BEB07, 0x19D8DCA8, 0x8C3F3C83, 0x87ADF2DB, 0xED1ACD9B,
    0xD1DC2F19, 0x5CC60B3D, 0x030A81A3, 0x178FFCCC, 0x9AE8E7A2, 0xAA7B46F8, 0xD78D53C3,
    0xBA80EFA7, 0x3FC1F3F3, 0xD60B3E66, 0xC543C4E2, 0x3FC3CA9F, 0xF5A55F0B, 0xE2A78CC0,
    0x7FDF5107, 0xFD72700C, 0x8098CA80, 0x5D640159, 0xE4154F20, 0xF80FCFD9, 0xBDEF7BDD,
    0xFDEF77E9, 0x6CDE0959, 0x3182F9D0, 0x0FD7029F, 0xD101D1CC, 0x0BCFC135, 0xBDFF89EA,
    0xEFC43EF7, 0xFECF98FC, 0x00049E71, 0x201B82C4, 0xF187BF90, 0x689C668F, 0x3800AFC4,
    0x66200013, 0x17E79DE0, 0x00000037, 0x00000000, 0xE2FFB9E0, 0x9B85EBB9, 0x00990000,
    0xC60F9500, 0xF3D4BDF3, 0x0059197B, 0x0008C062, 0xD5DCF26E, 0x05F3BF18, 0xF2739C43,
    0x38CEE23F, 0xFDCF7E8F, 0x631B7B4D, 0xB0C6318C, 0x818BEF37, 0x21601200, 0x08135858,
    0xA0006AC0, 0x3BFE77BE, 0xE73FEFF4, 0xD7AB1889, 0x099F5E35, 0x005200A4, 0xF9A8137F,
    0xE97C6BAE, 0x4F39EDFD, 0x3BDF9E0E, 0x60001DFF, 0xDCEFC835, 0xFB1D88BD, 0xE8CD2FF6,
    0x031D3B54, 0x0B6C0908, 0x7BBE7FFC, 0x93EFFCFF, 0x0061FEF7, 0xF8D4013C, 0x8172FA81,
    0x7BDEF237, 0x318132EF, 0x9CF7BFB2, 0xF97FFCDF, 0xBFCF793D, 0x2F8ED79F, 0x4F50F5CC,
    0x00031FE0, 0x31FE04F5, 0x5CC2F8EC, 0xB8D6FC8F, 0xE74FDFE7, 0xDF9CFBAF, 0x2EE37FFC,
    0xF98DF388, 0x26D3F4C2, 0xFBC437DE, 0xE5858E63, 0xEFD06BF1, 0xDEE21F33, 0xDEEAFC6F,
    0x19DEF715, 0xF715DEE7, 0xBBDCE9DE, 0x9D3BDEE2, 0x0000177B, 0x00371000, 0xF14C0000,
    0x0142FC46, 0x9F400000, 0xFBC0EFFB, 0xD4067BEC, 0x9817E34A, 0xF46402CF, 0x773F40E9,
    0xFCC5BAD7, 0x7E76F8C5, 0xC4E31FC9, 0x926F3D63, 0xFEE73BC2, 0xEF263BC6, 0x3FAED67F,
    0x04CADF64, 0x2ED45AE2, 0xAA78B271, 0xFF7975EF, 0x4017FF11, 0x7E7BFFBE, 0xDEF7580B,
    0x07FCFA7B, 0x1933DED6, 0x7E527BEF, 0xCE77E45F, 0x7D7BF597, 0x7BCDC45F, 0x51CE61FE,
    0xAC3A378F, 0xAA64F3C1, 0x000FFC02, 0x00AA990C, 0xCDE3D4E7, 0xD4F1730E, 0xBCEC45F7,
    0x33399767, 0x77E47FBF, 0x5FAA37CE, 0x64AF6FD6, 0xB13FEFBC, 0xF4F7B9EE, 0xBF3C0FF9,
    0x7D187FF3, 0xB0E63F7E, 0x177EB062, 0x18C3DF7B, 0x4D4D216F, 0x053FF7F4, 0x558B796F,
    0xEF3CAAB5, 0x7E23DE79, 0x001EBF9D, 0xEBF9D7E2, 0xE7DEF3C1, 0xAD4F58BD, 0xF7BDC6A7,
    0x6FEF7BDE, 0xBDEF7BDC, 0x00000277, 0x8BFA0000, 0xB1FDEF7B, 0xBC4F77FE, 0x97B3DF67,
    0xFBEE7D91, 0xBA8EA2FD, 0xBA857E2B, 0xCEABA833, 0xF4635D8C, 0xC3B7E717, 0x7B3DF67B,
    0xF7BDEF79, 0x0DFDF635, 0x11CF7BCE, 0x78464F1E, 0xB9CE193C, 0x07F580E7, 0x60000000,
    0xEF3B7BDC, 0xEF71BFBD, 0xFEF7BCED, 0xB2000000, 0x00179E00, 0x7BDEF718, 0x633FBDEF,
    0x79C3FFDF, 0xFF0BF7EF, 0x11848AC7, 0x7E067709, 0xC3ED89B3, 0x3FBDD47F, 0xF9A7BBF9,
    0x4ABFF7FE, 0xE326334F, 0xEE326F7E, 0x6B509DEF, 0xEA31FFC7, 0xFFDCE71F, 0x30EDF8B3,
    0xBFD1139F, 0xFF82EE34, 0x0000001F, 0xE0000000, 0xA19E0722, 0xDFFCC0EE, 0x73933EFB,
    0x47FAAFEE, 0x8C000002, 0xFDF2013D, 0x33FBBFDF, 0x03A04CF6, 0x40000510, 0xDE005000,
    0x06BDC804, 0x3FDF7A20, 0x00000000, 0xE8000000, 0xE3FD6753, 0xC11F8FF7, 0x22FAC4BB,
    0xF9A659FE, 0x7DE86F9E, 0x00000BF5, 0x3FE77C40, 0x9FB739F9, 0x67BE5A7C, 0x4B00B249,
    0x5A7CAFF2, 0xDCE7E3CE, 0xF174BA7E, 0x1BEFC6FB, 0x3DF27BC6, 0x9ADFCD61, 0x7F35803F,
    0x7BC6FE6B, 0xFBF13DF2, 0xF41BEFC6, 0xD00F20BE, 0x000DD02F, 0xE0009AC6, 0x3C780036,
    0x006DE000, 0xFF115730, 0xC5EFC03F, 0xAD73C0AF, 0x20362A4A, 0x17DE1FDE, 0x3EF267A0,
    0x897AC809, 0x3797EEB9, 0xF7105FD0, 0x306F2FDE, 0xDE8002D6, 0xFD01E417, 0x3000DD02,
    0xDB8004D6, 0x0078F000, 0x98006DE0, 0xFFBEC6AB, 0x9D7BF007, 0xE0BF7EF7, 0xFFA556B9,
    0xBC424563, 0xA122303F, 0x033B8267, 0xCDF82F59, 0xB102FE86, 0x82D6307D, 0x7F7BA8FF,
    0x834F77F2, 0xDFFBE03C, 0x06E82AFF, 0x1898CD3D, 0x7EE3026B, 0x6036E26F, 0x793BDFDC,
    0x6D6A003C, 0xFFE206DE, 0x5737F518, 0x389FFF89, 0xE59FFEE7, 0x182BF2F7, 0xAADA7BBF,
    0xC401B154, 0x017DE3FB, 0x27DE99E8, 0x62BD6401, 0x0DE5FBAE, 0x7B885FD0, 0x603797EF,
    0x790005AC, 0x04C4F05E, 0xE7904C4F, 0xA80B7E05, 0xE41F960B, 0xF9B80CFB, 0xE60B8F41,
    0xD5400033, 0xDF9FDE23, 0x0BC77BEC, 0x1801FFE3, 0x7200BE77, 0xDDE600BF, 0x1239FE00,
    0x078BF510, 0x07E7ACB0, 0x91EC67F8, 0x1E51EA20, 0x7E236CB0, 0x8D451FE0, 0xEB83D444,
    0xDEF752C1, 0xB8FF0FCF, 0x473BDEF7, 0xF7F02A8A, 0xF8A82E58, 0xD403C7F9, 0x0FFBE048,
    0x01DE7780, 0x9804EEF0, 0xE7F80377, 0x2FD44048, 0x9EB2C01E, 0xB19FE01F, 0x47A88247,
    0x8DB2C079, 0x147F81F8, 0x0F511235, 0xDD4B07AE, 0xFC3F3F7B, 0xEF7BDEE3, 0xC0AA291C,
    0xA0B963DF, 0x0F1FE7E2, 0xCEA12350, 0xDFBD4029, 0xFF5016F7, 0xE6017FAA, 0x39FE00DD,
    0x8BF51012, 0xE7ACB007, 0xEC67F807, 0x51EA2091, 0x236CB01E, 0x451FE07E, 0x83D4448D,
    0xF752C1EB, 0xFF0FCFDE, 0x3BDEF7B8, 0xF02A8A47, 0xA82E58F7, 0x03C7F9F8, 0x673C48D4,
    0x7D03FC8F, 0xFC0DDDEF, 0x00F3EC63, 0xFE00DDE6, 0xF5101239, 0xACB0078B, 0x67F807E7,
    0xEA2091EC, 0x6CB01E51, 0x1FE07E23, 0xD4448D45, 0x52C1EB83, 0x0FCFDEF7, 0xDEF7B8FF,
    0x2A8A473B, 0x2E58F7F0, 0xC7F9F8A8, 0xBC48D403, 0x80BCE227, 0xFFBC00C1, 0x980BFF88,
    0xE7F80377, 0x2FD44048, 0x9EB2C01E, 0xB19FE01F, 0x47A88247, 0x8DB2C079, 0x147F81F8,
    0x0F511235, 0xDD4B07AE, 0xFC3F3F7B, 0xEF7BDEE3, 0xC0AA291C, 0xA0B963DF, 0x0F1FE7E2,
    0x9D612350, 0xFDDE00B3, 0xFDDE017F, 0x39D6017F, 0x0DDE600B, 0x01239FE0, 0x0078BF51,
    0x807E7ACB, 0x091EC67F, 0x01E51EA2, 0x07E236CB, 0x48D451FE, 0x1EB83D44, 0xFDEF752C,
    0x7B8FF0FC, 0xA473BDEF, 0x8F7F02A8, 0x9F8A82E5, 0x8D403C7F, 0xEF7BEC04, 0xC05EF7BD,
    0xF7BED233, 0x47780BDE, 0x5E398001, 0x0F97E000, 0x03F99800, 0xB1317E00, 0x6037BDEF,
    0xDEFB0BE5, 0x98DE037B, 0x9C456000, 0xEF00277B, 0x09DEF7B8, 0x4001A3A0, 0xE00051CC,
    0xF7D80B8D, 0x9E077BDE, 0x37FFB9DF, 0xCFFDFBF1, 0x7DE3F93D, 0x7BF193FE, 0xE007398D,
    0x0C3007E7, 0x00009980, 0x30C01330, 0x007E7E00, 0x060999E3, 0xC61F73DF, 0x7EFC1FEF,
    0x3B93DCE7, 0xFDEB7F30, 0x7D6209BF, 0x167F8801, 0xEF0134C0, 0xFF1806F9, 0xBE77180F,
    0x7117EE40, 0xDEF7BDEF, 0x7BDEF33F, 0x00001FEF, 0xF7980000, 0xBCC7FBDE, 0x003FDEF7,
    0x00000000, 0xDEF7BCC0, 0x1FF7C17B, 0x80779DE0, 0xEF712777, 0x3FDEF7BD, 0xEF7BDEF3,
    0x0000001F, 0xDEF79800, 0xF7BCC7FB, 0x00003FDE, 0xC0000000, 0x7BDEF7BC, 0xD414E751,
    0xA16F7DFB, 0x12FF55FE, 0xEF7BDEF7, 0xBDEF33FD, 0x0001FEF7, 0x79800000, 0xCC7FBDEF,
    0x03FDEF7B, 0x00000000, 0xEF7BCC00, 0x44F797BD, 0x0306179C, 0xFFC47FDE, 0x7BDEF715,
    0xEF33FDEF, 0x01FEF7BD, 0x80000000, 0x7FBDEF79, 0xFDEF7BCC, 0x00000003, 0x7BCC0000,
    0xFC77BDEF, 0x2F9DC63F, 0xBEE25FB9, 0x00000000, 0x00000000, 0x7787FDF0, 0x29DDE1DE,
    0x00000BEE, 0x00000000, 0x4E750000, 0xDEFBF7A9, 0xBFD57FAA, 0x00017DC4, 0x00000000,
    0x00000000, 0x5E7113DE, 0x47FDE183, 0x5F715FFC, 0x00000000, 0x00000000, 0x7BDE0000,
    0x809DD9EF, 0x5D8F4F73, 0xDF57EA00, 0x05E3A000, 0x3000AB20, 0xCE9DD462, 0xDD4B83BD,
    0x003BDCE9, 0x9E000700, 0x14720018, 0x40346F00, 0xC12F9EFD, 0x2DC7B7B9, 0xF23D9CF0,
    0xBBDEFA0F, 0xEC63FC1B, 0x0FF710F3, 0x00D91FDC, 0x4F804CC6, 0x033F4403, 0xD005E660,
    0xAA7801E3, 0x012E7401, 0x00C6F98C, 0xF10037B4, 0x0C6B004E, 0xFFC60D00, 0x7CEE3003,
    0x017EE401, 0x37E7BED6, 0xF7D7F621, 0x5F0FDF9C, 0xCFB9E2DE, 0xC84DEAA7, 0x07BF8CF9,
    0x913DF9F8, 0x006230C0, 0x13300098, 0x50061CC0, 0xF80FCFC6, 0x1333C6FB, 0x97E99AC6,
    0x3FF9E1F7, 0xEF7FB12F, 0x007FA739, 0xBC007FDF, 0x77800EF3, 0x7BED6027, 0x7F62137E,
    0xFDF9CF7D, 0x9E2DE5F0, 0xDEAA7CFB, 0xF8CF9C84, 0xDF9F807B, 0x230C0913, 0x00098006,
    0x61CC0133, 0xFCFC6500, 0x3C6FBF80, 0x99AC6133, 0x9E1F797E, 0xFB12F3FF, 0xFA739EF7,
    0x0539D407, 0xDEFBF7A8, 0xF55FEA02, 0x7BED602F, 0x7F62137E, 0xFDF9CF7D, 0x9E2DE5F0,
    0xDEAA7CFB, 0xF8CF9C84, 0xDF9F807B, 0x230C0913, 0x00098006, 0x61CC0133, 0xFCFC6500,
    0x3C6FBF80, 0x99AC6133, 0x9E1F797E, 0xFB12F3FF, 0xFA739EF7, 0x47B39E07, 0xF7BE81FE,
    0x31FE06EE, 0xB58079F6, 0x884DF9EF, 0xE73DF5FD, 0xB797C3F7, 0xA9F3EE78, 0x3E72137A,
    0x7E01EFE3, 0x30244F7E, 0x2600188C, 0x3004CC00, 0xF1940187, 0xBEFE03F3, 0xB184CCF1,
    0x7DE5FA66, 0x4BCFFE78, 0xCE7BDFEC, 0x4F781FE9, 0x830179C4, 0x11FF7801, 0xFB5817FF,
    0xD884DF9E, 0x7E73DF5F, 0x8B797C3F, 0xAA9F3EE7, 0x33E72137, 0xE7E01EFE, 0xC30244F7,
    0x02600188, 0x73004CC0, 0x3F194018, 0x1BEFE03F, 0x6B184CCF, 0x87DE5FA6, 0xC4BCFFE7,
    0x9CE7BDFE, 0xC426B1FE, 0xF10FBC2F, 0x95FAD65F, 0xE7A1FE2F, 0xD0379BF7, 0x1DE13AA3,
    0xDF5E89D5, 0xD6B0DE6F, 0x0FF17CAF, 0x17FC43EF, 0xEFE60400, 0x9F7CBDDC, 0xB9CEFDF8,
    0xD7AFFBDF, 0xF30FB9EF, 0xF3C727CD, 0xAACBE226, 0x1E6F829F, 0xE7A061FF, 0x9E133C37,
    0xE4064279, 0x0A6037EF, 0xB1183D67, 0x645EB7D5, 0x3EB7E3D4, 0x89F2FC78, 0x33EF9027,
    0xEA2D72A2, 0xFEAF9F3E, 0x7FA73EEF, 0xFCCFBE3F, 0x3027B39D, 0xB8C01FFE, 0xFDC805F3,
    0xB817DC42, 0x0000003F, 0x00000000, 0x00000000, 0xC1323200, 0xE0353D70, 0x3B8F4B17,
    0x5D83AB58, 0x9BFD9EF7, 0x003FEF80, 0xF003BCEF, 0x17DC44EE, 0x00003FB8, 0x00000000,
    0x00000000, 0x32320000, 0x353D70C1, 0x8F4B17E0, 0x83AB583B, 0xFD9EF75D, 0x29CEA09B,
    0x7BEFDEA0, 0xEABFD40B, 0x817DC45F, 0x000003FB, 0x00000000, 0x00000000, 0x13232000,
    0x0353D70C, 0xB8F4B17E, 0xD83AB583, 0xBFD9EF75, 0x3889EF09, 0xC018302F, 0xBFF88FFB,
    0xFB817DC4, 0x00000003, 0x00000000, 0x00000000, 0x0C132320, 0x7E0353D7, 0x83B8F4B1,
    0x75D83AB5, 0x09BFD9EF, 0xBC01FF7C, 0xDDE00EF3, 0x8809DF89, 0x6131BBF3, 0xC2F1ADC6,
    0xE4C74A37, 0xC7C6A6C9, 0xA8EF0A3B, 0xC6785E31, 0xAF80F1ED, 0xC46605EA, 0x00031803,
    0x00000000, 0x0000BEE2, 0xDEF30000, 0xE60AFFFB, 0xDF8EF7BD, 0x0D5BE404, 0x30024460,
    0x600C9E00, 0xBCC5E37C, 0x2FF19EF7, 0xFFEF7BCC, 0x0000001D, 0x17CF7DCC, 0xEEEFDF30,
    0xA67E87F5, 0xC460C6FC, 0x8DF8001F, 0x803CE801, 0x42026F5C, 0x09EC8C00, 0x5FF79FB0,
    0x2FB6FC40, 0x028DE301, 0x7933C058, 0x39FF8163, 0xFF620FF1, 0x04CF3880, 0x3C01D7F2,
    0xF9E00027, 0x78BCF7FE, 0xF5BFBEF7, 0x6A7867B2, 0x1831FE01, 0xF137FBEB, 0x9B7B9FFB,
    0x93EFFEB7, 0x11803118, 0xBD2F588F, 0x1F1FF77E, 0xCC03B7E0, 0xFF4404E7, 0x0079C412,
    0xEFFDF3C0, 0x7DEEF179, 0xCF65EB7F, 0xFC02D4F0, 0xF7D63063, 0x3FF7E26F, 0xFD6F36F7,
    0x623127DF, 0xB11E2300, 0xEEFD7A5E, 0xE7103E3F, 0xF5ADF804, 0xEFBE6783, 0xF66CF07C,
    0xFBE78003, 0xDDE2F3DF, 0xCBD6FEFB, 0x05A9E19E, 0xAC60C7F8, 0xEFC4DFEF, 0xDE6DEE7F,
    0x624FBFFA, 0x3C4600C4, 0xFAF4BD62, 0x507C7FDD, 0xD1B18F67, 0x8DFF7BFF, 0x053EC63D,
    0xDFFBE780, 0xFBDDE2F3, 0x9ECBD6FE, 0xF805A9E1, 0xEFAC60C7, 0x7FEFC4DF, 0xFADE6DEE,
    0xC4624FBF, 0x623C4600, 0xDDFAF4BD, 0xFEF07C7F, 0x002FFE23, 0xFF88FFBC, 0xFBE7800B,
    0xDDE2F3DF, 0xCBD6FEFB, 0x05A9E19E, 0xAC60C7F8, 0xEFC4DFEF, 0xDE6DEE7F, 0x624FBFFA,
    0x3C4600C4, 0xFAF4BD62, 0xA07C7FDD, 0xEF02FFFE, 0xF0002FBD, 0xFA82FBDE, 0xF7CF0BFF,
    0xBBC5E7BF, 0x97ADFDF7, 0x0B53C33D, 0x58C18FF0, 0xDF89BFDF, 0xBCDBDCFF, 0xC49F7FF5,
    0x788C0188, 0xF5E97AC4, 0xF0F8FFBB, 0x92EEE77C, 0xE4BE73BF, 0x5F7EF7DD, 0xCBAE73DD,
    0xF7E6619E, 0x4C6FC47B, 0x188589E0, 0xFF7EB197, 0x6F7BDCE9, 0x9CFFDF8A, 0xEF7BDD3D,
    0xFF5BEFBD, 0x006389F7, 0x0BD20623, 0x3AC4788C, 0xBC61BD5F, 0x97CEFD7A, 0xF79FE7BF,
    0xDDFCC0DE, 0xFAF87BF3, 0x4F983BDC, 0x5F1FA23F, 0x003C604C, 0xFC01E300, 0xFD5601E2,
    0xEFCBD61E, 0x1BD9EF7D, 0x3DFECF6B, 0x100BEB10, 0x9A602CFF, 0x80DF3DE0, 0xCE203FD8,
    0x75FC8133, 0x0009CF00, 0xFFF7FEB0, 0xB9DFBF06, 0x73E6FF37, 0xF3C77C86, 0xFFCC893D,
    0xBDEF7BA8, 0xEF7B9E19, 0x0B1DF7BD, 0xAC09CBF0, 0x7E68C9EA, 0x2F73DDFD, 0xE601DBF0,
    0x7FA20273, 0x003CE209, 0xFFDFFAC0, 0xE77EFC1B, 0xCF9BFCDE, 0xCF1DF219, 0xFF3224F7,
    0xF7BDEEA3, 0xBDEE7866, 0x2C77DEF7, 0xB0272FC0, 0xF9A327AA, 0xBDCF77F5, 0xF804E710,
    0x6783F5AD, 0xF07CEFBE, 0x0003F66C, 0x6FFF7FEB, 0x7B9DFBF0, 0x673E6FF3, 0xDF3C77C8,
    0x8FFCC893, 0x9BDEF7BA, 0xDEF7B9E1, 0x00B1DF7B, 0xAAC09CBF, 0xD7E68C9E, 0xE2F73DDF,
    0x5FFC47FD, 0x11FF7800, 0xD60017FF, 0xE0DFFEFF, 0xE6F73BF7, 0x90CE7CDF, 0x27BE78EF,
    0x751FF991, 0xC337BDEF, 0xF7BDEF73, 0x7E0163BE, 0x3D558139, 0xBFAFCD19, 0xFB15EE7B,
    0x92679C47, 0x139E0EBF, 0x000BB8C0, 0x00000000, 0x7CC3B7E0, 0x52FF444E, 0xEE30079C,
    0x00000002, 0x73880000, 0x3F5ADF82, 0xF9DF7CCF, 0x00FD9B3C, 0x00005DC6, 0x00000000,
    0xE23FEF00, 0x3FEF02FF, 0xC602FFE2, 0x0000005D, 0x00000000, 0xBC6013BC, 0xBE36FCAF,
    0x6E7FED77, 0xE46AC638, 0x2AE7FC7F, 0x6F1BFBE4, 0x5CE850BE, 0xE2DDFFE8, 0xFDCE7EC7,
    0x9C6B0DFF, 0xDF897A21, 0x588C7018, 0xF8273180, 0x4073FC67, 0x929D663D, 0x5F7E6CBF,
    0xA87F9BDF, 0xE8D8C7B3, 0xC6FFBDFF, 0x029F631E, 0xFCF1DC60, 0xFFDC69EE, 0xA935DF77,
    0x5CFE2B0E, 0x00001318, 0x00000000, 0x100FF620, 0xFC8099E7, 0x139E0075, 0xEFB58000,
    0xB7BF1379, 0x987B1EEF, 0xC6FC95F5, 0x33C145F5, 0xDFC078C6, 0xF04C6004, 0x782CBF37,
    0x96F598C6, 0xF7E5C6FC, 0x0F63DDF5, 0x9803B7E0, 0xFD1009CF, 0x03CE204B, 0x3DF6B000,
    0xF6F7E26F, 0xB30F63DD, 0xB8DF92BE, 0xC67828BE, 0x9BF80F18, 0xFE098C00, 0xCF0597E6,
    0x92DEB318, 0xBEFCB8DF, 0x01EC7BBE, 0xBF004E71, 0x99E07EB5, 0x781F3BEF, 0x0001FB36,
    0x4DE7BED6, 0x7BBEDEFC, 0x57D661EC, 0x17D71BF2, 0xE318CF05, 0x80137F01, 0xFCDFC131,
    0x6319E0B2, 0x1BF25BD6, 0x77D7DF97, 0x67503D8F, 0xFFA1B18F, 0xF61BFEF7, 0x0014FB18,
    0x6F3DF6B0, 0xDDF6F7E2, 0xBEB30F63, 0xBEB8DF92, 0x18C67828, 0x009BF80F, 0xE6FE098C,
    0x18CF0597, 0xDF92DEB3, 0xBEBEFCB8, 0xF781EC7B, 0x017FF11F, 0xF11FF780, 0xB580017F,
    0xBF1379EF, 0x7B1EEFB7, 0xFC95F598, 0xC145F5C6, 0xC078C633, 0x4C6004DF, 0x2CBF37F0,
    0xF598C678, 0xE5C6FC96, 0x63DDF5F7, 0x019DF00F, 0x49DF0020, 0xB8C00000, 0xEF7BDEF7,
    0xEF7B8DFD, 0x1FDEF7BD, 0x019DF000, 0x6B000020, 0x7F8EF3DF, 0xDDEFBDFA, 0x5672FECF,
    0x9F8E723F, 0x7EEB272F, 0x73C58C63, 0x6E31349F, 0x1FD198C3, 0xEF8DFCC3, 0xA631BE25,
    0x5C6FC967, 0x77BEFBDF, 0x737E1EE7, 0x84DE7BED, 0xCE203FD8, 0x75FC8133, 0x0009CF00,
    0xFB81F73C, 0x00000003, 0xC2000000, 0x85F15240, 0x73BF837A, 0x7E01EFF6, 0x4E7CC03B,
    0x412FF440, 0x9E00079C, 0x01FDC0FB, 0x00000000, 0x20610000, 0xBD42F8A9, 0xFB39DFC1,
    0x139C40F7, 0x0FD6B7E0, 0xF3BEF99E, 0x0FD9B3C1, 0xE07DCF00, 0x000000FE, 0x80000000,
    0x7C549030, 0xEFE0DEA1, 0xF07BFD9C, 0x2FFE23FE, 0x88FFBC00, 0x73C00BFF, 0x003FB81F,
    0x00000000, 0x240C2000, 0x37A85F15, 0xFF673BF8, 0x03B7E01E, 0x1009CF98, 0xCE204BFD,
    0x1DF40003, 0x3E7E7750, 0x67CCC7F8, 0x789C5AC1, 0x7953F8A8, 0xABE167F8, 0xF1981EB4,
    0xEA20FC54, 0x4E018FFB, 0x19501FAE, 0x802B3013, 0xA9E40BAC, 0xF9FB3C82, 0x00177181,
    0x20000000, 0xEFB98C00, 0xFFCFA1BF, 0xE9E1FCF6, 0xB835BCF0, 0x0E900A50, 0x2E580060,
    0x7BE2C4E0, 0xBF075744, 0xDF8CFFFF, 0x5FDFFE84, 0x00000041, 0xF11FF780, 0xF780017F,
    0x017FF11F, 0xBA80EFA0, 0x3FC1F3F3, 0xD60B3E66, 0xC543C4E2, 0x3FC3CA9F, 0xF5A55F0B,
    0xE2A78CC0, 0x7FDF5107, 0xFD72700C, 0x8098CA80, 0x5D640159, 0xE4154F20, 0x000FCFD9

  EW_FONT_KERNING_CODES( WasherListFontL )
  EW_FONT_KERNING_VALUES( WasherListFontL )
EW_END_OF_FONT_RES( WasherListFontL )

/* Table with links to derived variants of the font resource : 'Washer::ListFontL' */
EW_RES_WITHOUT_VARIANTS( WasherListFontL )

/* Color constant according UI design. */
const XColor WasherButtonBgColor = { 0xE7, 0xEA, 0xEA, 0xFF };

/* Color constant according UI design. */
const XColor WasherCaptionColor = { 0x70, 0x90, 0xA6, 0xFF };

/* Color constant according UI design. */
const XColor WasherButtonTextColor = { 0x1B, 0x4C, 0x59, 0xFF };

/* User defined auto object: 'Washer::Device' */
EW_DEFINE_AUTOOBJECT( WasherDevice, WasherDeviceClass )

/* Initializer for the auto object 'Washer::Device' */
void WasherDevice__Init( WasherDeviceClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Washer::Device' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WasherDevice )
EW_END_OF_AUTOOBJECT_VARIANTS( WasherDevice )

/* Initializer for the class 'Washer::ProgItemS' */
void WasherProgItemS__Init( WasherProgItemS _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Back, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Left, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Right, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WasherProgItemS );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0025 );
  CoreView_OnSetLayout((CoreView)&_this->Back, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Back, _Const0025 );
  ViewsRectangle_OnSetColor( &_this->Back, WasherListBgColor );
  CoreView_OnSetLayout((CoreView)&_this->Left, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToTop | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Left, _Const0026 );
  ViewsRectangle_OnSetColor( &_this->Left, WasherListBgColor );
  CoreView_OnSetLayout((CoreView)&_this->Right, CoreLayoutAlignToBottom | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Right, _Const0027 );
  ViewsRectangle_OnSetColor( &_this->Right, WasherListBgColor );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text, _Const0028 );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0024 ));
  ViewsText_OnSetColor( &_this->Text, WasherListTextColor );
  CoreGroup__Add( _this, ((CoreView)&_this->Back ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Left ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Right ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &WasherListFontS, ResourcesFont ));
}

/* Re-Initializer for the class 'Washer::ProgItemS' */
void WasherProgItemS__ReInit( WasherProgItemS _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Back );
  ViewsRectangle__ReInit( &_this->Left );
  ViewsRectangle__ReInit( &_this->Right );
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Washer::ProgItemS' */
void WasherProgItemS__Done( WasherProgItemS _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( WasherProgItemS );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Back );
  ViewsRectangle__Done( &_this->Left );
  ViewsRectangle__Done( &_this->Right );
  ViewsText__Done( &_this->Text );

  /* Release all used strings */
  EwReleaseString( &_this->Caption );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* 'C' function for method : 'Washer::ProgItemS.OnSetCaption()' */
void WasherProgItemS_OnSetCaption( WasherProgItemS _this, XString value )
{
  EwRetainString( &_this->Caption, value );
  ViewsText_OnSetString( &_this->Text, value );
}

/* Variants derived from the class : 'Washer::ProgItemS' */
EW_DEFINE_CLASS_VARIANTS( WasherProgItemS )
EW_END_OF_CLASS_VARIANTS( WasherProgItemS )

/* Virtual Method Table (VMT) for the class : 'Washer::ProgItemS' */
EW_DEFINE_CLASS( WasherProgItemS, CoreGroup, Back, Back, Back, Back, Caption, "Washer::ProgItemS" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( WasherProgItemS )

/* Color constant according UI design. */
const XColor WasherListBgColor = { 0xFF, 0xFF, 0xFF, 0x40 };

/* Color constant according UI design. */
const XColor WasherListTextColor = { 0xFF, 0xFF, 0xFF, 0xFF };

/* Initializer for the class 'Washer::TempList' */
void WasherTempList__Init( WasherTempList _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Back, &_this->_XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_XObject, 0 );
  CoreVerticalList__Init( &_this->BottomList, &_this->_XObject, 0 );
  CoreVerticalList__Init( &_this->MainList, &_this->_XObject, 0 );
  CoreVerticalList__Init( &_this->TopList, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->FadeListIn, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Caption, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->FadeCaption, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->FadeListOut, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->Int32Effect, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->AutoDemoEffect, &_this->_XObject, 0 );
  CoreSystemEventHandler__Init( &_this->SystemEventHandler, &_this->_XObject, 0 );
  CoreSystemEventHandler__Init( &_this->SetTempEventHandler, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WasherTempList );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0029 );
  CoreView_OnSetLayout((CoreView)&_this->Back, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Back, _Const002A );
  ViewsRectangle_OnSetColor( &_this->Back, _Const002B );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const0029 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->SlideTouchHandler, _Const0018 );
  CoreSlideTouchHandler_OnSetFriction( &_this->SlideTouchHandler, 0.100000f );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->SimpleTouchHandler, _Const0019 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->SimpleTouchHandler, _Const002C );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->SimpleTouchHandler, _Const002D );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->SimpleTouchHandler, _Const001C );
  CoreView_OnSetLayout((CoreView)&_this->Rectangle, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const002E );
  ViewsRectangle_OnSetColor( &_this->Rectangle, WasherButtonBgColor );
  CoreRectView__OnSetBounds( &_this->BottomList, _Const002F );
  CoreGroup__OnSetOpacity( &_this->BottomList, 0 );
  CoreVerticalList_OnSetItemHeight( &_this->BottomList, 24 );
  CoreVerticalList_OnSetNoOfItems( &_this->BottomList, 6 );
  CoreVerticalList_OnSetItemClass( &_this->BottomList, EW_CLASS( WasherTempItemS ));
  CoreRectView__OnSetBounds( &_this->MainList, _Const002E );
  CoreGroup__OnSetOpacity( &_this->MainList, 0 );
  CoreVerticalList_OnSetItemHeight( &_this->MainList, 96 );
  CoreVerticalList_OnSetNoOfItems( &_this->MainList, 6 );
  CoreVerticalList_OnSetItemClass( &_this->MainList, EW_CLASS( WasherTempItemL ));
  CoreRectView__OnSetBounds( &_this->TopList, _Const0030 );
  CoreGroup__OnSetOpacity( &_this->TopList, 0 );
  CoreVerticalList_OnSetItemHeight( &_this->TopList, 24 );
  CoreVerticalList_OnSetNoOfItems( &_this->TopList, 6 );
  CoreVerticalList_OnSetItemClass( &_this->TopList, EW_CLASS( WasherTempItemS ));
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->FadeListIn, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->FadeListIn, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->FadeListIn, 300 );
  CoreRectView__OnSetBounds( &_this->Caption, _Const0031 );
  ViewsText_OnSetAlignment( &_this->Caption, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Caption, EwLoadString( &_Const0032 ));
  ViewsText_OnSetColor( &_this->Caption, WasherCaptionColor );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->FadeCaption, EffectsTimingFastIn_FastOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->FadeCaption, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->FadeCaption, 200 );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text, _Const002E );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwGetAutoObject( &WasherDevice, WasherDeviceClass )->WashingTemp[ 
  0 ]);
  ViewsText_OnSetColor( &_this->Text, EwBlendColor( WasherTempColor0, WasherTempColor1 ));
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->FadeListOut, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->FadeListOut, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->FadeListOut, 1000 );
  EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->FadeListOut, 2000 );
  _this->FadeListOut.Value2 = 0;
  _this->FadeListOut.Value1 = 255;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->Int32Effect, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->Int32Effect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->Int32Effect, 200 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->AutoDemoEffect, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->AutoDemoEffect, 300 );
  CoreGroup__Add( _this, ((CoreView)&_this->Back ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BottomList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->MainList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Caption ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  _this->SlideTouchHandler.OnEnd = EwNewSlot( _this, WasherTempList_OnEnd );
  _this->SlideTouchHandler.OnStart = EwNewSlot( _this, WasherTempList_OnStart );
  _this->SimpleTouchHandler.OnDrag = EwNewSlot( _this, WasherTempList_OnDrag );
  _this->SimpleTouchHandler.OnRelease = EwNewSlot( _this, WasherTempList_OnRelease );
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, WasherTempList_OnStart );
  _this->BottomList.OnLoadItem = EwNewSlot( _this, WasherTempList_OnLoadBottom );
  _this->MainList.OnUpdate = EwNewSlot( _this, WasherTempList_OnUpdate );
  _this->MainList.OnLoadItem = EwNewSlot( _this, WasherTempList_OnLoadMain );
  CoreVerticalList_OnSetSlideHandler( &_this->MainList, &_this->SlideTouchHandler );
  _this->TopList.OnLoadItem = EwNewSlot( _this, WasherTempList_OnLoadTop );
  _this->FadeListIn.Super1.OnAnimate = EwNewSlot( _this, WasherTempList_onAnimate );
  _this->FadeListIn.Outlet = EwNewRef( &_this->TopList, CoreGroup_OnGetOpacity, 
  CoreGroup__OnSetOpacity );
  ViewsText_OnSetFont( &_this->Caption, EwLoadResource( &WasherDescrFont, ResourcesFont ));
  _this->FadeCaption.Outlet = EwNewRef( &_this->Caption, ViewsText_OnGetOpacity, 
  ViewsText_OnSetOpacity );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &WasherListFontL, ResourcesFont ));
  _this->FadeListOut.Super1.OnAnimate = EwNewSlot( _this, WasherTempList_onAnimate );
  _this->FadeListOut.Outlet = EwNewRef( &_this->TopList, CoreGroup_OnGetOpacity, 
  CoreGroup__OnSetOpacity );
  _this->SystemEventHandler.OnEvent = EwNewSlot( _this, WasherTempList_onEvent );
  CoreSystemEventHandler_OnSetEvent( &_this->SystemEventHandler, &EwGetAutoObject( 
  &WasherDevice, WasherDeviceClass )->TempUpdateEvent );
  _this->SetTempEventHandler.OnEvent = EwNewSlot( _this, WasherTempList_onEventSet );
  CoreSystemEventHandler_OnSetEvent( &_this->SetTempEventHandler, &EwGetAutoObject( 
  &WasherDevice, WasherDeviceClass )->SetTempEvent );
}

/* Re-Initializer for the class 'Washer::TempList' */
void WasherTempList__ReInit( WasherTempList _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Back );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
  ViewsRectangle__ReInit( &_this->Rectangle );
  CoreVerticalList__ReInit( &_this->BottomList );
  CoreVerticalList__ReInit( &_this->MainList );
  CoreVerticalList__ReInit( &_this->TopList );
  EffectsInt32Effect__ReInit( &_this->FadeListIn );
  ViewsText__ReInit( &_this->Caption );
  EffectsInt32Effect__ReInit( &_this->FadeCaption );
  ViewsText__ReInit( &_this->Text );
  EffectsInt32Effect__ReInit( &_this->FadeListOut );
  EffectsInt32Effect__ReInit( &_this->Int32Effect );
  EffectsInt32Effect__ReInit( &_this->AutoDemoEffect );
  CoreSystemEventHandler__ReInit( &_this->SystemEventHandler );
  CoreSystemEventHandler__ReInit( &_this->SetTempEventHandler );
}

/* Finalizer method for the class 'Washer::TempList' */
void WasherTempList__Done( WasherTempList _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( WasherTempList );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Back );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );
  ViewsRectangle__Done( &_this->Rectangle );
  CoreVerticalList__Done( &_this->BottomList );
  CoreVerticalList__Done( &_this->MainList );
  CoreVerticalList__Done( &_this->TopList );
  EffectsInt32Effect__Done( &_this->FadeListIn );
  ViewsText__Done( &_this->Caption );
  EffectsInt32Effect__Done( &_this->FadeCaption );
  ViewsText__Done( &_this->Text );
  EffectsInt32Effect__Done( &_this->FadeListOut );
  EffectsInt32Effect__Done( &_this->Int32Effect );
  EffectsInt32Effect__Done( &_this->AutoDemoEffect );
  CoreSystemEventHandler__Done( &_this->SystemEventHandler );
  CoreSystemEventHandler__Done( &_this->SetTempEventHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Slot method to load content of main scroll list. */
void WasherTempList_OnLoadMain( WasherTempList _this, XObject sender )
{
  WasherTempItemL itemView;
  XInt32 itemNo;
  XString caption;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemView = EwCastObject( _this->MainList.View, WasherTempItemL );
  itemNo = _this->MainList.Item;
  caption = 0;

  if (( itemNo >= 0 ) && ( itemNo < 6 ))
    caption = EwGetAutoObject( &WasherDevice, WasherDeviceClass )->WashingTemp[ 
    EwCheckIndex( itemNo, 6 )];

  WasherTempItemL_OnSetCaption( itemView, caption );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->MainList.Super2.Bounds ), _this->MainList.ItemHeight )));

  switch ( itemNo )
  {
    case 0 :
    {
      WasherTempItemL_OnSetColorTop( itemView, WasherTempColor0 );
      WasherTempItemL_OnSetColorBottom( itemView, WasherTempColor1 );
    }
    break;

    case 1 :
    {
      WasherTempItemL_OnSetColorTop( itemView, WasherTempColor1 );
      WasherTempItemL_OnSetColorBottom( itemView, WasherTempColor2 );
    }
    break;

    case 2 :
    {
      WasherTempItemL_OnSetColorTop( itemView, WasherTempColor2 );
      WasherTempItemL_OnSetColorBottom( itemView, WasherTempColor3 );
    }
    break;

    case 3 :
    {
      WasherTempItemL_OnSetColorTop( itemView, WasherTempColor3 );
      WasherTempItemL_OnSetColorBottom( itemView, WasherTempColor4 );
    }
    break;

    case 4 :
    {
      WasherTempItemL_OnSetColorTop( itemView, WasherTempColor4 );
      WasherTempItemL_OnSetColorBottom( itemView, WasherTempColor5 );
    }
    break;

    case 5 :
    {
      WasherTempItemL_OnSetColorTop( itemView, WasherTempColor5 );
      WasherTempItemL_OnSetColorBottom( itemView, WasherTempColor6 );
    }
    break;

    default : 
      ;
  }
}

/* Slot method to load content of upper scroll list. */
void WasherTempList_OnLoadTop( WasherTempList _this, XObject sender )
{
  WasherTempItemS itemView;
  XInt32 itemNo;
  XString caption;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemView = EwCastObject( _this->TopList.View, WasherTempItemS );
  itemNo = _this->TopList.Item;
  caption = 0;

  if (( itemNo >= 0 ) && ( itemNo < 6 ))
    caption = EwGetAutoObject( &WasherDevice, WasherDeviceClass )->WashingTemp[ 
    EwCheckIndex( itemNo, 6 )];

  WasherTempItemS_OnSetCaption( itemView, caption );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->TopList.Super2.Bounds ), _this->TopList.ItemHeight )));
}

/* Slot method to synchronize the scrolling of the upper/lower list with the current 
   scroll position of the center list. */
void WasherTempList_OnUpdate( WasherTempList _this, XObject sender )
{
  XInt32 itemNo;
  XInt32 dx;
  XColor c1;
  XColor c2;
  XInt32 r;
  XInt32 g;
  XInt32 b;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_OnSetScrollOffset( &_this->TopList, (( _this->MainList.ScrollOffset 
  * _this->TopList.ItemHeight ) / _this->MainList.ItemHeight ) + EwGetRectH( _this->TopList.Super2.Bounds ));
  CoreVerticalList_OnSetScrollOffset( &_this->BottomList, (( _this->MainList.ScrollOffset 
  * _this->BottomList.ItemHeight ) / _this->MainList.ItemHeight ) - _this->BottomList.ItemHeight );
  itemNo = ( -_this->MainList.ScrollOffset + ( _this->MainList.ItemHeight / 2 )) 
  / _this->MainList.ItemHeight;
  dx = ((( -_this->MainList.ScrollOffset + ( _this->MainList.ItemHeight / 2 )) % 
  _this->MainList.ItemHeight ) * 255 ) / _this->MainList.ItemHeight;

  if ( dx < 0 )
    dx = 0;

  c1 = WasherTempColor6;
  c2 = WasherTempColor6;

  switch ( itemNo )
  {
    case 0 :
    {
      c1 = WasherTempColor0;
      c2 = WasherTempColor1;
    }
    break;

    case 1 :
    {
      c1 = WasherTempColor1;
      c2 = WasherTempColor2;
    }
    break;

    case 2 :
    {
      c1 = WasherTempColor2;
      c2 = WasherTempColor3;
    }
    break;

    case 3 :
    {
      c1 = WasherTempColor3;
      c2 = WasherTempColor4;
    }
    break;

    case 4 :
    {
      c1 = WasherTempColor4;
      c2 = WasherTempColor5;
    }
    break;

    case 5 :
    {
      c1 = WasherTempColor5;
      c2 = WasherTempColor6;
    }
    break;

    default : 
      dx = 0;
  }

  r = (( c1.Red * ( 255 - dx )) + ( c2.Red * dx )) / 255;
  g = (( c1.Green * ( 255 - dx )) + ( c2.Green * dx )) / 255;
  b = (( c1.Blue * ( 255 - dx )) + ( c2.Blue * dx )) / 255;
  ViewsText_OnSetColor( &_this->Text, EwNewColor((XUInt8)r, (XUInt8)g, (XUInt8)b, 
  255 ));

  if ( _this->ColorOutlet.Object != 0 )
    EwOnSetColor( _this->ColorOutlet, ViewsText_OnGetColor( &_this->Text ));
}

/* Slot method to load content of lower scroll list. */
void WasherTempList_OnLoadBottom( WasherTempList _this, XObject sender )
{
  WasherTempItemS itemView;
  XInt32 itemNo;
  XString caption;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemView = EwCastObject( _this->BottomList.View, WasherTempItemS );
  itemNo = _this->BottomList.Item;
  caption = 0;

  if (( itemNo >= 0 ) && ( itemNo < 6 ))
    caption = EwGetAutoObject( &WasherDevice, WasherDeviceClass )->WashingTemp[ 
    EwCheckIndex( itemNo, 6 )];

  WasherTempItemS_OnSetCaption( itemView, caption );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->BottomList.Super2.Bounds ), _this->BottomList.ItemHeight )));
}

/* Slot method to change the selection, when the item has reached its parking position. */
void WasherTempList_OnEnd( WasherTempList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  WasherDeviceClass_OnSetTempNumber( EwGetAutoObject( &WasherDevice, WasherDeviceClass ), 
  -_this->MainList.ScrollOffset / _this->MainList.ItemHeight );
  ViewsText_OnSetString( &_this->Text, EwGetAutoObject( &WasherDevice, WasherDeviceClass )->WashingTemp[ 
  EwCheckIndex( EwGetAutoObject( &WasherDevice, WasherDeviceClass )->TempNumber, 
  6 )]);
  _this->FadeListOut.Value1 = _this->TopList.Super1.Opacity;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeListOut, 1 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 0 );
  _this->FadeCaption.Value1 = _this->Caption.Opacity;
  _this->FadeCaption.Value2 = 255;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 1 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandler, 1 );
}

/* Slot method to make the upper/lower list visible. */
void WasherTempList_OnStart( WasherTempList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( _this->TopList.Super1.Opacity != 255 ) && !_this->FadeListIn.Super1.Enabled )
  {
    _this->FadeListIn.Value1 = _this->TopList.Super1.Opacity;
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeListIn, 1 );
  }

  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeListOut, 0 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 0 );
  _this->FadeCaption.Value1 = _this->Caption.Opacity;
  _this->FadeCaption.Value2 = 0;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 1 );
}

/* This is a slot method. */
void WasherTempList_onAnimate( WasherTempList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup__OnSetOpacity( &_this->BottomList, _this->TopList.Super1.Opacity );
  CoreGroup__OnSetOpacity( &_this->MainList, _this->TopList.Super1.Opacity );
  ViewsText_OnSetOpacity( &_this->Text, 255 - _this->TopList.Super1.Opacity );
}

/* 'C' function for method : 'Washer::TempList.OnDrag()' */
void WasherTempList_OnDrag( WasherTempList _this, XObject sender )
{
  XPoint delta;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  delta = EwMovePointNeg( _this->SimpleTouchHandler.CurrentPos, _this->SimpleTouchHandler.HittingPos );

  if (( delta.Y > 8 ) || ( delta.Y < -8 ))
  {
    CoreRoot_DeflectCursor( CoreView__GetRoot( _this ), ((CoreView)&_this->SlideTouchHandler ), 
    _Const001C );
    CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandler, 0 );
  }
}

/* 'C' function for method : 'Washer::TempList.OnRelease()' */
void WasherTempList_OnRelease( WasherTempList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->SimpleTouchHandler.AutoDeflected && ( _this->TopList.Super1.Opacity 
      == 255 ))
  {
    XInt32 delta = 0;

    if ( _this->SimpleTouchHandler.CurrentPos.Y < _this->MainList.Super2.Bounds.Point1.Y )
      delta = (( _this->SimpleTouchHandler.CurrentPos.Y - _this->MainList.Super2.Bounds.Point1.Y ) 
      / _this->TopList.ItemHeight ) - 1;
    else
      if ( _this->SimpleTouchHandler.CurrentPos.Y > _this->MainList.Super2.Bounds.Point2.Y )
        delta = (( _this->SimpleTouchHandler.CurrentPos.Y - _this->MainList.Super2.Bounds.Point2.Y ) 
        / _this->BottomList.ItemHeight ) + 1;

    if ( delta != 0 )
    {
      XInt32 item = ( -_this->MainList.ScrollOffset / _this->MainList.ItemHeight ) 
        + delta;
      CoreVerticalList_EnsureVisible( &_this->MainList, item, 1, &_this->Int32Effect, 
      EwNullSlot );
    }
  }

  EwSignal( EwNewSlot( _this, WasherTempList_OnEnd ), ((XObject)_this ));
}

/* Slot method to trigger the next phase of the auto demo. */
void WasherTempList_AutoDemo( WasherTempList _this, XObject sender )
{
  XInt32 val;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( EwNewSlot( _this, WasherTempList_OnStart ), ((XObject)_this ));
  val = EwGetAutoObject( &WasherDevice, WasherDeviceClass )->TempNumber + 1;

  if ( val >= 6 )
    val = 0;

  CoreVerticalList_EnsureVisible( &_this->MainList, val, 1, &_this->AutoDemoEffect, 
  EwNewSlot( _this, WasherTempList_OnEnd ));
}

/* This slot method is executed when the associated system event handler 'SystemEventHandler' 
   receives an event. */
void WasherTempList_onEvent( WasherTempList _this, XObject sender )
{
  XInt32 val;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( EwNewSlot( _this, WasherTempList_DeviceStart ), ((XObject)_this ));
  val = EwGetAutoObject( &WasherDevice, WasherDeviceClass )->TempNumber;
  CoreVerticalList_EnsureVisible( &_this->MainList, val, 1, 0, EwNewSlot( _this, 
  WasherTempList_DeviceEnd ));
}

/* 'C' function for method : 'Washer::TempList.DeviceStart()' */
void WasherTempList_DeviceStart( WasherTempList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );
}

/* 'C' function for method : 'Washer::TempList.DeviceEnd()' */
void WasherTempList_DeviceEnd( WasherTempList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsText_OnSetString( &_this->Text, EwGetAutoObject( &WasherDevice, WasherDeviceClass )->WashingTemp[ 
  EwCheckIndex( EwGetAutoObject( &WasherDevice, WasherDeviceClass )->TempNumber, 
  6 )]);
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 0 );
  _this->FadeCaption.Value1 = _this->Caption.Opacity;
  _this->FadeCaption.Value2 = 255;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 1 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandler, 1 );
}

/* This slot method is executed when the associated system event handler 'SystemEventHandler1' 
   receives an event. */
void WasherTempList_onEventSet( WasherTempList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwGetAutoObject( &WasherDevice, WasherDeviceClass )->Running )
  {
    CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandler, 0 );
    CoreSlideTouchHandler_OnSetEnabled( &_this->SlideTouchHandler, 0 );
  }
  else
  {
    CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandler, 1 );
    CoreSlideTouchHandler_OnSetEnabled( &_this->SlideTouchHandler, 1 );
  }
}

/* Variants derived from the class : 'Washer::TempList' */
EW_DEFINE_CLASS_VARIANTS( WasherTempList )
EW_END_OF_CLASS_VARIANTS( WasherTempList )

/* Virtual Method Table (VMT) for the class : 'Washer::TempList' */
EW_DEFINE_CLASS( WasherTempList, CoreGroup, ColorOutlet, ColorOutlet, ColorOutlet, 
                 Back, _None, "Washer::TempList" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( WasherTempList )

/* Initializer for the class 'Washer::TempItemL' */
void WasherTempItemL__Init( WasherTempItemL _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WasherTempItemL );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0033 );
  CoreView_OnSetLayout((CoreView)&_this->Rectangle, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0033 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, WasherButtonBgColor );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text, _Const0033 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0024 ));
  ViewsText_OnSetColor( &_this->Text, WasherListTextColor );
  _this->ColorTop = _Const0034;
  _this->ColorBottom = _Const0034;
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &WasherListFontL, ResourcesFont ));
}

/* Re-Initializer for the class 'Washer::TempItemL' */
void WasherTempItemL__ReInit( WasherTempItemL _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Washer::TempItemL' */
void WasherTempItemL__Done( WasherTempItemL _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( WasherTempItemL );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsText__Done( &_this->Text );

  /* Release all used strings */
  EwReleaseString( &_this->Caption );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* 'C' function for method : 'Washer::TempItemL.OnSetCaption()' */
void WasherTempItemL_OnSetCaption( WasherTempItemL _this, XString value )
{
  EwRetainString( &_this->Caption, value );
  ViewsText_OnSetString( &_this->Text, value );
}

/* 'C' function for method : 'Washer::TempItemL.OnSetColorTop()' */
void WasherTempItemL_OnSetColorTop( WasherTempItemL _this, XColor value )
{
  _this->ColorTop = value;
  ViewsRectangle_OnSetColorTL( &_this->Rectangle, value );
  ViewsRectangle_OnSetColorTR( &_this->Rectangle, value );
}

/* 'C' function for method : 'Washer::TempItemL.OnSetColorBottom()' */
void WasherTempItemL_OnSetColorBottom( WasherTempItemL _this, XColor value )
{
  _this->ColorBottom = value;
  ViewsRectangle_OnSetColorBL( &_this->Rectangle, value );
  ViewsRectangle_OnSetColorBR( &_this->Rectangle, value );
}

/* Variants derived from the class : 'Washer::TempItemL' */
EW_DEFINE_CLASS_VARIANTS( WasherTempItemL )
EW_END_OF_CLASS_VARIANTS( WasherTempItemL )

/* Virtual Method Table (VMT) for the class : 'Washer::TempItemL' */
EW_DEFINE_CLASS( WasherTempItemL, CoreGroup, Rectangle, Rectangle, Rectangle, Rectangle, 
                 Caption, "Washer::TempItemL" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( WasherTempItemL )

/* Initializer for the class 'Washer::TempItemS' */
void WasherTempItemS__Init( WasherTempItemS _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Back, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Right, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WasherTempItemS );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0035 );
  CoreView_OnSetLayout((CoreView)&_this->Back, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Back, _Const0035 );
  ViewsRectangle_OnSetColor( &_this->Back, WasherListBgColor );
  CoreView_OnSetLayout((CoreView)&_this->Right, CoreLayoutAlignToBottom | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Right, _Const0036 );
  ViewsRectangle_OnSetColor( &_this->Right, WasherListBgColor );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text, _Const0037 );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0024 ));
  ViewsText_OnSetColor( &_this->Text, WasherListTextColor );
  CoreGroup__Add( _this, ((CoreView)&_this->Back ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Right ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &WasherListFontS, ResourcesFont ));
}

/* Re-Initializer for the class 'Washer::TempItemS' */
void WasherTempItemS__ReInit( WasherTempItemS _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Back );
  ViewsRectangle__ReInit( &_this->Right );
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Washer::TempItemS' */
void WasherTempItemS__Done( WasherTempItemS _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( WasherTempItemS );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Back );
  ViewsRectangle__Done( &_this->Right );
  ViewsText__Done( &_this->Text );

  /* Release all used strings */
  EwReleaseString( &_this->Caption );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* 'C' function for method : 'Washer::TempItemS.OnSetCaption()' */
void WasherTempItemS_OnSetCaption( WasherTempItemS _this, XString value )
{
  EwRetainString( &_this->Caption, value );
  ViewsText_OnSetString( &_this->Text, value );
}

/* Variants derived from the class : 'Washer::TempItemS' */
EW_DEFINE_CLASS_VARIANTS( WasherTempItemS )
EW_END_OF_CLASS_VARIANTS( WasherTempItemS )

/* Virtual Method Table (VMT) for the class : 'Washer::TempItemS' */
EW_DEFINE_CLASS( WasherTempItemS, CoreGroup, Back, Back, Back, Back, Caption, "Washer::TempItemS" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( WasherTempItemS )

/* Initializer for the class 'Washer::SpinList' */
void WasherSpinList__Init( WasherSpinList _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_XObject, 0 );
  CoreVerticalList__Init( &_this->BottomList, &_this->_XObject, 0 );
  CoreVerticalList__Init( &_this->MainList, &_this->_XObject, 0 );
  CoreVerticalList__Init( &_this->TopList, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->FadeListIn, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Caption, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->FadeCaption, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->FadeListOut, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->Int32Effect, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->AutoDemoEffect, &_this->_XObject, 0 );
  CoreSystemEventHandler__Init( &_this->SystemEventHandler, &_this->_XObject, 0 );
  CoreSystemEventHandler__Init( &_this->SetSpinEventHandler, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WasherSpinList );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0029 );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const0029 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->SlideTouchHandler, _Const0018 );
  CoreSlideTouchHandler_OnSetFriction( &_this->SlideTouchHandler, 0.100000f );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->SimpleTouchHandler, _Const0019 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->SimpleTouchHandler, _Const002C );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->SimpleTouchHandler, _Const002D );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->SimpleTouchHandler, _Const001C );
  CoreView_OnSetLayout((CoreView)&_this->Rectangle, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const002E );
  ViewsRectangle_OnSetColor( &_this->Rectangle, WasherButtonBgColor );
  CoreRectView__OnSetBounds( &_this->BottomList, _Const002F );
  CoreGroup__OnSetOpacity( &_this->BottomList, 0 );
  CoreVerticalList_OnSetItemHeight( &_this->BottomList, 24 );
  CoreVerticalList_OnSetNoOfItems( &_this->BottomList, 6 );
  CoreVerticalList_OnSetItemClass( &_this->BottomList, EW_CLASS( WasherSpinItemS ));
  CoreRectView__OnSetBounds( &_this->MainList, _Const002E );
  CoreVerticalList_OnSetItemHeight( &_this->MainList, 96 );
  CoreVerticalList_OnSetNoOfItems( &_this->MainList, 6 );
  CoreVerticalList_OnSetItemClass( &_this->MainList, EW_CLASS( WasherSpinItemL ));
  CoreRectView__OnSetBounds( &_this->TopList, _Const0030 );
  CoreGroup__OnSetOpacity( &_this->TopList, 0 );
  CoreVerticalList_OnSetItemHeight( &_this->TopList, 24 );
  CoreVerticalList_OnSetNoOfItems( &_this->TopList, 6 );
  CoreVerticalList_OnSetItemClass( &_this->TopList, EW_CLASS( WasherSpinItemS ));
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->FadeListIn, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->FadeListIn, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->FadeListIn, 300 );
  CoreRectView__OnSetBounds( &_this->Caption, _Const0031 );
  ViewsText_OnSetAlignment( &_this->Caption, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Caption, EwLoadString( &_Const0038 ));
  ViewsText_OnSetColor( &_this->Caption, WasherCaptionColor );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->FadeCaption, EffectsTimingFastIn_FastOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->FadeCaption, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->FadeCaption, 200 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->FadeListOut, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->FadeListOut, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->FadeListOut, 1000 );
  EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->FadeListOut, 2000 );
  _this->FadeListOut.Value2 = 0;
  _this->FadeListOut.Value1 = 255;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->Int32Effect, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->Int32Effect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->Int32Effect, 200 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->AutoDemoEffect, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->AutoDemoEffect, 300 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BottomList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->MainList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Caption ), 0 );
  _this->SlideTouchHandler.OnEnd = EwNewSlot( _this, WasherSpinList_OnEnd );
  _this->SlideTouchHandler.OnStart = EwNewSlot( _this, WasherSpinList_OnStart );
  _this->SimpleTouchHandler.OnDrag = EwNewSlot( _this, WasherSpinList_OnDrag );
  _this->SimpleTouchHandler.OnRelease = EwNewSlot( _this, WasherSpinList_OnRelease );
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, WasherSpinList_OnStart );
  _this->BottomList.OnLoadItem = EwNewSlot( _this, WasherSpinList_OnLoadBottom );
  _this->MainList.OnUpdate = EwNewSlot( _this, WasherSpinList_OnUpdate );
  _this->MainList.OnLoadItem = EwNewSlot( _this, WasherSpinList_OnLoadMain );
  CoreVerticalList_OnSetSlideHandler( &_this->MainList, &_this->SlideTouchHandler );
  _this->TopList.OnLoadItem = EwNewSlot( _this, WasherSpinList_OnLoadTop );
  _this->FadeListIn.Super1.OnAnimate = EwNewSlot( _this, WasherSpinList_onAnimate );
  _this->FadeListIn.Outlet = EwNewRef( &_this->TopList, CoreGroup_OnGetOpacity, 
  CoreGroup__OnSetOpacity );
  ViewsText_OnSetFont( &_this->Caption, EwLoadResource( &WasherDescrFont, ResourcesFont ));
  _this->FadeCaption.Outlet = EwNewRef( &_this->Caption, ViewsText_OnGetOpacity, 
  ViewsText_OnSetOpacity );
  _this->FadeListOut.Super1.OnAnimate = EwNewSlot( _this, WasherSpinList_onAnimate );
  _this->FadeListOut.Outlet = EwNewRef( &_this->TopList, CoreGroup_OnGetOpacity, 
  CoreGroup__OnSetOpacity );
  _this->SystemEventHandler.OnEvent = EwNewSlot( _this, WasherSpinList_onEvent );
  CoreSystemEventHandler_OnSetEvent( &_this->SystemEventHandler, &EwGetAutoObject( 
  &WasherDevice, WasherDeviceClass )->SpinUpdateEvent );
  _this->SetSpinEventHandler.OnEvent = EwNewSlot( _this, WasherSpinList_onEventSet );
  CoreSystemEventHandler_OnSetEvent( &_this->SetSpinEventHandler, &EwGetAutoObject( 
  &WasherDevice, WasherDeviceClass )->SetSpinEvent );
}

/* Re-Initializer for the class 'Washer::SpinList' */
void WasherSpinList__ReInit( WasherSpinList _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
  ViewsRectangle__ReInit( &_this->Rectangle );
  CoreVerticalList__ReInit( &_this->BottomList );
  CoreVerticalList__ReInit( &_this->MainList );
  CoreVerticalList__ReInit( &_this->TopList );
  EffectsInt32Effect__ReInit( &_this->FadeListIn );
  ViewsText__ReInit( &_this->Caption );
  EffectsInt32Effect__ReInit( &_this->FadeCaption );
  EffectsInt32Effect__ReInit( &_this->FadeListOut );
  EffectsInt32Effect__ReInit( &_this->Int32Effect );
  EffectsInt32Effect__ReInit( &_this->AutoDemoEffect );
  CoreSystemEventHandler__ReInit( &_this->SystemEventHandler );
  CoreSystemEventHandler__ReInit( &_this->SetSpinEventHandler );
}

/* Finalizer method for the class 'Washer::SpinList' */
void WasherSpinList__Done( WasherSpinList _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( WasherSpinList );

  /* Finalize all embedded objects */
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );
  ViewsRectangle__Done( &_this->Rectangle );
  CoreVerticalList__Done( &_this->BottomList );
  CoreVerticalList__Done( &_this->MainList );
  CoreVerticalList__Done( &_this->TopList );
  EffectsInt32Effect__Done( &_this->FadeListIn );
  ViewsText__Done( &_this->Caption );
  EffectsInt32Effect__Done( &_this->FadeCaption );
  EffectsInt32Effect__Done( &_this->FadeListOut );
  EffectsInt32Effect__Done( &_this->Int32Effect );
  EffectsInt32Effect__Done( &_this->AutoDemoEffect );
  CoreSystemEventHandler__Done( &_this->SystemEventHandler );
  CoreSystemEventHandler__Done( &_this->SetSpinEventHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Slot method to load content of main scroll list. */
void WasherSpinList_OnLoadMain( WasherSpinList _this, XObject sender )
{
  WasherSpinItemL itemView;
  XInt32 itemNo;
  XString caption;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemView = EwCastObject( _this->MainList.View, WasherSpinItemL );
  itemNo = _this->MainList.Item;
  caption = 0;

  if (( itemNo >= 0 ) && ( itemNo < 6 ))
    caption = EwGetAutoObject( &WasherDevice, WasherDeviceClass )->SpinTurn[ EwCheckIndex( 
    itemNo, 6 )];

  WasherSpinItemL_OnSetCaption( itemView, caption );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->MainList.Super2.Bounds ), _this->MainList.ItemHeight )));
}

/* Slot method to load content of upper scroll list. */
void WasherSpinList_OnLoadTop( WasherSpinList _this, XObject sender )
{
  WasherSpinItemS itemView;
  XInt32 itemNo;
  XString caption;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemView = EwCastObject( _this->TopList.View, WasherSpinItemS );
  itemNo = _this->TopList.Item;
  caption = 0;

  if (( itemNo >= 0 ) && ( itemNo < 6 ))
    caption = EwGetAutoObject( &WasherDevice, WasherDeviceClass )->SpinTurn[ EwCheckIndex( 
    itemNo, 6 )];

  WasherSpinItemS_OnSetCaption( itemView, caption );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->TopList.Super2.Bounds ), _this->TopList.ItemHeight )));
}

/* Slot method to synchronize the scrolling of the upper/lower list with the current 
   scroll position of the center list. */
void WasherSpinList_OnUpdate( WasherSpinList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_OnSetScrollOffset( &_this->TopList, (( _this->MainList.ScrollOffset 
  * _this->TopList.ItemHeight ) / _this->MainList.ItemHeight ) + EwGetRectH( _this->TopList.Super2.Bounds ));
  CoreVerticalList_OnSetScrollOffset( &_this->BottomList, (( _this->MainList.ScrollOffset 
  * _this->BottomList.ItemHeight ) / _this->MainList.ItemHeight ) - _this->BottomList.ItemHeight );
}

/* Slot method to load content of lower scroll list. */
void WasherSpinList_OnLoadBottom( WasherSpinList _this, XObject sender )
{
  WasherSpinItemS itemView;
  XInt32 itemNo;
  XString caption;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemView = EwCastObject( _this->BottomList.View, WasherSpinItemS );
  itemNo = _this->BottomList.Item;
  caption = 0;

  if (( itemNo >= 0 ) && ( itemNo < 6 ))
    caption = EwGetAutoObject( &WasherDevice, WasherDeviceClass )->SpinTurn[ EwCheckIndex( 
    itemNo, 6 )];

  WasherSpinItemS_OnSetCaption( itemView, caption );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->BottomList.Super2.Bounds ), _this->BottomList.ItemHeight )));
}

/* Slot method to change the selection, when the item has reached its parking position. */
void WasherSpinList_OnEnd( WasherSpinList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  WasherDeviceClass_OnSetSpinNumber( EwGetAutoObject( &WasherDevice, WasherDeviceClass ), 
  -_this->MainList.ScrollOffset / _this->MainList.ItemHeight );
  _this->FadeListOut.Value1 = _this->TopList.Super1.Opacity;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeListOut, 1 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 0 );
  _this->FadeCaption.Value1 = _this->Caption.Opacity;
  _this->FadeCaption.Value2 = 255;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 1 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandler, 1 );
}

/* Slot method to make the upper/lower list visible. */
void WasherSpinList_OnStart( WasherSpinList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( _this->TopList.Super1.Opacity != 255 ) && !_this->FadeListIn.Super1.Enabled )
  {
    _this->FadeListIn.Value1 = _this->TopList.Super1.Opacity;
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeListIn, 1 );
  }

  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeListOut, 0 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 0 );
  _this->FadeCaption.Value1 = _this->Caption.Opacity;
  _this->FadeCaption.Value2 = 0;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 1 );
}

/* This is a slot method. */
void WasherSpinList_onAnimate( WasherSpinList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup__OnSetOpacity( &_this->BottomList, _this->TopList.Super1.Opacity );
}

/* 'C' function for method : 'Washer::SpinList.OnDrag()' */
void WasherSpinList_OnDrag( WasherSpinList _this, XObject sender )
{
  XPoint delta;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  delta = EwMovePointNeg( _this->SimpleTouchHandler.CurrentPos, _this->SimpleTouchHandler.HittingPos );

  if (( delta.Y > 8 ) || ( delta.Y < -8 ))
  {
    CoreRoot_DeflectCursor( CoreView__GetRoot( _this ), ((CoreView)&_this->SlideTouchHandler ), 
    _Const001C );
    CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandler, 0 );
  }
}

/* 'C' function for method : 'Washer::SpinList.OnRelease()' */
void WasherSpinList_OnRelease( WasherSpinList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->SimpleTouchHandler.AutoDeflected && ( _this->TopList.Super1.Opacity 
      == 255 ))
  {
    XInt32 delta = 0;

    if ( _this->SimpleTouchHandler.CurrentPos.Y < _this->MainList.Super2.Bounds.Point1.Y )
      delta = (( _this->SimpleTouchHandler.CurrentPos.Y - _this->MainList.Super2.Bounds.Point1.Y ) 
      / _this->TopList.ItemHeight ) - 1;
    else
      if ( _this->SimpleTouchHandler.CurrentPos.Y > _this->MainList.Super2.Bounds.Point2.Y )
        delta = (( _this->SimpleTouchHandler.CurrentPos.Y - _this->MainList.Super2.Bounds.Point2.Y ) 
        / _this->BottomList.ItemHeight ) + 1;

    if ( delta != 0 )
    {
      XInt32 item = ( -_this->MainList.ScrollOffset / _this->MainList.ItemHeight ) 
        + delta;
      CoreVerticalList_EnsureVisible( &_this->MainList, item, 1, &_this->Int32Effect, 
      EwNullSlot );
    }
  }

  EwSignal( EwNewSlot( _this, WasherSpinList_OnEnd ), ((XObject)_this ));
}

/* Slot method to trigger the next phase of the auto demo. */
void WasherSpinList_AutoDemo( WasherSpinList _this, XObject sender )
{
  XInt32 val;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( EwNewSlot( _this, WasherSpinList_OnStart ), ((XObject)_this ));
  val = EwGetAutoObject( &WasherDevice, WasherDeviceClass )->SpinNumber + 1;

  if ( val >= 6 )
    val = 0;

  CoreVerticalList_EnsureVisible( &_this->MainList, val, 1, &_this->AutoDemoEffect, 
  EwNewSlot( _this, WasherSpinList_OnEnd ));
}

/* This slot method is executed when the associated system event handler 'SystemEventHandler' 
   receives an event. */
void WasherSpinList_onEvent( WasherSpinList _this, XObject sender )
{
  XInt32 val;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( EwNewSlot( _this, WasherSpinList_DeviceStart ), ((XObject)_this ));
  val = EwGetAutoObject( &WasherDevice, WasherDeviceClass )->SpinNumber;
  CoreVerticalList_EnsureVisible( &_this->MainList, val, 1, 0, EwNewSlot( _this, 
  WasherSpinList_DeviceEnd ));
}

/* 'C' function for method : 'Washer::SpinList.DeviceStart()' */
void WasherSpinList_DeviceStart( WasherSpinList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );
}

/* 'C' function for method : 'Washer::SpinList.DeviceEnd()' */
void WasherSpinList_DeviceEnd( WasherSpinList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 0 );
  _this->FadeCaption.Value1 = _this->Caption.Opacity;
  _this->FadeCaption.Value2 = 255;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 1 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandler, 1 );
}

/* This slot method is executed when the associated system event handler 'SystemEventHandler1' 
   receives an event. */
void WasherSpinList_onEventSet( WasherSpinList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwGetAutoObject( &WasherDevice, WasherDeviceClass )->Running )
  {
    CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandler, 0 );
    CoreSlideTouchHandler_OnSetEnabled( &_this->SlideTouchHandler, 0 );
  }
  else
  {
    CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandler, 1 );
    CoreSlideTouchHandler_OnSetEnabled( &_this->SlideTouchHandler, 1 );
  }
}

/* Variants derived from the class : 'Washer::SpinList' */
EW_DEFINE_CLASS_VARIANTS( WasherSpinList )
EW_END_OF_CLASS_VARIANTS( WasherSpinList )

/* Virtual Method Table (VMT) for the class : 'Washer::SpinList' */
EW_DEFINE_CLASS( WasherSpinList, CoreGroup, SlideTouchHandler, SlideTouchHandler, 
                 SlideTouchHandler, SlideTouchHandler, _None, "Washer::SpinList" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( WasherSpinList )

/* Initializer for the class 'Washer::SpinItemL' */
void WasherSpinItemL__Init( WasherSpinItemL _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WasherSpinItemL );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0033 );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text, _Const0039 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0024 ));
  ViewsText_OnSetColor( &_this->Text, WasherButtonTextColor );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &WasherListFontM, ResourcesFont ));
}

/* Re-Initializer for the class 'Washer::SpinItemL' */
void WasherSpinItemL__ReInit( WasherSpinItemL _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Washer::SpinItemL' */
void WasherSpinItemL__Done( WasherSpinItemL _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( WasherSpinItemL );

  /* Finalize all embedded objects */
  ViewsText__Done( &_this->Text );

  /* Release all used strings */
  EwReleaseString( &_this->Caption );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* 'C' function for method : 'Washer::SpinItemL.OnSetCaption()' */
void WasherSpinItemL_OnSetCaption( WasherSpinItemL _this, XString value )
{
  EwRetainString( &_this->Caption, value );
  ViewsText_OnSetString( &_this->Text, value );
}

/* Variants derived from the class : 'Washer::SpinItemL' */
EW_DEFINE_CLASS_VARIANTS( WasherSpinItemL )
EW_END_OF_CLASS_VARIANTS( WasherSpinItemL )

/* Virtual Method Table (VMT) for the class : 'Washer::SpinItemL' */
EW_DEFINE_CLASS( WasherSpinItemL, CoreGroup, Text, Text, Text, Text, Caption, "Washer::SpinItemL" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( WasherSpinItemL )

/* Initializer for the class 'Washer::SpinItemS' */
void WasherSpinItemS__Init( WasherSpinItemS _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Back, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Right, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WasherSpinItemS );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0035 );
  CoreView_OnSetLayout((CoreView)&_this->Back, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Back, _Const0035 );
  ViewsRectangle_OnSetColor( &_this->Back, WasherListBgColor );
  CoreView_OnSetLayout((CoreView)&_this->Right, CoreLayoutAlignToBottom | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Right, _Const0036 );
  ViewsRectangle_OnSetColor( &_this->Right, WasherListBgColor );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text, _Const0037 );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0024 ));
  ViewsText_OnSetColor( &_this->Text, WasherListTextColor );
  CoreGroup__Add( _this, ((CoreView)&_this->Back ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Right ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &WasherListFontS, ResourcesFont ));
}

/* Re-Initializer for the class 'Washer::SpinItemS' */
void WasherSpinItemS__ReInit( WasherSpinItemS _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Back );
  ViewsRectangle__ReInit( &_this->Right );
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Washer::SpinItemS' */
void WasherSpinItemS__Done( WasherSpinItemS _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( WasherSpinItemS );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Back );
  ViewsRectangle__Done( &_this->Right );
  ViewsText__Done( &_this->Text );

  /* Release all used strings */
  EwReleaseString( &_this->Caption );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* 'C' function for method : 'Washer::SpinItemS.OnSetCaption()' */
void WasherSpinItemS_OnSetCaption( WasherSpinItemS _this, XString value )
{
  EwRetainString( &_this->Caption, value );
  ViewsText_OnSetString( &_this->Text, value );
}

/* Variants derived from the class : 'Washer::SpinItemS' */
EW_DEFINE_CLASS_VARIANTS( WasherSpinItemS )
EW_END_OF_CLASS_VARIANTS( WasherSpinItemS )

/* Virtual Method Table (VMT) for the class : 'Washer::SpinItemS' */
EW_DEFINE_CLASS( WasherSpinItemS, CoreGroup, Back, Back, Back, Back, Caption, "Washer::SpinItemS" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( WasherSpinItemS )

/* This is a font resource. */
EW_DEFINE_FONT_RES( WasherListFontXL, 44, 12, 0, 16, 0x0001, 0x000C )
  EW_GLYPH( 0x0001, 4, -30, 22, 30, 29, 0x00000000 ),
  EW_GLYPH( 0x0030, 2, -29, 19, 29, 22, 0x0000055F ),           /* '0' */
  EW_GLYPH( 0x0031, 3, -29, 17, 29, 22, 0x000009FB ),           /* '1' */
  EW_GLYPH( 0x0032, 1, -29, 20, 29, 22, 0x00000C82 ),           /* '2' */
  EW_GLYPH( 0x0033, 1, -29, 20, 29, 22, 0x00001120 ),           /* '3' */
  EW_GLYPH( 0x0034, 0, -29, 22, 29, 22, 0x0000166C ),           /* '4' */
  EW_GLYPH( 0x0035, 1, -29, 20, 29, 22, 0x00001A6E ),           /* '5' */
  EW_GLYPH( 0x0036, 2, -29, 19, 29, 22, 0x00001F5F ),           /* '6' */
  EW_GLYPH( 0x0037, 2, -29, 19, 29, 22, 0x000024B5 ),           /* '7' */
  EW_GLYPH( 0x0038, 1, -29, 20, 29, 22, 0x00002867 ),           /* '8' */
  EW_GLYPH( 0x0039, 1, -29, 20, 29, 22, 0x00002E3A ),           /* '9' */
  EW_GLYPH( 0x003A, 2, -22, 7, 22, 11, 0x000033B3 ),            /* ':' */

  EW_FONT_PIXEL( WasherListFontXL, 0x000034F4 )                 /* ratio 52.20 % */
    0xEF7BDEF7, 0x7BDEF7BD, 0xDEF7BDEF, 0x00001F7B, 0x00000000, 0xDEF7BDCF, 0x01FDEF7B,
    0x6800CF28, 0x80D34051, 0x8C095867, 0x8B403D47, 0x82F0E806, 0xC800DE95, 0x2BC44C65,
    0x1A1D0016, 0xC400686F, 0x394E4B14, 0x1BC3A001, 0xC000D0BF, 0x78CB7E2B, 0x9E958000,
    0x1F0000D0, 0xFC000146, 0x60000630, 0x0003490E, 0x0F52DC7E, 0x66695800, 0xBC4002F3,
    0x319467E2, 0x2661D001, 0x5C800FCD, 0xE478C5E2, 0x03A1D002, 0x1801BC3A, 0x4E41318F,
    0x069A02F1, 0x94099A74, 0xA27E00A7, 0xE600D100, 0x7BFF1000, 0xDEF7BDEF, 0x0000077B,
    0x00000000, 0xFDCFBD90, 0xBD000F7F, 0x7CF908D7, 0x2B7C04BF, 0xCC137500, 0xBBDDFC87,
    0x3440F21F, 0x5BE31763, 0xB837898C, 0xC3F07A01, 0x4BC00D43, 0x801C9196, 0x507BF827,
    0x971E1E00, 0x21830008, 0xC8380079, 0x10300049, 0x626000C9, 0x00000002, 0x08000000,
    0x03060000, 0x09398980, 0x79220600, 0x5E443800, 0xA9140122, 0x506200B0, 0x0B003932,
    0x00AA3E3F, 0x0560C63F, 0x7937826F, 0x30FBC9A1, 0x303D49BE, 0xBBDDF927, 0xDE03F21F,
    0x00ED400E, 0xC846BDAC, 0x000BF7E7, 0x01FEF7BC, 0x8009FF50, 0x0097FB5C, 0x000F7F88,
    0x00000000, 0xEF7BDC40, 0x0000004D, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xF7580000, 0x926F7BDE,
    0x7F7BDEF7, 0x00000000, 0xBDF77A80, 0x18027767, 0x310737FB, 0xF301BFD6, 0x1FAC003F,
    0xFF4437E8, 0x5077FDEF, 0x5DD49C8D, 0xCC1DAE49, 0xFCF1FF20, 0x2626C802, 0xCC00FEC6,
    0x80090FE0, 0x00000587, 0x00080000, 0x00098780, 0x0002E0A8, 0x0000F12E, 0xC0004C55,
    0x4000BC4B, 0xE0001D27, 0x0004D459, 0x003F23F9, 0x09C43710, 0x7A4FF000, 0x60DF8000,
    0x2BF0004D, 0xBF00069E, 0xF0003EA2, 0x0003F515, 0x01F8C3DF, 0xFC61EF80, 0xC0F7C001,
    0xBDEF7FFF, 0xEF7BDEF7, 0x23181E33, 0x00000001, 0xDCFBBC60, 0x4007DFB3, 0x211CF6FE,
    0x05FEFCC6, 0xF2005DAC, 0x88756137, 0xBF3DEFB5, 0x54CC0F42, 0xBF5107BB, 0x3B88BC49,
    0x8378097F, 0x78017C82, 0x40000088, 0x09260000, 0x07927800, 0x647E7800, 0xF6B51003,
    0xF005C617, 0x43D7E7BF, 0x80009DAC, 0x100006E8, 0xFC0059EF, 0x13EFD9EF, 0x88007FA2,
    0x50FDBF31, 0xBF20003F, 0xC0002A87, 0x1000170F, 0x900003C5, 0x02400004, 0xC90F0001,
    0x198013BB, 0x4F733994, 0x67E26A80, 0x4CF77884, 0xDE0BF7D4, 0x78C97CF4, 0xDFDEF7FF,
    0x7B50B983, 0x5EFC8005, 0x67BF7D10, 0xFBF31884, 0x7500003F, 0x0003BDEF, 0x800005E0,
    0x30000137, 0x1C000026, 0x4E800016, 0x180003F9, 0x7000068B, 0xA00007A8, 0x0000BC53,
    0x0169D163, 0x049A8700, 0x1F14E800, 0x7458C000, 0x6A5C0000, 0x10F40002, 0x98C0001F,
    0xE00002FC, 0x0001E786, 0x007E21E8, 0x73893900, 0xDEF7BDEF, 0x1BDEFB0F, 0x00000011,
    0x7B8C0000, 0xDEF7BDEF, 0xB0FDEF7B, 0x0001BDEF, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x7BDE0000, 0xDEF7BDEF, 0x3FBDEF7B, 0x10000030, 0xCC580000, 0xF7BDEF7B,
    0x207F7BDE, 0x49000038, 0x01200000, 0x00058100, 0x40004818, 0x8B000020, 0x3DCFB5C8,
    0xC08095BF, 0xFAA211EE, 0x044902FF, 0x8460DCC0, 0xF3DEFB58, 0xA83E307B, 0xA20F76BD,
    0x80CF17BE, 0x85CC04EC, 0x41D00017, 0x11140001, 0x00C48000, 0x00045C00, 0x000120E0,
    0xC000110F, 0x07EF1418, 0xE731C680, 0x5F001FF3, 0xFDC82551, 0xFFCE493D, 0x2FACBC43,
    0xBDFFBE78, 0x7FC937FF, 0x0033B9E2, 0x78807B3C, 0x108CFBEF, 0x00BFFD63, 0x7BEDF3C0,
    0xA009BFFF, 0xC833DFFE, 0xAC05FF7A, 0xAFE4025F, 0xF6B13661, 0x8137FFBD, 0x83DB8CD1,
    0xA366BB9C, 0x8803FE43, 0x74518BDF, 0x7C8F8000, 0x07C58000, 0x00A08C00, 0x00188780,
    0xF9E061C0, 0x95BF3DCE, 0x7F634C90, 0xBDEA884F, 0x00FFA810, 0xD64CBF44, 0x7BFFD117,
    0x03E60AF7, 0x64AEEA23, 0xE05787F4, 0x935005F9, 0x00FC8B91, 0x0041587C, 0x02499030,
    0x00313600, 0x00282780, 0x03E28881, 0x721C7850, 0x50E4BC01, 0x0F405BC5, 0x7C43787E,
    0x62DF183D, 0xC43FE44C, 0x87EEF7DA, 0x176307F1, 0x200FF3C0, 0xE499BF7F, 0xDEE05FDC,
    0xF7BDEF7B, 0xBDEF7BDE, 0x0005DEF7, 0xF1000000, 0xBDEF7BDC, 0xEF7BDEF7, 0x0027413D,
    0x026785F8, 0x3F11E780, 0x00E9A000, 0x04C69D00, 0x00B93900, 0x00D42FC0, 0x00B8B900,
    0x00B217C0, 0x0007C980, 0x0004C13C, 0x4000152E, 0x0A8001B1, 0xC418000A, 0x09360000,
    0x00787800, 0x000E0C80, 0xC0009130, 0x0E0004C0, 0x48180002, 0x00026000, 0x60002410,
    0x04100000, 0x9F7B2000, 0x004AF67B, 0x211AFFDE, 0xD806EF46, 0x07D62013, 0xDDFA837C,
    0x99E4BE7B, 0x5F9E1E30, 0xFC1ECF11, 0x407C47E0, 0xF060725C, 0x01E48C00, 0x1024C012,
    0x36040024, 0x0A1E0035, 0x3C013933, 0xC84E12A1, 0x78B440FD, 0x7E42F8C1, 0x9D4FF27B,
    0xF183FD40, 0x13D0FF9E, 0x6A9103E0, 0xEA7FC601, 0x3FEA277F, 0x7C67F8C0, 0x37FFD72B,
    0x09C17FC8, 0x5FDA82BF, 0xD2B06F88, 0x1D9E00F3, 0x0171F2E2, 0x24463364, 0x0785800B,
    0x40408002, 0x31103001, 0x0FC002F8, 0x07FC8F8F, 0x618C59E0, 0x41AEE316, 0x1711F7D4,
    0xEFBD115F, 0xF887BF3D, 0x03AFC40D, 0xC03FF8C0, 0xC493EFBA, 0x800F7B58, 0xFFDCFB58,
    0xDD60026F, 0x3DEB211E, 0x00EDE013, 0x9CC0DBC4, 0xFFEF77E4, 0x6884D64D, 0xE721FFC6,
    0x0DE2741E, 0x87F88071, 0x12A1E1F8, 0x442B2F10, 0x443C01B2, 0xE4007819, 0xE0000B60,
    0x009891E1, 0x1FC0861C, 0x78308B80, 0xFC0B3C00, 0x7EB017C8, 0xAFE64AC0, 0x0C776788,
    0x77EA0DE0, 0xF586F9EF, 0x404FF502, 0xF1810DBC, 0xA3149F7F, 0x302494EF, 0x7B3DFFBF,
    0x00098705, 0x000030F0, 0x8000D839, 0x20002887, 0x0008265E, 0x3C2F10BF, 0xE1FA0077,
    0xEC5F8C0D, 0x2F739077, 0xDCC2C16A, 0x41DFFEF7, 0x02ED40FD, 0xF201FE88, 0xAC839BF7,
    0xBF100BBE, 0x195F07BB, 0x800E4287, 0x195F0E42, 0x3DDDF887, 0x00000000, 0x00000000,
    0xC1EEEFC4, 0x90A1C657, 0xC390A003, 0x0001C657

  EW_FONT_KERNING_CODES( WasherListFontXL )
  EW_FONT_KERNING_VALUES( WasherListFontXL )
EW_END_OF_FONT_RES( WasherListFontXL )

/* Table with links to derived variants of the font resource : 'Washer::ListFontXL' */
EW_RES_WITHOUT_VARIANTS( WasherListFontXL )

/* Initializer for the class 'Washer::OptList' */
void WasherOptList__Init( WasherOptList _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_XObject, 0 );
  CoreVerticalList__Init( &_this->BottomList, &_this->_XObject, 0 );
  CoreVerticalList__Init( &_this->MainList, &_this->_XObject, 0 );
  CoreVerticalList__Init( &_this->TopList, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->FadeListIn, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Caption, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->FadeCaption, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->FadeListOut, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->Int32Effect, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->AutoDemoEffect, &_this->_XObject, 0 );
  CoreSystemEventHandler__Init( &_this->SystemEventHandler, &_this->_XObject, 0 );
  CoreSystemEventHandler__Init( &_this->SetOptionEventHandler, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WasherOptList );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const003A );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const003A );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->SlideTouchHandler, _Const0018 );
  CoreSlideTouchHandler_OnSetFriction( &_this->SlideTouchHandler, 0.100000f );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->SimpleTouchHandler, _Const0019 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->SimpleTouchHandler, _Const003B );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->SimpleTouchHandler, _Const003C );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->SimpleTouchHandler, _Const001C );
  CoreView_OnSetLayout((CoreView)&_this->Rectangle, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const003D );
  ViewsRectangle_OnSetColor( &_this->Rectangle, WasherButtonBgColor );
  CoreRectView__OnSetBounds( &_this->BottomList, _Const003E );
  CoreGroup__OnSetOpacity( &_this->BottomList, 0 );
  CoreVerticalList_OnSetItemHeight( &_this->BottomList, 36 );
  CoreVerticalList_OnSetNoOfItems( &_this->BottomList, 2 );
  CoreVerticalList_OnSetItemClass( &_this->BottomList, EW_CLASS( WasherOptItemS ));
  CoreRectView__OnSetBounds( &_this->MainList, _Const003D );
  CoreVerticalList_OnSetItemHeight( &_this->MainList, 96 );
  CoreVerticalList_OnSetNoOfItems( &_this->MainList, 2 );
  CoreVerticalList_OnSetItemClass( &_this->MainList, EW_CLASS( WasherOptItemL ));
  CoreRectView__OnSetBounds( &_this->TopList, _Const003F );
  CoreGroup__OnSetOpacity( &_this->TopList, 0 );
  CoreVerticalList_OnSetItemHeight( &_this->TopList, 36 );
  CoreVerticalList_OnSetNoOfItems( &_this->TopList, 2 );
  CoreVerticalList_OnSetItemClass( &_this->TopList, EW_CLASS( WasherOptItemS ));
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->FadeListIn, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->FadeListIn, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->FadeListIn, 300 );
  CoreRectView__OnSetBounds( &_this->Caption, _Const0040 );
  ViewsText_OnSetAlignment( &_this->Caption, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Caption, EwLoadString( &_Const0041 ));
  ViewsText_OnSetColor( &_this->Caption, WasherCaptionColor );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->FadeCaption, EffectsTimingFastIn_FastOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->FadeCaption, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->FadeCaption, 200 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->FadeListOut, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->FadeListOut, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->FadeListOut, 1000 );
  EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->FadeListOut, 2000 );
  _this->FadeListOut.Value2 = 0;
  _this->FadeListOut.Value1 = 255;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->Int32Effect, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->Int32Effect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->Int32Effect, 200 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->AutoDemoEffect, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->AutoDemoEffect, 300 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BottomList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->MainList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Caption ), 0 );
  _this->SlideTouchHandler.OnEnd = EwNewSlot( _this, WasherOptList_OnEnd );
  _this->SlideTouchHandler.OnStart = EwNewSlot( _this, WasherOptList_OnStart );
  _this->SimpleTouchHandler.OnDrag = EwNewSlot( _this, WasherOptList_OnDrag );
  _this->SimpleTouchHandler.OnRelease = EwNewSlot( _this, WasherOptList_OnRelease );
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, WasherOptList_OnStart );
  _this->BottomList.OnLoadItem = EwNewSlot( _this, WasherOptList_OnLoadBottom );
  _this->MainList.OnUpdate = EwNewSlot( _this, WasherOptList_OnUpdate );
  _this->MainList.OnLoadItem = EwNewSlot( _this, WasherOptList_OnLoadMain );
  CoreVerticalList_OnSetSlideHandler( &_this->MainList, &_this->SlideTouchHandler );
  _this->TopList.OnLoadItem = EwNewSlot( _this, WasherOptList_OnLoadTop );
  _this->FadeListIn.Super1.OnAnimate = EwNewSlot( _this, WasherOptList_onAnimate );
  _this->FadeListIn.Outlet = EwNewRef( &_this->TopList, CoreGroup_OnGetOpacity, 
  CoreGroup__OnSetOpacity );
  ViewsText_OnSetFont( &_this->Caption, EwLoadResource( &WasherDescrFont, ResourcesFont ));
  _this->FadeCaption.Outlet = EwNewRef( &_this->Caption, ViewsText_OnGetOpacity, 
  ViewsText_OnSetOpacity );
  _this->FadeListOut.Super1.OnAnimate = EwNewSlot( _this, WasherOptList_onAnimate );
  _this->FadeListOut.Outlet = EwNewRef( &_this->TopList, CoreGroup_OnGetOpacity, 
  CoreGroup__OnSetOpacity );
  _this->SystemEventHandler.OnEvent = EwNewSlot( _this, WasherOptList_onEvent );
  CoreSystemEventHandler_OnSetEvent( &_this->SystemEventHandler, &EwGetAutoObject( 
  &WasherDevice, WasherDeviceClass )->OptionUpdateEvent );
  _this->SetOptionEventHandler.OnEvent = EwNewSlot( _this, WasherOptList_onEventSet );
  CoreSystemEventHandler_OnSetEvent( &_this->SetOptionEventHandler, &EwGetAutoObject( 
  &WasherDevice, WasherDeviceClass )->SetOptionEvent );
}

/* Re-Initializer for the class 'Washer::OptList' */
void WasherOptList__ReInit( WasherOptList _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
  ViewsRectangle__ReInit( &_this->Rectangle );
  CoreVerticalList__ReInit( &_this->BottomList );
  CoreVerticalList__ReInit( &_this->MainList );
  CoreVerticalList__ReInit( &_this->TopList );
  EffectsInt32Effect__ReInit( &_this->FadeListIn );
  ViewsText__ReInit( &_this->Caption );
  EffectsInt32Effect__ReInit( &_this->FadeCaption );
  EffectsInt32Effect__ReInit( &_this->FadeListOut );
  EffectsInt32Effect__ReInit( &_this->Int32Effect );
  EffectsInt32Effect__ReInit( &_this->AutoDemoEffect );
  CoreSystemEventHandler__ReInit( &_this->SystemEventHandler );
  CoreSystemEventHandler__ReInit( &_this->SetOptionEventHandler );
}

/* Finalizer method for the class 'Washer::OptList' */
void WasherOptList__Done( WasherOptList _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( WasherOptList );

  /* Finalize all embedded objects */
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );
  ViewsRectangle__Done( &_this->Rectangle );
  CoreVerticalList__Done( &_this->BottomList );
  CoreVerticalList__Done( &_this->MainList );
  CoreVerticalList__Done( &_this->TopList );
  EffectsInt32Effect__Done( &_this->FadeListIn );
  ViewsText__Done( &_this->Caption );
  EffectsInt32Effect__Done( &_this->FadeCaption );
  EffectsInt32Effect__Done( &_this->FadeListOut );
  EffectsInt32Effect__Done( &_this->Int32Effect );
  EffectsInt32Effect__Done( &_this->AutoDemoEffect );
  CoreSystemEventHandler__Done( &_this->SystemEventHandler );
  CoreSystemEventHandler__Done( &_this->SetOptionEventHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Slot method to load content of main scroll list. */
void WasherOptList_OnLoadMain( WasherOptList _this, XObject sender )
{
  WasherOptItemL itemView;
  XInt32 itemNo;
  XString caption;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemView = EwCastObject( _this->MainList.View, WasherOptItemL );
  itemNo = _this->MainList.Item;
  caption = 0;

  if (( itemNo >= 0 ) && ( itemNo < 2 ))
    caption = EwGetAutoObject( &WasherDevice, WasherDeviceClass )->Options[ EwCheckIndex( 
    itemNo, 2 )];

  WasherOptItemL_OnSetCaption( itemView, caption );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->MainList.Super2.Bounds ), _this->MainList.ItemHeight )));
}

/* Slot method to load content of upper scroll list. */
void WasherOptList_OnLoadTop( WasherOptList _this, XObject sender )
{
  WasherOptItemS itemView;
  XInt32 itemNo;
  XString caption;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemView = EwCastObject( _this->TopList.View, WasherOptItemS );
  itemNo = _this->TopList.Item;
  caption = 0;

  if (( itemNo >= 0 ) && ( itemNo < 2 ))
    caption = EwGetAutoObject( &WasherDevice, WasherDeviceClass )->Options[ EwCheckIndex( 
    itemNo, 2 )];

  WasherOptItemS_OnSetCaption( itemView, caption );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->TopList.Super2.Bounds ), _this->TopList.ItemHeight )));
}

/* Slot method to synchronize the scrolling of the upper/lower list with the current 
   scroll position of the center list. */
void WasherOptList_OnUpdate( WasherOptList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_OnSetScrollOffset( &_this->TopList, (( _this->MainList.ScrollOffset 
  * _this->TopList.ItemHeight ) / _this->MainList.ItemHeight ) + EwGetRectH( _this->TopList.Super2.Bounds ));
  CoreVerticalList_OnSetScrollOffset( &_this->BottomList, (( _this->MainList.ScrollOffset 
  * _this->BottomList.ItemHeight ) / _this->MainList.ItemHeight ) - _this->BottomList.ItemHeight );
}

/* Slot method to load content of lower scroll list. */
void WasherOptList_OnLoadBottom( WasherOptList _this, XObject sender )
{
  WasherOptItemS itemView;
  XInt32 itemNo;
  XString caption;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemView = EwCastObject( _this->BottomList.View, WasherOptItemS );
  itemNo = _this->BottomList.Item;
  caption = 0;

  if (( itemNo >= 0 ) && ( itemNo < 2 ))
    caption = EwGetAutoObject( &WasherDevice, WasherDeviceClass )->Options[ EwCheckIndex( 
    itemNo, 2 )];

  WasherOptItemS_OnSetCaption( itemView, caption );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->BottomList.Super2.Bounds ), _this->BottomList.ItemHeight )));
}

/* Slot method to change the selection, when the item has reached its parking position. */
void WasherOptList_OnEnd( WasherOptList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  WasherDeviceClass_OnSetOptionNumber( EwGetAutoObject( &WasherDevice, WasherDeviceClass ), 
  -_this->MainList.ScrollOffset / _this->MainList.ItemHeight );
  _this->FadeListOut.Value1 = _this->TopList.Super1.Opacity;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeListOut, 1 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 0 );
  _this->FadeCaption.Value1 = _this->Caption.Opacity;
  _this->FadeCaption.Value2 = 255;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 1 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandler, 1 );
}

/* Slot method to make the upper/lower list visible. */
void WasherOptList_OnStart( WasherOptList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( _this->TopList.Super1.Opacity != 255 ) && !_this->FadeListIn.Super1.Enabled )
  {
    _this->FadeListIn.Value1 = _this->TopList.Super1.Opacity;
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeListIn, 1 );
  }

  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeListOut, 0 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 0 );
  _this->FadeCaption.Value1 = _this->Caption.Opacity;
  _this->FadeCaption.Value2 = 0;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 1 );
}

/* This is a slot method. */
void WasherOptList_onAnimate( WasherOptList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup__OnSetOpacity( &_this->BottomList, _this->TopList.Super1.Opacity );
}

/* 'C' function for method : 'Washer::OptList.OnDrag()' */
void WasherOptList_OnDrag( WasherOptList _this, XObject sender )
{
  XPoint delta;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  delta = EwMovePointNeg( _this->SimpleTouchHandler.CurrentPos, _this->SimpleTouchHandler.HittingPos );

  if (( delta.Y > 8 ) || ( delta.Y < -8 ))
  {
    CoreRoot_DeflectCursor( CoreView__GetRoot( _this ), ((CoreView)&_this->SlideTouchHandler ), 
    _Const001C );
    CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandler, 0 );
  }
}

/* 'C' function for method : 'Washer::OptList.OnRelease()' */
void WasherOptList_OnRelease( WasherOptList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->SimpleTouchHandler.AutoDeflected && ( _this->TopList.Super1.Opacity 
      == 255 ))
  {
    XInt32 delta = 0;

    if ( _this->SimpleTouchHandler.CurrentPos.Y < _this->MainList.Super2.Bounds.Point1.Y )
      delta = (( _this->SimpleTouchHandler.CurrentPos.Y - _this->MainList.Super2.Bounds.Point1.Y ) 
      / _this->TopList.ItemHeight ) - 1;
    else
      if ( _this->SimpleTouchHandler.CurrentPos.Y > _this->MainList.Super2.Bounds.Point2.Y )
        delta = (( _this->SimpleTouchHandler.CurrentPos.Y - _this->MainList.Super2.Bounds.Point2.Y ) 
        / _this->BottomList.ItemHeight ) + 1;

    if ( delta != 0 )
    {
      XInt32 item = ( -_this->MainList.ScrollOffset / _this->MainList.ItemHeight ) 
        + delta;
      CoreVerticalList_EnsureVisible( &_this->MainList, item, 1, &_this->Int32Effect, 
      EwNullSlot );
    }
  }

  EwSignal( EwNewSlot( _this, WasherOptList_OnEnd ), ((XObject)_this ));
}

/* Slot method to trigger the next phase of the auto demo. */
void WasherOptList_AutoDemo( WasherOptList _this, XObject sender )
{
  XInt32 val;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( EwNewSlot( _this, WasherOptList_OnStart ), ((XObject)_this ));
  val = EwGetAutoObject( &WasherDevice, WasherDeviceClass )->OptionNumber + 1;

  if ( val >= 2 )
    val = 0;

  CoreVerticalList_EnsureVisible( &_this->MainList, val, 1, &_this->AutoDemoEffect, 
  EwNewSlot( _this, WasherOptList_OnEnd ));
}

/* 'C' function for method : 'Washer::OptList.DeviceStart()' */
void WasherOptList_DeviceStart( WasherOptList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );
}

/* 'C' function for method : 'Washer::OptList.DeviceEnd()' */
void WasherOptList_DeviceEnd( WasherOptList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 0 );
  _this->FadeCaption.Value1 = _this->Caption.Opacity;
  _this->FadeCaption.Value2 = 255;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 1 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandler, 1 );
}

/* This slot method is executed when the associated system event handler 'SystemEventHandler' 
   receives an event. */
void WasherOptList_onEvent( WasherOptList _this, XObject sender )
{
  XInt32 val;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( EwNewSlot( _this, WasherOptList_DeviceStart ), ((XObject)_this ));
  val = EwGetAutoObject( &WasherDevice, WasherDeviceClass )->OptionNumber;
  CoreVerticalList_EnsureVisible( &_this->MainList, val, 1, 0, EwNewSlot( _this, 
  WasherOptList_DeviceEnd ));
}

/* This slot method is executed when the associated system event handler 'SystemEventHandler1' 
   receives an event. */
void WasherOptList_onEventSet( WasherOptList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwGetAutoObject( &WasherDevice, WasherDeviceClass )->Running )
  {
    CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandler, 0 );
    CoreSlideTouchHandler_OnSetEnabled( &_this->SlideTouchHandler, 0 );
  }
  else
  {
    CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandler, 1 );
    CoreSlideTouchHandler_OnSetEnabled( &_this->SlideTouchHandler, 1 );
  }
}

/* Variants derived from the class : 'Washer::OptList' */
EW_DEFINE_CLASS_VARIANTS( WasherOptList )
EW_END_OF_CLASS_VARIANTS( WasherOptList )

/* Virtual Method Table (VMT) for the class : 'Washer::OptList' */
EW_DEFINE_CLASS( WasherOptList, CoreGroup, SlideTouchHandler, SlideTouchHandler, 
                 SlideTouchHandler, SlideTouchHandler, _None, "Washer::OptList" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( WasherOptList )

/* Initializer for the class 'Washer::OptItemL' */
void WasherOptItemL__Init( WasherOptItemL _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WasherOptItemL );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0042 );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text, _Const0043 );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0024 ));
  ViewsText_OnSetColor( &_this->Text, WasherButtonTextColor );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &WasherListFontM, ResourcesFont ));
}

/* Re-Initializer for the class 'Washer::OptItemL' */
void WasherOptItemL__ReInit( WasherOptItemL _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Washer::OptItemL' */
void WasherOptItemL__Done( WasherOptItemL _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( WasherOptItemL );

  /* Finalize all embedded objects */
  ViewsText__Done( &_this->Text );

  /* Release all used strings */
  EwReleaseString( &_this->Caption );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* 'C' function for method : 'Washer::OptItemL.OnSetCaption()' */
void WasherOptItemL_OnSetCaption( WasherOptItemL _this, XString value )
{
  EwRetainString( &_this->Caption, value );
  ViewsText_OnSetString( &_this->Text, value );
}

/* Variants derived from the class : 'Washer::OptItemL' */
EW_DEFINE_CLASS_VARIANTS( WasherOptItemL )
EW_END_OF_CLASS_VARIANTS( WasherOptItemL )

/* Virtual Method Table (VMT) for the class : 'Washer::OptItemL' */
EW_DEFINE_CLASS( WasherOptItemL, CoreGroup, Text, Text, Text, Text, Caption, "Washer::OptItemL" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( WasherOptItemL )

/* Initializer for the class 'Washer::OptItemS' */
void WasherOptItemS__Init( WasherOptItemS _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Back, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Right, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WasherOptItemS );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0044 );
  CoreView_OnSetLayout((CoreView)&_this->Back, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Back, _Const0044 );
  ViewsRectangle_OnSetColor( &_this->Back, WasherListBgColor );
  CoreView_OnSetLayout((CoreView)&_this->Right, CoreLayoutAlignToBottom | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Right, _Const0045 );
  ViewsRectangle_OnSetColor( &_this->Right, WasherListBgColor );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text, _Const0046 );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0024 ));
  ViewsText_OnSetColor( &_this->Text, WasherListTextColor );
  CoreGroup__Add( _this, ((CoreView)&_this->Back ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Right ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &WasherListFontS, ResourcesFont ));
}

/* Re-Initializer for the class 'Washer::OptItemS' */
void WasherOptItemS__ReInit( WasherOptItemS _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Back );
  ViewsRectangle__ReInit( &_this->Right );
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Washer::OptItemS' */
void WasherOptItemS__Done( WasherOptItemS _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( WasherOptItemS );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Back );
  ViewsRectangle__Done( &_this->Right );
  ViewsText__Done( &_this->Text );

  /* Release all used strings */
  EwReleaseString( &_this->Caption );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* 'C' function for method : 'Washer::OptItemS.OnSetCaption()' */
void WasherOptItemS_OnSetCaption( WasherOptItemS _this, XString value )
{
  EwRetainString( &_this->Caption, value );
  ViewsText_OnSetString( &_this->Text, value );
}

/* Variants derived from the class : 'Washer::OptItemS' */
EW_DEFINE_CLASS_VARIANTS( WasherOptItemS )
EW_END_OF_CLASS_VARIANTS( WasherOptItemS )

/* Virtual Method Table (VMT) for the class : 'Washer::OptItemS' */
EW_DEFINE_CLASS( WasherOptItemS, CoreGroup, Back, Back, Back, Back, Caption, "Washer::OptItemS" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( WasherOptItemS )

/* Initializer for the class 'Washer::Washer' */
void WasherWasher__Init( WasherWasher _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->Image, &_this->_XObject, 0 );
  ViewsFrame__Init( &_this->Frame, &_this->_XObject, 0 );
  WasherProgList__Init( &_this->ProgList, &_this->_XObject, 0 );
  WasherTempList__Init( &_this->TempList, &_this->_XObject, 0 );
  WasherSpinList__Init( &_this->SpinList, &_this->_XObject, 0 );
  WasherOptList__Init( &_this->OptList, &_this->_XObject, 0 );
  WasherTimeList__Init( &_this->TimeList, &_this->_XObject, 0 );
  ViewsBorder__Init( &_this->Border, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Sep1, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Sep2, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Sep3, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Sep4, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->FadeBgEffect, &_this->_XObject, 0 );
  WasherStartButton__Init( &_this->StartButton, &_this->_XObject, 0 );
  EffectsRectEffect__Init( &_this->MoveStartEffect, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->MessageEffect, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Message, &_this->_XObject, 0 );
  CorePropertyObserver__Init( &_this->ProgramObserver, &_this->_XObject, 0 );
  CoreTimer__Init( &_this->AutoDemoTimer, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WasherWasher );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0047 );
  CoreView_OnSetLayout((CoreView)&_this->Rectangle, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0047 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0048 );
  CoreRectView__OnSetBounds( &_this->Image, _Const0047 );
  ViewsImage_OnSetColor( &_this->Image, _Const0049 );
  CoreRectView__OnSetBounds( &_this->Frame, _Const004A );
  ViewsFrame_OnSetColor( &_this->Frame, _Const004B );
  ViewsFrame_OnSetEdges( &_this->Frame, GraphicsEdgesBottom | GraphicsEdgesLeft 
  | GraphicsEdgesRight | GraphicsEdgesTop );
  CoreRectView__OnSetBounds( &_this->ProgList, _Const004C );
  CoreRectView__OnSetBounds( &_this->TempList, _Const004D );
  CoreRectView__OnSetBounds( &_this->SpinList, _Const004E );
  CoreRectView__OnSetBounds( &_this->OptList, _Const004F );
  CoreRectView__OnSetBounds( &_this->TimeList, _Const0050 );
  CoreRectView__OnSetBounds( &_this->Border, _Const0051 );
  ViewsBorder_OnSetWidth( &_this->Border, 2 );
  ViewsBorder_OnSetColor( &_this->Border, _Const0052 );
  CoreRectView__OnSetBounds( &_this->Sep1, _Const0053 );
  ViewsRectangle_OnSetColor( &_this->Sep1, _Const0054 );
  CoreRectView__OnSetBounds( &_this->Sep2, _Const0055 );
  ViewsRectangle_OnSetColor( &_this->Sep2, _Const0054 );
  CoreRectView__OnSetBounds( &_this->Sep3, _Const0056 );
  ViewsRectangle_OnSetColor( &_this->Sep3, _Const0054 );
  CoreRectView__OnSetBounds( &_this->Sep4, _Const0057 );
  ViewsRectangle_OnSetColor( &_this->Sep4, _Const0054 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->FadeBgEffect, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->FadeBgEffect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->FadeBgEffect, 200 );
  CoreRectView__OnSetBounds( &_this->StartButton, _Const0058 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->MoveStartEffect, EffectsTimingFastIn_FastOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->MoveStartEffect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->MoveStartEffect, 200 );
  _this->MoveStartEffect.Value2 = _Const0059;
  _this->MoveStartEffect.Value1 = _Const0058;
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->MessageEffect, 1 );
  EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->MessageEffect, 2000 );
  _this->MessageEffect.Value2 = 0;
  _this->MessageEffect.Value1 = 255;
  CoreRectView__OnSetBounds( &_this->Message, _Const005A );
  ViewsText_OnSetAlignment( &_this->Message, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Message, EwLoadString( &_Const005B ));
  ViewsText_OnSetOpacity( &_this->Message, 0 );
  CoreTimer_OnSetPeriod( &_this->AutoDemoTimer, 1500 );
  CoreTimer_OnSetBegin( &_this->AutoDemoTimer, 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ProgList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TempList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SpinList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->OptList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TimeList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Sep1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Sep2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Sep3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Sep4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->StartButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Message ), 0 );
  ViewsFrame_OnSetBitmap( &_this->Frame, EwLoadResource( &WasherShadow, ResourcesBitmap ));
  _this->TempList.ColorOutlet = EwNewRef( &_this->Border, ViewsBorder_OnGetColor, 
  ViewsBorder_OnSetColor );
  _this->TimeList.OnAppear = EwNewSlot( _this, WasherWasher_OnListAppear );
  _this->TimeList.OnDisappear = EwNewSlot( _this, WasherWasher_OnListDisappear );
  _this->Device = EwGetAutoObject( &WasherDevice, WasherDeviceClass );
  _this->FadeBgEffect.Super1.OnFinished = EwNewSlot( _this, WasherWasher_changeBackground );
  _this->FadeBgEffect.Outlet = EwNewRef( &_this->Image, ViewsImage_OnGetOpacity, 
  ViewsImage_OnSetOpacity );
  _this->StartButton.OnChange = EwNewSlot( _this, WasherWasher_onStart );
  WasherStartButton_OnSetIsRunning( &_this->StartButton, EwNewRef( EwGetAutoObject( 
  &WasherDevice, WasherDeviceClass ), WasherDeviceClass_OnGetRunning, WasherDeviceClass_OnSetRunning ));
  _this->MoveStartEffect.Outlet = EwNewRef( &_this->StartButton, CoreRectView_OnGetBounds, 
  CoreRectView__OnSetBounds );
  _this->MessageEffect.Outlet = EwNewRef( &_this->Message, ViewsText_OnGetOpacity, 
  ViewsText_OnSetOpacity );
  ViewsText_OnSetFont( &_this->Message, EwLoadResource( &WasherDescrFont, ResourcesFont ));
  _this->ProgramObserver.OnEvent = EwNewSlot( _this, WasherWasher_onUpdateProgram );
  CorePropertyObserver_OnSetOutlet( &_this->ProgramObserver, EwNewRef( EwGetAutoObject( 
  &WasherDevice, WasherDeviceClass ), WasherDeviceClass_OnGetProgramNumber, WasherDeviceClass_OnSetProgramNumber ));
  _this->AutoDemoTimer.OnTrigger = EwNewSlot( _this, WasherWasher_AutoDemoSlot );

  /* Call the user defined constructor */
  WasherWasher_Init( _this, aArg );
}

/* Re-Initializer for the class 'Washer::Washer' */
void WasherWasher__ReInit( WasherWasher _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsImage__ReInit( &_this->Image );
  ViewsFrame__ReInit( &_this->Frame );
  WasherProgList__ReInit( &_this->ProgList );
  WasherTempList__ReInit( &_this->TempList );
  WasherSpinList__ReInit( &_this->SpinList );
  WasherOptList__ReInit( &_this->OptList );
  WasherTimeList__ReInit( &_this->TimeList );
  ViewsBorder__ReInit( &_this->Border );
  ViewsRectangle__ReInit( &_this->Sep1 );
  ViewsRectangle__ReInit( &_this->Sep2 );
  ViewsRectangle__ReInit( &_this->Sep3 );
  ViewsRectangle__ReInit( &_this->Sep4 );
  EffectsInt32Effect__ReInit( &_this->FadeBgEffect );
  WasherStartButton__ReInit( &_this->StartButton );
  EffectsRectEffect__ReInit( &_this->MoveStartEffect );
  EffectsInt32Effect__ReInit( &_this->MessageEffect );
  ViewsText__ReInit( &_this->Message );
  CorePropertyObserver__ReInit( &_this->ProgramObserver );
  CoreTimer__ReInit( &_this->AutoDemoTimer );
}

/* Finalizer method for the class 'Washer::Washer' */
void WasherWasher__Done( WasherWasher _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( WasherWasher );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsImage__Done( &_this->Image );
  ViewsFrame__Done( &_this->Frame );
  WasherProgList__Done( &_this->ProgList );
  WasherTempList__Done( &_this->TempList );
  WasherSpinList__Done( &_this->SpinList );
  WasherOptList__Done( &_this->OptList );
  WasherTimeList__Done( &_this->TimeList );
  ViewsBorder__Done( &_this->Border );
  ViewsRectangle__Done( &_this->Sep1 );
  ViewsRectangle__Done( &_this->Sep2 );
  ViewsRectangle__Done( &_this->Sep3 );
  ViewsRectangle__Done( &_this->Sep4 );
  EffectsInt32Effect__Done( &_this->FadeBgEffect );
  WasherStartButton__Done( &_this->StartButton );
  EffectsRectEffect__Done( &_this->MoveStartEffect );
  EffectsInt32Effect__Done( &_this->MessageEffect );
  ViewsText__Done( &_this->Message );
  CorePropertyObserver__Done( &_this->ProgramObserver );
  CoreTimer__Done( &_this->AutoDemoTimer );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void WasherWasher_Init( WasherWasher _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  EwPostSignal( EwNewSlot( _this, WasherWasher_onUpdateProgram ), ((XObject)_this ));
}

/* Slot method to update the display value. */
void WasherWasher_onUpdateProgram( WasherWasher _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeBgEffect, 0 );
  _this->FadeBgEffect.Value1 = _this->Image.Opacity;
  _this->FadeBgEffect.Value2 = 0;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeBgEffect, 1 );
}

/* This is a slot method. */
void WasherWasher_changeBackground( WasherWasher _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Image.Opacity == 0 )
  {
    switch ( _this->Device->ProgramNumber )
    {
      case 0 :
        ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &WasherBgHot, ResourcesBitmap ));
      break;

      case 1 :
        ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &WasherBgEasyCare, 
        ResourcesBitmap ));
      break;

      case 2 :
        ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &WasherBgDelicates, 
        ResourcesBitmap ));
      break;

      case 3 :
        ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &WasherBgSportswear, 
        ResourcesBitmap ));
      break;

      case 4 :
        ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &WasherBgWool, ResourcesBitmap ));
      break;

      case 5 :
        ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &WasherBgEco, ResourcesBitmap ));
      break;

      case 6 :
        ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &WasherBgDrain, ResourcesBitmap ));
      break;

      case 7 :
        ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &WasherBgSpin, ResourcesBitmap ));
      break;

      default : 
        ViewsImage_OnSetBitmap( &_this->Image, 0 );
    }

    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeBgEffect, 0 );
    _this->FadeBgEffect.Value1 = _this->Image.Opacity;
    _this->FadeBgEffect.Value2 = 255;
    EwPostSignal( EwNewSlot( &_this->FadeBgEffect, EffectsEffect_StartEffect ), 
      ((XObject)_this ));
  }
}

/* Slot to receive signal that time list will appear. */
void WasherWasher_OnListAppear( WasherWasher _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EffectsEffect_OnSetReversed((EffectsEffect)&_this->MoveStartEffect, 0 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->MoveStartEffect, 1 );
}

/* Slot to receive signal that time list has disappeared. */
void WasherWasher_OnListDisappear( WasherWasher _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EffectsEffect_OnSetReversed((EffectsEffect)&_this->MoveStartEffect, 1 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->MoveStartEffect, 1 );
}

/* 'C' function for method : 'Washer::Washer.onStart()' */
void WasherWasher_onStart( WasherWasher _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );
}

/* Slot method to trigger the next phase of the auto demo. */
void WasherWasher_AutoDemoSlot( WasherWasher _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  switch ( _this->AutoState )
  {
    case 1 :
      EwPostSignal( EwNewSlot( &_this->ProgList, WasherProgList_AutoDemo ), ((XObject)_this ));
    break;

    case 2 :
      EwPostSignal( EwNewSlot( &_this->TempList, WasherTempList_AutoDemo ), ((XObject)_this ));
    break;

    case 3 :
      EwPostSignal( EwNewSlot( &_this->SpinList, WasherSpinList_AutoDemo ), ((XObject)_this ));
    break;

    case 4 :
      EwPostSignal( EwNewSlot( &_this->OptList, WasherOptList_AutoDemo ), ((XObject)_this ));
    break;

    case 5 :
    {
      EwPostSignal( EwNewSlot( &_this->TempList, WasherTempList_AutoDemo ), ((XObject)_this ));
      EwPostSignal( EwNewSlot( &_this->SpinList, WasherSpinList_AutoDemo ), ((XObject)_this ));
    }
    break;

    case 6 :
    {
      EwPostSignal( EwNewSlot( &_this->ProgList, WasherProgList_AutoDemo ), ((XObject)_this ));
      EwPostSignal( EwNewSlot( &_this->TempList, WasherTempList_AutoDemo ), ((XObject)_this ));
    }
    break;

    case 7 :
    {
      EwPostSignal( EwNewSlot( &_this->ProgList, WasherProgList_AutoDemo ), ((XObject)_this ));
      EwPostSignal( EwNewSlot( &_this->SpinList, WasherSpinList_AutoDemo ), ((XObject)_this ));
      EwPostSignal( EwNewSlot( &_this->OptList, WasherOptList_AutoDemo ), ((XObject)_this ));
    }
    break;

    default : 
      ;
  }

  _this->AutoState = _this->AutoState + 1;

  if ( _this->AutoState > 7 )
    _this->AutoState = 0;
}

/* Variants derived from the class : 'Washer::Washer' */
EW_DEFINE_CLASS_VARIANTS( WasherWasher )
EW_END_OF_CLASS_VARIANTS( WasherWasher )

/* Virtual Method Table (VMT) for the class : 'Washer::Washer' */
EW_DEFINE_CLASS( WasherWasher, CoreGroup, Device, Rectangle, Rectangle, Rectangle, 
                 AutoState, "Washer::Washer" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( WasherWasher )

/* Initializer for the class 'Washer::HourItemS' */
void WasherHourItemS__Init( WasherHourItemS _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Back, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Center, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WasherHourItemS );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const005C );
  CoreView_OnSetLayout((CoreView)&_this->Back, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Back, _Const005C );
  ViewsRectangle_OnSetColor( &_this->Back, WasherListBgColor );
  CoreView_OnSetLayout((CoreView)&_this->Center, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToTop | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Center, _Const005D );
  ViewsRectangle_OnSetColor( &_this->Center, WasherButtonTextColor );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text, _Const005C );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0024 ));
  ViewsText_OnSetColor( &_this->Text, WasherListTextColor );
  CoreGroup__Add( _this, ((CoreView)&_this->Back ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Center ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &WasherListFontS, ResourcesFont ));
}

/* Re-Initializer for the class 'Washer::HourItemS' */
void WasherHourItemS__ReInit( WasherHourItemS _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Back );
  ViewsRectangle__ReInit( &_this->Center );
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Washer::HourItemS' */
void WasherHourItemS__Done( WasherHourItemS _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( WasherHourItemS );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Back );
  ViewsRectangle__Done( &_this->Center );
  ViewsText__Done( &_this->Text );

  /* Release all used strings */
  EwReleaseString( &_this->Caption );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* 'C' function for method : 'Washer::HourItemS.OnSetCaption()' */
void WasherHourItemS_OnSetCaption( WasherHourItemS _this, XString value )
{
  EwRetainString( &_this->Caption, value );
  ViewsText_OnSetString( &_this->Text, value );
}

/* Variants derived from the class : 'Washer::HourItemS' */
EW_DEFINE_CLASS_VARIANTS( WasherHourItemS )
EW_END_OF_CLASS_VARIANTS( WasherHourItemS )

/* Virtual Method Table (VMT) for the class : 'Washer::HourItemS' */
EW_DEFINE_CLASS( WasherHourItemS, CoreGroup, Back, Back, Back, Back, Caption, "Washer::HourItemS" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( WasherHourItemS )

/* Initializer for the class 'Washer::TimeList' */
void WasherTimeList__Init( WasherTimeList _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandlerH, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandlerH, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_XObject, 0 );
  CoreVerticalList__Init( &_this->BottomListH, &_this->_XObject, 0 );
  CoreVerticalList__Init( &_this->MainListH, &_this->_XObject, 0 );
  CoreVerticalList__Init( &_this->TopListH, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->FadeListIn, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Caption, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->FadeCaption, &_this->_XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandlerM, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandlerM, &_this->_XObject, 0 );
  CoreVerticalList__Init( &_this->BottomListM, &_this->_XObject, 0 );
  CoreVerticalList__Init( &_this->MainListM, &_this->_XObject, 0 );
  CoreVerticalList__Init( &_this->TopListM, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );
  ViewsText__Init( &_this->DurationText, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->FadeDuration, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->FadeListOut, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->Int32EffectH, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->Int32EffectM, &_this->_XObject, 0 );
  CoreSystemEventHandler__Init( &_this->HourEventHandler, &_this->_XObject, 0 );
  CoreSystemEventHandler__Init( &_this->MinuteEventHandler, &_this->_XObject, 0 );
  CoreSystemEventHandler__Init( &_this->SetHourEventHandler, &_this->_XObject, 0 );
  CoreSystemEventHandler__Init( &_this->SetMinuteEventHandler, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WasherTimeList );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const005E );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandlerH, _Const005F );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->SlideTouchHandlerH, _Const0018 );
  CoreSlideTouchHandler_OnSetFriction( &_this->SlideTouchHandlerH, 0.100000f );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->SimpleTouchHandlerH, _Const0060 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->SimpleTouchHandlerH, _Const0061 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->SimpleTouchHandlerH, _Const0062 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->SimpleTouchHandlerH, _Const001C );
  CoreView_OnSetLayout((CoreView)&_this->Rectangle, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const001D );
  ViewsRectangle_OnSetColor( &_this->Rectangle, WasherButtonBgColor );
  CoreRectView__OnSetBounds( &_this->BottomListH, _Const0063 );
  CoreGroup__OnSetOpacity( &_this->BottomListH, 0 );
  CoreVerticalList_OnSetItemHeight( &_this->BottomListH, 24 );
  CoreVerticalList_OnSetNoOfItems( &_this->BottomListH, 60 );
  CoreVerticalList_OnSetItemClass( &_this->BottomListH, EW_CLASS( WasherHourItemS ));
  CoreRectView__OnSetBounds( &_this->MainListH, _Const0064 );
  CoreVerticalList_OnSetItemHeight( &_this->MainListH, 96 );
  CoreVerticalList_OnSetNoOfItems( &_this->MainListH, 60 );
  CoreVerticalList_OnSetItemClass( &_this->MainListH, EW_CLASS( WasherHourItemL ));
  CoreRectView__OnSetBounds( &_this->TopListH, _Const0065 );
  CoreGroup__OnSetOpacity( &_this->TopListH, 0 );
  CoreVerticalList_OnSetItemHeight( &_this->TopListH, 24 );
  CoreVerticalList_OnSetNoOfItems( &_this->TopListH, 60 );
  CoreVerticalList_OnSetItemClass( &_this->TopListH, EW_CLASS( WasherHourItemS ));
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->FadeListIn, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->FadeListIn, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->FadeListIn, 300 );
  CoreRectView__OnSetBounds( &_this->Caption, _Const0066 );
  ViewsText_OnSetAlignment( &_this->Caption, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Caption, EwLoadString( &_Const0067 ));
  ViewsText_OnSetColor( &_this->Caption, WasherCaptionColor );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->FadeCaption, EffectsTimingFastIn_FastOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->FadeCaption, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->FadeCaption, 200 );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandlerM, _Const0068 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->SlideTouchHandlerM, _Const0018 );
  CoreSlideTouchHandler_OnSetFriction( &_this->SlideTouchHandlerM, 0.100000f );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->SimpleTouchHandlerM, _Const0061 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->SimpleTouchHandlerM, _Const0069 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->SimpleTouchHandlerM, _Const001B );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->SimpleTouchHandlerM, _Const0062 );
  CoreRectView__OnSetBounds( &_this->BottomListM, _Const006A );
  CoreGroup__OnSetOpacity( &_this->BottomListM, 0 );
  CoreVerticalList_OnSetItemHeight( &_this->BottomListM, 24 );
  CoreVerticalList_OnSetNoOfItems( &_this->BottomListM, 60 );
  CoreVerticalList_OnSetItemClass( &_this->BottomListM, EW_CLASS( WasherMinItemS ));
  CoreRectView__OnSetBounds( &_this->MainListM, _Const006B );
  CoreVerticalList_OnSetItemHeight( &_this->MainListM, 96 );
  CoreVerticalList_OnSetNoOfItems( &_this->MainListM, 60 );
  CoreVerticalList_OnSetItemClass( &_this->MainListM, EW_CLASS( WasherMinItemL ));
  CoreRectView__OnSetBounds( &_this->TopListM, _Const006C );
  CoreGroup__OnSetOpacity( &_this->TopListM, 0 );
  CoreVerticalList_OnSetItemHeight( &_this->TopListM, 24 );
  CoreVerticalList_OnSetNoOfItems( &_this->TopListM, 60 );
  CoreVerticalList_OnSetItemClass( &_this->TopListM, EW_CLASS( WasherMinItemS ));
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text, _Const006D );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const006E ));
  ViewsText_OnSetColor( &_this->Text, WasherButtonTextColor );
  CoreRectView__OnSetBounds( &_this->DurationText, _Const006F );
  ViewsText_OnSetAlignment( &_this->DurationText, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->DurationText, EwLoadString( &_Const0070 ));
  ViewsText_OnSetColor( &_this->DurationText, WasherCaptionColor );
  ViewsText_OnSetVisible( &_this->DurationText, 0 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->FadeDuration, EffectsTimingFastIn_FastOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->FadeDuration, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->FadeDuration, 200 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->FadeListOut, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->FadeListOut, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->FadeListOut, 1000 );
  EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->FadeListOut, 2000 );
  _this->FadeListOut.Value2 = 0;
  _this->FadeListOut.Value1 = 255;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->Int32EffectH, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->Int32EffectH, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->Int32EffectH, 200 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->Int32EffectM, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->Int32EffectM, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->Int32EffectM, 200 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandlerH ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandlerH ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BottomListH ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->MainListH ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopListH ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Caption ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandlerM ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandlerM ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BottomListM ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->MainListM ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopListM ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DurationText ), 0 );
  _this->SlideTouchHandlerH.OnEnd = EwNewSlot( _this, WasherTimeList_OnEnd );
  _this->SlideTouchHandlerH.OnStart = EwNewSlot( _this, WasherTimeList_OnStart );
  _this->SimpleTouchHandlerH.OnDrag = EwNewSlot( _this, WasherTimeList_OnDragH );
  _this->SimpleTouchHandlerH.OnRelease = EwNewSlot( _this, WasherTimeList_OnReleaseH );
  _this->SimpleTouchHandlerH.OnPress = EwNewSlot( _this, WasherTimeList_OnStart );
  _this->BottomListH.OnLoadItem = EwNewSlot( _this, WasherTimeList_OnLoadBottomH );
  _this->MainListH.OnUpdate = EwNewSlot( _this, WasherTimeList_OnUpdateH );
  _this->MainListH.OnLoadItem = EwNewSlot( _this, WasherTimeList_OnLoadMainH );
  CoreVerticalList_OnSetSlideHandler( &_this->MainListH, &_this->SlideTouchHandlerH );
  _this->TopListH.OnLoadItem = EwNewSlot( _this, WasherTimeList_OnLoadTopH );
  _this->FadeListIn.Super1.OnAnimate = EwNewSlot( _this, WasherTimeList_onAnimate );
  _this->FadeListIn.Outlet = EwNewRef( &_this->TopListH, CoreGroup_OnGetOpacity, 
  CoreGroup__OnSetOpacity );
  ViewsText_OnSetFont( &_this->Caption, EwLoadResource( &WasherDescrFont, ResourcesFont ));
  _this->FadeCaption.Outlet = EwNewRef( &_this->Caption, ViewsText_OnGetOpacity, 
  ViewsText_OnSetOpacity );
  _this->SlideTouchHandlerM.OnEnd = EwNewSlot( _this, WasherTimeList_OnEnd );
  _this->SlideTouchHandlerM.OnStart = EwNewSlot( _this, WasherTimeList_OnStart );
  _this->SimpleTouchHandlerM.OnDrag = EwNewSlot( _this, WasherTimeList_OnDragM );
  _this->SimpleTouchHandlerM.OnRelease = EwNewSlot( _this, WasherTimeList_OnReleaseM );
  _this->SimpleTouchHandlerM.OnPress = EwNewSlot( _this, WasherTimeList_OnStart );
  _this->BottomListM.OnLoadItem = EwNewSlot( _this, WasherTimeList_OnLoadBottomM );
  _this->MainListM.OnUpdate = EwNewSlot( _this, WasherTimeList_OnUpdateM );
  _this->MainListM.OnLoadItem = EwNewSlot( _this, WasherTimeList_OnLoadMainM );
  CoreVerticalList_OnSetSlideHandler( &_this->MainListM, &_this->SlideTouchHandlerM );
  _this->TopListM.OnLoadItem = EwNewSlot( _this, WasherTimeList_OnLoadTopM );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &WasherListFontXL, ResourcesFont ));
  ViewsText_OnSetFont( &_this->DurationText, EwLoadResource( &WasherDescrFont, ResourcesFont ));
  _this->FadeDuration.Outlet = EwNewRef( &_this->DurationText, ViewsText_OnGetOpacity, 
  ViewsText_OnSetOpacity );
  _this->FadeListOut.Super1.OnFinished = EwNewSlot( _this, WasherTimeList_onFinished );
  _this->FadeListOut.Super1.OnAnimate = EwNewSlot( _this, WasherTimeList_onAnimate );
  _this->FadeListOut.Outlet = EwNewRef( &_this->TopListH, CoreGroup_OnGetOpacity, 
  CoreGroup__OnSetOpacity );
  _this->HourEventHandler.OnEvent = EwNewSlot( _this, WasherTimeList_onHourEvent );
  CoreSystemEventHandler_OnSetEvent( &_this->HourEventHandler, &EwGetAutoObject( 
  &WasherDevice, WasherDeviceClass )->HourUpdateEvent );
  _this->MinuteEventHandler.OnEvent = EwNewSlot( _this, WasherTimeList_onMinuteEvent );
  CoreSystemEventHandler_OnSetEvent( &_this->MinuteEventHandler, &EwGetAutoObject( 
  &WasherDevice, WasherDeviceClass )->MinuteUpdateEvent );
  _this->SetHourEventHandler.OnEvent = EwNewSlot( _this, WasherTimeList_onHourEventSet );
  CoreSystemEventHandler_OnSetEvent( &_this->SetHourEventHandler, &EwGetAutoObject( 
  &WasherDevice, WasherDeviceClass )->SetHourEvent );
  _this->SetMinuteEventHandler.OnEvent = EwNewSlot( _this, WasherTimeList_onMinuteEventSet );
  CoreSystemEventHandler_OnSetEvent( &_this->SetMinuteEventHandler, &EwGetAutoObject( 
  &WasherDevice, WasherDeviceClass )->SetMinuteEvent );
}

/* Re-Initializer for the class 'Washer::TimeList' */
void WasherTimeList__ReInit( WasherTimeList _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandlerH );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandlerH );
  ViewsRectangle__ReInit( &_this->Rectangle );
  CoreVerticalList__ReInit( &_this->BottomListH );
  CoreVerticalList__ReInit( &_this->MainListH );
  CoreVerticalList__ReInit( &_this->TopListH );
  EffectsInt32Effect__ReInit( &_this->FadeListIn );
  ViewsText__ReInit( &_this->Caption );
  EffectsInt32Effect__ReInit( &_this->FadeCaption );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandlerM );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandlerM );
  CoreVerticalList__ReInit( &_this->BottomListM );
  CoreVerticalList__ReInit( &_this->MainListM );
  CoreVerticalList__ReInit( &_this->TopListM );
  ViewsText__ReInit( &_this->Text );
  ViewsText__ReInit( &_this->DurationText );
  EffectsInt32Effect__ReInit( &_this->FadeDuration );
  EffectsInt32Effect__ReInit( &_this->FadeListOut );
  EffectsInt32Effect__ReInit( &_this->Int32EffectH );
  EffectsInt32Effect__ReInit( &_this->Int32EffectM );
  CoreSystemEventHandler__ReInit( &_this->HourEventHandler );
  CoreSystemEventHandler__ReInit( &_this->MinuteEventHandler );
  CoreSystemEventHandler__ReInit( &_this->SetHourEventHandler );
  CoreSystemEventHandler__ReInit( &_this->SetMinuteEventHandler );
}

/* Finalizer method for the class 'Washer::TimeList' */
void WasherTimeList__Done( WasherTimeList _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( WasherTimeList );

  /* Finalize all embedded objects */
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandlerH );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandlerH );
  ViewsRectangle__Done( &_this->Rectangle );
  CoreVerticalList__Done( &_this->BottomListH );
  CoreVerticalList__Done( &_this->MainListH );
  CoreVerticalList__Done( &_this->TopListH );
  EffectsInt32Effect__Done( &_this->FadeListIn );
  ViewsText__Done( &_this->Caption );
  EffectsInt32Effect__Done( &_this->FadeCaption );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandlerM );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandlerM );
  CoreVerticalList__Done( &_this->BottomListM );
  CoreVerticalList__Done( &_this->MainListM );
  CoreVerticalList__Done( &_this->TopListM );
  ViewsText__Done( &_this->Text );
  ViewsText__Done( &_this->DurationText );
  EffectsInt32Effect__Done( &_this->FadeDuration );
  EffectsInt32Effect__Done( &_this->FadeListOut );
  EffectsInt32Effect__Done( &_this->Int32EffectH );
  EffectsInt32Effect__Done( &_this->Int32EffectM );
  CoreSystemEventHandler__Done( &_this->HourEventHandler );
  CoreSystemEventHandler__Done( &_this->MinuteEventHandler );
  CoreSystemEventHandler__Done( &_this->SetHourEventHandler );
  CoreSystemEventHandler__Done( &_this->SetMinuteEventHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Slot method to load content of main scroll list. */
void WasherTimeList_OnLoadMainH( WasherTimeList _this, XObject sender )
{
  WasherHourItemL itemView;
  XInt32 itemNo;
  XString caption;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemView = EwCastObject( _this->MainListH.View, WasherHourItemL );
  itemNo = _this->MainListH.Item;
  caption = EwNewStringInt( itemNo, 0, 10 );
  WasherHourItemL_OnSetCaption( itemView, caption );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->MainListH.Super2.Bounds ), _this->MainListH.ItemHeight )));
}

/* Slot method to load content of upper scroll list. */
void WasherTimeList_OnLoadTopH( WasherTimeList _this, XObject sender )
{
  WasherHourItemS itemView;
  XInt32 itemNo;
  XString caption;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemView = EwCastObject( _this->TopListH.View, WasherHourItemS );
  itemNo = _this->TopListH.Item;
  caption = EwNewStringInt( itemNo, 0, 10 );
  WasherHourItemS_OnSetCaption( itemView, caption );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->TopListH.Super2.Bounds ), _this->TopListH.ItemHeight )));
}

/* Slot method to synchronize the scrolling of the upper/lower list with the current 
   scroll position of the center list. */
void WasherTimeList_OnUpdateH( WasherTimeList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_OnSetScrollOffset( &_this->TopListH, (( _this->MainListH.ScrollOffset 
  * _this->TopListH.ItemHeight ) / _this->MainListH.ItemHeight ) + EwGetRectH( _this->TopListH.Super2.Bounds ));
  CoreVerticalList_OnSetScrollOffset( &_this->BottomListH, (( _this->MainListH.ScrollOffset 
  * _this->BottomListH.ItemHeight ) / _this->MainListH.ItemHeight ) - _this->BottomListH.ItemHeight );
}

/* Slot method to load content of lower scroll list. */
void WasherTimeList_OnLoadBottomH( WasherTimeList _this, XObject sender )
{
  WasherHourItemS itemView;
  XInt32 itemNo;
  XString caption;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemView = EwCastObject( _this->BottomListH.View, WasherHourItemS );
  itemNo = _this->BottomListH.Item;
  caption = EwNewStringInt( itemNo, 0, 10 );
  WasherHourItemS_OnSetCaption( itemView, caption );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->BottomListH.Super2.Bounds ), _this->BottomListH.ItemHeight )));
}

/* Slot method to change the selection, when the item has reached its parking position. */
void WasherTimeList_OnEnd( WasherTimeList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  WasherDeviceClass_OnSetHour( EwGetAutoObject( &WasherDevice, WasherDeviceClass ), 
  -_this->MainListH.ScrollOffset / _this->MainListH.ItemHeight );
  WasherDeviceClass_OnSetMinute( EwGetAutoObject( &WasherDevice, WasherDeviceClass ), 
  -_this->MainListM.ScrollOffset / _this->MainListM.ItemHeight );
  _this->FadeListOut.Value1 = _this->TopListH.Super1.Opacity;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeListOut, 1 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 0 );
  _this->FadeCaption.Value1 = _this->Caption.Opacity;
  _this->FadeCaption.Value2 = 255;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 1 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandlerH, 1 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandlerM, 1 );
}

/* Slot method to make the upper/lower list visible. */
void WasherTimeList_OnStart( WasherTimeList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( _this->TopListH.Super1.Opacity != 255 ) && !_this->FadeListIn.Super1.Enabled )
  {
    _this->FadeListIn.Value1 = _this->TopListH.Super1.Opacity;
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeListIn, 1 );
  }

  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeListOut, 0 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 0 );
  _this->FadeCaption.Value1 = _this->Caption.Opacity;
  _this->FadeCaption.Value2 = 0;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 1 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeDuration, 0 );
  _this->FadeDuration.Value1 = _this->DurationText.Opacity;
  _this->FadeDuration.Value2 = 0;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeDuration, 1 );

  if ( _this->TopListH.Super1.Opacity == 0 )
    EwPostSignal( _this->OnAppear, ((XObject)_this ));
}

/* This is a slot method. */
void WasherTimeList_onAnimate( WasherTimeList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup__OnSetOpacity( &_this->TopListM, _this->TopListH.Super1.Opacity );
  CoreGroup__OnSetOpacity( &_this->BottomListH, _this->TopListH.Super1.Opacity );
  CoreGroup__OnSetOpacity( &_this->BottomListM, _this->TopListH.Super1.Opacity );
}

/* Slot method to load content of main scroll list. */
void WasherTimeList_OnLoadMainM( WasherTimeList _this, XObject sender )
{
  WasherMinItemL itemView;
  XInt32 itemNo;
  XString caption;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemView = EwCastObject( _this->MainListM.View, WasherMinItemL );
  itemNo = _this->MainListM.Item;
  caption = EwNewStringInt( itemNo, 2, 10 );
  WasherMinItemL_OnSetCaption( itemView, caption );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->MainListM.Super2.Bounds ), _this->MainListM.ItemHeight )));
}

/* Slot method to load content of upper scroll list. */
void WasherTimeList_OnLoadTopM( WasherTimeList _this, XObject sender )
{
  WasherMinItemS itemView;
  XInt32 itemNo;
  XString caption;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemView = EwCastObject( _this->TopListM.View, WasherMinItemS );
  itemNo = _this->TopListM.Item;
  caption = EwNewStringInt( itemNo, 2, 10 );
  WasherMinItemS_OnSetCaption( itemView, caption );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->TopListM.Super2.Bounds ), _this->TopListM.ItemHeight )));
}

/* Slot method to load content of lower scroll list. */
void WasherTimeList_OnLoadBottomM( WasherTimeList _this, XObject sender )
{
  WasherMinItemS itemView;
  XInt32 itemNo;
  XString caption;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemView = EwCastObject( _this->BottomListM.View, WasherMinItemS );
  itemNo = _this->BottomListM.Item;
  caption = EwNewStringInt( itemNo, 2, 10 );
  WasherMinItemS_OnSetCaption( itemView, caption );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->BottomListM.Super2.Bounds ), _this->BottomListM.ItemHeight )));
}

/* Slot method to synchronize the scrolling of the upper/lower list with the current 
   scroll position of the center list. */
void WasherTimeList_OnUpdateM( WasherTimeList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_OnSetScrollOffset( &_this->TopListM, (( _this->MainListM.ScrollOffset 
  * _this->TopListM.ItemHeight ) / _this->MainListM.ItemHeight ) + EwGetRectH( _this->TopListM.Super2.Bounds ));
  CoreVerticalList_OnSetScrollOffset( &_this->BottomListM, (( _this->MainListM.ScrollOffset 
  * _this->BottomListM.ItemHeight ) / _this->MainListM.ItemHeight ) - _this->BottomListM.ItemHeight );
}

/* This is a slot method. */
void WasherTimeList_onFinished( WasherTimeList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->FadeListOut.Value == 0 )
  {
    EwPostSignal( _this->OnDisappear, ((XObject)_this ));
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeDuration, 0 );
    _this->FadeDuration.Value1 = _this->Caption.Opacity;
    _this->FadeDuration.Value2 = 255;
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeDuration, 1 );
  }
}

/* 'C' function for method : 'Washer::TimeList.OnDragH()' */
void WasherTimeList_OnDragH( WasherTimeList _this, XObject sender )
{
  XPoint delta;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  delta = EwMovePointNeg( _this->SimpleTouchHandlerH.CurrentPos, _this->SimpleTouchHandlerH.HittingPos );

  if (( delta.Y > 8 ) || ( delta.Y < -8 ))
  {
    CoreRoot_DeflectCursor( CoreView__GetRoot( _this ), ((CoreView)&_this->SlideTouchHandlerH ), 
    _Const001C );
    CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandlerH, 0 );
  }
}

/* 'C' function for method : 'Washer::TimeList.OnReleaseH()' */
void WasherTimeList_OnReleaseH( WasherTimeList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->SimpleTouchHandlerH.AutoDeflected && ( _this->TopListH.Super1.Opacity 
      == 255 ))
  {
    XInt32 delta = 0;

    if ( _this->SimpleTouchHandlerH.CurrentPos.Y < _this->MainListH.Super2.Bounds.Point1.Y )
      delta = (( _this->SimpleTouchHandlerH.CurrentPos.Y - _this->MainListH.Super2.Bounds.Point1.Y ) 
      / _this->TopListH.ItemHeight ) - 1;
    else
      if ( _this->SimpleTouchHandlerH.CurrentPos.Y > _this->MainListH.Super2.Bounds.Point2.Y )
        delta = (( _this->SimpleTouchHandlerH.CurrentPos.Y - _this->MainListH.Super2.Bounds.Point2.Y ) 
        / _this->BottomListH.ItemHeight ) + 1;

    if ( delta != 0 )
    {
      XInt32 item = ( -_this->MainListH.ScrollOffset / _this->MainListH.ItemHeight ) 
        + delta;

      if ( item > 74 )
      {
        item = 74;
      }

      CoreVerticalList_EnsureVisible( &_this->MainListH, item, 1, &_this->Int32EffectH, 
      EwNullSlot );
    }
  }

  EwSignal( EwNewSlot( _this, WasherTimeList_OnEnd ), ((XObject)_this ));
}

/* 'C' function for method : 'Washer::TimeList.OnDragM()' */
void WasherTimeList_OnDragM( WasherTimeList _this, XObject sender )
{
  XPoint delta;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  delta = EwMovePointNeg( _this->SimpleTouchHandlerM.CurrentPos, _this->SimpleTouchHandlerM.HittingPos );

  if (( delta.Y > 8 ) || ( delta.Y < -8 ))
  {
    CoreRoot_DeflectCursor( CoreView__GetRoot( _this ), ((CoreView)&_this->SlideTouchHandlerM ), 
    _Const001C );
    CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandlerM, 0 );
  }
}

/* 'C' function for method : 'Washer::TimeList.OnReleaseM()' */
void WasherTimeList_OnReleaseM( WasherTimeList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->SimpleTouchHandlerM.AutoDeflected && ( _this->TopListM.Super1.Opacity 
      == 255 ))
  {
    XInt32 delta = 0;

    if ( _this->SimpleTouchHandlerM.CurrentPos.Y < _this->MainListM.Super2.Bounds.Point1.Y )
      delta = (( _this->SimpleTouchHandlerM.CurrentPos.Y - _this->MainListM.Super2.Bounds.Point1.Y ) 
      / _this->TopListM.ItemHeight ) - 1;
    else
      if ( _this->SimpleTouchHandlerM.CurrentPos.Y > _this->MainListM.Super2.Bounds.Point2.Y )
        delta = (( _this->SimpleTouchHandlerM.CurrentPos.Y - _this->MainListM.Super2.Bounds.Point2.Y ) 
        / _this->BottomListM.ItemHeight ) + 1;

    if ( delta != 0 )
    {
      XInt32 item = ( -_this->MainListM.ScrollOffset / _this->MainListM.ItemHeight ) 
        + delta;
      CoreVerticalList_EnsureVisible( &_this->MainListM, item, 1, &_this->Int32EffectM, 
      EwNullSlot );
    }
  }

  EwSignal( EwNewSlot( _this, WasherTimeList_OnEnd ), ((XObject)_this ));
}

/* 'C' function for method : 'Washer::TimeList.DeviceStart()' */
void WasherTimeList_DeviceStart( WasherTimeList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwGetAutoObject( &WasherDevice, WasherDeviceClass )->Running )
  {
    CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandlerH, 0 );
    CoreSlideTouchHandler_OnSetEnabled( &_this->SlideTouchHandlerH, 0 );
    CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandlerM, 0 );
    CoreSlideTouchHandler_OnSetEnabled( &_this->SlideTouchHandlerM, 0 );
  }
  else
  {
    CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandlerH, 1 );
    CoreSlideTouchHandler_OnSetEnabled( &_this->SlideTouchHandlerH, 1 );
    CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandlerM, 1 );
    CoreSlideTouchHandler_OnSetEnabled( &_this->SlideTouchHandlerM, 1 );
  }
}

/* 'C' function for method : 'Washer::TimeList.DeviceEnd()' */
void WasherTimeList_DeviceEnd( WasherTimeList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 0 );
  _this->FadeCaption.Value1 = _this->Caption.Opacity;
  _this->FadeCaption.Value2 = 255;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FadeCaption, 1 );

  if ( EwGetAutoObject( &WasherDevice, WasherDeviceClass )->Running )
  {
    CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandlerH, 0 );
    CoreSlideTouchHandler_OnSetEnabled( &_this->SlideTouchHandlerH, 0 );
    CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandlerM, 0 );
    CoreSlideTouchHandler_OnSetEnabled( &_this->SlideTouchHandlerM, 0 );
  }
  else
  {
    CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandlerH, 1 );
    CoreSlideTouchHandler_OnSetEnabled( &_this->SlideTouchHandlerH, 1 );
    CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandlerM, 1 );
    CoreSlideTouchHandler_OnSetEnabled( &_this->SlideTouchHandlerM, 1 );
  }
}

/* This slot method is executed when the associated system event handler 'SystemEventHandler' 
   receives an event. */
void WasherTimeList_onHourEvent( WasherTimeList _this, XObject sender )
{
  XInt32 val;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( EwNewSlot( _this, WasherTimeList_DeviceStart ), ((XObject)_this ));
  val = EwGetAutoObject( &WasherDevice, WasherDeviceClass )->Hour;
  CoreVerticalList_EnsureVisible( &_this->MainListH, val, 1, 0, EwNewSlot( _this, 
  WasherTimeList_DeviceEnd ));
}

/* This slot method is executed when the associated system event handler 'SystemEventHandler' 
   receives an event. */
void WasherTimeList_onMinuteEvent( WasherTimeList _this, XObject sender )
{
  XInt32 val;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( EwNewSlot( _this, WasherTimeList_DeviceStart ), ((XObject)_this ));
  val = EwGetAutoObject( &WasherDevice, WasherDeviceClass )->Minute;
  CoreVerticalList_EnsureVisible( &_this->MainListM, val, 1, 0, EwNewSlot( _this, 
  WasherTimeList_DeviceEnd ));
}

/* This slot method is executed when the associated system event handler 'SystemEventHandler' 
   receives an event. */
void WasherTimeList_onHourEventSet( WasherTimeList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwGetAutoObject( &WasherDevice, WasherDeviceClass )->Running )
  {
    CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandlerH, 0 );
    CoreSlideTouchHandler_OnSetEnabled( &_this->SlideTouchHandlerH, 0 );
  }
  else
  {
    CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandlerH, 1 );
    CoreSlideTouchHandler_OnSetEnabled( &_this->SlideTouchHandlerH, 1 );
  }
}

/* This slot method is executed when the associated system event handler 'SystemEventHandler' 
   receives an event. */
void WasherTimeList_onMinuteEventSet( WasherTimeList _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwGetAutoObject( &WasherDevice, WasherDeviceClass )->Running )
  {
    CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandlerM, 0 );
    CoreSlideTouchHandler_OnSetEnabled( &_this->SlideTouchHandlerM, 0 );
  }
  else
  {
    CoreSimpleTouchHandler_OnSetEnabled( &_this->SimpleTouchHandlerM, 1 );
    CoreSlideTouchHandler_OnSetEnabled( &_this->SlideTouchHandlerM, 1 );
  }
}

/* Variants derived from the class : 'Washer::TimeList' */
EW_DEFINE_CLASS_VARIANTS( WasherTimeList )
EW_END_OF_CLASS_VARIANTS( WasherTimeList )

/* Virtual Method Table (VMT) for the class : 'Washer::TimeList' */
EW_DEFINE_CLASS( WasherTimeList, CoreGroup, OnAppear, OnAppear, SlideTouchHandlerH, 
                 SlideTouchHandlerH, _None, "Washer::TimeList" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( WasherTimeList )

/* Initializer for the class 'Washer::HourItemL' */
void WasherHourItemL__Init( WasherHourItemL _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WasherHourItemL );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0071 );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text, _Const0072 );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0073 ));
  ViewsText_OnSetColor( &_this->Text, WasherButtonTextColor );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &WasherListFontXL, ResourcesFont ));
}

/* Re-Initializer for the class 'Washer::HourItemL' */
void WasherHourItemL__ReInit( WasherHourItemL _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Washer::HourItemL' */
void WasherHourItemL__Done( WasherHourItemL _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( WasherHourItemL );

  /* Finalize all embedded objects */
  ViewsText__Done( &_this->Text );

  /* Release all used strings */
  EwReleaseString( &_this->Caption );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* 'C' function for method : 'Washer::HourItemL.OnSetCaption()' */
void WasherHourItemL_OnSetCaption( WasherHourItemL _this, XString value )
{
  EwRetainString( &_this->Caption, value );
  ViewsText_OnSetString( &_this->Text, value );
}

/* Variants derived from the class : 'Washer::HourItemL' */
EW_DEFINE_CLASS_VARIANTS( WasherHourItemL )
EW_END_OF_CLASS_VARIANTS( WasherHourItemL )

/* Virtual Method Table (VMT) for the class : 'Washer::HourItemL' */
EW_DEFINE_CLASS( WasherHourItemL, CoreGroup, Text, Text, Text, Text, Caption, "Washer::HourItemL" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( WasherHourItemL )

/* Initializer for the class 'Washer::MinItemL' */
void WasherMinItemL__Init( WasherMinItemL _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WasherMinItemL );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0071 );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text, _Const0074 );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0073 ));
  ViewsText_OnSetColor( &_this->Text, WasherButtonTextColor );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &WasherListFontXL, ResourcesFont ));
}

/* Re-Initializer for the class 'Washer::MinItemL' */
void WasherMinItemL__ReInit( WasherMinItemL _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Washer::MinItemL' */
void WasherMinItemL__Done( WasherMinItemL _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( WasherMinItemL );

  /* Finalize all embedded objects */
  ViewsText__Done( &_this->Text );

  /* Release all used strings */
  EwReleaseString( &_this->Caption );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* 'C' function for method : 'Washer::MinItemL.OnSetCaption()' */
void WasherMinItemL_OnSetCaption( WasherMinItemL _this, XString value )
{
  EwRetainString( &_this->Caption, value );
  ViewsText_OnSetString( &_this->Text, value );
}

/* Variants derived from the class : 'Washer::MinItemL' */
EW_DEFINE_CLASS_VARIANTS( WasherMinItemL )
EW_END_OF_CLASS_VARIANTS( WasherMinItemL )

/* Virtual Method Table (VMT) for the class : 'Washer::MinItemL' */
EW_DEFINE_CLASS( WasherMinItemL, CoreGroup, Text, Text, Text, Text, Caption, "Washer::MinItemL" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( WasherMinItemL )

/* Initializer for the class 'Washer::MinItemS' */
void WasherMinItemS__Init( WasherMinItemS _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Back, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Center, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Right, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WasherMinItemS );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const005C );
  CoreView_OnSetLayout((CoreView)&_this->Back, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Back, _Const005C );
  ViewsRectangle_OnSetColor( &_this->Back, WasherListBgColor );
  CoreView_OnSetLayout((CoreView)&_this->Center, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToTop | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Center, _Const0075 );
  ViewsRectangle_OnSetColor( &_this->Center, WasherButtonTextColor );
  CoreView_OnSetLayout((CoreView)&_this->Right, CoreLayoutAlignToBottom | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Right, _Const0076 );
  ViewsRectangle_OnSetColor( &_this->Right, WasherListBgColor );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text, _Const005C );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0024 ));
  ViewsText_OnSetColor( &_this->Text, WasherListTextColor );
  CoreGroup__Add( _this, ((CoreView)&_this->Back ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Center ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Right ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &WasherListFontS, ResourcesFont ));
}

/* Re-Initializer for the class 'Washer::MinItemS' */
void WasherMinItemS__ReInit( WasherMinItemS _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Back );
  ViewsRectangle__ReInit( &_this->Center );
  ViewsRectangle__ReInit( &_this->Right );
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Washer::MinItemS' */
void WasherMinItemS__Done( WasherMinItemS _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( WasherMinItemS );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Back );
  ViewsRectangle__Done( &_this->Center );
  ViewsRectangle__Done( &_this->Right );
  ViewsText__Done( &_this->Text );

  /* Release all used strings */
  EwReleaseString( &_this->Caption );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* 'C' function for method : 'Washer::MinItemS.OnSetCaption()' */
void WasherMinItemS_OnSetCaption( WasherMinItemS _this, XString value )
{
  EwRetainString( &_this->Caption, value );
  ViewsText_OnSetString( &_this->Text, value );
}

/* Variants derived from the class : 'Washer::MinItemS' */
EW_DEFINE_CLASS_VARIANTS( WasherMinItemS )
EW_END_OF_CLASS_VARIANTS( WasherMinItemS )

/* Virtual Method Table (VMT) for the class : 'Washer::MinItemS' */
EW_DEFINE_CLASS( WasherMinItemS, CoreGroup, Back, Back, Back, Back, Caption, "Washer::MinItemS" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( WasherMinItemS )

/* This is a bitmap resource. */
EW_DEFINE_BITMAP_RES( WasherBgHot )
  EW_BITMAP_FRAMES( WasherBgHot, Default, EW_DRIVER_VARIANT_ALPHA8, 480, 272, 0 )
    EW_BITMAP_FRAME( 0, 0, 0, 0, 0x00000000, 0x00000000 )

  EW_BITMAP_PIXEL( WasherBgHot, Default )                       /* ratio 7.07 % */
    0x1C080100, 0xC1A0B048, 0x2A130883, 0xA1B0C85C, 0x231087C3, 0xB1489C4A, 0x1986C5A2,
    0xC8D8C06E, 0x19C7A3B1, 0x1C5C4A34, 0x03E09249, 0x406B1D1A, 0x86618830, 0x38341847,
    0xB3499C94, 0x389BCDA6, 0xC9DCEA73, 0x11842233, 0x946E832F, 0xCF657211, 0x9C0400A3,
    0xC691C190, 0x501B8303, 0x005174BE, 0x58ABD5A9, 0xCADD6AB3, 0x1002E1F5, 0xED0A5C34,
    0x8A066328, 0xE2BA0109, 0x86162124, 0x2D06130C, 0x8338EDB4, 0x78BBDA82, 0x8BDDEAF3,
    0xA2078097, 0x40D6C963, 0xDF0040F1, 0xC6DA2999, 0x40306178, 0x652F188B, 0xB87C30B0,
    0x98CBE5B2, 0x900C1333, 0xC0D485A1, 0x58CC6230, 0x66806121, 0x6E98198B, 0xE0C0EC84,
    0x2C35A0D2, 0xBB4D9E9C, 0x029A6DB6, 0xA1A0A82E, 0x16E8B03A, 0x444B6FB2, 0x07652350,
    0xC6832783, 0xB840B190, 0x85D0E7F3, 0xA351382B, 0x2FA258F7, 0xEE8E982C, 0xDE898050,
    0x2D545A31, 0x472E6268, 0x73282819, 0x7DBECF5F, 0x962504D6, 0xA348DE83, 0xEEED8685,
    0xCE287617, 0x83048671, 0x11E67C15, 0x95A41E0D, 0x260881DF, 0x19009158, 0x0C1F34C0,
    0x81E0C833, 0x742A0A01, 0x0D900BC0, 0x048182B5, 0x4A602089, 0xE2285415, 0x50022488,
    0x06196EC1, 0x0A085206, 0x5B108894, 0x6210D91D, 0xA8600A41, 0xB9C10CDC, 0xB78EE3A8,
    0x6F028025, 0x4330CDF3, 0x58F14F09, 0x851E02D0, 0x1840E1C7, 0x0612987C, 0x25294646,
    0x5084075F, 0x0C317CD6, 0xE494C136, 0x078335CD, 0x24E08D07, 0xC0683547, 0x226899E5,
    0x57058015, 0x0D031682, 0x1EA0602F, 0x38A40C9A, 0x1D049154, 0x35509F20, 0x9FE694C8,
    0xC0149680, 0x29D98902, 0x501A8454, 0x1E002818, 0x78D4C5CC, 0x82C02504, 0xD08E0375,
    0x6698A2E2, 0x620250BA, 0x59541A52, 0xE98A5C25, 0x39D82E01, 0x29070883, 0x74A18310,
    0xA68110C9, 0x9B9AC6B0, 0xA511F390, 0x02B10302, 0x030D8120, 0x0450696E, 0xDCB58DA1,
    0x6AE69008, 0xAC0B972C, 0x34926630, 0x92C180B0, 0x173082B0, 0x5055076B, 0xAC34605D,
    0xC79CC0E0, 0x01A25B76, 0x62A9B41F, 0x67E01C0C, 0x916E016C, 0x06AE0335, 0xA782D041,
    0xAEC09982, 0x3856F4B7, 0x7AAC5941, 0xCD09D444, 0xB040CBD5, 0x2A20ADE7, 0xB0B00B41,
    0x68337F6C, 0x0CBD4040, 0x0D0147E7, 0x82980EF9, 0x90030D5D, 0xB5E77F01, 0x0841B0B0,
    0x0BE41988, 0xF22C5419, 0x3C601273, 0x6C196F16, 0x2608322C, 0xB9826843, 0x6F0CB104,
    0x5059BF47, 0x5F38C8EC, 0x81A4C026, 0xBCC25511, 0x20358338, 0x54172A0A, 0x29E60B41,
    0x890B8357, 0x6574ECE6, 0xD1CD2417, 0x2D3D849B, 0x50250150, 0x06519A3A, 0xC463F011,
    0x5288611C, 0x6B700607, 0x1557D9F5, 0x33506360, 0xDA1DA0C4, 0x9E60A949, 0x6C50320C,
    0x82E26E50, 0x150976D6, 0x00533B40, 0xF68DC37E, 0x50C35201, 0x080908C3, 0x4801902E,
    0x08033927, 0x40A00381, 0x38420FA7, 0x481F0B83, 0x03453370, 0x07410050, 0x4160AC2F,
    0x3E2B9103, 0x5B3305F2, 0x06D3FA50, 0x0D7490B0, 0xE83E4424, 0x2E571009, 0x9C2C0D5A,
    0x14020100, 0x0AC15015, 0x2AB6F035, 0x50582AC4, 0xC338E9B4, 0xC80C2498, 0x09C03413,
    0x4270D349, 0x4009086B, 0x47606781, 0x23089806, 0x01C05038, 0x404417C7, 0x008C0E01,
    0x35CBA7BC, 0x38F36AFB, 0x0C6F0063, 0xC01F375C, 0x5BEB6D06, 0xAD099403, 0x95FD42B9,
    0x9BEB446F, 0x0680D02C, 0x0281D038, 0x1B038076, 0xF88A00C0, 0xB1721D77, 0x7809646F,
    0xF57C0D1F, 0xC0BC0AC0, 0x95083253, 0x81300442, 0x7FA90017, 0x0D01A11F, 0xE0C2406A,
    0x2F7B3089, 0x460D8189, 0xC207BAB0, 0xCB3300EA, 0x87D8DD92, 0x6DB5A4A4, 0x482B3003,
    0x82803201, 0x8410A108, 0x09132440, 0x6342E736, 0xCB70A075, 0x1103DEA1, 0x85968240,
    0xC02906A6, 0x501A4253, 0x30FC9802, 0x9CBC2088, 0x2C688B14, 0x320C45C6, 0x00DE6BF1,
    0x8EBB5032, 0x8A40905C, 0x36018852, 0xF62C3620, 0xA1BE05EF, 0xD8B89981, 0x0CCC072D,
    0xA2202C42, 0x82E022E9, 0x03C4B931, 0x00C83366, 0x1701D018, 0x5870A908, 0x820CE0BC,
    0x6C1B1A07, 0xF2DD8E80, 0xD50EAF00, 0x71700382, 0x1782D200, 0x81605C0D, 0x00E41A40,
    0x6F0EA29C, 0x14C57064, 0x2A06CDD2, 0x22018090, 0x99152110, 0xCC9092C0, 0x464ECB15,
    0x402E3A34, 0x96CA9F6E, 0x00F3BAF1, 0x0560AC09, 0x0D41B02C, 0x55AAB2C4, 0xA198A6AD,
    0x420D81A1, 0x0CC28217, 0xB82E01E4, 0xD0544C23, 0x8AC258AF, 0x0A6C4E03, 0x3788E8AA,
    0x5F51C019, 0x445851F5, 0x0A81800C, 0x2F430060, 0x5A0B4170, 0xBA759A10, 0x302B82E0,
    0x8208D027, 0xA5BA4435, 0x958CD62E, 0xA0460E06, 0x04802658, 0x0B9C741F, 0x874F3038,
    0x03A0E00C, 0x1A004010, 0x08020130, 0x2C9EA100, 0x537CFB88, 0xF3E51983, 0x00400134,
    0x01001202, 0xA3F47809, 0x08290811, 0x92D24044, 0x269D7492, 0x3A04E92D, 0x3409812A,
    0xD9EA0100, 0x606658E7, 0x800A2E51, 0x5999BB01, 0x80E04875, 0x0024F5F0, 0x0D0D043D,
    0x8BC39030, 0x0600455E, 0x1402C058, 0x680E8170, 0xF82C04A0, 0xB0540AE5, 0x80E8903F,
    0xC1E55807, 0x55BAB60E, 0xABF5781D, 0x0E41CD5F, 0xAE55FAC0, 0x3807A0EE, 0x560B4198,
    0x20070260, 0x11425C20, 0x185D414D, 0x20D5A380, 0x01594462, 0x1368F491, 0x3CA03801,
    0x0981A20F, 0x9E546A7C, 0x89042024, 0xC40E81D9, 0x7AB2562A, 0xBD900715, 0x4B276481,
    0xF65ACAD9, 0xEC8595B2, 0x832ABD58, 0x28446814, 0x359C4CA4, 0x56BBF007, 0x35064A7E,
    0x7A088150, 0x108BD11A, 0x93D00220, 0x305647E6, 0x84E6C2D7, 0x41D83703, 0xD980700E,
    0xB7F6FADE, 0x0EACCDC0, 0xF4307070, 0x3F027614, 0x5337C19A, 0x9019B108, 0x000D0340,
    0x921B0B40, 0x40680616, 0x99EA9F91, 0x5B68940C, 0xB760789D, 0x78AF0DC1, 0x44594BC7,
    0x850420CE, 0xA803C015, 0xD59EB743, 0x802A9D20, 0xB226E780, 0xE07C0880, 0xA6C82F05,
    0xB073D05B, 0x7D60CCD0, 0x0489C5DD, 0xF25BC078, 0x08B21652, 0x3582B04E, 0x2EB158CB,
    0xB5BDC138, 0x67EF1DC1, 0x007A9BDB, 0xEB8CC678, 0x836066AA, 0x05009819, 0x0541202C,
    0x1280C014, 0x0B01989B, 0x52070068, 0xBC130290, 0xDC5FC240, 0x09B06B64, 0x25A0D136,
    0x800936C0, 0xD990720B, 0x07565B02, 0x0E6AD566, 0x5264406C, 0x486E8AAE, 0xF0908B2E,
    0x45CB64CB, 0xB259C908, 0x6B2F5741, 0x20C62F83, 0x801DDDBA, 0x47D05404, 0xC9250ED9,
    0x98A11120, 0xBA64F2C3, 0x1938AF65, 0xA204CFC0, 0x881A2C29, 0x9638B5A0, 0xE06E0408,
    0xB90C1BE3, 0x81BE4406, 0x036B260D, 0x03606811, 0x06F4081C, 0x0780E02C, 0x802AA040,
    0x01A2B44B, 0xA74598D7, 0x10100165, 0x306C0860, 0x324ECADC, 0x71C3BCBB, 0x43D03401,
    0x8411B95A, 0xE6DA6165, 0x1548601A, 0x71B08091, 0x74084896, 0x20156070, 0x20057C60,
    0x8C780A40, 0x47BC1883, 0xF4A83504, 0xA4360F64, 0x007242E9, 0x5B00D807, 0x4FC0C378,
    0x28288BEB, 0x04424FB8, 0xB59EC4D0, 0xA6A99AA0, 0x9B2C0288, 0x600D8183, 0x81CDBC06,
    0x8072B60B, 0xD580E00E, 0x0D644593, 0xE96D1642, 0x1C01402A, 0x200DF100, 0x16206476,
    0xF1E84B33, 0x5A8A0200, 0x408C0090, 0x019943BF, 0x911DCB96, 0xC780B402, 0x0BC1CD93,
    0x7001A5CC, 0x5D03E0EB, 0x760AC071, 0xC618E3E0, 0x46E58B60, 0x80220480, 0x80A81782,
    0x0B0C2505, 0xE7824106, 0x0500B8D1, 0x43AEE012, 0xEBD77042, 0x11DF8F30, 0x2A0EC111,
    0x029A839B, 0xE6E004C0, 0xB2B98001, 0x19EB95CF, 0x181832AF, 0x8194F3CA, 0x02F3940C,
    0x84732455, 0x0B01904E, 0x14034060, 0x2E42B5F0, 0xECE53000, 0x001921FC, 0xD07564F8,
    0x00388282, 0x018039E0, 0x0062B1BD, 0xDF178014, 0xBF3A516F, 0x02EB0003, 0x0FEC5D98,
    0x9F221601, 0x800E10DE, 0xDD90B277, 0x605440B7, 0x65E53070, 0xF560377E, 0xF6C4CAC1,
    0x768018BB, 0x427BE942, 0x5D01F008, 0x8F07964F, 0xC0044824, 0xEA58674D, 0x582C0185,
    0x20650C79, 0xC567C177, 0xBCB2633B, 0x02E00A41, 0x0756539B, 0x63925827, 0x1183AE00,
    0x3CF08654, 0x555E01B8, 0xEBCD6700, 0xF6CD0024, 0xB207EB88, 0x9D4FC64F, 0xB952D005,
    0x03507164, 0x62E656D1, 0x7A193838, 0x7B95AF67, 0x01F35ECB, 0x180A8088, 0x164AE3FE,
    0xCF520224, 0xC32D0501, 0x1F041680, 0xBE2733B4, 0x229D2655, 0x05001FCD, 0x0EECBD8A,
    0x81469056, 0x00070034, 0x4E0A41DF, 0x316594A3, 0xB7DAF1C5, 0xD600054A, 0x961C0177,
    0xC1C597D2, 0xBC703A0E, 0xEB00C405, 0x9873A031, 0x11423511, 0x1597F112, 0x4E2E9010,
    0xB01D00D3, 0x49D01D01, 0x17004135, 0x56DF0280, 0x03475367, 0x0D106017, 0x06E00330,
    0x19971059, 0x2E27C2D2, 0x013D8077, 0x3380324D, 0x5A62F00E, 0x203903C5, 0x10F6A858,
    0x340215EA, 0x859855E0, 0x02B03C03, 0x0E1026D0, 0x87000340, 0x1B527E7E, 0x322F06FE,
    0x475B02B0, 0x00313882, 0x0A315122, 0xE7E802B0, 0x3F059A63, 0x0B3777AD, 0xF02500E0,
    0x83558F02, 0x6647203A, 0xD0350113, 0x6E403883, 0x1100E1B7, 0x784666E3, 0x2B082F15,
    0xB628D003, 0xC03B72C7, 0x6F301D02, 0x075483B2, 0xB0210140, 0x56256302, 0x276AC5BE,
    0x21056990, 0x03B83D49, 0x1C1C283F, 0x514E3850, 0x00972886, 0xBD78602B, 0x37C15635,
    0x01E01C02, 0x9080E01E, 0xA02401C8, 0x58B7E82C, 0x376DF5BF, 0xC5730240, 0x7BB60444,
    0x2B1D177C, 0x60278420, 0x0026D188, 0x9286B1FB, 0xF59676F5, 0x64055C6D, 0xBD8AC8AF,
    0x503A6DF5, 0x7BE02203, 0x16002104, 0x68AB7F80, 0x1DC1FF03, 0xFD2CB010, 0x66C01234,
    0x2EE34E8A, 0x3C5997CC, 0x68AA42A0, 0x03959960, 0xF086E70C, 0xE8892917, 0x03503B63,
    0x321CE81F, 0xE8025A08, 0x8C64F113, 0x20006323, 0x77E25630, 0x00D30A03, 0xCE89F02D,
    0x87FA6078, 0x89C03203, 0x9A01F783, 0xE0397BB8, 0x0031EE6A, 0xCE2F002A, 0xF0161165,
    0x3228E05E, 0x9E031013, 0x33D35967, 0x44700610, 0x408CE640, 0xD6550386, 0x3A501201,
    0x3E6B9463, 0xE7895C36, 0x0355FA30, 0x0A10E7D9, 0xF8181890, 0x00230C8F, 0x2C7528F2,
    0x935D1937, 0x69402501, 0x0958B59B, 0xC5BB9296, 0x02302763, 0x9B8451DA, 0xF7860316,
    0x8DD02D6D, 0x520231EC, 0x102C0313, 0x01E00211, 0x6702C5FB, 0x028B91E8, 0x7F979D01,
    0xF402567C, 0x654C0076, 0x02702A02, 0xCA64F02F, 0xB0290275, 0x01102002, 0x0442D51A,
    0xE90800E0, 0x1FE03B84, 0x0A1CF851, 0x536C4A40, 0x00610C91, 0x5F190927, 0x42DD9442,
    0x8E402300, 0xD603563F, 0x791902E8, 0x0073DF10, 0x0757C978, 0x70070021, 0x58A02F01,
    0x5F03A84E, 0x92098D32, 0x03293B01, 0x183F987C, 0x41E71A20, 0x29896C98, 0xD494700B,
    0x50240396, 0x56379E23, 0x24839025, 0x356F0021, 0x7018986B, 0x1A03203B, 0x41F997A0,
    0x12F66C00, 0x097C3034, 0x92CA00C1, 0x98F86422, 0x7901B2B1, 0xB0307E27, 0x0270083E,
    0x375B98EA, 0x354402E0, 0x5D797D12, 0x6386B779, 0x401E02E5, 0x0102089A, 0x9A0313EF,
    0xB93F1029, 0x9751E727, 0x082699B0, 0xB8B202A0, 0x02703B8A, 0xF30208D3, 0x35636748,
    0x01C02A03, 0xF55B5011, 0x200B0076, 0x35901001, 0xB255B033, 0x149C59B8, 0x58020896,
    0xA603312F, 0xE02649F7, 0x02B03144, 0x132999D1, 0x39030340, 0x8239A159, 0x2D00A102,
    0xB63E5BA0, 0x5537A959, 0x1F02C02C, 0xA01C67F0, 0x02901F01, 0x368A3551, 0x258B55A0,
    0x59C59092, 0x4500D01B, 0x500C2248, 0x5DC1E76C, 0x2F5ED20C, 0x94330361, 0x0052689F,
    0x078C9024, 0xB44303A6, 0x8D03D741, 0x5E8B4816, 0xF58D60D5, 0x63F59155, 0x2303472B,
    0x427F39A0, 0x02636C3F, 0x0600D206, 0xA0322F93, 0x27FA2631, 0x2C99200C, 0xA0170367,
    0x01F01374, 0xCE99F934, 0x459259B8, 0x76890E02, 0xF979C225, 0x93AA0342, 0x3F853349,
    0x0125CA47, 0xD6760140, 0x02C03C8A, 0x0410E8B8, 0xA8768740, 0xA6FA345B, 0x3603CA34,
    0xF02602C0, 0x00600801, 0x2D23BA58, 0x693C1CA1, 0x7E511B4F, 0x04246A61, 0x581672A0,
    0x9EE01DA6, 0x7454A97B, 0x1A094EB8, 0x02DA8DA1, 0x1C02202E, 0x900D00E0, 0x280A1B00,
    0xA045F33B, 0x17080351, 0x008252A8, 0x0F7E2856, 0x830F77D7, 0x9CB19045, 0x16224A9E,
    0x972CA650, 0xA9702203, 0xB8002601, 0x95C64404, 0x01723CAA, 0x39971674, 0xD0127822,
    0x5DB39574, 0x4A23AAB6, 0xA770A371, 0xAA802E03, 0x2501874F, 0xB0333957, 0x225AC17E,
    0xA902A004, 0x00235C27, 0x4BE6FCAB, 0xBF2036F8, 0x1222ACF8, 0x63C8AA8C, 0x037AEA00,
    0x802C0170, 0x15403142, 0x5C222ADC, 0xB5929228, 0xAC803003, 0x7801B7B3, 0xB2874C36,
    0x207AE9AB, 0xB9AECA64, 0x49890295, 0x76F01F82, 0x8803093B, 0x71B5AF7A, 0x5997E801,
    0xC602003B, 0x7AD30248, 0x4725FA03, 0x51208B04, 0x682D8167, 0x001807AF, 0x37B0D026,
    0x19CA93B0, 0x00C1F9B1, 0x2D594AB9, 0x07C48D98, 0x69790354, 0x1EA9D2FA, 0x100F1ECB,
    0x6FA753B2, 0x2B0038A6, 0xCB1BB1A0, 0xB2B93827, 0x1C0061B7, 0xD03A5958, 0x9A6886B1,
    0x74B28B34, 0xCB384DB1, 0x9C20271D, 0xB3B3702F, 0x59FD36A7, 0x7D336CB3, 0x161CEB45,
    0x30399FD0, 0x807AFD03, 0x9770B002, 0x18A5A445, 0x0031D0B5, 0x36A1602F, 0x38077950,
    0xAFA02600, 0x295CB643, 0x3B5E9D01, 0x86B0181B, 0x4686003B, 0xF7CB0058, 0x28702B8C,
    0xCEB6D21B, 0xF7FF0051, 0x86584979, 0x17ADF6FE, 0xB36C1510, 0x1B6B7AAD, 0xBC90301B,
    0x37F1B577, 0x5B9B3402, 0x3B00401F, 0x6B87AE89, 0x6D80051B, 0x7603B594, 0x50018467,
    0x7A5B4D02, 0x52021000, 0x58190333, 0x01C1B6B9, 0x8EB55903, 0x2B897C49, 0x2A4B0A5C,
    0x031902AC, 0x116ABA6B, 0x79F6B300, 0x1D807966, 0xC1C7ADF0, 0xB1026328, 0x131B4BB4,
    0x6BAB8AA0, 0xBB300C4D, 0xC4012102, 0xB03C592A, 0x2A50024D, 0xC1AF04A6, 0x602917CB,
    0x6717A07B, 0x12A40014, 0xB9D500D1, 0x20602503, 0x0A9F1532, 0x81A7BD3B, 0x84E03400,
    0x08671B63, 0x802903F0, 0x032008A8, 0x037EAAEC, 0x9A5B36A1, 0x196BE4A6, 0x39B1A013,
    0x36716B60, 0x03D02C00, 0x029C602B, 0xC9C2B321, 0x17278E02, 0xF7A3A141, 0x98761A7B,
    0x638A60B9, 0x1858A01D, 0x402610D9, 0x469032B5, 0x292EF004, 0xB9E20314, 0x007179C0,
    0x37770BE7, 0x54F9C1D0, 0x63C63C01, 0x6B171B50, 0x05DC7E88, 0x59D4D901, 0xA8199C1E,
    0x26E5B7EB, 0x5BC03200, 0x00AE190C, 0x967578B0, 0x029105C3, 0x31461A5B, 0x2AB217BC,
    0xBD203992, 0xAB63B517, 0xC37E85F8, 0xBB9BF1B7, 0x19263016, 0x8197C434, 0x031A1600,
    0x174D6C02, 0x77FA79E0, 0xB2627302, 0x0517072C, 0x43520251, 0xC5472203, 0x9F6AB17A,
    0xD7280247, 0x5B9B2E00, 0x201037AC, 0xCAC686B0, 0x3520102D, 0x68C71032, 0x602D187C,
    0xBA50397B, 0xF1B606E5, 0xE1A602CB, 0x60797200, 0x28802036, 0xBC298420, 0x010177C7,
    0xD6033B8A, 0xFB474F9A, 0x01C02F63, 0x198EC83C, 0xC4D900F9, 0x187C8E93, 0x6CC7E01E,
    0x9BDC73BC, 0x0399D57F, 0x24105C62, 0xFC3A49A0, 0x03115BC9, 0x4F732675, 0x8A850077,
    0x36675459, 0x2B29FC77, 0x9CAEBC80, 0xA05B9713, 0xB6943030, 0xD899C955, 0x8DB1077B,
    0xBD4739A8, 0x3C33178C, 0x73BB7F75, 0x5E5BF705, 0x9392B165, 0xC5918B2F, 0xB613CCCB,
    0x1CD4C7EB, 0xC370046D, 0x026DF63D, 0xA104B867, 0xC8036C93, 0xB415DCD9, 0x5B8C72CC,
    0x770CE06E, 0x6F037035, 0xC1076371, 0x6DB3EF00, 0x0E177CE9, 0x903A6750, 0x01C76CCA,
    0x0F01BBD6, 0x39F010B5, 0xCF988120, 0xB602815B, 0xCB9B03C7, 0xBFA01176, 0x0810A727,
    0xE1ABABE0, 0xD08A8002, 0x61004158, 0x1B24C22B, 0x84E3846D, 0xC842D031, 0x8B722FAC,
    0x7E7159D1, 0x9A827607, 0x8B22BD57, 0x00A106CE, 0x26BC57EE, 0x301813DD, 0xCCA03A90,
    0x75011782, 0x8CA303B6, 0xC09C6410, 0x5AD33BBD, 0xC59475E1, 0x76CCE403, 0x36AEC007,
    0x9102D170, 0x3CBBD000, 0x35D42CD8, 0xBB980021, 0x7AE9887B, 0xF6A16B59, 0x8342102B,
    0xD52C0F9A, 0x22017156, 0xEACE03A9, 0xC6BC117A, 0xB17FE107, 0x9D60801B, 0x753D6715,
    0x0879A9AA, 0xE676D550, 0x02236602, 0x6DBE3BA3, 0xF003156D, 0xCED6076F, 0x92CEF76C,
    0xB46103A5, 0xD3216381, 0x56137D7B, 0xC035595C, 0xC6A77DD4, 0x05B509FE, 0x9D07174D,
    0x01413CD8, 0x7103B922, 0x90117AED, 0x103755BA, 0x941CA83B, 0xA147D96B, 0xD95B99D0,
    0x5233B796, 0x2C72B8B7, 0xDA46E335, 0x8C02C156, 0xCB4A7BC7, 0x9FED2C76, 0x6400BBBD,
    0x0D803CB9, 0x00F135DB, 0xF1D2AA16, 0x879FD627, 0x31E10202, 0x0991EBE2, 0x3251CDD0,
    0x9F3BA901, 0xF0CEB7F1, 0x800B004C, 0x824D8E6F, 0x69D9F023, 0xCD4596F2, 0x024796B6,
    0x659E7C7E, 0xB8A6D38C, 0x269B5D2B, 0x64770B7D, 0xC0187B3B, 0xDA2BFBAE, 0x04796C93,
    0xCCFE3C00, 0xD8200325, 0x0A865D64, 0x7593C870, 0x807DCC91, 0x7F61E317, 0x5753CD12,
    0xDE97F1DF, 0x24A44592, 0xE00E8E09, 0x27F24312, 0x2EBA901E, 0x7011157D, 0xD35322D4,
    0xAD8056BB, 0xBD3F7F1C, 0xD1A2688F, 0x5B039675, 0x8022148D, 0xAB980BCF, 0x291E7B42,
    0x8782DF10, 0xDD0210C0, 0x70D8B25C, 0xDDD70347, 0x03702213, 0x2C2F5DBD, 0x5D25884D,
    0x1AAD7D86, 0x132699F2, 0x9B2AD990, 0xBCDD7D15, 0x555DF356, 0xC02D1CA6, 0xD5D77DE2,
    0xE0269E2F, 0x9D41B99D, 0x569CB415, 0xDC298CBC, 0xADFF884B, 0x1744AC7D, 0xB7253E30,
    0xCB56674D, 0xD37CEB15, 0x442E834F, 0x28E0844A, 0x1D602900, 0x24E391E1, 0x5E080062,
    0x01615D6B, 0x4E703C27, 0xFE1A4303, 0x2494D88F, 0x09267C06, 0xD8EED740, 0xD8373015,
    0xA2315DE4, 0x6C7A29FB, 0x2AC2178A, 0x46C67033, 0x5594C7D2, 0xE9702603, 0x1601F025,
    0x7A770170, 0xA7936500, 0x3ADB7110, 0xA33902A0, 0x1FE2F92A, 0x1ECE68FF, 0x603702F1,
    0x8E323CE1, 0x158B0B3C, 0x42D98ABA, 0x01F01C02, 0x0100C018, 0xC28250A0, 0xC2383D02,
    0x64D23338, 0xF8A6DE71, 0xEAC35200, 0x0822EDDE, 0x38358CD0, 0x4C39EA56, 0x1501934B,
    0xEE230130, 0x03600C10, 0x0CEC4913, 0x2A5BDBA3, 0xD93824E9, 0xC9036361, 0xD01F22EE,
    0x60A5C1B4, 0x2E982557, 0xE02002E0, 0xD5100C00, 0x34607603, 0x8280E4E0, 0xD7A11FDC,
    0x634648A6, 0xE269EE21, 0x8EB88ABF, 0x38ECE9DC, 0x202802F0, 0x00700C02, 0xFD012A1B,
    0xC30DE689, 0xE3530700, 0xFBEA67C4, 0x7133C42E, 0x0021B550, 0x8C9EA96F, 0xAA2BF005,
    0x90E02A92, 0xF2BB747A, 0x327FD51E, 0xE8949ADF, 0x81D78846, 0x093E12A1, 0x01400651,
    0x9001F01F, 0xD4084078, 0x1B762C01, 0xEB3DC00C, 0xE7794EAE, 0x9D5A3560, 0x7A8D05E1,
    0xA0170296, 0x701D8273, 0x172B1EDE, 0x9AE72630, 0xCF66FCE5, 0x9BF14A9B, 0x60180111,
    0x01801401, 0xD14E9C1A, 0x76624264, 0x1CF2AB48, 0x08003508, 0xB0086E70, 0x01F01900,
    0xE995502B, 0xAA1558A9, 0x0398B3AF, 0x211F503C, 0x5BE612B0, 0x2F4DF9A8, 0xB12F99A6,
    0x2BFE8E01, 0x1044135B, 0x1200E5AF, 0xA02D0280, 0x4C2E6F02, 0xC8219161, 0xC2151A04,
    0x51D01099, 0x024EF020, 0x592A03C9, 0x5BA8CFCB, 0x79F6EC40, 0x4298D1D7, 0xE4D191B8,
    0xFD01D8E0, 0xA00FD155, 0x02402901, 0x654C2028, 0xC46EDBB6, 0x01600623, 0x1801E016,
    0x655B0357, 0xF9AB3CF9, 0x9ADA85B9, 0x336B0062, 0x7B3E1B20, 0x71D14009, 0xE2423745,
    0x25344165, 0x5615FEBB, 0x48EBA352, 0x280D885C, 0xED29F447, 0x301E8E0B, 0x4406C6FA,
    0x153DF27F, 0x46B30260, 0xB075BEA0, 0x0D2C7E54, 0x0C1CF4C0, 0xFD60118E, 0x98420FD7,
    0xB0172832, 0xC3DA303F, 0x2C02663C, 0xF2B0E8D7, 0xD9B9F11A, 0x8B002846, 0x2FE9237C,
    0x6EF6EF2C, 0xE0400100, 0x0D058240, 0x5098441E, 0x0D8642E1, 0x003C0E1D, 0x1A8C0341,
    0xB8EA2C3B, 0x8141A2E1, 0xEA3D1D1B, 0xE450F0A8, 0x4D259248, 0x03309412, 0x30964AC6,
    0x7050C462, 0x9A4CE652, 0x44DE6D35, 0xCB4681A8, 0xA8402F96, 0x685419E4, 0x8C341950,
    0xA311A0D6, 0x2E168B05, 0x8960BC5E, 0x9AD4EA53, 0xF0783A09, 0x0041C1A0, 0x7E302581,
    0xEC55414C, 0x5E058658, 0x034A10C4, 0x6DB65904, 0x703D92DD, 0x0E0D6856, 0x1D242E00,
    0x5EC6741A, 0xBC6A32A0, 0x03619110, 0x241C0E87, 0x40200818, 0x6F0162F1, 0xC8263F1D,
    0x8F0E06C0, 0x80246838, 0x8726999C, 0x1459449D, 0x745A1CD0, 0x84350DE8, 0x403158CA,
    0x33180560, 0x2965A064, 0x198CB643, 0x10846236, 0x82444251, 0x14100702, 0xB85A3AE0,
    0x3C391866, 0x6231D0DE, 0x7184F2F8, 0x619CF361, 0xEA74F981, 0x0D001F33, 0x4102434A,
    0xBC521A03, 0x86C351B8, 0x5428150D, 0x20D0504C, 0x8EF67566, 0x8E38EC2D, 0xF6F04663,
    0x6F6049C3, 0x7EFEBA89, 0x980305FE, 0x12B62FC0, 0x82806210, 0xAD040E09, 0x12C7053F,
    0x3CE305C0, 0x05BA41CA, 0xA86EBB33, 0x30981E1A, 0x0832E9C3, 0x3403B630, 0x1231D104,
    0x8728EABE, 0x910B5417, 0x6C3AFFAD, 0x5F14844D, 0x17008C84, 0x03CB9864, 0x2A9C6F18,
    0xBB8E1B01, 0x70058721, 0xD3034AA4, 0x06418A82, 0x92448004, 0xE33A11AA, 0x9304A949,
    0x10A4B284, 0xC068FBE0, 0x60326928, 0xA866A146, 0x4D2F4AEB, 0xB4C6806A, 0xCCB2FA42,
    0xB0782A85, 0x2CCD13C4, 0x5B260369, 0x3605818A, 0xBEE864E7, 0x8C6852D3, 0x8A053D4E,
    0x761BCD21, 0x86CF60C0, 0xAE697016, 0x744504ED, 0x5B5B1602, 0x2D39D10F, 0x1CB8E1E0,
    0x21547062, 0x6964DE12, 0xDD2A1506, 0xC4160073, 0x1086A9E4, 0x01139D38, 0x08EB281A,
    0x201A1B07, 0x8606A0B5, 0x56C30A24, 0x5600B4D9, 0x70F85D38, 0x205332D6, 0x740ECFF1,
    0x1604E815, 0xD80B5867, 0x2978152F, 0xBD8D092D, 0x715E8272, 0x5D008180, 0xA5F1602F,
    0x52859946, 0x93511604, 0x0328DB16, 0x1DCFC148, 0x00B56D7E, 0x896B9E17, 0x8DBC0F86,
    0x79500172, 0x760181A2, 0xCA80E4AF, 0x6158748E, 0x5DB60DD6, 0x8179CF21, 0x965DE134,
    0xDFE12068, 0x01A80D28, 0xE55954D5, 0x82B90114, 0x830281AA, 0x56C09C81, 0x71FAD096,
    0xE85724E2, 0x480C8775, 0x7F4EF4BD, 0x80310E35, 0xF81DD016, 0x7C919263, 0x701BE140,
    0x445BA190, 0xA574C01F, 0x395DE497, 0x75B60EC5, 0x6F9CC9E1, 0x1DB8F8E4, 0x051444BA,
    0xF6225781, 0x381310E7, 0x541AA57A, 0x0EC6FA56, 0x0521D4FC, 0xA0A4F4FA, 0xD6A2985A,
    0xAD2DDB50, 0x04461AE4, 0x5731ECFC, 0x34280B3D, 0x5EC375BB, 0x61A68190, 0xB601C190,
    0xD7A1446F, 0x93D5C81C, 0x9056D3B3, 0xECFDEE79, 0xBF60ABD4, 0x57A0CC5F, 0xDAB85A1D,
    0x4651874C, 0xEBC1CC9A, 0x9766A0AB, 0x71F8C866, 0xC1900910, 0x9D0E1E65, 0xF5C903B3,
    0x023DBCB3, 0x8352DE4E, 0xC0C453D0, 0x9DF31EDE, 0x6B458233, 0xEAF4FB90, 0xA95C9032,
    0xB05F65BE, 0x332D9701, 0x8400CD80, 0xDC5472DD, 0x69B733A7, 0x1E182E1A, 0x1A3DA0C4,
    0x2C08CD9A, 0xE4C8F8BE, 0xB4F25B97, 0x9E9F1213, 0x56EC0DBF, 0x0D24FB01, 0x1B2D3B80,
    0x81CE17B3, 0x986067B7, 0xE00F057C, 0xBDE947B1, 0x977A00E4, 0x7D5DE85C, 0x56184AD1,
    0x3415FB70, 0xAFB5EEC1, 0x225A4E74, 0x54D0BFB0, 0x21982D28, 0xA3247F60, 0xC9C81D30,
    0xD6181E4B, 0x999812A6, 0x06AD3413, 0x7F209AC5, 0x1D1C738A, 0x0C492E70, 0x684ADC60,
    0x3E0C8100, 0x51426B26, 0x584AFD4A, 0x2EA80B9F, 0x1283AC07, 0xC2B702F0, 0x5CE00CB7,
    0x7EE1A263, 0xCAB2F018, 0x406CC0D0, 0x60ED4082, 0x921CC080, 0x51446F45, 0xC88A8A01,
    0x6C74151E, 0x41525003, 0xBE306908, 0x00C58A25, 0xE381A36F, 0x0C9D48AA, 0x2C0729F8,
    0x308C1918, 0xFCB434D0, 0x01388B70, 0x1054E7C1, 0xE70E33C6, 0x0E432E00, 0x80746111,
    0x83C76564, 0xB209B46D, 0x3B833842, 0x863ED1E2, 0x3E8DDE13, 0xB0142C30, 0x09328FD1,
    0x490F2101, 0xAE180C1D, 0x40523805, 0xC7D3A0DA, 0x5DC49A45, 0x1C8B438C, 0x011A392B,
    0x3B65C0CC, 0x508C2120, 0xD24DC8A0, 0xF97A7AA4, 0xE385295F, 0x30620E15, 0xA2101444,
    0x12395526, 0x256E4806, 0x68A59C2A, 0xCAA91022, 0x0345E0CC, 0x66D34158, 0x925CB780,
    0x31694004, 0x3347315D, 0x89A41780, 0x50549432, 0x030850E4, 0x21D32A5C, 0x0BA14334,
    0xC74D690C, 0x81684FF4, 0xEA0210CC, 0x7227AF08, 0xB0292453, 0x99CCB2E0, 0x8B3C0619,
    0xD054D506, 0x9A973E07, 0x84E43A75, 0x12816944, 0x0218F9EB, 0x3965C0C0, 0xF4866018,
    0xED591698, 0x50032153, 0x68B4F181, 0x8078C750, 0xA702F797, 0xA5B91282, 0x21743013,
    0x3EA79816, 0x0596EA2D, 0x0A86047E, 0x71160082, 0x788351B6, 0x231278CA, 0xF83663E9,
    0x27F28291, 0x92DD0900, 0x903A532B, 0x064FC80B, 0x7BA99961, 0x2A03A754, 0xF20287F2,
    0x72FD018B, 0x4A66104A, 0x2543A5B1, 0x0754044B, 0x4C990533, 0x2A44C98A, 0x25B4DC00,
    0x2DD54413, 0x0DE674FD, 0x9D9FBA02, 0x5667A69D, 0x29084035, 0x92AB5232, 0x231D04E5,
    0x66987B26, 0xF521A821, 0x4E516927, 0x00D2DB59, 0x3F6F5E2F, 0xD80BD35E, 0x26D03A90,
    0x6CAE4D6D, 0xFE0C4029, 0xB8E9C669, 0x2B71286D, 0xA72408AB, 0xA5BABF96, 0x29EC2E03,
    0x1D070075, 0x35F5EDFD, 0x636BF244, 0x0E3852C9, 0x353AB03A, 0xCAE52145, 0xA52DCF2A,
    0x2162B352, 0x93E2A9C0, 0x6E8CE63E, 0x2A45508F, 0xCD42F202, 0x5C25B6D3, 0x56C1E1C7,
    0x143B4399, 0x3976E0B6, 0xCAC42B7D, 0x3EA4DB59, 0x251547B4, 0x878C0B5E, 0x602EAB3C,
    0x4193179C, 0xC56B88E5, 0x068CBE95, 0x29CD15BF, 0xBB032279, 0x2C04755A, 0x6D74D752,
    0x8ED8386B, 0x65877CC6, 0x82CD50ED, 0x978A21C9, 0x60E3532D, 0x3F839755, 0x03D5CAAA,
    0x7BA61B92, 0x5E8082D9, 0x99B08CBD, 0xDB6627B9, 0x9003D39A, 0x1DFAABF1, 0x84FCB80B,
    0x666AB203, 0x4BCDCA00, 0x0260680C, 0xA0D36C08, 0x5A4B4DDF, 0x0D153C11, 0xA2BE4E18,
    0x660D80C1, 0xA0A292BB, 0x34FBBFE0, 0x7AFAE900, 0xE4DB0DE2, 0x41CB0A55, 0xD45344B4,
    0x062A6711, 0x3730B01A, 0x0D2F088F, 0x012718B7, 0x756E24F0, 0x9EA9990B, 0x983168E6,
    0x902A0B81, 0x16CA5CE3, 0x31F2B893, 0xB7603E59, 0xAC263ECA, 0x0AC0FD87, 0x1AA4D2F0,
    0xD696409C, 0x5C74322C, 0x40B1E514, 0x0832A960, 0xE78C028D, 0xC0700122, 0x01839F05,
    0xCCA5AE09, 0xCE669EF5, 0x0B0A9664, 0x1A838448, 0x1831D748, 0x1A0C126E, 0xC80F8045,
    0xB9494886, 0x19674680, 0xC0CC96E6, 0x4A9678B4, 0x99AAD008, 0x06287414, 0x03883028,
    0x29033056, 0xB9A500A2, 0x6191E604, 0x4F483EF0, 0x7E0B0225, 0x52D97601, 0xC67D2269,
    0xC0800120, 0x834A6C0A, 0x9179DC12, 0xA95AFD18, 0x1E3EC2C7, 0x8EC1A0E9, 0x8E0B6325,
    0x7002902A, 0xE38C2F60, 0xE9E00874, 0x50841647, 0xF5D6BF06, 0x42E0444D, 0x00E639A2,
    0x094A2A8B, 0x0590367C, 0x49C8F3C8, 0xCFA280B1, 0x56610148, 0xA938DA39, 0x8074CB80,
    0x4B98C869, 0x4181ADAC, 0x00D20EA0, 0x9300D416, 0x04C16834, 0x50C457BC, 0xE7D8696F,
    0x2B6089BE, 0xB35B0353, 0xA611B405, 0x4CFC09C1, 0xA0B00D6C, 0xEF4B0476, 0x5F801D12,
    0x2A5C02BD, 0x0F13F026, 0x0096EA16, 0x3696C0A0, 0x07B880E6, 0x134E13F0, 0x60220665,
    0x86030671, 0xE5538B43, 0x817A923D, 0x82900466, 0x068CDB8F, 0x2180B02C, 0xE313F015,
    0x4BE420BD, 0x710A220C, 0x28A9F2DA, 0x22A9B540, 0x301066B8, 0xB88CDB02, 0x36802C28,
    0xEB202400, 0x0240BB7B, 0x4C1FDEFB, 0xA24A1621, 0x4289A54F, 0x0263F6AB, 0xE545E850,
    0x301F0627, 0xD0300064, 0x2A69DA82, 0xC06C1976, 0x02CC4973, 0x269D7771, 0x4C971016,
    0x9A009321, 0x2A5D2DBF, 0x0F7600A0, 0xA96DC830, 0x0BEAE16B, 0x6E367659, 0xFAF09AF7,
    0xB6583638, 0x01500263, 0xE6DBBF87, 0x40B8882D, 0x23A97012, 0x290385EF, 0x51D19D97,
    0x336D82F8, 0x969226DE, 0x2345A7D4, 0xDBC00D80, 0x010032E9, 0xEB1D5E70, 0x0645EB92,
    0x44DF25C3, 0xD35E53B3, 0x1C5EA4DB, 0x1270BA1C, 0x23CB4A30, 0x501B066D, 0xF05E05B5,
    0xD9334F70, 0x1225866F, 0x953F7AE2, 0x066AA68E, 0x6B0D0E5F, 0x9BDB3F6A, 0x0490C047,
    0x198480F0, 0xFC1397E7, 0x9AFB72DB, 0x7FA7EA8B, 0x20DEEA93, 0xC029D4B7, 0xDB3F5C07,
    0xFCD97418, 0xF841200A, 0x11035288, 0x61EB0030, 0x7A4C23A3, 0xBF5BD001, 0x8FB97892,
    0xFBE131E8, 0x9B83E2AE, 0x82352393, 0x6A0A8048, 0x0110DA1A, 0x0F9D08C4, 0x2BE39F90,
    0x8C9BEA40, 0xF6B340CA, 0x84063E50, 0x80E0A481, 0x15006B7D, 0xE2EDB2D8, 0x9A535512,
    0x022C3B02, 0xE09240DC, 0x0098F895, 0x0C8888EA, 0xF0F18170, 0x8951383B, 0x00883B9C,
    0xDB7A80B8, 0x80E817A3, 0xF41A8C07, 0x8AC88ECB, 0x91189AC1, 0x008E1A6F, 0xD80B8058,
    0x01D81CB4, 0xD781A985, 0x5B243E28, 0x9EF00B01, 0x1780E802, 0x901A16A8, 0x3C880B01,
    0x221C598D, 0xC425ADA1, 0x8F8A7689, 0x008CD277, 0xC8048038, 0x81CC2A32, 0x4881C9DD,
    0x72CB8179, 0x8843FB3A, 0x24010002, 0x701AA143, 0x9A8B1C01, 0x3526429F, 0x10020A94,
    0xC180CAB8, 0x0380109B, 0x981380E0, 0xAFE81D0C, 0xF201D13F, 0x280800C0, 0xC3000900,
    0x19C303E2, 0x33C88120, 0x0D901280, 0x1A1268A8, 0xA80C0158, 0x1069763B, 0xC3818A4C,
    0x70994443, 0xC2514928, 0x060008A9, 0xA14B80A8, 0x1F6C4A01, 0x1B44A01C, 0x900D0128,
    0x801081BD, 0xD7B1500A, 0x5B5500EB, 0x81A81300, 0x68014C30, 0x389D16F2, 0xC58BBD0D,
    0x0E806899, 0x92CF17BC, 0x8068010A, 0xFA811807, 0xC01D01DB, 0x01D43B01, 0x0934B81E,
    0x5000B138, 0xC2B80F00, 0x2231231A, 0x70013714, 0x43090000, 0x833C0816, 0xC0ECB3A9,
    0x893C6ABE, 0xF320E266, 0x3801892B, 0x81400B00, 0x7081C015, 0xF0F8C3AC, 0x81981DC5,
    0x0880F015, 0x2800B658, 0x01080580, 0xE301C816, 0xA41481B0, 0x01601ABF, 0x08B5500C,
    0x38D70150, 0x39C01B0D, 0x0B14ABE7, 0xE2B8AF00, 0x81009BC7, 0x923B098E, 0xC0058010,
    0x81701200, 0x1E45E11E, 0x401D45F1, 0x4320120A, 0x04001084, 0xC9A300E0, 0x8E3C9B81,
    0x1A2EDBB2, 0x480A0170, 0xB87008BB, 0x1A43C9A3, 0xC4A50148, 0x14F80216, 0x95B67922,
    0x300989C4, 0x0922A62E, 0x0C808002, 0xD91EC520, 0x1979B201, 0x18C8B81D, 0x300E8138,
    0x807B0B00, 0x4A0F000D, 0x69F6A384, 0x32447746, 0x00A68016, 0x741400B0, 0x344C86B6,
    0x0C808163, 0x9CAC288C, 0x2672B089, 0xFF3A881B, 0xE8080040, 0xBF749080, 0x8B8F8C84,
    0x3817C72C, 0x00500F81, 0x0637D802, 0x880F8088, 0xCB8CC681, 0x1B01DCC7, 0x40130138,
    0x8D940632, 0x83B0A814, 0x600D0020, 0xB7C2323B, 0x3DC3280C, 0x7A290149, 0x89ACC13B,
    0x01A0E1BA, 0x50028823, 0x01400980, 0x8B819816, 0x1954CC70, 0x019148C7, 0x07009015,
    0x2081BD28, 0x016C7580, 0xCECB33F7, 0xD81D4E14, 0x46781881, 0x1A439204, 0xA8D8CA30,
    0x80701301, 0x4D80B3EF, 0x2309210B, 0x12F446C2, 0x8A8A235C, 0x7099CDA3, 0x2E41AA00,
    0x04C89081, 0x80118110, 0xCB84B301, 0x8C88B45E, 0x400B815C, 0x447884CE, 0x1681180E,
    0xACE84FA0, 0xB93C2A8C, 0x06CE4809, 0x8C1D9258, 0x0138198D, 0xE5C62A68, 0x00A4CF0B,
    0x939C2301, 0xD98ECB7E, 0x2899CF4C, 0x1491CC80, 0x0D00B0DF, 0xB01B8130, 0x4B8CE901,
    0x3ACA181C, 0xE810819C, 0x0850AD80, 0x0D80B802, 0x6C3A4830, 0x4A19F69F, 0xABBB381C,
    0x30088863, 0xC5343101, 0x110A2AD9, 0x10003CC8, 0xCA680C00, 0x6498BD1E, 0x092FC583,
    0xA428BD3A, 0xC789BD0C, 0xB8A291E2, 0xC3B0E343, 0x1A01DC8B, 0xC0128150, 0xCE480300,
    0x0F44D881, 0x9CB1C298, 0xC8BC9C51, 0x05010A17, 0xA8844558, 0x37B01500, 0x14431477,
    0x5801BEC0, 0x8B4C76D3, 0x20811818, 0xDA0A92BD, 0x52741A92, 0x852CE09B, 0xE45F1DDC,
    0x81601C01, 0x0780E815, 0x0B0B0038, 0x00600300, 0x1801600F, 0x1CE088B0, 0x43B997D3,
    0x0500D48E, 0x549F4930, 0x2D9BEDCD, 0xEF3FE895, 0xE8088019, 0x0D70A1BB, 0x2E80A815,
    0xF8091245, 0x53ECF69C, 0xA380289A, 0xA4B1D1A3, 0x0090108D, 0x02CF7480, 0x1A744CC8,
    0xD49C8BCB, 0x1D0E40CA, 0x280AC868, 0x00CC80B8, 0xD74BA08A, 0x7C800128, 0x1DA98080,
    0x0D0168BF, 0xD11BC160, 0xD5B150BA, 0x15091D56, 0x588ECB20, 0x80B80D81, 0x00800568,
    0xF0090008, 0x49B01200, 0x0E55EC71, 0x181B44BA, 0x8B148F01, 0x0800D002, 0xA0D94775,
    0x006884CC, 0xF114596D, 0xC50C00E4, 0xC0980791, 0x9B56B235, 0xACAD8090, 0xB1C88D81,
    0x0A806801, 0x70D68110, 0x8CAD73CE, 0x0E013D00, 0xB3FFD2E0, 0x81000489, 0x31311BF9,
    0x50845204, 0x8A2810C7, 0x64C310BC, 0xF905D895, 0xBF51619D, 0xC2093D7F, 0xD8188CAC,
    0x806805B7, 0x1801680D, 0x1CB181B0, 0x8CAD0147, 0x16148CA1, 0x40098108, 0x8A9D9080,
    0x8D17D803, 0x63240A1C, 0x0844EED0, 0x36BF9004, 0x681912DD, 0x4D780B81, 0xA0005905,
    0xB5932DF2, 0x88FC1989, 0x0544792E, 0x901400F8, 0xD4948444, 0x72C71D49, 0xF81901BC,
    0xD3C00880, 0x8A8058C7, 0xB2E839AD, 0x80781401, 0xD680426D, 0x72144313, 0x005810D6,
    0x400F659E, 0x93791783, 0x80F09A5A, 0x10962305, 0xAD134E68, 0x912D864F, 0x5101ACB1,
    0x0D6A80C9, 0x0DA4480D, 0xA8430477, 0x1B7D80A4, 0x16100B80, 0x9E0D736C, 0x80E65BB4,
    0xC6D126BE, 0xFE0995BD, 0x2548C9C2, 0xCFA586DC, 0x0E011015, 0x65348028, 0x8110058E,
    0x9BD78CD1, 0x83AC0083, 0xAB147A00, 0x0B39B819, 0x38EAD618, 0x46818826, 0x050915CF,
    0x8D49DD1B, 0xC9E013B1, 0xF6DD5004, 0x380E8040, 0x4A8BD7C6, 0xAACFEB55, 0x389DDA0C,
    0x8FE3EF01, 0x8BA49004, 0xADA68161, 0x00008094, 0x00000000

  EW_BITMAP_CLUT_EMPTY( WasherBgHot, Default )

  EW_BITMAPS_TABLE( WasherBgHot )
    EW_BITMAP( WasherBgHot, Default )
EW_END_OF_BITMAP_RES( WasherBgHot )

/* Table with links to derived variants of the bitmap resource : 'Washer::BgHot' */
EW_RES_WITHOUT_VARIANTS( WasherBgHot )

/* This is a bitmap resource. */
EW_DEFINE_BITMAP_RES( WasherBgDelicates )
  EW_BITMAP_FRAMES( WasherBgDelicates, Default, EW_DRIVER_VARIANT_ALPHA8, 480, 272, 0 )
    EW_BITMAP_FRAME( 0, 0, 0, 0, 0x00000000, 0x00000000 )

  EW_BITMAP_PIXEL( WasherBgDelicates, Default )                 /* ratio 6.54 % */
    0x1C080100, 0xC1A0B048, 0xC06A1D83, 0xA1B0C858, 0x231087C3, 0xA3188C4A, 0x2981C1C5,
    0x71A43466, 0x8FC7A2E1, 0x3C8A4320, 0x43214188, 0x823C2A1B, 0xA5B138D0, 0x630F97CB,
    0xB23060BC, 0x009BCDA6, 0xC1B8EC26, 0x9FCFA7B3, 0xC4FE8340, 0xCE010331, 0x2A9348A3,
    0x2434CA5D, 0xA3309307, 0x22E98D4A, 0x2101C781, 0x2858C468, 0xA6808313, 0x80466D60,
    0x0CEC95B1, 0x1E0F4612, 0xEDB53960, 0xC22B18D4, 0x22A8F5CA, 0x78BBD087, 0x1168E681,
    0xBFDFAE60, 0x4C130380, 0xDBACA2E0, 0x6C6B2EC3, 0x42E018F8, 0x6831B28C, 0xD8202890,
    0x659580AF, 0xD0B8C465, 0xC303A2F7, 0x74534388, 0x056E5951, 0xE35379BB, 0xB4A291D5,
    0x41B0D7EB, 0xBA2D00AE, 0x03155736, 0x21983E40, 0xAA8CE183, 0x682695B1, 0x8CA17BD1,
    0x9A400E19, 0xF9BB6B60, 0x454AE0D6, 0x5D4D54EC, 0xD8E8072F, 0xDC2E03B3, 0x1A0C3BBC,
    0x2036420A, 0x4CC650CE, 0xC01735ED, 0xF9332B60, 0xBDDC03C7, 0x01619EDB, 0x3604CDBD,
    0x99F7EBAA, 0xFFFD8163, 0x9F14DE00, 0x30CDA27C, 0x90054882, 0x190CDEC0, 0x05517804,
    0x4307142F, 0x0650250D, 0xBC360452, 0x356D6040, 0x4820E03C, 0xDFB0E824, 0xF01C3788,
    0x0A2889E1, 0x1B730184, 0x094335BA, 0xD5005D35, 0x76E42163, 0x682000E2, 0x04071BE6,
    0x8481F488, 0xC2F5BA2D, 0x68A4110D, 0xE0370310, 0x3A756240, 0x93E468C0, 0x550041FF,
    0x27BA2E90, 0x48350592, 0x3D0A4358, 0x0A80483A, 0xDF50D633, 0x46D02F48, 0x59705465,
    0x30012508, 0x6AA4B6A0, 0xE508343A, 0x7949D99C, 0x483461E6, 0x2C03D360, 0x0D10C0D0,
    0x20089829, 0x69F82A02, 0xD4130C1C, 0x775900F4, 0x9D1675B6, 0xDD307800, 0x20E1A99B,
    0x669057C3, 0x40099B0A, 0x5C12FA36, 0x02001937, 0xD0559A54, 0xC8137699, 0x280CE120,
    0x42535558, 0x43254E9E, 0xA9CC060B, 0x524A0D40, 0x300E5A9A, 0x6BABEA68, 0xE68AC5CB,
    0xE4DAAE0B, 0xD5860D81, 0x1D7A0210, 0x0D50C63C, 0x8054DC1D, 0x954EC20B, 0x0A4F5C43,
    0xBA8882E0, 0x0683B6A6, 0xD81B86BF, 0x2B562C08, 0xE1D70D51, 0x5A0C41C4, 0x6C2A708A,
    0x2C808C01, 0x80783657, 0xC2E65AD3, 0x3A0DC324, 0x07646BD8, 0x178B76DC, 0x6B896951,
    0x74095870, 0x33442F9A, 0xA2D47B2C, 0x1FEA016C, 0xFA92096C, 0x8538A242, 0x0FC2EE50,
    0x0E13C0CD, 0x41389E72, 0x7C0AB90E, 0x1C260E97, 0xF85832AC, 0x0D513C72, 0xC084DF05,
    0xF7AE8609, 0x3DA598C2, 0x335B02E0, 0x4DE560B0, 0xF2EC6C27, 0xE5D93CB3, 0x240A87E1,
    0x3A5E7269, 0xD3F2B4D0, 0xF4207D4A, 0x891432D0, 0xCC260054, 0x95B80368, 0xB3D5A069,
    0x936BBC25, 0x944B439D, 0x1436D15F, 0x2F00DFFB, 0x5074BC04, 0xF5097696, 0x5AC137DC,
    0x2729C776, 0xAA078025, 0xDC81D9FE, 0xC3606D7E, 0x6D882446, 0x0F530593, 0x3050C31D,
    0x015F6C4C, 0x1ABDBD75, 0x6E577406, 0xC777AA53, 0x1452EC44, 0xA06CFCEC, 0x02501D7E,
    0xA672AA5B, 0xFF9980D4, 0x330E9409, 0x08DE8D38, 0x97AE4A93, 0x6E5B860B, 0xA7A841FB,
    0x4AD5836E, 0xE902D01D, 0x14DEF02F, 0xD42F9E04, 0x394A7873, 0x0DEA68C0, 0x0E9410D5,
    0x5D9D1C34, 0x7EC83C08, 0xDC150F17, 0x2547FDAE, 0x0CB77C28, 0x00553422, 0x09E7A40B,
    0x483404D6, 0x6A0B0348, 0xF3376526, 0xC3950AF4, 0x805DD9EE, 0xF3D6C943, 0xDBE00317,
    0xD9102FF7, 0x580993F0, 0x1981E006, 0x18066640, 0x065211B0, 0x8D058190, 0x23577DA0,
    0xE6EEF781, 0x05D8BBB1, 0xC0D9B163, 0x3CF7F2FD, 0x83EFF9CA, 0xCD407902, 0x8E8337E0,
    0x7D01C580, 0x0464885B, 0x8C019385, 0xC0305480, 0x8270ED40, 0x8FC12980, 0x4BB17906,
    0x01E360F6, 0x2F507192, 0x08205030, 0xC48287FD, 0xD1068C71, 0x8E034B0A, 0xB8181E53,
    0x580726AE, 0xF3348481, 0x605CA5C4, 0x1B3B7782, 0x8196485E, 0x0025CA19, 0xFE01D020,
    0x1C24987E, 0x43886040, 0xCB1600E4, 0x28B0AB56, 0x73C65820, 0x5240FF01, 0xE795A080,
    0x8A6B8E05, 0x3C67E11D, 0x0760E0EA, 0x6014C027, 0x3236E5E2, 0x270744F2, 0x0F10E340,
    0xCDE64230, 0x71728CE0, 0xE38D01A1, 0xA07891AF, 0xC1183466, 0x00C2951C, 0x870EA533,
    0x0A81D9D5, 0x12996790, 0x4990CEC4, 0x151541CA, 0xB0023DA9, 0x9B6593C0, 0x42FD2241,
    0x49E98881, 0x59A81224, 0xC4203A0C, 0x8F8E0DE1, 0x7522D10B, 0x9F835074, 0x8504F00D,
    0x2A0EE544, 0x3DFF4AC9, 0x38329805, 0x22951781, 0x40A4E323, 0x00111E90, 0x03438A0A,
    0x5385CD87, 0x890B24C0, 0xB04492EC, 0xC9052014, 0x5A0EA434, 0x6E66CD80, 0x2CB0024F,
    0x32FCFD1B, 0x277CF200, 0x00411766, 0x82C0644B, 0x00252E4D, 0x92E4FBB9, 0x368258FE,
    0x2F01A52E, 0x3F2A1370, 0x0E771E06, 0x44C04CB1, 0x68AE6020, 0x64A99C1C, 0x0BF81F9F,
    0x0309C2E2, 0x07688E61, 0x521E902F, 0x85037020, 0x3B06F42E, 0x9D439908, 0xC585C469,
    0x697F3480, 0x60287999, 0xF4DA9A81, 0x8E2B9DA6, 0x9728580C, 0x7532340D, 0x0E55D2FB,
    0x69820072, 0x3E8C047A, 0x764F693C, 0x7E95B790, 0x8CE18450, 0x82E72401, 0xC0C99A80,
    0xAACD5806, 0x2ABAB156, 0x00C5829E, 0x28270A1A, 0x1C838575, 0x239480B0, 0xC6884031,
    0xCC1CD0B8, 0xDD4EABC0, 0x0981115E, 0x14FE98AD, 0x8BF56F26, 0x51EA393E, 0x0411894A,
    0x04C8F4ED, 0x93CA7066, 0x7178492A, 0x80DF1FED, 0xFA408319, 0x9C6B0245, 0x284C0C88,
    0x33849597, 0x81C34BA8, 0xD220600E, 0xA8605C8B, 0x0EC9FD4A, 0xFF589B28, 0xF8AC5555,
    0x0EE8CA6C, 0x18150323, 0x480126F5, 0xE6396441, 0xAC91D93C, 0x88F00D04, 0x52606801,
    0x5D20EEA5, 0x00A0FDA5, 0x1947C9C0, 0x1129B4A8, 0x184BE788, 0x06001724, 0x203A87F0,
    0x20016A6A, 0xF6860D81, 0x2E0D8E90, 0xD11A7D08, 0x05939A59, 0x63C89DB3, 0x0A94A820,
    0x648295DC, 0x380DA3FC, 0xBC024100, 0x2CCAB0A0, 0xABB56041, 0x972AB03D, 0x4B09C863,
    0x152BCE09, 0x2C209019, 0x2A2BA510, 0x10034B35, 0x2500B4F0, 0x395B17E0, 0xD23903B8,
    0xB8298D17, 0x306AC2EF, 0x14B5CE55, 0x8A4D16AF, 0xE1205A01, 0xB0CE2D7C, 0x0881B03B,
    0x1100AAD0, 0x3B90D828, 0x1F3F8168, 0xFC093B7C, 0x5AD88032, 0xEBC000CA, 0x0DA8191C,
    0xE88DDC29, 0x8378FF75, 0x01113C12, 0x0EC1A020, 0x1E3F98C4, 0x68C586E0, 0x99804044,
    0xDEF99157, 0x14360424, 0xAA320D0D, 0x209C0114, 0xEBEAF9BC, 0x0388FF42, 0x54E03814,
    0x09808007, 0xEB03C06E, 0x4E900C9A, 0x14F6B246, 0x1ED25114, 0x9E170245, 0x896E0CCA,
    0xF65E1A94, 0xEE8943BA, 0x2EF0240A, 0x06206406, 0x3AD8165C, 0xDBE6AC57, 0x338F95ED,
    0xE6DE9F08, 0x90991F2A, 0x36584637, 0xECF158D7, 0x00673D13, 0xC0980170, 0x03A06207,
    0x07892F22, 0x1A342E8A, 0x601B3007, 0x23BA60D2, 0x9B9440D9, 0xECA4CDD3, 0xA65A8F91,
    0x40774974, 0x93181383, 0x81301800, 0x5A00760D, 0x0400F0FD, 0xD7A66EA2, 0x454C69A0,
    0x9DB599C5, 0x3802091D, 0xDF5963AC, 0x4839B345, 0x89F00401, 0x78440880, 0xDF9666C8,
    0x6C19CA0E, 0x79601634, 0x51C1448E, 0x2A452002, 0xBD0560C9, 0xE18BE5C4, 0x3F675B57,
    0x1E21073B, 0x57F80281, 0x20800900, 0xB4E83506, 0xC18066FC, 0x47F22B6E, 0xBA414DC5,
    0x48816243, 0x38932623, 0xCD874141, 0xE7775985, 0xD832DA05, 0x701BA3C0, 0x36697901,
    0x41983B60, 0x4CDDFD6E, 0x753BAC08, 0x12C9BE14, 0x0171A53D, 0x935ABC2D, 0x88A57876,
    0xAC0B82C9, 0x80040032, 0xB04E0740, 0x00A41DEB, 0xA4571CAD, 0x4DEB8B6C, 0xD1800491,
    0x0A019277, 0x0A906CD2, 0xB1585C18, 0x71B3F956, 0x710C83C0, 0x0EE90180, 0xB0160240,
    0x7CE78180, 0x958EC7BB, 0x81526B00, 0x06A99F8F, 0x07091654, 0x0AB2EBF8, 0x65447D2A,
    0x4E0B34ED, 0x100381A0, 0x6C8AEAFD, 0x50619319, 0xC0288BEC, 0x4192C259, 0x56020FB2,
    0xECF6F6C6, 0x7441C9FB, 0x0F82A073, 0x0201A068, 0xFBDC3B78, 0x03903EF7, 0xA5C43197,
    0xB4744692, 0xC486691E, 0xD4F75901, 0x6D905056, 0xDE092FC0, 0x0B81ABF3, 0xC5D06046,
    0x1301B1A3, 0xCFC9D552, 0x87810314, 0x4AA40224, 0x19BA811F, 0x80D7BC73, 0xE3811F6B,
    0x83438EF7, 0xD3C078EB, 0xFDD6EF9E, 0xD3615D68, 0x62011083, 0xF00D4D9E, 0xDC1A32EE,
    0x700620D8, 0xBB713701, 0x60C8EF73, 0x49301AE3, 0xC790660C, 0x82995C83, 0x0AC15836,
    0x0E298E5C, 0xDDF83F00, 0x5E0AC1DA, 0x3DDBFC6B, 0xF82C02E0, 0x9409EACE, 0xCB909068,
    0xFE8F9678, 0x833227FC, 0x38AD62A6, 0x1E11F206, 0xD1BC3547, 0x70301501, 0xE86BD019,
    0x803A2DD7, 0x5C27ED6A, 0x8501E006, 0xF1DD7472, 0x01411F22, 0x0348F150, 0xD1B56E01,
    0x56118330, 0x1E0141DF, 0xE7990171, 0x2140331D, 0x39684017, 0xB4E90331, 0x0381FB80,
    0x8A80F570, 0xA0150034, 0x2F91BC02, 0x031177D7, 0x14DC02A0, 0x01D00076, 0x32112814,
    0xC75D4F80, 0x7DD03215, 0x8D501103, 0xC22F0332, 0x10278A00, 0xF0031008, 0xE24C82E5,
    0x44383280, 0x2D014001, 0x52C235F0, 0x10567403, 0x2B1C6159, 0x52184D80, 0x00255E81,
    0x4E0347D5, 0x57FA1052, 0x4990322D, 0x23208738, 0xE8547E70, 0x82A03047, 0x02420857,
    0x21EB01C0, 0x1290312C, 0x35010106, 0xA1056733, 0x18881C00, 0x0383E033, 0x51E549D1,
    0x6AB83F7C, 0x0F02E792, 0x81077EC0, 0x87577F54, 0xA103B177, 0x95718796, 0x75A33400,
    0xE55A902F, 0x62071DF6, 0x21C5AB10, 0xC310478F, 0x58A11646, 0x79A59610, 0x3768F7BD,
    0x889728B1, 0x61917A89, 0x0352B89C, 0x77FB8400, 0x1052E818, 0x474FB01D, 0x27F71066,
    0x02C0311A, 0x00633756, 0x21028A58, 0x03074177, 0x2C61A8B8, 0x660B03B0, 0x03813D8B,
    0xF48B9031, 0xE8BD3E85, 0x42883E28, 0x8385F27F, 0xF10D8DD1, 0x1BB11E1C, 0x1842C27F,
    0xD22E8410, 0x14B84802, 0xD652587B, 0xA5303F28, 0x0115C18D, 0xA7277493, 0x60281036,
    0x11E4B228, 0xC7205676, 0xC01A1065, 0x50603112, 0x2B7926AF, 0xF1607CF0, 0x8F385200,
    0xD103B140, 0xF52B8F68, 0x1518E419, 0x76553032, 0xD4D968E4, 0x4F31A23D, 0xBD5EE11E,
    0x62820341, 0x7414AF00, 0x031813A0, 0x380A0220, 0x02F0398F, 0x6891484F, 0xD2778824,
    0x3981037F, 0x068E2032, 0xF1A16AA1, 0x1048B287, 0x03448583, 0xD8202181, 0x93F33D22,
    0x36016172, 0xA82E82D0, 0x93218B03, 0x900195F4, 0x87421DD8, 0x6B555529, 0x8893C121,
    0x11205DE8, 0x7B803902, 0xC38EC021, 0x81818712, 0x03C02800, 0xF779E8B5, 0xE9508313,
    0x22D8C554, 0x253BC243, 0x411F8C30, 0x5AC6CC00, 0x041207B8, 0x11027A40, 0x22D64B00,
    0xA5588035, 0x30328341, 0x03A79E85, 0xA596D6DC, 0x22110075, 0x00D32179, 0x87104948,
    0x73301528, 0x26782414, 0x9E1D9653, 0x982E6FA8, 0x98A8F503, 0x6200F5DA, 0x599F29F9,
    0x18790513, 0x2075687F, 0xC2414CF1, 0x1818784F, 0x2D015001, 0x774A8740, 0x9A07753F,
    0x4166C571, 0xF9820312, 0x16E2197A, 0x051388BF, 0x421B9450, 0x1E871B03, 0xBB019001,
    0x06B28D56, 0x62C9B848, 0x899A300B, 0x41228A91, 0x1F48BD18, 0x25009147, 0xE1921528,
    0x2C700720, 0xCE63B986, 0x262C9CF7, 0x8C676402, 0xBA135974, 0x59A52687, 0x9BB31A13,
    0xEF1FF44E, 0xC95E0092, 0x03954A94, 0x0F9E4822, 0xD9D20116, 0x64F99512, 0xAD032825,
    0xB8A71471, 0x6E203121, 0x180031DA, 0x602502A0, 0x79C00F4C, 0x3B5279B4, 0xF9FA94F0,
    0x22D6A560, 0x23979032, 0xD9930071, 0x30F3D112, 0x2F1A19E7, 0x06FD0360, 0x9680231D,
    0x1102A462, 0xB0012A70, 0x8D460900, 0x0803B5D7, 0x860FA15A, 0x2AC24181, 0x279CA147,
    0x78CC0367, 0x9AD4B913, 0x0F1DA4D7, 0xD7175D60, 0x4D801302, 0x279CB9F4, 0x49914EB5,
    0x8864EEA3, 0xF912D917, 0x101B1385, 0x18F40619, 0x32A59A58, 0x40232590, 0x02A10689,
    0x5C7FCA51, 0x501F1D09, 0x6F013F3D, 0x4201702F, 0x34970084, 0x3F348664, 0x89A4E8EF,
    0x1204A055, 0x00614772, 0x2801D01B, 0xDA7C0270, 0x028A7CA7, 0x6401C020, 0x70011239,
    0x91921B97, 0x320051DA, 0x17828D50, 0x38001A03, 0x75019005, 0xA302A111, 0xA7291324,
    0x0496F571, 0x114A7AD2, 0xA9F78900, 0x5E002AA0, 0x1019117A, 0x9FF1A1A2, 0xF600D1D8,
    0x103A2499, 0x0027A571, 0xD12F200A, 0x82249CC5, 0x9F903603, 0x0960FA98, 0xF112A610,
    0x1F69AA52, 0xA8AA601D, 0x81D85D99, 0x47F1AA4C, 0x0702B033, 0xE6401048, 0xAB459A02,
    0x6E47F1D5, 0xE5C1AB96, 0x9037B38C, 0x07004123, 0xDADCADB0, 0xA4D007AD, 0x9800611F,
    0xC1B1A1A9, 0x14396926, 0x064316F0, 0x300D4D80, 0x2946BC66, 0xD4AE459A, 0xD9015A5A,
    0xA1403422, 0x2800B136, 0xD84C0350, 0x034AFEAF, 0x4743B02F, 0x12548F81, 0x0111D89C,
    0x244169E1, 0xA67DA2A3, 0xACF02C01, 0xF35A3768, 0x677D648A, 0x54796C6E, 0x8B9E7029,
    0x912277B3, 0x2F520490, 0x090161DA, 0x329634CB, 0x00244F02, 0x4346A007, 0x213DAAB6,
    0xB13B0278, 0xFD2F15F4, 0xEA835929, 0x1125CE11, 0xDB6E3425, 0xA0312544, 0x26D1B093,
    0x3759A564, 0x501C02D0, 0x00D0057A, 0xD19B3023, 0xE03945B5, 0x5A5B30B3, 0x3D79222B,
    0x6011122A, 0x1378E6AA, 0x1C9F0944, 0x600D1A5B, 0xAD1AD003, 0x162AC6F0, 0x10014D80,
    0x64344501, 0x6A3F7324, 0xF88E4C4B, 0xB515C1B4, 0xAF02B9AD, 0xF61D1189, 0x12090C52,
    0x5B27740D, 0x2A65195B, 0x02E7173B, 0xEF010020, 0x00160032, 0x03602D02, 0x58035034,
    0xEB450335, 0x40566AB6, 0xBDA23254, 0x084A11E9, 0x135B0611, 0x9CA9B97F, 0x10021D85,
    0x6F03F939, 0x20032037, 0x37306370, 0x00A00A00, 0x8EABF003, 0x600554EB, 0xAD3946A8,
    0xA9152B36, 0xDB951F79, 0xAD80341D, 0x490061A5, 0x247F36F7, 0x00D0197A, 0x71BABAA3,
    0xC9BF0085, 0x13502FB3, 0xA81309AC, 0x078D122A, 0x1AF98998, 0xF058659F, 0x2BB04EB6,
    0xAD662CBC, 0x3502EA06, 0xB83B104B, 0x1359397A, 0x33022001, 0x0AF8A1EB, 0xB2C02B1B,
    0x3C03A3D6, 0xFBD69D40, 0xABC00660, 0xF51229D3, 0x154D578A, 0x8FA5A712, 0x07182BB8,
    0xC6946800, 0x6A2BED1A, 0x2DBE301A, 0x11223E01, 0x1C016FC0, 0xDB01B122, 0x190716E9,
    0xBE80101C, 0xFF4883F9, 0x0B1E685B, 0x85603697, 0x2EC15102, 0xA1209201, 0x57921BC1,
    0xB24611B1, 0x3A3303A6, 0x9D65F4C1, 0x06A2579A, 0x27FB3901, 0x11E73D03, 0x3229EC2C,
    0xB182BEC0, 0xC25C23A8, 0x5E8F7C26, 0x7BF5A377, 0x16D86510, 0x0312075B, 0x5A637248,
    0xB5F48C19, 0x39C2441C, 0x0BE260FC, 0x4B5BDB8A, 0x04B4E9A8, 0x32C24121, 0x01B1AEA5,
    0x385D0B23, 0xC54EC4BC, 0x12FBF098, 0x2711FB92, 0x4C349C09, 0x998B9910, 0x1F17FBD5,
    0xBC49C590, 0x50EC5CC5, 0x1895301F, 0x510589BA, 0x8C78DD4F, 0xD55C9684, 0xBB731322,
    0x6ED00614, 0x6FC6EBFD, 0x20074ACC, 0x11E2C3C0, 0x17278639, 0x1BC9000B, 0x1A55752B,
    0xEAAE7007, 0x8C83C824, 0x838C0A46, 0x52102C2A, 0x1C331A13, 0x2E6A1792, 0x1D1807A5,
    0xA464C920, 0x50EC95C4, 0xD58F900C, 0x8103B972, 0xC94672BD, 0xAD30B48C, 0x002A1956,
    0xCA7C6DC1, 0x0B3584EE, 0x31701B5C, 0x9FD00847, 0x6A107A1F, 0xB03152E4, 0xAE21724A,
    0xB8C5ACA4, 0xD2584CDC, 0x9EF5A97C, 0x179811A2, 0x384BC1E1, 0x012180A0, 0xA66CEA66,
    0x6443CCBC, 0x16EC5F97, 0xEBBCF032, 0x46319A89, 0x3431EA10, 0x171816FC, 0xCCB7CB60,
    0xBC4443CD, 0x362D59C4, 0xCBB51839, 0xC434739E, 0x8A03631C, 0xEBFC1728, 0xCEECDB6E,
    0xC202341F, 0x915B22DA, 0x652CF847, 0x1E791AE4, 0x117F8AD6, 0xCFEC3600, 0x96D00C94,
    0xB79400C3, 0x61503630, 0xD46AC239, 0xD935CF59, 0xCC9949C3, 0x12D11CA5, 0xBCD0395D,
    0xBF503230, 0x3C888C67, 0x0C860145, 0x160CC6CE, 0x21C6C01D, 0xA420D23D, 0xC07CDF1E,
    0x47CDF943, 0x6C8D1048, 0x4838012E, 0xD0D20028, 0x7D34C455, 0x30B9BA3B, 0x2688F9D8,
    0x31025FF8, 0xBDB38A2D, 0x4ABBBC7E, 0xED45C125, 0xCBB00D3F, 0x2A7BD1B6, 0x3378D582,
    0xCB268710, 0x48554C2F, 0x5CFF4A8C, 0xA9A3DAD5, 0x9402EC7B, 0x71CDC891, 0xD2DC9AD1,
    0x609B72B2, 0xFD420201, 0xC8B29643, 0x9D34FD66, 0x9152D374, 0x1F2AA557, 0x55CE3CC1,
    0x518086BC, 0x53B9B5CB, 0xAF3FDD79, 0x00332F98, 0x1DEC766C, 0x1C723721, 0xFD2F0323,
    0xD7503155, 0x89D7741C, 0x87983DBD, 0xC633795F, 0xB05F91CD, 0xEC745F87, 0xCD901117,
    0x9BD9A70E, 0x1D823DAD, 0x9348392B, 0x3B24EDA1, 0xCD78D26B, 0xCEC01914, 0xABD885E9,
    0x300B3B7D, 0x467A75D0, 0x8ADA1D9D, 0x4241D1C6, 0x1804CC03, 0x99D98029, 0x6DBBDBAD,
    0x52E9E63B, 0xA1A74A03, 0x71560331, 0xCA1D0B99, 0x6303317F, 0xDDCC603D, 0x309395DC,
    0x7C29FD7C, 0x2DAD0001, 0x7632B524, 0x80D84CB2, 0xB0340091, 0xDAA486DD, 0x1F396DDE,
    0x5826DBE0, 0xD599A21F, 0x0CB1518B, 0xEDD802E7, 0xDCA01817, 0xF1DB5DCB, 0x1ABB2E1D,
    0x6AD12EDE, 0x1D888BF3, 0x428DCAE1, 0x17EAF203, 0xA9DA801E, 0x3E02031D, 0x0162BFE0,
    0x26BB6DF4, 0xE93DB902, 0x02215F02, 0x2F9A8D5C, 0xF149C7D0, 0x3F9E0073, 0x169E3038,
    0x06A4395E, 0x63612FD7, 0x0CD6C000, 0x7DE52D8C, 0xBB9A8826, 0x3A678D52, 0x2E2BB7B0,
    0xD3EA362E, 0x1761B2CB, 0xEDC17219, 0x965DEA86, 0x3C56DDEE, 0x52E1E3DE, 0xA41DAED2,
    0xB9918D29, 0x7C7200F5, 0x173D95A3, 0x3C7C143D, 0x6E4CB930, 0xE069D130, 0xC13F4113,
    0xF3798888, 0x9DD2B1C9, 0x5A4E81AF, 0x2E5DE5CE, 0x7288612E, 0x37012245, 0xB578CF10,
    0xBAE0022C, 0x7713228D, 0xEE6A17FB, 0xE6DE5B79, 0x60BEF374, 0xF1AD114E, 0x5798EC25,
    0xB72C2B70, 0xA00D1B0B, 0xE6CE7E34, 0x2EE17E80, 0x5DE35E2E, 0xD6A12DE3, 0xC6E19E31,
    0x71B03B48, 0xE7F7E8DA, 0x01350E91, 0x072883C0, 0x8BD0132E, 0xE6AE2D5A, 0x51B1AB72,
    0x50BDB801, 0xA1E9003B, 0xAA3F29AE, 0xE092D1E8, 0x0A000618, 0x62B2E210, 0x0271B079,
    0xB143FE27, 0x3373EB3E, 0x00575ADB, 0xA4E66002, 0x1D681029, 0x17FE5774, 0xC379ED0F,
    0x034FEC4E, 0x5FDEBC01, 0x2EBCD146, 0x21024D11, 0x7F5267DD, 0x4916B1B1, 0x4B6DEB0E,
    0x4972E1ED, 0xF05FFC55, 0x5CD21534, 0x031E79E4, 0x14181A71, 0x6EE4EE30, 0xAE234FEE,
    0xF310EE83, 0x410DDC4C, 0xE55139D9, 0xC16C0D80, 0xA80BD311, 0xEF6B2F03, 0x9E95A306,
    0x4C4DA1F2, 0xDA0102BF, 0x7B2EC277, 0xB292181E, 0xB5303980, 0x602E1F08, 0x4110E935,
    0xB3724503, 0x782FE592, 0x7034254E, 0x002181A9, 0x3FEC102C, 0x9DA50394, 0xE322BFF1,
    0xEE171B3C, 0x8226A52E, 0x6E8C3239, 0xF40071D0, 0xEF2D56DE, 0x97629AF2, 0xBE10EF1C,
    0xECD4000A, 0xF0AD8810, 0xAFF07935, 0x194DF3A1, 0x2BEF3ED6, 0x0EF41010, 0xB000E0E1,
    0x999113D8, 0xE5EF9BAD, 0x61C1CD61, 0xF2BF2A01, 0x06F4F880, 0xBE0DC543, 0xF46E0C18,
    0x9ECB1289, 0xD1D921D2, 0x8D87E8E7, 0x14307F62, 0xE8C879AD, 0x11512E5E, 0x4B58B102,
    0xE1B0D1E8, 0x2967C1F6, 0xCD307F71, 0x0226946E, 0x02CF42F3, 0xDEE96102, 0x2D500311,
    0x80BD8618, 0xE2F81F80, 0xEF5200A2, 0xF486C01B, 0xE7822B96, 0x5C6584BC, 0xF5F00E1A,
    0x92032D76, 0xB641306F, 0x2D3000F7, 0xE11324F1, 0xC7ACC3F1, 0xCD81DADF, 0xA3F70854,
    0xBA1DE04F, 0xF23134A9, 0xDF3791BE, 0xFE0F8FA7, 0xD320101A, 0xB3FB2678, 0x00152BFF,
    0x7211B6F0, 0xA5B383E8, 0x21A2EFC8, 0x1DAE9803, 0xF7EAF01F, 0xFFC38D99, 0xF956E42B,
    0x20000D27, 0xB1E127FF, 0x035F5A28, 0x091AFBF9, 0xA031FB15, 0x228FD5BA, 0x9BFC6013,
    0x2FBB17DE, 0x23D02AF4, 0x477F4EDA, 0xFED11D0E, 0xFE7D6EF6, 0x9586829A, 0xAC1A9D8F,
    0x5C300018, 0xC6032100, 0x0D058240, 0x5098441E, 0x0D000386, 0x18843E1D, 0x8A44E251,
    0xC0CC0F0D, 0x46E34371, 0x7E3D1D8E, 0xE4521904, 0x1E361C46, 0x52994454, 0x2D964AE5,
    0x1984BE5D, 0x9A4CE653, 0x984A6335, 0x4EE75091, 0x0038359D, 0x20F02098, 0x10000C8D,
    0x5499E0D4, 0x36118CE9, 0x38C85269, 0xAA54EA52, 0x74324B20, 0x56EB559A, 0x7EBD5DAE,
    0x44F10B05, 0x1165A54E, 0xE01140C6, 0x31835200, 0x9000085E, 0xBA59A841, 0x08306504,
    0x8F03D2AB, 0x4AFD7DAA, 0xEF3451D5, 0x0D85C260, 0x30DC461F, 0x75188C01, 0x0038D31D,
    0xBB590420, 0xA0A21A22, 0xD32CB8EC, 0xEC3B11C4, 0xF45A1BF8, 0x3A1E1E46, 0x5A9D469F,
    0x990EEA75, 0x118D2735, 0xB6070001, 0x00406B04, 0xDCC52040, 0xC8633CD7, 0x849AB030,
    0xFDC5D18E, 0x5AB0E8EE, 0xCDE672F9, 0xD1781A67, 0x19D277B8, 0x70280026, 0x0CE07D21,
    0x4C6C1186, 0x35618A5F, 0x8D511801, 0xDC891F9F, 0xEDF67AF9, 0x01A06FD9, 0x148CA79E,
    0x27440003, 0xC344E338, 0xEBE5F109, 0x0085618C, 0x07204356, 0x49140EF4, 0x6416F73D,
    0x08C2C1B0, 0x84BFEEC8, 0x0241B85E, 0x6B984400, 0x5A1A1006, 0x0D093B41, 0xE50261A2,
    0x410F300E, 0xE1DA3713, 0x64570727, 0x2A9AC5B1, 0xEDC3ED70, 0xBBC00034, 0x4C8BB617,
    0x943C1600, 0x06FA0611, 0x12822D5C, 0x8751344F, 0x32445C12, 0x322B2549, 0xDD0FC621,
    0x0880E002, 0x034E0B1B, 0x88247AFF, 0xD3950B06, 0x892240C0, 0xFB0581CC, 0xCCB32496,
    0x12B81916, 0x205A18CB, 0x6A118000, 0xF106A190, 0xCD20F000, 0x6B48671E, 0xFB8813B9,
    0x541CC4F2, 0x414CCB80, 0x046F6D07, 0x81A4653B, 0x684A0346, 0x2EB803E1, 0x1A20B2C2,
    0x052E5B70, 0x1044FB3E, 0x23821A07, 0x554F53B4, 0x1EB7805B, 0x2240D869, 0x90949C04,
    0x4398E486, 0x0F4C52E1, 0x4F8101D4, 0x30F5A567, 0x70950E11, 0xFA2202CD, 0x5F27D440,
    0x03B96C88, 0x55F21864, 0xB60872E3, 0xE5976556, 0x7818812A, 0x648670FC, 0x52326A1D,
    0xEE6D5418, 0x3D8D2F01, 0x99698710, 0x98DC3705, 0x3E554030, 0x08803E19, 0xFDA01681,
    0x995DADCF, 0x6E2F808B, 0x5C56FDBB, 0x68ADEF7B, 0xFD7C1580, 0x6C883AAF, 0xE728948C,
    0xDE6D0020, 0x37C01303, 0x82258561, 0x6535D231, 0x48DC8875, 0xBD616065, 0x78355C0C,
    0x5B041CB4, 0x778563B8, 0xD94292C3, 0x4B108A1C, 0x6E6D2819, 0xD6336D84, 0x5F8F4E78,
    0x5C0237B6, 0xA1C10DCD, 0x72C47601, 0x6BD81206, 0x43966561, 0x986761D3, 0x05170E87,
    0xCC6BC17E, 0x06660CA1, 0x30F62EEF, 0x1D38B9FA, 0xEABA2054, 0x7A381F65, 0x405C18BA,
    0x72F80018, 0x18BD99AE, 0x2FBA8E7C, 0x3AB0501D, 0x603B5A6D, 0x921AB7BA, 0xA45D8033,
    0x3D805063, 0x1B2EA003, 0xE6D5B468, 0x1802D09B, 0x483933BB, 0xBD90DD47, 0x36286C07,
    0xEEA6A9EF, 0x354171BB, 0x1943EDA8, 0xEB20D808, 0x215864D7, 0x202EF5D0, 0x70A9F15B,
    0xC7620190, 0x00B24747, 0x6CD72C17, 0x284A0206, 0x2A1A35F7, 0xCF2F6F70, 0x5EBD02FF,
    0xD0676FD2, 0x20631ECA, 0x2FB904E1, 0xCFBDD407, 0x074BFF66, 0x7E477194, 0x77519BC1,
    0x6E19870C, 0x0582968C, 0xF8982839, 0x391878AA, 0xC3DBED79, 0xA9C95ADA, 0x13802F76,
    0xA43EB73A, 0x3EDFB21D, 0x6048E6FD, 0x68A57BDE, 0x013DAAC0, 0xFCBF2056, 0x52D8748F,
    0x6395FD7D, 0x77F77DA0, 0x16BA019A, 0xD9C49E44, 0xDB617EEF, 0x2353025F, 0x6FFDD682,
    0x5DB18D27, 0x40640A73, 0x3AC0E4AA, 0x6760C40A, 0x073FE012, 0x2A06641A, 0xEA01D05A,
    0x808E4147, 0x4427832E, 0x483A6B4C, 0x2BBDAD97, 0x61240584, 0x42806509, 0x0026121A,
    0x59615AEB, 0x03A0D604, 0x392A50C4, 0x850D4188, 0x440A1618, 0x690A872E, 0xC4170B81,
    0x048A1F39, 0x621C4A74, 0x80129D14, 0x27711D7D, 0x06115BF0, 0x8CC3E846, 0x5F8A4FE4,
    0x8C0489AC, 0x1D2CC568, 0xC0224569, 0xA23B1358, 0x51B63020, 0x01280126, 0x8337BD07,
    0x0548B006, 0x8A235469, 0x3E46E556, 0x800144BE, 0x847E6323, 0xE54B22B6, 0xEA292411,
    0xF25D2263, 0x2FFDB681, 0x0BC03306, 0xC8655A8B, 0x4F20E48F, 0x4A24C48A, 0xFFBBF316,
    0x2B6380CD, 0x3B25249A, 0x8C170382, 0x94A79329, 0x1902DB08, 0xA9B41603, 0xA5127B45,
    0x3A207247, 0x21B2D654, 0xB5A4E37F, 0x17016066, 0x5B058005, 0x6CB2226C, 0x3486CC39,
    0x039888EC, 0x054E8B12, 0x20E23CC3, 0x25B4C492, 0x035872C8, 0x00E8AE2F, 0x1AA66031,
    0x68420073, 0x8D01F2A2, 0x4C0C9194, 0x31164C90, 0xECB17100, 0x39BAD9C8, 0x30756ACC,
    0x408A4974, 0x11A9D0F5, 0x9D60A41D, 0x38005CB6, 0x010343FF, 0xF35E2922, 0x560E88E4,
    0x7A5B4F70, 0x79F281A0, 0xF41B0456, 0x446A804F, 0xE8237553, 0x4B974D29, 0x9B80D0F0,
    0x4368622E, 0x88BD806F, 0xFA0312A2, 0x380B5CBC, 0x02794F05, 0x3D1D7CF4, 0x205A0125,
    0x8884BA47, 0x28D4F14C, 0xD289793D, 0x8C60624C, 0x0A0191FF, 0x82249734, 0x3906F4C5,
    0x4F4D0170, 0x3A838249, 0xE3E80666, 0x69E74969, 0xB262A142, 0xCEA52C01, 0xD3D4C8DE,
    0x9C910298, 0x08E3E54D, 0xC6965A8A, 0x184C8D74, 0xAF2C63C0, 0x2A455582, 0xDD140640,
    0xA4CC698C, 0x60DE9F32, 0x6B22A507, 0x55B03322, 0xA460C4DF, 0x30011264, 0x7E83B8F3,
    0x048DD5C6, 0xE47819C0, 0xB6BCA834, 0xF4A64C35, 0x002D1B6B, 0xF4E49D52, 0x6C2A4BAA,
    0x5895BD5B, 0xAA12FA3E, 0x995E3A92, 0x6753EB22, 0x108F9652, 0x6440ECB8, 0xEAC24660,
    0xD8398F35, 0xA8C167A3, 0xB1D0D7D5, 0x698D9B53, 0xC6EB553D, 0x29AEA553, 0x36AD35AF,
    0xD9D3B059, 0x37041146, 0x5C0BE07D, 0xC6D82849, 0x15BDB336, 0x687001A2, 0xAA7AC196,
    0x01DD1AB8, 0xC5FB90EC, 0x0656300A, 0x73D4FA6C, 0x41839A1B, 0xF388774E, 0x66EBDFF3,
    0xE2805DA5, 0x95DE8820, 0x59F40522, 0x8A0AC79D, 0x01C39EBC, 0x83A0710C, 0x3CC0E81C,
    0x14AF445D, 0xEE4E0043, 0x79BDEAD0, 0x300CC1CB, 0xD41C2C52, 0x480F0460, 0x52380D81,
    0x7146FC9A, 0x01AC9C83, 0xDB9BC75C, 0x0360E979, 0x54003006, 0xE903A23C, 0xD5042435,
    0xDA0A41CB, 0x320C60DB, 0xB82EB1B2, 0x6C2973AB, 0x20B41CAC, 0x6129C399, 0x8135920C,
    0xC48AC512, 0x7E004442, 0x652A4210, 0xB267F7FD, 0x48F0C875, 0x3C058362, 0x89245884,
    0xB8518DDF, 0x775C8458, 0x6B62B3B8, 0x10E9D4F9, 0x44A0D406, 0x0BE2F03C, 0xFD83A5B6,
    0xCB869928, 0x96C9C83B, 0x96B081F5, 0xC64FA80D, 0x48BD4066, 0xD5DB1001, 0x9FEC34CB,
    0x2CACBB07, 0x232F5AAA, 0x0C0004CF, 0x87A7F656, 0x48ADD464, 0x1902B37D, 0xD0B71048,
    0xB6755692, 0xA21F961E, 0xB5315701, 0xD9E80321, 0xB2E07446, 0x01506340, 0xB6081ACF,
    0xE2688598, 0x7E21D49D, 0x0B93DD06, 0x56F3D0E9, 0x6573833A, 0x48A00BCC, 0x4FDA982B,
    0x88722207, 0xEB0946B6, 0x5B607886, 0xA9A3A925, 0x1952A831, 0xCBD680CC, 0x72F9756A,
    0xAC879960, 0x760C55C0, 0xC6560348, 0xD0275D46, 0x67B03501, 0x3C4CFCB8, 0xD4643F3E,
    0x43A4411A, 0xDBD01448, 0x23815B36, 0xA6B835C8, 0x41E73B3D, 0x6E7B0364, 0x49616201,
    0xDB7A8512, 0xB7192DDD, 0x910880E7, 0x96690C05, 0x46DD910F, 0x7E6EF636, 0xD901C4CB,
    0xBCA699FC, 0xE19F251A, 0xB8119680, 0xDA047981, 0x64BB866F, 0x59670058, 0x90EA660E,
    0x072AB811, 0x91C0057D, 0x76832A1D, 0x0DE3DC37, 0xCBC68041, 0xCB20EC87, 0x890EC813,
    0xFB8E8A34, 0x52DF9671, 0x41CCB2CB, 0xF3180A0E, 0xE6855B98, 0x90F98F33, 0x57171D98,
    0x263F9C9D, 0x85CB76EF, 0xEB7590DE, 0xA02F79FB, 0xFC02D901, 0x2D929582, 0x817030BE,
    0x91FCAC0B, 0xEA60C49C, 0x43A0BE92, 0x84F22008, 0xF246BB87, 0x8788DE74, 0xDF6BF0CE,
    0x32406A60, 0x76560C80, 0x800886F6, 0xC1D33E04, 0x9E5019C4, 0x21B8BA80, 0x4930500E,
    0xAE450064, 0xBE21D473, 0xC605F3DC, 0xEB18743E, 0x290DBA5B, 0x1F0F43BC, 0xF79912A5,
    0xA87642C9, 0x72603D17, 0xE7A07343, 0xABB6B782, 0xC1F41076, 0x01C69C7B, 0x1DE7F4A5,
    0x0C87A15A, 0x2DF705C0, 0xAF2043E5, 0x5AD68811, 0x96FD0E5E, 0xFAADE79F, 0x0600E195,
    0xC33CEE4F, 0xB51A4DB7, 0xBDCAE45A, 0x2808086F, 0x6BD110FF, 0xD10FB504, 0x0D7E4930,
    0x3D5C0580, 0x29D832E1, 0x83963003, 0xDFBEE781, 0x6A7CD008, 0x9D91CFB1, 0xB4A1DBE7,
    0xA3C2BB4C, 0xEB914B7D, 0x610E8100, 0x7232A5C1, 0x5D7002BC, 0x3EB6C407, 0x9E6FDBC3,
    0xFE6E693F, 0xC45E0EFA, 0x8CE94CF6, 0x0DAA5C2B, 0x1A7A3349, 0x2508873F, 0x002D4B6C,
    0xB3B33C48, 0x3863F8BB, 0x6998C013, 0x988EC071, 0x01A00496, 0x86B39B85, 0xC96D8170,
    0xA2501801, 0x62BFFBF2, 0x03F3B1AA, 0xBB33D580, 0x5D406395, 0x2A613D5B, 0x41508E39,
    0xB3400887, 0xEC11C01B, 0x887093B9, 0x74B33ACD, 0x793138B1, 0xAF880788, 0x13B40305,
    0x2B4635D4, 0x9EA1F421, 0xBC088421, 0xD816A9F9, 0xBBF34429, 0x1CB44086, 0x18DCB248,
    0x8163491B, 0x1E0132AB, 0xDC2C81D8, 0x3B101381, 0xC3B37C20, 0x03F83851, 0x34943000,
    0x15000431, 0xF01BB5B8, 0x3D78093A, 0x3F34A3B3, 0x3358C26B, 0x81B398BB, 0x0F1CA2E3,
    0xC00F00E8, 0x42F2DE00, 0x17800B5D, 0x03BF9C64, 0x8871F044, 0x2F36380D, 0x0912806A,
    0x004887B1, 0xC581D424, 0xC0058873, 0x80900C00, 0xA143EB55, 0xCC18BF2B, 0xC3697FC4,
    0x02887B57, 0x9A873978, 0x36B88801, 0x53C4BAA0, 0x21F18874, 0x38181989, 0x81C55B3D,
    0xEB7D3593, 0x4028002E, 0x3BA722F3, 0x44543BD2, 0xC1F2B045, 0x5E98B887, 0xDC17B6D4,
    0x40888840, 0x87893287, 0xEC55A340, 0x3B1C5D38, 0xE381DB3F, 0xCAB73609, 0x2F336BAC,
    0x6E365B73, 0xEA129212, 0xC2046630, 0xD4A80B7F, 0x246FC362, 0x81ABF545, 0x05087322,
    0xDB661128, 0x46E23D3E, 0x0D1BFC2F, 0x58872A0C, 0x478B7D26, 0x1635B087, 0x588B3CC4,
    0x0DCAD23B, 0xE036C3BA, 0xABF8C76B, 0x887A19C5, 0x86B473A2, 0x0305C1E0, 0x4178023E,
    0x64ABB94D, 0x0ADDBE34, 0xC6A413C8, 0x6A2BB819, 0x9887BBDC, 0x888432A0, 0x7B31B404,
    0x9AC9C36C, 0x80EBF8C8, 0x04B5FBDA, 0x046D81C4, 0x40A80300, 0x7C2E1092, 0xE33C490B,
    0xB3C09245, 0x063C1C91, 0xAAD4C748, 0x887C8537, 0x3D814000, 0xD421169B, 0x80030937,
    0xE3B91001, 0x5BDCC9B3, 0xC8D47FC7, 0xD58883EC, 0x0886C913, 0xC0FB493F, 0xA4C01429,
    0xA4963DCC, 0xC95BFCBF, 0xAE3E3496, 0x8BB0411C, 0x88840F42, 0x2AA9FB28, 0x2BCECAC4,
    0x81A95701, 0x094B5ABB, 0x532A887C, 0x40C3ACB8, 0xE240E40D, 0x4C1A3933, 0xC14BA1CB,
    0x884BE969, 0x7C184AB0, 0x324B46CA, 0x1FB63808, 0x2B86CBDC, 0x42209242, 0x472A43B0,
    0x442640FC, 0xB2D9B89F, 0x8F4C4A8B, 0x2BE34323, 0x273C841C, 0x5BC524CD, 0xEB3EB8E3,
    0x80024FC4, 0xCBB52C52, 0x100138FC, 0x28181DB9, 0xF34D5087, 0x08884D60, 0x44639547,
    0x7E3B34AF, 0x1BF54044, 0x396CD445, 0xF881D816, 0xA01E81C2, 0x81508791, 0x1E2F8CDF,
    0xCB64CE18, 0x81D81C39, 0x1E4524B6, 0x581DCE00, 0xA9F804BE, 0x4201DAF8, 0x238F4DE4,
    0x81981580, 0xAB80E167, 0x9CEECEDA, 0x2C781101, 0x160DF8F8, 0x48874BD0, 0xAB381600,
    0x0B089200, 0xC015CF68, 0xB864ECBD, 0x11CFB000, 0xCBB14FBB, 0x4FD889CF, 0xFA4FBCFE,
    0x1500D004, 0xD02501D0, 0x03D03502, 0x5504D045, 0x887D05D0, 0x00000080, 0x00000000

  EW_BITMAP_CLUT_EMPTY( WasherBgDelicates, Default )

  EW_BITMAPS_TABLE( WasherBgDelicates )
    EW_BITMAP( WasherBgDelicates, Default )
EW_END_OF_BITMAP_RES( WasherBgDelicates )

/* Table with links to derived variants of the bitmap resource : 'Washer::BgDelicates' */
EW_RES_WITHOUT_VARIANTS( WasherBgDelicates )

/* This is a bitmap resource. */
EW_DEFINE_BITMAP_RES( WasherBgSportswear )
  EW_BITMAP_FRAMES( WasherBgSportswear, Default, EW_DRIVER_VARIANT_ALPHA8, 480, 272, 0 )
    EW_BITMAP_FRAME( 0, 0, 0, 0, 0x00000000, 0x00000000 )

  EW_BITMAP_PIXEL( WasherBgSportswear, Default )                /* ratio 6.79 % */
    0x1C080100, 0xC1A0B048, 0x2A130883, 0xA1B0C85C, 0x2B1087C3, 0xB141B8E0, 0x2E1C8DE2,
    0x3054140A, 0x0F8EE291, 0x448A4310, 0x8F044028, 0xE22B161C, 0xA46091A0, 0x633097CB,
    0xB3499CCA, 0x389BCDA6, 0x999CEA73, 0x8B474661, 0x303C7238, 0x0DE50228, 0xEC16361C,
    0x034019AC, 0x7129A30D, 0xB4B080C8, 0x58ABD5AA, 0xCADD6AB3, 0x16032AF5, 0xCC567E3A,
    0xC1822381, 0xEE2A3B0B, 0x25D5D110, 0x523A1A84, 0x4351CC52, 0x78BBDB43, 0xCBDDEAF3,
    0x0F822F37, 0x45CAE238, 0x8460B439, 0x686373A3, 0xC090CBEC, 0x7172B209, 0x98B110F0,
    0x98CBE5B1, 0x5AEE6B33, 0x1D8DC380, 0xB0EA2B62, 0x82E0C0D1, 0x52834619, 0x83508CDD,
    0x7716A80E, 0xBAC968C0, 0xB8DBEDB6, 0x70080665, 0x1A0881D5, 0x85CEE5A0, 0x8120B4A1,
    0x763D6918, 0x00304DC8, 0x53C91984, 0x80C180EA, 0xD8EBF5B9, 0xA0F0476D, 0x0D87C562,
    0x403E73A5, 0xF0B82381, 0x180626F2, 0xEA02B03C, 0xB3EA138E, 0x1E7F6827, 0xF8EC85C7,
    0x1ADFEBF3, 0xCF8C0280, 0x03A0E439, 0x4094370F, 0x40044D00, 0x370CC210, 0x835C2608,
    0x10705834, 0xA5402D02, 0xE6070C43, 0xE6090027, 0x06C3B501, 0xE227EDF1, 0x84BA2488,
    0x85AF0AC0, 0x100C5416, 0x0212F008, 0x83109811, 0x6685610E, 0x64248D11, 0x3404D058,
    0x0CC3A838, 0x5FD88806, 0xA0EDC280, 0x26256542, 0x0192E4A9, 0x83E0D078, 0x42C0ED73,
    0x98840807, 0x18060050, 0x250940F0, 0x9103B0D8, 0x43A45E50, 0xF59DE109, 0x383458DA,
    0x3604A250, 0x0B19F8D8, 0xE7292E41, 0xF03DF99C, 0x8E615842, 0x1C0B5AF5, 0x0401A078,
    0x681A0411, 0x40701E07, 0xE11E0D82, 0x3280A799, 0x01108054, 0xE0DA2826, 0x7892650C,
    0xE9C25800, 0x749A82F0, 0x6B29EA76, 0x54108C05, 0xB0E5C29E, 0xAA0E0EC3, 0x79A4AA75,
    0x0BC3B606, 0x90395817, 0xB6C03273, 0x29C50C43, 0x040AC059, 0x04C3860E, 0xAC2B069F,
    0x2058015E, 0xED517443, 0x38A91270, 0xA92CEB34, 0x433A9940, 0x58E80B09, 0x9C240150,
    0x3D0E1149, 0x926B2094, 0xA1D06C01, 0xC0583A4A, 0xA6E8B0DB, 0x2702955B, 0x0EE0F97C,
    0x40E06434, 0xCB42E30A, 0xD83C0E6C, 0x710682E0, 0x5C018422, 0xC1A0DA37, 0xC0669DB9,
    0xA43BB6EA, 0x0CC2EEA7, 0xC00196EB, 0x4270E2A5, 0xE080029C, 0x0EF66C25, 0x190AAEE6,
    0x00507AE4, 0xD628A013, 0x1A7A95AB, 0x7B180C41, 0x0DB7C284, 0x41F2ECB7, 0xB070940D,
    0x46142F4A, 0xB41E01D0, 0x50CCE340, 0x0E961606, 0x41C0882B, 0x241F0401, 0x082E0580,
    0x27805168, 0x026C1920, 0x5A2AA430, 0x6CBF4E0A, 0x6001CB75, 0x529865E0, 0x00D07599,
    0x0290900D, 0x18D2A874, 0x9F3B8060, 0x2A0C038A, 0x0240D09C, 0x419B5F2C, 0x3A99B0D4,
    0xBC08C315, 0x2B58EC80, 0xDFF57C78, 0x02902EE9, 0x3B366E0F, 0x14180DD6, 0x1002106D,
    0x0841403C, 0x0300B826, 0x108C2D0B, 0x400F0702, 0x0BBF40C0, 0x06C0900D, 0x83BC62C7,
    0x8D54180C, 0xF421012E, 0x5E0DDD2A, 0xA7FAEE03, 0x83606C02, 0x90D5A2D4, 0x28286C74,
    0x03005570, 0x9833A050, 0x0265C6DB, 0x50772DE7, 0x003945EF, 0x72F2FAFB, 0xCF02701A,
    0x25509DE5, 0x7586A90A, 0x1D39A702, 0x36098180, 0x68D40D28, 0xF80EE822, 0x56454F05,
    0x93E8F32E, 0x0F700148, 0xB9C17586, 0x6E309803, 0x404C2958, 0x28024C5B, 0x3108C110,
    0xAB03C0CC, 0x08178141, 0x063CC010, 0xE57680C8, 0xD28B80D1, 0x0CEBC0C7, 0xFBC00460,
    0x27EE0ADE, 0xE8356290, 0x41E18127, 0x01E0540D, 0x68802808, 0x0200190D, 0x0F80F014,
    0x350580AC, 0x9B045FF8, 0xBC1A83A5, 0x7BC403A0, 0x146602DD, 0xC0A01D99, 0xE1CC0D5A,
    0x1C801A66, 0x06C0E537, 0x7AE05816, 0xC0B52664, 0x2656E808, 0x4A090118, 0x540A01B0,
    0x10180280, 0x40480941, 0xE0B41102, 0x4C820262, 0x023256B2, 0x0150E5F1, 0x479BD830,
    0x1D3A6056, 0x032F519A, 0x6AE180E0, 0x220A02D8, 0x102A0244, 0x7074E150, 0xEB392FAA,
    0x62D2AB88, 0x8312C2A9, 0x7140480F, 0x87003C39, 0x0382C532, 0x7B90F19C, 0xC40A0041,
    0x70B89148, 0x09089000, 0xE04803C0, 0x31E8D782, 0xD0099163, 0x00A68297, 0x0412221C,
    0x0B91BBAA, 0x52C886E2, 0xEC01C556, 0x080AE4CB, 0x54019228, 0x902D0540, 0x159E8A4C,
    0x50B16719, 0x41883959, 0x00B01CE5, 0x20929A21, 0x06522BC6, 0xAACC497E, 0xDA038008,
    0x3C0E4E92, 0x4C079330, 0x982C03C0, 0x37BAFF41, 0x00F16520, 0x41A83634, 0x0310640C,
    0x01F13C12, 0x41262C31, 0x94B84034, 0xE28CB2E4, 0x0648E74C, 0x7E4602B0, 0xA3D805C6,
    0x80006EC9, 0x40580780, 0x27C81C03, 0x80F89A07, 0x9206EC06, 0x25CB3CEA, 0x809AB33F,
    0xCF24541A, 0x7651DDA1, 0xA6740240, 0x600B014B, 0x34972B00, 0x4688C401, 0xA8CD0742,
    0x91703A43, 0x7940D122, 0xC840332D, 0x1A83405C, 0x2F0660D4, 0x48040138, 0xD4149F89,
    0x8D1A05CD, 0xE24C95E9, 0x944D2326, 0xC193B161, 0xC772C849, 0x01E0AD01, 0x040FD4BE,
    0x1C962068, 0x48A6409C, 0xEE024825, 0x040FB114, 0x70085D55, 0x24A0BB81, 0x07ED95A0,
    0xC1DBB475, 0xD48A9330, 0x532D4405, 0xCBC0A034, 0x9482F016, 0x0E050FB5, 0xE8014DB5,
    0x7192AA55, 0x4010A0D5, 0xE05AA959, 0x002186C5, 0xC1CC9835, 0x9ACA580A, 0x079428AF,
    0x46AB7D47, 0xF2B2935D, 0x0BA9E090, 0xC33B8153, 0x601083B4, 0x33DE0227, 0x9B052167,
    0x72840ED1, 0x00C0392C, 0x8185D562, 0x072D72C5, 0x04CDAD6E, 0xAA16A822, 0x1FA0F651,
    0x5A626CB8, 0xC00232E7, 0xD2D0ACC0, 0x23720A41, 0x2CCC1180, 0xE4F02130, 0x01B98969,
    0x05A836D5, 0x01DABC86, 0x95AD0B60, 0xF13316E8, 0x680E5E3B, 0x06DDA8E0, 0xBD1602F4,
    0xD9C20AD1, 0xB7100BB0, 0x0CDD20B8, 0x29991601, 0xA037395C, 0x8368181A, 0x86DC7052,
    0x19A140A5, 0x413301E3, 0xD14CCED5, 0x74EABBF5, 0x02D57440, 0x179DD79F, 0xC1D97293,
    0xA9733672, 0xBE05B2BF, 0x6BC01CE9, 0xCDA632E5, 0xE8054CBA, 0x377A97B5, 0x82BFD513,
    0x1CEAC000, 0x004474A4, 0x0CC997D0, 0x4BB1D2BF, 0xC3401466, 0xBF60F0A8, 0x03E62E10,
    0xF460FAB2, 0xF64DC031, 0x420D41C2, 0x220317BB, 0x0D5B0730, 0x6C113171, 0xD85415CE,
    0x1440066A, 0x8325B786, 0x066018CC, 0x8CAE6E2F, 0xA8DA3989, 0xCB6FC0D4, 0x19678103,
    0x10CB5EBB, 0xCABE6740, 0x294B90EE, 0x47490A80, 0xC07BE9C8, 0x834AF31A, 0x00E632E0,
    0x4155F461, 0xB44A6CA7, 0x66054748, 0x3392C0CC, 0x14BE5AC9, 0x266280E0, 0xBBEF3173,
    0x70359B34, 0xE5AE0943, 0x00332E06, 0x34860DEA, 0x02A62672, 0x1D16206A, 0x018CD604,
    0xC354C108, 0x58FBA014, 0x6BB4AD66, 0x7D039221, 0x04AB0BC6, 0x000C87D0, 0xD663A007,
    0xCB00CE00, 0x1881197D, 0xBA832073, 0x0490FA52, 0x62D2EA20, 0x6002CBF0, 0x142A8C20,
    0x506049D0, 0x7A88CC3A, 0xF3183730, 0x81C90FA9, 0x0300EDBD, 0x05E574C5, 0x14028036,
    0x7F02E088, 0x260109CC, 0x70875D40, 0x6974B540, 0x78CDAEF3, 0x80BEA29C, 0x1ED653AF,
    0x270074F7, 0xB0A05497, 0xB4F5D034, 0xA900C8CD, 0x00DC698D, 0x5A058060, 0x4DFF8340,
    0xB82D0744, 0x302043A9, 0x00E8A3DF, 0x61D6E8D4, 0x6939CCA4, 0x01401319, 0x40CC94D0,
    0x85C6E3A7, 0x1E47A020, 0x51BE7606, 0x5CB1E03D, 0x7003CE5B, 0xC77E08C0, 0xC0C246B3,
    0x401109D4, 0x82130725, 0x797C2F1B, 0x0E6CB811, 0x01632A30, 0x44040054, 0x4883DE3D,
    0xDC84652D, 0x203C253A, 0x5911C7C1, 0x60E0D802, 0x2AE71E06, 0x02602602, 0x3CF9ACD4,
    0x4270D03B, 0x1DB29038, 0x33C0C0A4, 0x7C00DE5F, 0x3AFFA372, 0xA80A0037, 0x57FC0AC0,
    0x05AB1DA3, 0xC07906C4, 0x03007340, 0x873D272F, 0x0EC94B06, 0x11549DC4, 0x4605207A,
    0x798EF144, 0xCC82E250, 0xE9136310, 0x6799D7F7, 0x00B8B9E9, 0x407507E9, 0x679404CE,
    0x04847BAB, 0x7B400F5E, 0xB9F243A5, 0xD2B87037, 0x07570119, 0x300F0120, 0x277ED168,
    0xE8BC6C95, 0xD7EA3101, 0x6F0C66F0, 0xD01E3054, 0x04E04003, 0xE47AAA33, 0xA5217931,
    0x46343640, 0x5119BCC2, 0x341B1294, 0xB25894DB, 0x7EA80A00, 0x6A2FD1DD, 0x41902706,
    0x75E3A668, 0x4DB89BD5, 0xE77991B1, 0xA0827035, 0x98F6DC54, 0x308A8C0C, 0x86067BED,
    0x2F0A9CDC, 0x80320366, 0xFF211A42, 0x7CBA50FA, 0x41081BF3, 0xEF00D0A0, 0x079B03E9,
    0xB531705C, 0x46F91F63, 0x559DFEDF, 0x23C5163D, 0x180D00B2, 0x78ECD241, 0x7813FAFE,
    0xFF57BD05, 0x31802CEB, 0x7D3B481E, 0x23015001, 0x64C91A80, 0x20D8067F, 0xFA569436,
    0x74C132F7, 0x40D1D569, 0x24011006, 0x772A5650, 0x1417C880, 0x8E0272CD, 0x33E880B6,
    0x1A265600, 0x0340C02B, 0xE0250160, 0x8167C713, 0x166BF7B6, 0x900700A0, 0x32E81C73,
    0x3935200A, 0x73AE7420, 0x02700F00, 0x2822937A, 0xF03A8288, 0x3CB82F7F, 0xF9832022,
    0x70053587, 0x23D02501, 0x1683B805, 0xF02C0398, 0x67443983, 0x572182DB, 0x70190083,
    0x81511702, 0x2B80684A, 0xF84E8431, 0x74C00937, 0x0D64D16A, 0x401800E3, 0x85979052,
    0x7B19F868, 0xF3CC85D6, 0x72D1407C, 0x0C0052C2, 0x202E01F0, 0x8697E670, 0x6C11F816,
    0x901E3CC8, 0x80A12B2A, 0x9300424A, 0x720137A4, 0x83B87887, 0x7B7AF035, 0xB7BA30C8,
    0x2C25B334, 0x35021823, 0x58874720, 0x7642A589, 0x6F30D88B, 0x983E3236, 0x01500924,
    0x3F893027, 0x98688967, 0x89976D03, 0xD26BD32F, 0xB2428981, 0x02C01700, 0xA453C6ED,
    0x87F78B38, 0x6FB3578A, 0x816681A2, 0xD0200098, 0x8B47F41E, 0x761838C0, 0x530B8B66,
    0x48D86000, 0xCE22388F, 0x62770201, 0x8CF8C17D, 0xC46315F9, 0x800E30B8, 0x2223C931,
    0x007283BD, 0x38DC8D02, 0x8D38BA18, 0xD601F30B, 0x91D66F28, 0x02801200, 0xDD827407,
    0x57378C18, 0x29D8E05E, 0x2B117850, 0x21987E00, 0x01700700, 0x496ED02A, 0xD8FC8EB8,
    0x8EF83448, 0xB70042C1, 0x21CC7573, 0x52E17F00, 0x0A8FD894, 0x07587629, 0x86E29F90,
    0x9A6F8163, 0xF01B00F1, 0x77D20D02, 0x6B8EB90B, 0x990E8EE3, 0x2C801524, 0x788F4152,
    0x20202091, 0x12703703, 0xFC919886, 0xD80F0398, 0x70D29E91, 0x3619A189, 0xA4610288,
    0x93792A83, 0x2E026299, 0x503129F9, 0x17B78568, 0xDB004001, 0x52A80353, 0x92A9387B,
    0x3B91C75C, 0x10141FA9, 0x17D7FE1A, 0x27018008, 0x78A33DD0, 0x76393794, 0x0D27394B,
    0x002F1738, 0x00115688, 0x568CE25D, 0xF58C9639, 0x22495993, 0xC923718F, 0x80071798,
    0x96F96457, 0x67030554, 0x400624A9, 0x12034B68, 0x2900E17B, 0x89479709, 0x97392D14,
    0x40788222, 0x01778C31, 0x98797C91, 0x8001C16A, 0x601D2249, 0x15C85C8D, 0x88918016,
    0xE7BB8FD9, 0x22298B58, 0x29163634, 0x915782E0, 0x93899396, 0xC212B401, 0x899798F1,
    0x2B69021B, 0xC717890D, 0x699499F8, 0x01A2FA2A, 0xE68D500B, 0xC9A59664, 0x88D0081C,
    0x6D9B4163, 0xD9AC9301, 0x03625F8D, 0xB9018029, 0xF2376D52, 0x1D79B58D, 0x785459B7,
    0x501217A9, 0x8B39BD6F, 0x2503633E, 0x54200190, 0x4A101E10, 0xC777262A, 0x97AC1B59,
    0x02F03012, 0x300309E0, 0x80220220, 0x01039901, 0x30922008, 0x49CF9D71, 0x4487C68B,
    0x15006012, 0x597600D6, 0x9BA03C11, 0x1B1B59DB, 0x73674450, 0x2A736936, 0x2902B033,
    0x801141C0, 0x13737000, 0xED95501F, 0xA7C67D89, 0x4E00224D, 0x739B810E, 0x69F993A1,
    0x9CE0061D, 0x6477C2AD, 0x302E1641, 0x34302302, 0x5F9EA004, 0xB94602C3, 0x1E57D7A0,
    0x1B029148, 0x399C00B0, 0x73602610, 0xD6A156AC, 0xC97B59D1, 0x1742A768, 0x23030037,
    0xD0130190, 0x007103A2, 0x56A26A35, 0x10324597, 0x79C01702, 0x9701210E, 0x25620385,
    0x4101CCA3, 0x2C629A25, 0x30313844, 0x7050159E, 0x42A40108, 0xC7C67F6A, 0x00C0236D,
    0x0610C94A, 0x616A5720, 0x1B9A4E99, 0xB664001A, 0x1791A6B4, 0x0356B214, 0x0E02802B,
    0x610949D0, 0xA27A5B5D, 0x1C2FA192, 0x06D800C0, 0x1168B811, 0x98A679A4, 0x502F9421,
    0x03303403, 0x88032033, 0xD4791E52, 0x6F0366A6, 0xDF00E023, 0xBA778F12, 0x03523463,
    0x7F01702C, 0x600D1369, 0xA82A4D8D, 0x020011B9, 0x1002AA30, 0x01100D00, 0x272854CF,
    0xD26D02C0, 0xA4136626, 0x341A0163, 0x201501F0, 0xA9567E44, 0x054465F8, 0xF95E01A2,
    0x6858C612, 0xFBAA096B, 0x7006AA21, 0x01400600, 0xB9026022, 0x88859457, 0x2D325F5F,
    0xB83B2011, 0x249A319A, 0x01402603, 0x7F1569D5, 0x8033147A, 0x224AC2A5, 0x0B00D258,
    0xA02B7D40, 0x65B2A853, 0xD714135C, 0x52ADAD34, 0x02529A1E, 0x3988A00E, 0xF1B17611,
    0x29FADFA9, 0x12014007, 0x6A890200, 0xAB01282A, 0x3B34BAEC, 0xC0300360, 0x17722D01,
    0x737EC005, 0xAAF78211, 0x6C30042E, 0x1703702C, 0x4319B013, 0x02C03823, 0x5C62C01C,
    0xD1404711, 0x538B0D63, 0x147F1004, 0xD5E27B57, 0x03733E9B, 0x0701C027, 0xA156A220,
    0x870151A4, 0x0A3A7B1F, 0x583800E0, 0x2F81A194, 0xCF93D028, 0x203C7C69, 0x01402A03,
    0x59A3E008, 0x12B50071, 0xB318A71B, 0x1F20932D, 0x79270310, 0x02E3FF2A, 0xBE01528E,
    0x41E596F5, 0x0110246A, 0xB717BA81, 0x8889115A, 0x914380B4, 0x1A018018, 0xB2E70140,
    0x947A1800, 0x330372A6, 0x8A3D01E0, 0x4E675A1B, 0x39B5E012, 0x69648414, 0x0206DC44,
    0x7BB2C00C, 0xDB0A0061, 0xB7202820, 0x5100940D, 0x72F88ECA, 0x01C02B03, 0x091D9A07,
    0x4033140A, 0x380B808E, 0x96B8381E, 0xC0332AE8, 0x9DA01502, 0x621871B9, 0xFB3003C1,
    0x8AA357B8, 0x35A288FC, 0x20160240, 0xB3A1D6AF, 0xE8B9E37C, 0xF9F50093, 0x0334598C,
    0x7A014022, 0xBBA01B8B, 0xBA60342D, 0x928E1BAA, 0xD9EF8289, 0x00C02402, 0x6F1D9ABD,
    0x998A1B1B, 0x0103AFBB, 0xCD7E7A0A, 0xB02F2F92, 0x223A7DA7, 0x2A163298, 0xEBC6BB30,
    0x86965029, 0x2A03433E, 0x1A9B0180, 0x1D298D2C, 0x56BD5AF6, 0x3BBB0173, 0xBA34467A,
    0x72BB8018, 0xA3180082, 0xBE2B7F03, 0x0097537F, 0xD202AD4B, 0xB42AD84D, 0x2B8F124C,
    0xCBF0B8E1, 0x7F568A30, 0x91118401, 0x52C1BEAA, 0xBE111EBB, 0x4530DBFD, 0xD9AE8176,
    0x3CB540BC, 0x30545B09, 0xE356C095, 0x039A8E52, 0xDD01B7B8, 0xAB1C3AFB, 0xADE03512,
    0x2E2E8C14, 0x2496AB9B, 0x01502503, 0x1137FB59, 0x19A96BE0, 0xB442E9C2, 0x17AEAA51,
    0x841F01DB, 0x63F32EBF, 0xD402C375, 0xB224C2EB, 0x41920FB5, 0x1602D033, 0xB467C1B0,
    0x9F8BED01, 0x1029FC3C, 0x2A285E80, 0xC290179D, 0xEFBED481, 0x22EAC49B, 0x191A2400,
    0x15023033, 0xF467BCF0, 0x1491403C, 0xAE30BC54, 0x101B1D21, 0xC634A6A6, 0x1203C116,
    0x929EC619, 0xB0C5456A, 0x4BC6E531, 0x8C6CC133, 0x2DB99E2E, 0xEAA48035, 0x914795B4,
    0xC22C75C7, 0x3260B597, 0xA5F300D5, 0xC7F7C203, 0x450062C1, 0x84A3163B, 0x12A9DD54,
    0x22C88C50, 0xA8320212, 0xC684E9C7, 0x927D1163, 0x7A5A29DC, 0x5317EE23, 0xC6685B7C,
    0x5274C9B9, 0x77711777, 0x5F795548, 0x2CA4B98C, 0x1A2AF422, 0x0B4EAC6B, 0x420DBAD0,
    0x273CADA1, 0x49C1274B, 0xC12B9BC5, 0x1D8CB7C5, 0x4897EADB, 0xA37B0165, 0xCBF8D203,
    0x30BC8249, 0xB5198627, 0x1A27C000, 0x72CC8025, 0xF7365AE2, 0x4A6C6602, 0xF11515B6,
    0x9224CD24, 0xCAC1D22D, 0xD1BED682, 0x6249CDCC, 0xCE31D2B6, 0x03003531, 0x4C041899,
    0x0021B6CE, 0xBE70E1F4, 0x7C06488C, 0xCEE89D92, 0xA20181D8, 0xA4E2CF73, 0x173CCF00,
    0xFBCF8687, 0x69AB0021, 0x020549C8, 0x9103587E, 0xE1B5D02C, 0x03312ACD, 0xCA439C3B,
    0xC9CB1B1C, 0xC2B1F9D0, 0x1A81B4E6, 0x6BD70015, 0xD16CEDBB, 0xC15655C8, 0xBB745497,
    0xD208AC34, 0x47CA61B8, 0x2488D0B1, 0xC531D2B8, 0x0B1D8D28, 0xAD1A8320, 0x17361251,
    0x31D1F032, 0xF00417DD, 0x549CA202, 0xCC7A8013, 0xC1B9D3BC, 0x548CC2C7, 0x31117A12,
    0x31D6D44A, 0xC48323CB, 0x4501F4E9, 0xBD4CB9D4, 0x163D2219, 0x23548972, 0x5B477626,
    0xCC41B6D5, 0x44035140, 0xDC8F501C, 0x003BA6C7, 0x2302200B, 0x2D6C0200, 0xB2B02102,
    0x0C15AD5E, 0x3927CFF0, 0x010507D4, 0x00CFC8D6, 0x70290120, 0xD7FA88A8, 0x20028A89,
    0xA138D71C, 0x548CD6BF, 0x4D237CA1, 0x600A1098, 0x03203402, 0x92D919E2, 0x4D354D2D,
    0xD0E13AD8, 0xC4CE01A2, 0x876264A4, 0x3FD00E89, 0x91DA1D92, 0x6C9A3FDD, 0x6E5139D9,
    0x12549789, 0x503AAE80, 0x01C103D1, 0xA2A55034, 0x1DA14D2D, 0xCDB03103, 0xC4136DA6,
    0x1D301A29, 0xB1ECBC53, 0xB578E2B3, 0x52FB4D2D, 0x9E2DB2AE, 0x3602D032, 0xC10DDB9C,
    0xC96C1E9E, 0xBFCF54E9, 0x33151032, 0x033DA103, 0xEAC6502E, 0x00268F61, 0x034D91D9,
    0x34DCC8FF, 0xAD7400D1, 0xA63549C6, 0x2E02D375, 0x3DD61252, 0x71802AD9, 0xA3363004,
    0x8DE295DD, 0x0399BC13, 0x5E55C02F, 0x49E934BC, 0x9E2DED02, 0x9B0223FD, 0xDDC785F5,
    0x137DF5AD, 0xD0D6159D, 0xB9B24E2D, 0x02202734, 0xFD030DFF, 0xD10A54E3, 0x033DFF01,
    0x33E07A66, 0x694E00D1, 0xABF506D7, 0x924DA129, 0xB377032D, 0xB0401110, 0x1A7B89E2,
    0x7003135E, 0xD5D11ED5, 0x15CAA519, 0x302F0321, 0xB1A031E2, 0x1700E104, 0x2E2BC87E,
    0xB12C3E13, 0x07467D3A, 0x1DDE7EC0, 0xD63D90D9, 0xB2297105, 0x4E3DC59D, 0x163E0D13,
    0x2F519C08, 0x8E45036A, 0xE0B02FDC, 0x4B214103, 0x0E4DC9FE, 0x96A89B13, 0xC7C2B55C,
    0xC02EE29D, 0xE5A108BF, 0x5DE3CE29, 0xCC7C12FE, 0x466E4175, 0xD703501B, 0x11215C0D,
    0xE4CDDEDF, 0xAF131E6B, 0x6984173C, 0xDA1E7150, 0x23464034, 0x1E008031, 0xE5EE796F,
    0x32DADB7D, 0x2E7201E5, 0x5E4034D9, 0xED02712E, 0xA03602FD, 0x10AE87D7, 0xC012AC16,
    0x20345A8D, 0x03402FD9, 0x1FC3B027, 0xE032E450, 0x110E97DA, 0x3712AD18, 0x9506B710,
    0xD91E9D68, 0x11026A85, 0x2DA3707D, 0xEA7D9A03, 0x14E4F105, 0xB4EAC821, 0xD91E8D21,
    0xCB024036, 0x5029DD4D, 0xD11A01E4, 0x73BD1E79, 0xEEC30281, 0x02800D3A, 0x33D91EAF,
    0x112EEA60, 0xAB3E5501, 0xE2122EB8, 0x7E661D28, 0x03000F46, 0x7DDC8E11, 0x502512EE,
    0xD503FDE4, 0x37E49ED9, 0x1487C2DB, 0xE5503001, 0x54033DA3, 0x100D110D, 0x031E12ED,
    0x00EE9E58, 0x5AC0CEA0, 0xDB60134C, 0x30E63D92, 0xE1342110, 0xE00E2801, 0xFADE1030,
    0x8022107E, 0x7B0E6E2C, 0xF1F00017, 0x5031E55E, 0x12FCC703, 0x1EEF1DC2, 0xDEA7CD70,
    0xE9673094, 0xBF01A3CB, 0x0E819E2E, 0xEF602B01, 0xC5036030, 0x8024132B, 0x02C034F2,
    0x49F0BD27, 0xAAC1039D, 0xE1200D43, 0x04022F01, 0x50342BB4, 0x035D91E3, 0x03121E1E,
    0x2DA18250, 0xE6FAB303, 0xDED52E2B, 0x1357F1C7, 0xDA3A3902, 0xF11026DD, 0x5030F23D,
    0x12FE1903, 0xD7DB140F, 0xC015030D, 0x986E4DF4, 0xCBEF3147, 0x1E635433, 0x002195A0,
    0xA3DA18A1, 0xB415ECDB, 0xF55F023E, 0x0B9F102A, 0xBB7D54AF, 0x3E9F4103, 0x34E9E14E,
    0x165E02E0, 0xF5402300, 0x33EB2036, 0x5DA00121, 0x430F7BDB, 0xFAD96EC8, 0xFBC1032B,
    0xF5401737, 0x9275E528, 0x9028F7A8, 0x0224F4F8, 0x32DC3E22, 0xD0190240, 0x6DFE5DED,
    0xE9E381D2, 0x2F5A0163, 0x104717ED, 0x2BE80E8C, 0x331FF5E0, 0xEF08B001, 0x303B6DC8,
    0xD014B570, 0xD55FAC00, 0xBFCE7639, 0x4E6323C4, 0x01C295E2, 0x8DBDAF54, 0x5004109F,
    0xF6F8B001, 0x35032EF7, 0xA0310360, 0x02702502, 0x96FA202B, 0x8E99001D, 0x1CF4C48C,
    0x76033FBD, 0x3E802FF6, 0x01B4F259, 0xE103202D, 0x2E24DB5E, 0xD83032FE, 0xDBDCEDA6,
    0xDE480372, 0xE2400D40, 0x046E1F01, 0x4F990161, 0x137BD3F2, 0x8973D012, 0xFDA2F3EA,
    0xDE2F0ADD, 0x06C0B100, 0x6F051B8E, 0x4000B8EC, 0x0D8642E1, 0x18843E1D, 0x8A44E251,
    0x045E2D15, 0x0C8620C0, 0xC4611D18, 0x218131A0, 0x3C311985, 0xA24190C2, 0x028AC600,
    0x41307C12, 0x190C8663, 0x8C764F26, 0x4B00C2F1, 0xFE7D3D9E, 0xE8541A04, 0x8D45A250,
    0xC3917C46, 0x311C8DE0, 0x1A853E8E, 0x8E0BC175, 0xA8D4631E, 0xC94230C0, 0xEC4E3293,
    0x01203A7C, 0x60251506, 0xB36990D8, 0x510D8D23, 0x1B85BEDD, 0xB7DCEE57, 0xC52C7615,
    0x5D018361, 0x300B40BE, 0x2580F120, 0x4E331702, 0xF0C0C55E, 0x3393CD41, 0xCB801C54,
    0x06040240, 0x6CE30C22, 0x66EFA041, 0x7F3D9DCE, 0xEEE10966, 0x401D1DD2, 0xC068669F,
    0x3B1C8D03, 0x68C66866, 0x8F65C5A0, 0x642EDA36, 0x0AF1B280, 0x7C0F7304, 0x024348F4,
    0x8DC5E26A, 0x203A0F1F, 0x221D52E9, 0x301E6F90, 0x1D0D84A1, 0x18E86F04, 0x81658011,
    0xDA6E3415, 0xC150C0E0, 0x5928DA0B, 0x821B982C, 0xDA148CB6, 0x1F87BF9F, 0x1D09B8BF,
    0x80E06F4B, 0x806A3F2C, 0xEC601806, 0x1D398EA8, 0x8089E022, 0xA9B86A14, 0x4A181006,
    0x5CAEB0A0, 0x05AE2BD8, 0x06A182D4, 0x30C3F408, 0x62A30D43, 0x72A5A940, 0xA24360B0,
    0x85A0B80C, 0x08343CD6, 0x70661D07, 0x069E3041, 0x93BBC138, 0x3DC1106C, 0xA1580E00,
    0x705E193C, 0xD611AE11, 0x2144413B, 0xA2922487, 0xAEB06402, 0x28501D20, 0x2200A792,
    0xFABA8130, 0x064BBBEC, 0x29FA560D, 0xEC641200, 0x481A85E8, 0x160091B0, 0xC0818474,
    0xA0D004B7, 0x6CCC19BC, 0x35374DB2, 0x82CA6124, 0xC6C16072, 0x600A1F37, 0x1C900F02,
    0x021B404D, 0x04044A2B, 0x86817A3D, 0xE8580413, 0x8AACDD01, 0x20A83861, 0x9B85C0C0,
    0xB9C19860, 0xD4C52F3B, 0x2CE40D38, 0x330B8768, 0x1702CDC5, 0xC921D874, 0x61C87539,
    0x837A1005, 0x7A070108, 0x8F506102, 0x8061486A, 0xA1701A85, 0xF8649C2A, 0x3205A894,
    0x49AAE160, 0x3F219A3B, 0x76458F50, 0x306801AE, 0x40108755, 0x1683E03D, 0xC501E070,
    0x41C87082, 0x684A1807, 0x04864EC0, 0x190540A0, 0xA78C4874, 0x4B5D640E, 0x58012C05,
    0x5AAB41C0, 0x00A82050, 0x0500C80E, 0x749C2890, 0xE5920F06, 0x4CA8DFB7, 0x198716B0,
    0x803225BC, 0x81282E02, 0x14021D06, 0x2A158690, 0x07221440, 0x3AB51842, 0x49636F15,
    0xA0617403, 0x156305A1, 0x182BB318, 0xBA3273D0, 0x09986412, 0x606561DF, 0x5F7F5D61,
    0x08A7B986, 0x070FB078, 0x4044DA0A, 0x2A981403, 0x5513BED5, 0x86E5C0C8, 0xC5414672,
    0x81187380, 0xD8308C64, 0x11634598, 0x06CC8150, 0x3D570230, 0x56258794, 0x505C1706,
    0x633606AB, 0x896C3B06, 0x20F5301A, 0xCFEC86D3, 0x9DAC1DCB, 0x4415DB33, 0x87622058,
    0xD620900A, 0xED23EDB5, 0x20221306, 0x6A0B2258, 0x178670A0, 0x80C855E2, 0xA8DBCA14,
    0x880488D7, 0xCB4A0360, 0x1A064C3B, 0x0020A50C, 0x415AACCB, 0x6F37CD6C, 0x534E0588,
    0x023F5B95, 0x85A0F016, 0x15307283, 0x88771507, 0x420804E1, 0x05806867, 0xC0018834,
    0x56A66BB2, 0xA7601307, 0xBBC00288, 0x0042218A, 0xF101380A, 0x48751C19, 0x583C0600,
    0x86AE06A1, 0x0A8517BD, 0x014F7014, 0x91EA3F2E, 0xEE63ED73, 0x121CED80, 0x0780AFD0,
    0x07351848, 0x4FAEF1D4, 0x10221086, 0x56113C5A, 0xF476F858, 0x0301806F, 0x8ADA79C2,
    0x555F9442, 0x8C120088, 0x0442CACF, 0xD4129AA0, 0xAB582680, 0xC05C0C10, 0x4431E101,
    0xC0F9C13D, 0xB30824F6, 0x59CDB003, 0x05C019F0, 0xD6835042, 0x366D6FC8, 0x1CE28140,
    0x940D0062, 0xC37874E0, 0x36F4F99B, 0x8038A0B5, 0x41995631, 0x0220068F, 0x06847D5D,
    0x06401109, 0xC132804C, 0x2E264F41, 0x1B0340D0, 0x35C38132, 0x441358C6, 0xC600B1E2,
    0x671C169C, 0xC0A81200, 0xA7D83809, 0x06AA910F, 0x0100C026, 0x0B9196FA, 0x0B06A0B0,
    0x5ACFA143, 0x080B02F3, 0xA01301A0, 0xB8D40540, 0x005E35C6, 0xC069132C, 0x9212ACD5,
    0x80A00485, 0x09C19937, 0x1A83405A, 0x2263AE46, 0x1CAD8090, 0xCC0DC4F2, 0x08328FA6,
    0x9915124F, 0x91500EA9, 0xCCEBD929, 0x81001000, 0x0720C413, 0x5E1D52D5, 0x1803B5B2,
    0x4701E0A0, 0x2401C86C, 0xF01B82C0, 0xBC619320, 0x30780E96, 0xC0280E83, 0x81901C56,
    0x4B306A0D, 0x06D2D65A, 0x02C8AA2D, 0x1A938516, 0x287FACDC, 0x544A1EB8, 0x9D6111F6,
    0x03ED01C0, 0xC0180100, 0x65A41701, 0xE2D82A65, 0x2229A522, 0x3487DC08, 0x00CBEBC8,
    0x2F18000E, 0xF76D8802, 0x640DE4B9, 0xC0080200, 0x300121C6, 0x30500580, 0x4FC9B583,
    0x41233493, 0x80758C04, 0x589021DF, 0x8348A999, 0x84835710, 0x1B460428, 0x5C55D49B,
    0xDC098260, 0x4804218F, 0x60520740, 0xF3D89983, 0x669CD82C, 0xA4848544, 0x2E8E650F,
    0x02C01001, 0x6C02B03E, 0x2776EAA1, 0x380B41B2, 0xCC864900, 0xE827038B, 0x78AB3BA8,
    0x6D29A003, 0x28700621, 0xBE006EA1, 0x5DC0188A, 0x0080D2B3, 0x92B588A5, 0x6F0340B0,
    0xBA6A96FC, 0x769E50D3, 0x45120525, 0x403890AA, 0x00D01C45, 0x001951A8, 0xA0702E05,
    0x6F0DDC1A, 0x0BD85A2A, 0x04016042, 0x1901D344, 0x50948170, 0xC41D2029, 0xA45B4AE0,
    0x524F30E7, 0x2EF01528, 0xD3180622, 0x83524E0B, 0x4B400244, 0x07C19D00, 0x0556E00C,
    0x1C058058, 0x660C6B53, 0xE207B1D0, 0x45492744, 0xC01E862C, 0xD5D41DB6, 0xC072F328,
    0x83205206, 0x6CAEA24B, 0x6101DD1D, 0x41CE6017, 0x6703C03A, 0xC158E4C1, 0x841636B9,
    0xC914B360, 0x59640C40, 0x60DED64B, 0x88A44205, 0x83563681, 0x00242A08, 0x1E01B021,
    0x05BB0047, 0x5E056060, 0x6930C18A, 0x98160352, 0x08050240, 0x457409C0, 0xD6269C83,
    0x0029EFB9, 0xBBA5AC0C, 0x00E008A2, 0x0AC10011, 0xABCDE5C6, 0x23700EAE, 0xDC024078,
    0x3A01800A, 0xF02E04A0, 0xD5AF4AA6, 0x80618E9A, 0x487CD101, 0x01002202, 0xBED7D6FA,
    0x00C9EBEC, 0x1B31B050, 0x1F46C084, 0x340A6D98, 0x54132243, 0x929385E8, 0x705A0D41,
    0xE4324F82, 0x8189B402, 0x5CF9900B, 0x05267F0A, 0x53EA6A9C, 0x49001231, 0x2C04405A,
    0xE4B64EA0, 0x7C1A5587, 0x5DEF02A9, 0xA03E031C, 0x4AA0D602, 0x01AB6DB4, 0x50602C0A,
    0xB671D8E2, 0x070859D9, 0x1A127B72, 0x3C0400A8, 0x0C551AC4, 0x080B0263, 0x08037632,
    0x52447056, 0x469F2661, 0x2923DE02, 0x8194F245, 0x44E0DA02, 0x53554623, 0xBD81D04E,
    0x1E4F244A, 0x1875C198, 0xBDF8DA26, 0x19F28B20, 0x1AE40D41, 0x48D8131C, 0x1C913763,
    0x83526702, 0xB3805C12, 0x06C09DB6, 0x8F66B05C, 0x7FC9B1E4, 0x6A018CF6, 0x55259F60,
    0xA0117644, 0x65A80C5D, 0x8F9AABD9, 0xC1382F54, 0xC5A01407, 0x034039C5, 0x8BE0EB5C,
    0x149D59C1, 0x46012078, 0x6F6E0F96, 0x18140342, 0xDD6A6999, 0x7C644C95, 0x95DB5000,
    0x0F201801, 0x937B820D, 0xD014D09C, 0x07CBA6B7, 0x0D14D8A8, 0xBF0135DB, 0x6C0BC132,
    0x5F2C83C0, 0xBCAA7556, 0xD0240AE5, 0xC42B0980, 0x01699525, 0xDEA7CCA9, 0x0760E0FB,
    0x05C15D99, 0x5F9467A8, 0xDFDBC02B, 0xC5B87706, 0x2EF800BD, 0x0E3B03C4, 0x5216BA8E,
    0xA4DE7A81, 0x00B1EC50, 0x2E1847B9, 0x6B1ACDC9, 0xAE288035, 0xA5951DF5, 0x6C0787DA,
    0xA4010022, 0x79542513, 0x12A48C34, 0xC02B2B18, 0x2C1888C2, 0x01502001, 0xD6353956,
    0x0339A8D6, 0x51B5B014, 0xC9E25028, 0x1FE3DC75, 0x1D897907, 0xA00D912B, 0x782C589B,
    0x079E04A3, 0x34900DC3, 0xC0B80400, 0x47D63808, 0xA8E61CAB, 0x5479C6FB, 0x66835010,
    0x5401A06D, 0x26A7418E, 0xDDF8978E, 0x281D0500, 0xF007B972, 0x20DD7A80, 0x8FBE9AC4,
    0x81B0538B, 0x00E53F8C, 0x43A98EB2, 0x88C2206F, 0x94E4C064, 0x1C42D8F2, 0x323C11B0,
    0xE810217C, 0x07216080, 0x40B41943, 0x7B35C157, 0x143EE5CE, 0x06CDB017, 0x185DB036,
    0x81E227CD, 0x5D014086, 0x26E30896, 0x2BBC1310, 0xD36DDA85, 0x368315C1, 0x34C0A35E,
    0x41950EEB, 0x81722AB9, 0x05CA5376, 0x0D638EB6, 0x0590A713, 0xC16B805C, 0x58E48AB4,
    0xAD9B8230, 0x9F235666, 0x427DEA7B, 0xC5E19A01, 0x01DAD8D8, 0x02D05E0F, 0xB4E02C10,
    0xAFC04113, 0x622A3058, 0xC7B4529F, 0x220A24E6, 0x60DF2AC0, 0xBB58F1FD, 0x577AD7C1,
    0x2F088E79, 0x3B6C3537, 0x5C005207, 0x05E55DAC, 0x1BC08029, 0x5ED6BC1F, 0xF9FBDEAB,
    0x090A1664, 0xA6035952, 0xB81302A0, 0x600643F3, 0x208C0700, 0x21536B46, 0x03B3AFD4,
    0xD9AFAE86, 0x6A810970, 0xFE7FBB59, 0x2CC052D7, 0xEBE30091, 0x1FE09A08, 0xC3A7D000,
    0x01E81948, 0x00B8179C, 0x17885A97, 0x60198B50, 0x80300280, 0x0BC0B40A, 0x3803C0B4,
    0x3EFB7280, 0x14B0BB5C, 0xD1BD01B2, 0x08AB1980, 0x0E80CA74, 0x1B638160, 0xB6B34D33,
    0x0D0110BC, 0x48CE3AE0, 0xC1A00DA8, 0x1BC1B41A, 0x280E41BC, 0x80709EA3, 0x19094395,
    0x980391E8, 0x099A988D, 0xE500E016, 0x400E886B, 0xC262E09C, 0xC1C27426, 0xA80E010A,
    0x39C40EBA, 0x1C389811, 0x40048100, 0x808B292E, 0x850F500A, 0xC3A82AB1, 0x16D96CAA,
    0x7F40E3F4, 0xC2A20069, 0xA979E389, 0x389AC11C, 0x60070123, 0xBAFBB3BC, 0x0414A3E3,
    0x980A0151, 0x30AC2A43, 0x1CB89805, 0x188827E8, 0x80800600, 0xCABDD80F, 0xC317BDF2,
    0x81C24B96, 0x0A015815, 0xD3FB8050, 0x3CD1099C, 0xE1A5F01A, 0x6949A759, 0x80A01401,
    0xC98883EE, 0x9280C3B2, 0x2500159C, 0x01B3FC3E, 0xB1668170, 0x8022DB28, 0x0F008003,
    0x68158138, 0x3F93628D, 0x1899A270, 0x800B8160, 0x004A45AD, 0x1B8C38F2, 0x0814A012,
    0x37C817A6, 0xD000D88A, 0x68B5C50B, 0xC5346281, 0xBC246B0A, 0xA0C481B8, 0x81301080,
    0x6C8EA818, 0x9B17A6F9, 0xB5201BC5, 0x0190DA91, 0x1470C700, 0xC72471C7, 0x33C72472,
    0xA9C829B4, 0x88580C81, 0xC892D804, 0xDB0D9109, 0xC7A39092, 0xAEA1EB8E, 0x6C788190,
    0x00533FC6, 0x19C6839E, 0x43C39DC8, 0x01CC6C21, 0x0D813018, 0x99214390, 0x9AD8178A,
    0x87C87486, 0x7488C884, 0x01381848, 0xD9088407, 0xAB3E01A0, 0xADB98C10, 0x7608D9EB,
    0x180B30DC, 0xC9201101, 0x93C93492, 0x000F810C, 0xB5A09901, 0x7DC90018, 0xA8E5B26C,
    0x2F5C5A99, 0xA9816B69, 0x1B4A004B, 0x08D80292, 0x9FC9F427, 0xA49FCA04, 0x35681601,
    0x16002088, 0x597D904B, 0x23C18488, 0x008B718C, 0x81348048, 0x4188199C, 0x0A2C4498,
    0x53F92470, 0x819ACA9D, 0x09010816, 0x1CA28070, 0xB5400312, 0xE237BC64, 0x9AFD089B,
    0x885105AD, 0x39A22803, 0x143380EA, 0x0130068A, 0xAB44F132, 0x5800A88C, 0x2544AC81,
    0x5981CBD8, 0x980B011A, 0x93BCB400, 0xB339A003, 0xB962A7B4, 0xC8D31B08, 0xE1B1C01A,
    0x93519E29, 0x80E0B8BC, 0xBC0B61EB, 0x680230AC, 0xBF119E81, 0x1A9F3185, 0xD8108150,
    0x43D80380, 0x99011937, 0x54D48198, 0xCD64D5CD, 0xD5CD74D6, 0x4B0DC604, 0x81A48D33,
    0x018F7012, 0x91C40128, 0x8B8B2581, 0xB5011801, 0xC45289C8, 0x001AA44C, 0xBD9D380D,
    0xF01D9523, 0x2AE0120A, 0xD9197BC0, 0x38140119, 0xCEA4E981, 0xEBCEB4EA, 0x4013CEC4,
    0xCB92D301, 0x1E351086, 0xF241013B, 0x8191C84D, 0x10495011, 0x54F4CF40, 0xCF64F5CF,
    0x0F4F6CF6, 0xAA1A8118, 0xCE1CA701, 0xCF004AC4, 0x6810486B, 0xCE100700, 0x738854FA,
    0xC014B51B, 0x2C280112, 0x0389A08F, 0x5504D045, 0x506505D0, 0xBC97C504, 0xFD08CFF2,
    0xA3C392BE, 0x008B0015, 0x43B580F8, 0x12ED0DCC, 0x094C201B, 0xF37D5105, 0x3B09C0BA,
    0x0E425085, 0xE8AED145, 0x516510CF, 0x0100AB26, 0x4B5B3CB4, 0xD1A50693, 0x03D1B51A,
    0x6CBB88FB, 0x2C4D1DD1, 0x919FD395, 0x400B8859, 0xD2201301, 0x23D23522, 0x5524D245,
    0x812D23D2, 0x1D10A014, 0x9528D1E5, 0xD1C00828, 0xBEBB889A, 0x81EB8078, 0xD2E52952,
    0xB2006A45, 0xF4205033, 0x893D2C8C, 0x33D2ED2D, 0x325D209D, 0x0B9C241E, 0x3308F532,
    0xE538D345, 0x1C40F19C, 0x370CE44B, 0x953808ED, 0x1B0D3DD3, 0x93CDD421, 0x1540D404,
    0x540D41D4, 0x3E527C6A, 0xE245D445, 0xCD7A608E, 0x47D47546, 0xD23ECD65, 0x54A544D3,
    0x9380297E, 0x2D4CD149, 0xD4E54AD3, 0x0E0009ED, 0x454D41F0, 0xD4ECC54C, 0x0D1CDD52,
    0x55481C98, 0x546D55D5, 0x5315A81B, 0x79B0D585, 0x80A00A92, 0x5BD5B55A, 0xD55CD5C5,
    0x55E55DD5, 0x4980AD5B, 0x1560D58D, 0xD62561D6, 0x63D63562, 0x5564D645, 0xD66565D6,
    0x67D67566, 0x9568D685, 0xD6A569D6, 0x6BD6B56A, 0xD56CD6C5, 0xD6E56DD6, 0x6FD6F56E,
    0x1570D705, 0xD72571D7, 0x80D09572, 0x00000000, 0x00000000

  EW_BITMAP_CLUT_EMPTY( WasherBgSportswear, Default )

  EW_BITMAPS_TABLE( WasherBgSportswear )
    EW_BITMAP( WasherBgSportswear, Default )
EW_END_OF_BITMAP_RES( WasherBgSportswear )

/* Table with links to derived variants of the bitmap resource : 'Washer::BgSportswear' */
EW_RES_WITHOUT_VARIANTS( WasherBgSportswear )

/* This is a bitmap resource. */
EW_DEFINE_BITMAP_RES( WasherBgWool )
  EW_BITMAP_FRAMES( WasherBgWool, Default, EW_DRIVER_VARIANT_ALPHA8, 480, 272, 0 )
    EW_BITMAP_FRAME( 0, 0, 0, 0, 0x00000000, 0x00000000 )

  EW_BITMAP_PIXEL( WasherBgWool, Default )                      /* ratio 11.64 % */
    0x1C080100, 0xC1A0B048, 0x2A130883, 0xA1B0C85C, 0x231087C3, 0xB1489C4A, 0x188BC5A2,
    0xC8DC6A33, 0x8FC7A3B1, 0x1C8A4320, 0xC9A4B249, 0xAA532893, 0xA5B2C95C, 0x633097CB,
    0xB3499CCA, 0x389BCDA6, 0xC9DCEA73, 0x9FCFA7B3, 0x1D0A8340, 0xD1A8B44A, 0x2A9348A3,
    0xA9B4CA5D, 0xA350A7D3, 0xB54A9D4A, 0x58ABD5AA, 0xCADD6AB3, 0xAFD7ABB5, 0x1D8AC360,
    0xD9ACB64B, 0xAAD368B3, 0xADB6CB5D, 0xE370B7DB, 0xB74B9DCA, 0x78BBDDAE, 0xCBDDEAF3,
    0xBFDFAFB7, 0x1E0B0380, 0xE1B0B84C, 0x1EF188C3, 0x83614070, 0x22190D06, 0x9940C067,
    0x8F0CE4B2, 0x70703833, 0xCFE7B120, 0x982C0720, 0x0943E110, 0xC85E3119, 0x878391B0,
    0x63B01DEB, 0xDAFD8ECB, 0x30190D86, 0x10B09370, 0x0202C241, 0x470B83A0, 0x03414048,
    0xB8562A0E, 0x8763C1B0, 0xA2391D0E, 0xA371C0E7, 0xD8EBF5BA, 0x21C0E3B1, 0xD80E873D,
    0x58B86C3C, 0x02826291, 0xAB860205, 0x40A02C2F, 0x5E260D03, 0x9D0EF778, 0xF8FBF67A,
    0xFEE7E3F3, 0x140E3BDC, 0x00406025, 0xA815EB70, 0x542B71D7, 0x390EC397, 0x83E0E7E8,
    0x20B7DE10, 0xE0D0360E, 0x180D06C1, 0x015C21A8, 0x0C82A04C, 0xE1183035, 0x78962488,
    0xC1E10EC3, 0x1B7981B0, 0x00D668B6, 0xDCF0B814, 0x68D62676, 0xA1DB7EA3, 0x1A0AC358,
    0x8B9E9024, 0x80256A40, 0x00BC1F01, 0x26488DDD, 0x387F1F99, 0x014130B0, 0xE5290401,
    0x80A81254, 0x664A91C3, 0xD17625A9, 0x04C250DD, 0x54B98653, 0xE0B01701, 0x6E0E96DD,
    0x689AE6A7, 0x0E03A83E, 0x99D07832, 0x15027498, 0xC8270340, 0x4A7DA0C0, 0x77DD2772,
    0xC38735E0, 0x4A16840C, 0xC1AF8868, 0x7C745FD6, 0x0CE5796E, 0x60405C2D, 0x14DA949D,
    0xF8290400, 0xB095E7D7, 0x0C4310DD, 0x0220B832, 0x1A941269, 0xA4086701, 0x0A022AAA,
    0x05AA66F4, 0xDA80A022, 0xD7D6880B, 0xEDDC9228, 0x9306C310, 0x4B6BEA56, 0x42B06403,
    0xA82E4897, 0x8C307543, 0xBD03D940, 0x05C0B46E, 0x82B07019, 0xE96A676D, 0x181E0CDD,
    0x28B6EBF0, 0x0D426035, 0x2578D9CF, 0x20AC3974, 0x0C0E0702, 0x0149A3F0, 0x0540800C,
    0x2579B427, 0xC0241F0D, 0x0D1FBDED, 0x5709C110, 0x9FA10ADE, 0x0290D03C, 0x30200D09,
    0x1C1B4C40, 0x360EAF2B, 0xBE00B08C, 0x40945F10, 0xE7382E08, 0xD1AD9A6F, 0x1209C2F0,
    0x00D34BD8, 0x9F88342D, 0x80EEE2C5, 0x44050843, 0x0B43F2AC, 0x96037090, 0x03682E24,
    0x9028170A, 0xE2C30093, 0x1D080397, 0xC8A270D0, 0x03695E25, 0x7D172BAF, 0xF4260550,
    0x2F73F41B, 0xCE13CB64, 0x03B76340, 0x0A5C0004, 0x9A6F8C82, 0x46062F38, 0x04401D1B,
    0xF4B7382A, 0xD026F40E, 0xDF39CDEC, 0x02413537, 0x0CC28058, 0xC3AD6B26, 0x1D740E0A,
    0x882801F1, 0x26BF624D, 0x4FE73040, 0x43A7E350, 0xC0190707, 0x4C3C0CC1, 0x1E9BE257,
    0xB6F76CA4, 0xF0A0D81B, 0x40D1DE88, 0x0543C3C2, 0x0908E12E, 0x0A413019, 0xE4BC5F2F,
    0xF0482F0E, 0xAC07A578, 0x3AE53710, 0xBAC190BC, 0xA9900543, 0x843022CE, 0x8AE00800,
    0x220EB3AE, 0x987A7B68, 0xBBA0D81E, 0x40B03B84, 0x0D40EC01, 0x0B0200A0, 0xD4428044,
    0x7B50E5D7, 0x30780743, 0xEA23D643, 0x51050350, 0x0222EEFE, 0xA5CF0EC3, 0x5F2010AE,
    0x30060053, 0x1502C0D0, 0x0B826074, 0x5CA0B02D, 0x20D8340D, 0x1510ED22, 0xAB0D01A0,
    0x08C3BBFF, 0x819EF38E, 0x11B2F02A, 0x9205E771, 0x0C90C9AA, 0x9C0E80E0, 0xFA790480,
    0xC3BAB90E, 0x47E91A28, 0x4039127A, 0xABA44C07, 0x3D700808, 0xFF412807, 0x1983B4D2,
    0x2D7CC054, 0x38044021, 0xD41581F0, 0xA9CF3AA0, 0x3830964F, 0xEF400891, 0xDC220D41,
    0x80938307, 0x7B20EC17, 0x02011035, 0x0A80C262, 0xB085E720, 0x609B5C51, 0x6C8A0218,
    0xC20F86E0, 0xF04A0F01, 0xA61E1DB7, 0x908BC202, 0xC5505477, 0x01800C95, 0x0F15A01C,
    0xECC4B56C, 0x140600E4, 0x4AE4C149, 0x5807ABA4, 0x000430D1, 0x541EB101, 0x6F7409C2,
    0xC0600425, 0x1FD05808, 0x07312DF1, 0x1AE3482E, 0xAE1DE44B, 0x043051BD, 0x6F1F9BC8,
    0xF8101D10, 0xA001254E, 0x30640880, 0x716A329F, 0x2351127A, 0x829076AE, 0x2FD21D83,
    0xFFA4A00C, 0x95C6E05E, 0x1305CDB4, 0x30CC64B2, 0x264D1119, 0x08290749, 0xF2F327E0,
    0xE8424600, 0x5B381C58, 0x01800A49, 0x954CC018, 0x44256394, 0xEBC8304E, 0x2B870D28,
    0xED2CDCC0, 0xD80D8012, 0xA8324DD2, 0xD0084A9B, 0x51413D01, 0x0E8A6B4B, 0x2127EEA0,
    0x03843E61, 0x0A81CCD7, 0xEC4D7612, 0xCB83CB1C, 0x44004BA4, 0x70FDC230, 0x81279652,
    0x59CB0F80, 0xCA755CA3, 0x81A83306, 0x0260620D, 0x02C06C14, 0x0A00A817, 0x6F20A98A,
    0xD703043A, 0x000A01D4, 0xD0198120, 0x01D13AD3, 0x22E33A53, 0x10FC1200, 0xC0C83487,
    0x82100A4A, 0x3E88DA5F, 0x0D01C9DB, 0x1001F056, 0x0E02607C, 0xD400C010, 0x5C0E9065,
    0x6D068CD4, 0xBA120648, 0xE0140050, 0xCFBCED04, 0xD1302C95, 0x04C00CB7, 0x094FD52F,
    0x0210E019, 0xAB556024, 0x104451F2, 0x12A082D0, 0x6C3F3BD2, 0x30420A01, 0xC0200381,
    0x88442800, 0x1137F14B, 0x2094D00D, 0xE8E6E018, 0xB553D90C, 0xFBA9D224, 0x02004119,
    0x2C05D460, 0x281A38E0, 0xB056FC81, 0xE0A41502, 0x94303405, 0x82D068A1, 0xAE872414,
    0x0701082C, 0xB700A01E, 0x0847E01E, 0xB8D05230, 0xB417B893, 0xB1BF4300, 0xC0780788,
    0x20588955, 0x082829A1, 0xC5197C04, 0xACA06C1D, 0xEA802169, 0x120375FE, 0x27AEE080,
    0x570C609A, 0xB9359D3B, 0x25AB3E96, 0xA6C873D7, 0x20901182, 0x0ECD0F06, 0x82706A83,
    0x93C0480A, 0x656C9919, 0x25807223, 0x048860C9, 0x080B4051, 0x7C1E1D9A, 0x0967B400,
    0xBA855A01, 0x692A45A7, 0x10756241, 0x82106A74, 0x2397000A, 0x4526EDC2, 0x191FBB8A,
    0x22205174, 0x7883ECA0, 0x92E801E0, 0x05D30465, 0x53A97CA6, 0xB3C00702, 0xE985E123,
    0xA7074578, 0x04040AF3, 0x0E23F03C, 0xB05EEA78, 0xF2BD4090, 0x4D31B04D, 0xE49131E0,
    0x9B9C4B97, 0x6BF801C8, 0x806C84DE, 0x8EDBE206, 0x95DC0B46, 0xC150580D, 0x95C1BE20,
    0xAC201054, 0xF7AB647E, 0xF60801D1, 0x0EFF5E5B, 0xBDB90464, 0xAC38E992, 0x31280F95,
    0x0F9E38C4, 0x01C0520E, 0xC504719B, 0x849AA5BA, 0x8162EC29, 0xD49160C4, 0xAD8D2529,
    0xE2E60142, 0x8332C438, 0x02348F41, 0x3909A964, 0x418DFC83, 0xC5901D91, 0x9940D97F,
    0x03CA964B, 0x32E4FC6E, 0x3547275B, 0x7C048148, 0x5F2A915C, 0xDE436D67, 0x6C1A0CCF,
    0x19740790, 0x01883942, 0x150CC372, 0x95543806, 0xA0B40DAE, 0x5CE0A4D9, 0xDF018979,
    0xAD9B8885, 0x960CE703, 0xAE4A0753, 0xB4219DF3, 0x95641503, 0x990147CF, 0x9B1A9F93,
    0x06A0D2D6, 0x3E0DB4FA, 0x51287AF5, 0xF667DA83, 0x6F6E4E74, 0x7015AE34, 0x590F91E0,
    0x80767574, 0x27E7474E, 0xACD69107, 0x0248D988, 0x7645374C, 0x1F58C5F1, 0xC082F3A3,
    0x1904608A, 0x06048098, 0xAD01ECC4, 0x6ECFD9F4, 0x3025B336, 0x408C0C81, 0x01202104,
    0x9F45180C, 0x076CC755, 0x9D010035, 0x13EB2219, 0xE5B89AD5, 0x124275C4, 0xE9136180,
    0x56BEBDA0, 0xCD36064A, 0x1369C548, 0x41603645, 0x81A0500A, 0x01402405, 0x4674B804,
    0x0480AAD8, 0x2803402C, 0x54C84148, 0xEF56664D, 0x002206C0, 0x4DCA42B3, 0x3BA6F1EB,
    0xB6D905D7, 0x6F1DCEDC, 0x7B0054A2, 0x0C419B3A, 0x1803165E, 0x10030098, 0x81A24050,
    0x600780E5, 0x083105A0, 0x3BAC9BD1, 0x80981BBA, 0x6AD47701, 0xF1C0797C, 0xE2E01C87,
    0x8D6DC10A, 0x8EA19A44, 0x3500E513, 0x620E9E18, 0x54082030, 0x0939D600, 0xC6291140,
    0x2D2EEC9A, 0xF2B82907, 0x73CDCA41, 0xE31ADF8B, 0x8DB23904, 0x8102D074, 0x01271D1B,
    0x6A8E23E0, 0x04A175A0, 0xF81B00E0, 0xADE8D600, 0x40B01CDD, 0xC0E103E2, 0x90EE7BCE,
    0xE83D7F9F, 0x0EDF13BA, 0xA0767B9E, 0x57D36068, 0x9452C0A2, 0xED618207, 0xF837EC69,
    0xBEF39EC0, 0x0CEBAF77, 0x819103EC, 0x83506CE8, 0xA240EA87, 0x0389E785, 0xB24E6E1A,
    0xCF002532, 0x020D016A, 0xFF33F34C, 0xFF390370, 0x30797300, 0x5E5F5B63, 0x8FDF9A21,
    0xE79D36B4, 0x26BE86FB, 0x7E8F9004, 0x9C827074, 0x1601253F, 0x5A89C168, 0x901C1D5F,
    0x3002C08E, 0xEEDAC8D3, 0x2427A073, 0x80C629F7, 0xD42E9201, 0x273EFECC, 0x0CD1C5D2,
    0x07150F7C, 0x1E064078, 0x460E65BD, 0xA40080A0, 0x665F3B4D, 0x2FAFEDF1, 0x00701DBA,
    0xB7A01000, 0xFDFF4C0E, 0x47193499, 0x58745037, 0xC0140041, 0x20E7A447, 0x2F03203B,
    0x06793177, 0x5FC73E75, 0x06793033, 0x05CD7D81, 0x78801C6F, 0xFD6E3037, 0xA00212F7,
    0x03A1F971, 0x0215D017, 0xF02A0100, 0x7CE7AD1D, 0xD97F2644, 0xA65A0381, 0x5BA81E10,
    0x9B7D143A, 0xB53103B6, 0x81712B81, 0x5F5357C3, 0x001D00D1, 0x6154D82E, 0x4053A671,
    0x34A81088, 0x00043A32, 0x66693009, 0xF83678A4, 0x7BC01112, 0x031637E3, 0x93A10230,
    0x82A5FD24, 0x078431DA, 0x736A8451, 0x01600084, 0xBA0347BC, 0xA12784D4, 0x7A06B776,
    0x22009163, 0xA2373B90, 0x61311550, 0x3010A62D, 0x91058466, 0x32F6C102, 0x2886485E,
    0xD8330171, 0x41A16844, 0xC4235828, 0x55C686F7, 0x02200064, 0x7903B4D7, 0xB7420058,
    0x5440381F, 0x0412887A, 0xA67267F0, 0x52A10E81, 0x9A0026CF, 0xB89889B8, 0x00E14752,
    0xD76DE256, 0x911486E1, 0x81124B00, 0x7488810A, 0xB0131058, 0x8914B069, 0x384C4128,
    0xD1028022, 0x00252B2E, 0x1F0131A3, 0xD0200210, 0x01F01F8B, 0xF002901E, 0xC3F102D3,
    0x8C78C602, 0x2402D8C4, 0x18BD5255, 0x01352702, 0x6689800B, 0xE00D1307, 0x8A47AD43,
    0x3A533113, 0x57C602C3, 0x85D8AA10, 0x427B2107, 0x48B08215, 0x4177A312, 0x19014777,
    0x60180170, 0x6A702902, 0xB36B34F9, 0x541428A1, 0x8F31DD8F, 0x33035517, 0x70313F50,
    0x01601F02, 0xE9017018, 0x461E7C02, 0x8D81D677, 0x298DA112, 0xF10B0276, 0x1078308D,
    0x3A6ED005, 0x572B02F3, 0x82511D8E, 0x3A21520E, 0xD20C1CD0, 0x5F326A5A, 0xCD1DF4D9,
    0x00300361, 0x01D02C03, 0x2A01100F, 0xA00C1307, 0x7DE4B748, 0x82508113, 0xE10883A3,
    0x87935290, 0x90417794, 0xF11F9168, 0x7CC45184, 0xF427E621, 0xA02C1E11, 0x01102002,
    0x2B250009, 0x20180011, 0x93026E39, 0x3355E112, 0x888990D9, 0x69A10293, 0x3C02581F,
    0x67D21209, 0x1F368066, 0x280321DE, 0x401101D0, 0x1238DD00, 0xDA5CB00C, 0x611502A5,
    0x9085CC02, 0x6F936107, 0xA1029566, 0x2127DC00, 0x1D95B914, 0xE8A20151, 0x2E325995,
    0x2B036037, 0x747601E0, 0x47200212, 0x109703BA, 0xF1D94AE1, 0x9558A98A, 0xF950310A,
    0xA7FC03B1, 0x00311697, 0x6597E7C2, 0xE6792B96, 0x52901A02, 0x77010125, 0x501A4669,
    0x4E698C11, 0x90971950, 0xC9A71099, 0x99602F25, 0x0600E11A, 0x695F99A9, 0x30402E2C,
    0x0311A7E4, 0xB46685C0, 0x9AD11361, 0x069A9907, 0x468C9721, 0x9C010297, 0xD2036667,
    0x21169B04, 0x9CF9B499, 0x311DF32F, 0x70120230, 0x00811896, 0x393A2033, 0xE1138E40,
    0x6BD98D9C, 0x088AB98F, 0xE1D69C81, 0x1169CC5C, 0x9684A00B, 0xF6826834, 0x2E57CE9C,
    0x198B401C, 0x68770101, 0x9DE10B88, 0x089BE25C, 0x79E251D1, 0x7CD9E410, 0xE79B9032,
    0xC96E10B9, 0x4149426A, 0x7028A5B3, 0xDA0C9252, 0x79AA0DA0, 0x144134DB, 0xD49661F4,
    0x01325E1A, 0x11115812, 0x682B6080, 0x02B10A9F, 0xA50395CC, 0xB02610A9, 0x7FA9E39A,
    0x0DA039F2, 0xAA1400F1, 0x55026A53, 0x3403A228, 0xC02B0310, 0x0238C402, 0x0C01B01D,
    0xD00DA3B0, 0x00B00CA3, 0x42005007, 0x3A44A43A, 0x00B007A4, 0xECA3E3EA, 0xB01E01E3,
    0x02B3F102, 0xB691C4F9, 0xB2699402, 0xA196E191, 0x1F9F4112, 0x810DA588, 0x0155FC9D,
    0x3782F10B, 0x09FF10A9, 0xA2A90C43, 0x1800110F, 0x26014EE9, 0x02B03372, 0x12018024,
    0xE9480140, 0x3CC12680, 0x15013014, 0x802E0230, 0x78F2E01A, 0xEC30C28E, 0xA8381167,
    0x86303053, 0x6200710C, 0xC9F653A7, 0x109A639B, 0x312129F8, 0x4A68A020, 0x4E500810,
    0x1B035038, 0xD01401D0, 0x13A56B19, 0x1800C56B, 0x302701C0, 0x82662203, 0x252C797F,
    0x310EA290, 0x69621287, 0xFC9E9114, 0x7A26A8D5, 0x1F7A9110, 0xE4A9575D, 0x54816E96,
    0x00500114, 0x2302139E, 0xF5204BE0, 0x0270384A, 0x099D600F, 0x490F88D1, 0xA1C01211,
    0x149F61DA, 0x15EC1D88, 0x03977499, 0x09ABAA67, 0x99120081, 0x1497B562, 0x1300A005,
    0x202B0280, 0x2E228C45, 0x7C02C1D1, 0x19FD7F47, 0x6B7A1B11, 0xF5799A5C, 0x70009C67,
    0x03482BAB, 0x02ADA915, 0x3AD00151, 0x15202C8A, 0x3026500C, 0x43890370, 0x33B32FA5,
    0x8B36CAF1, 0x1A1A815A, 0xA760356C, 0xA3AD3104, 0x6108A238, 0xB1498DAF, 0x8F719AFA,
    0xF15562B6, 0x02F01B00, 0x207909D1, 0x0102ACA0, 0x7CD9EA01, 0x3E114A60, 0x602B2129,
    0x667B1276, 0x06B1584C, 0x902603A9, 0x014106B1, 0x57851A98, 0xE0080021, 0x25702801,
    0xA47CD97D, 0xB106ADF3, 0x2835F101, 0x2010BB09, 0xE02CA210, 0x214317B2, 0xB21079CB,
    0x3A1E2118, 0x3237E1A0, 0x5215A784, 0xF2333EF7, 0xA5C02454, 0x313D160F, 0x90251160,
    0x7806F088, 0x9803653A, 0x1A6B1027, 0xADA77845, 0xFB42F008, 0x97D40371, 0x01300315,
    0xCC22102C, 0xD0163647, 0xB4701F8D, 0x2F116033, 0x6AF46B3B, 0x21445064, 0x5E102B75,
    0xA03A211A, 0x102B3695, 0x2C64E023, 0xC00A1638, 0x7E903101, 0x2403B417, 0xD0037390,
    0x96C46695, 0x04B83115, 0x2109B67B, 0xB519C9A6, 0xA2007105, 0x6979466B, 0xA8E001B3,
    0x61B184E6, 0xD2462C11, 0x03003A97, 0x825E493B, 0xB1129FA3, 0x7F7352B0, 0x79450A61,
    0x4BAAACA6, 0xB19AB973, 0xC7877011, 0x5002164B, 0x8A25CB01, 0x7E61B1D3, 0xDAEB3237,
    0xB8300410, 0x02BD51D4, 0x29A300D1, 0xA8A10AB6, 0xE003A734, 0x19FCB199, 0x56C11287,
    0x0A56EA47, 0x401B4600, 0x574A3502, 0xF1BF1BF0, 0xA02502DB, 0x01701D01, 0xD3586706,
    0x50011258, 0x53903101, 0xEEBE21FB, 0x1BCB1FA2, 0x6BB01211, 0x3B03582B, 0xF6761089,
    0x6EBB63B4, 0x324069D9, 0x2C11BAE0, 0x1069C238, 0x070053E8, 0x50210160, 0x1F102302,
    0xDA28B3FC, 0x4C245B14, 0x5B31DDC2, 0x24022523, 0xD01A0240, 0x94A00400, 0x3D00212A,
    0x7B049B33, 0x1FB34902, 0xE51147F1, 0x610C6796, 0x10AC0EB2, 0x22C3400F, 0x3B6F0346,
    0x41797CA0, 0x19AA173D, 0x12D37710, 0x31629C98, 0x30451B06, 0x91B6039A, 0x01C01C66,
    0xD41293C7, 0x73184734, 0x66DB4D6B, 0x0BC13B47, 0xA5E577A1, 0x224AEF10, 0xECAFAAD5,
    0xA2732384, 0x021A7900, 0x32A7F1AA, 0xA27DC514, 0x2701B020, 0xCB1BB031, 0xB00E1266,
    0x4AF60102, 0x614DFC17, 0x7B6110CC, 0x109B8166, 0x29394C67, 0xA97AB240, 0x02F1FBBB,
    0x3502D39F, 0x04641CD0, 0x29C88E9D, 0x0D6FC74B, 0x2118A940, 0x22101A00, 0x15BE2248,
    0xA3CF0011, 0x10BB3533, 0x6602DC3B, 0x61F8877C, 0x9B0B1003, 0x4250F012, 0x29CFC749,
    0x0243A41D, 0xF900600F, 0x9009119A, 0x03923737, 0x20113604, 0x9CC15093, 0x03A6E510,
    0xC910887E, 0x1039226B, 0x022A68B3, 0x7DC96C42, 0x802C3592, 0x4E01A12E, 0x49039A54,
    0xD4E5BDFB, 0xC6410968, 0x5A10A39B, 0xA93438BA, 0xCD2866A2, 0xBD21364F, 0x31188965,
    0x34127A01, 0xBA86FB0F, 0x010C7B43, 0x59F382CD, 0x1F87C109, 0xF03A3178, 0x976A95AF,
    0xACCE8CB4, 0x80351AD6, 0x11D5F602, 0x31361009, 0x5114CA73, 0xBA878101, 0x89B9D106,
    0x1B90B898, 0xC1502A4E, 0x5BB6B25C, 0xC666C899, 0x6385AE9E, 0x190312B9, 0x3CBB0070,
    0x2235E911, 0xE1A8488A, 0x2A940304, 0x9E1BD4D1, 0x1746136A, 0x786803C3, 0x6097879E,
    0x6A1B1A30, 0x069F0342, 0xD3FD3E6A, 0xB226AD3C, 0x9A154321, 0x11B3DCAE, 0x4272001E,
    0x3482BC05, 0x87010B95, 0xDEC051F8, 0xE01B8898, 0xC8125CAA, 0xB8BA697A, 0x71D34312,
    0x94602E26, 0x216C7022, 0x6014A790, 0xD676D200, 0x64006004, 0x56D8AC2D, 0x1F5A7D02,
    0xD026D6DD, 0xB01602E1, 0x01810DBF, 0x3426979D, 0x610ECEC0, 0xBA003AB1, 0x93A9710A,
    0xA999BDA9, 0x00D0195B, 0x952705D3, 0x3318BABA, 0x57E032C5, 0xAC2E8028, 0x9D763062,
    0xAE1003A6, 0x7601B547, 0x170C2565, 0x0303BBB4, 0x0DC9C019, 0x589400E1, 0x005115C6,
    0x11430D5A, 0x9810BDF6, 0x03BBA2B0, 0x22AFDC2D, 0x2A2AC0A6, 0x269BBE00, 0x2FA322B9,
    0xF2010300, 0xC8C19C00, 0x0D002124, 0xB01400F0, 0x1DF92502, 0x3C2C55AD, 0xFBDA0330,
    0x80701010, 0x11CE520A, 0x978100D1, 0x5E5DACB2, 0xE5DB7B09, 0x300301C9, 0xBB203AB8,
    0x6EC0D996, 0x46A03262, 0x66C01533, 0x1500313A, 0x18EF0160, 0x3D1D9E22, 0xCD028039,
    0x359710DD, 0x4359DC99, 0x1E7CDDB2, 0xC9DA011A, 0x5097418D, 0x29AF69A5, 0x9014A03D,
    0x02603861, 0x02335020, 0x1137DC00, 0xA4D8B800, 0xD0B064DA, 0xF1167771, 0xCF41F944,
    0x3ACFA115, 0x9952CDB3, 0x104DD262, 0xC6D18007, 0x8000B744, 0x02F0389C, 0x858E5A88,
    0x600E4C6C, 0x13FE0C00, 0xCC7082EE, 0x75DADD01, 0xE2902003, 0x2CA21A64, 0x84D79CDD,
    0xD2502E03, 0x8DB53102, 0x77F8D589, 0x034038B2, 0x1B4E0336, 0xA6E5A03E, 0x146CDB20,
    0x7A02BAE2, 0xC451A2D2, 0x112C9003, 0xA8ACC006, 0x3E221179, 0xE39B598A, 0x08C66C16,
    0x046825CC, 0x1FBD0E00, 0x4D8E5D7C, 0x5A87038E, 0x01900415, 0xCC392031, 0x0B5F20B7,
    0x25CD1C11, 0x01114B1C, 0x91D5DDA0, 0xA219F7C6, 0x4752DBA4, 0xDD50C0FB, 0xE6A83598,
    0xAB03A6C1, 0xE3B7156D, 0x03538BDE, 0xF3E2F015, 0xBD146B76, 0x48CB27A2, 0x69108DF7,
    0xBE95E3D7, 0xC62622E2, 0x4496F008, 0x0CE08B0E, 0x3D515A8E, 0x7B38902D, 0x2E383BC3,
    0xDB3DA910, 0xA510DCAF, 0xCD7B1DAE, 0xBDD00B10, 0xE58864C6, 0x51022836, 0x02BDDE00,
    0xD4EB3A03, 0xA158E81A, 0xC68BCF2F, 0x02DCD031, 0x6883BA20, 0xDA6B7F11, 0xD1E7710B,
    0x0EC2B093, 0x000CAA51, 0xE8EB439A, 0x7ED597AD, 0x15ADE090, 0xD06DB015, 0x7D4C037B,
    0x323E9310, 0xC3112EE5, 0x2EA333AC, 0x1D7ED210, 0xE1A05886, 0xDBE5102C, 0x864DF35C,
    0x36622EDD, 0x5B3BE950, 0x5D647C01, 0x2E0247CE, 0x6B6AEBB6, 0x7D9BD311, 0x12CCB10D,
    0xECBB02C2, 0x9BE629D2, 0x3CD52EF9, 0x9E47EF99, 0x01A15AE6, 0x30694855, 0x1000EDB0,
    0x0345FC7C, 0xD4107D95, 0xBEF7E17D, 0xB8E382B4, 0x41E85108, 0x9CC71036, 0xEF995BE9,
    0xD5166467, 0x1B8C2573, 0x00B6B903, 0x1762A64E, 0x964E0251, 0x107D1003, 0x08E03EAF,
    0x5D51D821, 0x434E9E6B, 0x0FF149B0, 0x0C7D166C, 0x7FB466C0, 0x24F3C104, 0x6B6D117F,
    0x10BD804E, 0x07E7EBA2, 0xC656F2A1, 0x0395F1F2, 0x83F49ED7, 0xC3FB169C, 0xCF8B42CA,
    0x35E3D998, 0x8110F1C0, 0xE1FECC00, 0xC6E5AC18, 0xC107DD64, 0x103DD8DF, 0x8782BEE7,
    0x8ED0F62C, 0x3CF00616, 0xE3D2948B, 0x3F57629C, 0x9A4F8311, 0xA8E46DA3, 0x6E1D1098,
    0x5C002D46, 0x4B53AC3E, 0x2F14996F, 0xC1A118C6, 0x1100E556, 0xD0100110, 0xF9EF9EF9,
    0x0D00F011, 0x10070070, 0x4CD132EB, 0x9C5EB405, 0x1F2EF3DA, 0x6C101411, 0x06F6C038,
    0xFA04F4A1, 0xDE293496, 0xDCF93466, 0x310CF63E, 0x00970524, 0x22019018, 0x70281E40,
    0x03302F02, 0x8950E032, 0x04638F82, 0x0281A827, 0x2302B709, 0xC01201A0, 0x1335872A,
    0xB77E800E, 0x533AB724, 0x32110AB5, 0xBBB5524B, 0x1A27F96E, 0xFB8103E6, 0xE39E7E64,
    0x3003107F, 0x0231A520, 0x273D75A7, 0x191F5ACC, 0x5B126A21, 0x2030227F, 0x0306A380,
    0x005123E4, 0xC7428100, 0x0D05820D, 0xD071C416, 0x03178E60, 0x18843C00, 0x87C4E251,
    0xBC2A1232, 0x450443A1, 0x6206248A, 0x238291CC, 0x33188144, 0xC0F8889A, 0x3983C5C6,
    0x19848C60, 0x9A4CE653, 0xC4DE6D35, 0x4EE75399, 0xEC3B319E, 0xC6438930, 0x341300C3,
    0xC331406C, 0x3B8C8D06, 0x6960E876, 0xAA54EA52, 0xD5387438, 0x0CC6C351, 0x382C190E,
    0xC373A9EC, 0x1554A88E, 0x73D0E8EE, 0x68835942, 0x68B01667, 0x98064752, 0x30E46206,
    0x442E8399, 0xB86F6C95, 0xF0581B0C, 0x0D85C260, 0x33F8E61F, 0x30148D28, 0x4848D45C,
    0x18E4C643, 0x964C6395, 0x8D068331, 0x7ECD5A1A, 0xB4438D06, 0x2E3A1E0E, 0x00D0887F,
    0x340AC8F1, 0x883682F0, 0x9E8306C3, 0xBD04781E, 0x82266121, 0x4479188F, 0xB200B980,
    0x572904D4, 0x5AB97C82, 0xCDE672F9, 0x4C54D39D, 0x1A8DA130, 0x8F5B2633, 0x76FB4301,
    0x5FB9DDEE, 0x06C36CD6, 0x7352F26C, 0x837D20E4, 0x09050745, 0x105F3402, 0x1CEC37A3,
    0x500A7A31, 0x0E215AF1, 0x2A66041A, 0x07072A98, 0xB6E09260, 0xCE300EA0, 0x639EC02F,
    0x1F0741B0, 0xADBA29E4, 0x3BCEC864, 0x10C42F0B, 0x18681906, 0x0F0F3CAF, 0x1BBD0AB2,
    0x00E0D84E, 0xE0539601, 0xE340FD05, 0x789E8301, 0x99A44F33, 0xA1715836, 0x29800C18,
    0x42F2A002, 0xEC904120, 0x21483083, 0x83D20C87, 0x30CB241D, 0x8BBD2549, 0x9F0FA941,
    0xBC074834, 0xC4E0A858, 0x617010D5, 0xA06EAABE, 0xFC08278D, 0xBD876822, 0xCB414A64,
    0x71907482, 0x94CC0C24, 0x7C02862E, 0x223EA854, 0x4EB3A4E7, 0x60A00AC2, 0xD4961905,
    0xFF3F330E, 0x18CF90AC, 0xD0B28438, 0x413866F3, 0x600CC435, 0x74B34761, 0x92AC2158,
    0xA6701AF2, 0x28CCD815, 0xA8528E4D, 0x2412CCF1, 0x1C5300D2, 0x54B3B480, 0xE8E54F53,
    0x0B1E0D80, 0x38CBC994, 0x13850ADB, 0x05214850, 0x014D6E15, 0x604A1405, 0x661A33A1,
    0x19496CA8, 0xC9F4286A, 0x017070D1, 0x2B0D1E84, 0x5B4C0540, 0x0227531A, 0x534B9454,
    0x0E181498, 0x9A620BA4, 0x22B74C01, 0x52282DB2, 0xDCB72551, 0x20780321, 0x68681784,
    0x6561BB95, 0x1485E160, 0x82809024, 0x091CAC08, 0x80260A01, 0x5A178320, 0x418613E0,
    0x0721C06F, 0x0F3A9CA7, 0x43A562CC, 0x141186CF, 0x13806C30, 0x4108359E, 0xF4E81C9E,
    0x2A68144C, 0x2C1C2A50, 0x932EE91E, 0xA240F078, 0xCA1BF6E8, 0x7657955C, 0x4A0C804E,
    0x0B866198, 0x846193AD, 0xE00CAA0C, 0xD8229DBD, 0x5ECBBB73, 0x1B8630C0, 0x8320C856,
    0x2150380D, 0xEB641885, 0xAC8C6170, 0x4504A1BA, 0x86002B07, 0x6B0D3D8C, 0xA0218F2C,
    0xF7470209, 0x03A29903, 0x02ABCDBA, 0x6D8EBF93, 0x66D79606, 0x3006309B, 0xEFE7B758,
    0x84618436, 0x37C00A0B, 0x16E40D2C, 0xF8C904D8, 0x0C85EEEE, 0x0099CD96, 0xCF32FA02,
    0x7850A869, 0x1404B080, 0xB0816D96, 0x6C2BCAE2, 0x3AB84E98, 0xAA609407, 0x8AFE6AE0,
    0xB403888B, 0x8541CA0B, 0xFD474FB6, 0xE03A01A6, 0x7F815DAC, 0xCB01C12D, 0xD0209B05,
    0x20185C18, 0x02920C01, 0x377642D6, 0x0A21EB00, 0xCB284746, 0xD283CED2, 0xB8561C2A,
    0xAE0C3037, 0x9E392BFE, 0x2F38201E, 0x89967415, 0x1DBE8C6C, 0x53A7DC29, 0x4C03E88E,
    0x7528D873, 0xE89FCFF3, 0xEF7A1701, 0x180D6E8E, 0x0330DEC0, 0x222173BE, 0xD7583807,
    0x606A18F5, 0xA016221C, 0x1C0241C7, 0x34118110, 0x79A234A9, 0x005AC192, 0x60189E31,
    0x81E3D006, 0x01F2C205, 0x2D2985E2, 0x0D004933, 0x0D03A4C0, 0x7948C4C4, 0x0643DE91,
    0xE9AB82D0, 0x43E80400, 0x500AF9A1, 0x6778C982, 0x40B82643, 0x003302F0, 0x00C00A1A,
    0x07C10015, 0x89BF4042, 0x32556018, 0x3E0D2173, 0x29CA1FE0, 0x90230744, 0x503001C8,
    0xE53CCE82, 0x18703A49, 0x01327303, 0x4DE72103, 0xFFC0113C, 0x1C033282, 0x9E02E4CD,
    0xB24C22E3, 0x2410C258, 0xE03B6151, 0xB8D50A5A, 0xA0A805B6, 0xC1AA4C06, 0xC336CC0A,
    0x02605C0A, 0xBFD0A020, 0x5FAC305C, 0x042290F1, 0xBCB040C8, 0x78128343, 0xB96769A0,
    0x300244A0, 0x00780380, 0x10F22105, 0x0360760E, 0x26ADE40C, 0x468A9424, 0xA98072C2,
    0x2726AA8C, 0x52F81103, 0x44E04675, 0x2C100104, 0x49551AE5, 0xA7580FAE, 0x01724D3B,
    0x13C3FC07, 0x04403806, 0x6701502D, 0x413028FA, 0x3005A932, 0x5D1000C9, 0xD4A09E28,
    0x09234BA0, 0xE0480340, 0x2C28A782, 0x81603B28, 0x01126CE4, 0x7405E604, 0xF400D13C,
    0x1193484C, 0x3097EE66, 0x78C28039, 0x84889BA0, 0x59BF2A53, 0x354B3A65, 0xA0D81000,
    0xC0F21B5D, 0x0042732C, 0x04E06C04, 0xC04CC3FB, 0x160313B4, 0x8004C4C0, 0x50B1257B,
    0x28019356, 0x29640693, 0x1032540F, 0xE004983F, 0xC1D95252, 0x2CE2C2A7, 0x2651A688,
    0x0EC93230, 0x0B131028, 0xD206AE78, 0x8A5AC884, 0x96754529, 0x580B4834, 0x49F73081,
    0x131C1503, 0x40A00227, 0x52A3240A, 0x9BF3EE7D, 0x92A3C11C, 0xCD92D298, 0x1B00A4D9,
    0x280E8190, 0x5C14BDB6, 0xA0132613, 0xDA360E58, 0x4C280693, 0xE8602D07, 0xCE202448,
    0x530A6E54, 0x08489A90, 0xA882B7C6, 0xCDABD49A, 0xB6FB00A9, 0xEA18A143, 0x48170064,
    0xF3BD4029, 0xCCC52682, 0x1DBB7CAD, 0x9DBA724C, 0x0667765D, 0x59A34107, 0xE803B777,
    0x13064F6D, 0x4AB3D320, 0x660ABCE7, 0x99337CA4, 0x17709C54, 0x041EC493, 0x9329134D,
    0x55F6365C, 0x03073ACA, 0x0B126036, 0x0413952A, 0x175D80B0, 0x8875CCBA, 0x901082A5,
    0x402604A0, 0xE6F607C1, 0x048DFAB3, 0x5444C202, 0x832A0130, 0x271554B6, 0x9640B001,
    0x1D92DAFA, 0x1192C068, 0x46F54069, 0x109E4E46, 0x344688A0, 0x8A1E4C6A, 0xA4C2C791,
    0x6894256A, 0xDCCA2844, 0xBAD656C9, 0x6600D988, 0x0882C95F, 0x0B3DA020, 0x6E0740D0,
    0x9D5BDE35, 0x55DE02E0, 0x401802C0, 0x80BC0A80, 0x8194FBA6, 0x0290640D, 0x01AD4816,
    0x3962B80F, 0x91D716E5, 0x28B60038, 0x680AC049, 0xE0F1A4C0, 0xD52406A0, 0xB0240089,
    0x467DE402, 0xA7902892, 0x58EB1A44, 0x26F57417, 0x0B2C1019, 0x0811CB7E, 0x3064B608,
    0x70B3C079, 0x608854B0, 0x48394C0B, 0x2C5575E4, 0xA85E4318, 0xD9A19D05, 0x56FADC75,
    0x2B40CCCC, 0x0B98102C, 0x1302F067, 0x1602204C, 0x416B2FD6, 0xCCED603C, 0x58057360,
    0x67DB1BC1, 0x53F41D03, 0x989AE830, 0x02E21733, 0x9A843E97, 0x4F70FD4E, 0x1496DC26,
    0xE64744C7, 0x24471A99, 0x2C1CD850, 0xA811220B, 0xBB367EE2, 0xE4EF3662, 0x10BE4A02,
    0x030A6AD0, 0x06485AB6, 0x4D917027, 0xD6DFB00E, 0x4401E472, 0xA20CC186, 0xD811804B,
    0xB984B9B9, 0xEB0A0CC0, 0x39AC1BD8, 0xDA7DD300, 0x93BBF20C, 0x06AC7A53, 0x7E4985C9,
    0x8A6938B6, 0x9C8C0088, 0x66799AF6, 0xCF5266D7, 0x9BAE0244, 0x80633EB3, 0x804C0CCB,
    0xB3D923D3, 0xE7F24790, 0x0480CCED, 0x0B400911, 0x1383575C, 0x2500861C, 0x70557068,
    0x50094A90, 0xE981838C, 0xD072F400, 0x40149967, 0xE9E97283, 0x9726AC48, 0x048442E8,
    0xA96194DE, 0x06130DB5, 0xA9D500B8, 0x598DB556, 0xC5D90220, 0x7CFBD624, 0x7D6B90C1,
    0x40B088EB, 0x75182F7F, 0x1F201C60, 0xA360EB07, 0x7992C801, 0x9C61B060, 0x1A59E0B4,
    0x334889AD, 0x089881CA, 0x2106B8E0, 0x5E0E44D9, 0x607C1D90, 0x8E0F0FDB, 0xA4D4952B,
    0xE2C674CD, 0x66C1AF17, 0x61A82B3E, 0x080380BD, 0x05B9F7E0, 0xC359EE96, 0x7112D6D9,
    0xCD0485B7, 0x600CB0EF, 0x8B315003, 0xC1F02A55, 0x27B1CE4C, 0x99B4B663, 0x94734265,
    0x5F229845, 0x1FCD98F4, 0x116F1C22, 0x9747E21C, 0xAAD97BF0, 0x686CEC99, 0x40B81E05,
    0x94703406, 0xEABD540D, 0x05DA2F53, 0x41CAE04E, 0xA0CE4B01, 0x1A0950DD, 0x85DB43D7,
    0x67267D30, 0x7D744437, 0xF61C1AA1, 0x74501330, 0x120D83CC, 0x26DCB017, 0x09CBCE9A,
    0x30170269, 0x69E76509, 0x21175B4E, 0xD8D8CA02, 0x3F48EC60, 0xA046007A, 0x20DB8A52,
    0x81201F05, 0x00600604, 0xC8000C03, 0xE57C9913, 0x0F824025, 0x144260A4, 0x4EAFD0C2,
    0xF8BB5B60, 0x7912ECCC, 0xE225DA00, 0x45710C6D, 0x01500A39, 0x28FCA40F, 0x0144F312,
    0xCE8B91C7, 0x6780E263, 0x1CCB20E9, 0x16A70009, 0x54111133, 0x47762850, 0xA0338AFC,
    0x20659F5D, 0x79F00B01, 0x00C00860, 0x05008004, 0x2F41A82F, 0x07D2C7DB, 0xFBF4ACE8,
    0x544A7D3C, 0x9BD6111F, 0xB0343B9E, 0x400261E8, 0x087E6A82, 0x49AF9752, 0x02BCC808,
    0x04A447E4, 0xAA7C3FBD, 0x88CDB2A6, 0xE1C4EB4C, 0x6336BE4F, 0x0EDBD000, 0xE6BA301B,
    0x38090050, 0x12401701, 0x0435B33B, 0x899F1F99, 0x375B9294, 0xEDB3A889, 0x81BE0178,
    0x8C2BE897, 0x0F3DC00A, 0xE2E201C9, 0xA8100389, 0x9A96D8BC, 0x32E62C88, 0x0040989D,
    0x048892AA, 0x101D9E80, 0xB52400BA, 0x19A953E0, 0x18E732E8, 0x19800980, 0x199F6B40,
    0x080800B8, 0x38701914, 0xB4B22C0A, 0xA40B887B, 0x01600633, 0x2401A1BE, 0xB0098C44,
    0x2E62DD81, 0x1189D96B, 0xAA4F2C28, 0x20DAE089, 0x513E242B, 0x108912E1, 0x27416781,
    0x1036D41A, 0xC97841F0, 0x00090636, 0xB1175006, 0x92950EFA, 0x359A3281, 0x88B93B40,
    0xA93EB1C8, 0xBE600800, 0xE5AC0322, 0x24298088, 0xB309828F, 0x7FB5C89D, 0xC09841CB,
    0x43FB3200, 0x38C14898, 0x7A4B0169, 0x017896C4, 0xEB43340E, 0x8BC6005A, 0x10832A81,
    0x6FC0621F, 0x42DB35AB, 0xC2843B3D, 0x6D90D43C, 0xA40D00C9, 0xB3F8E63F, 0x228B6AA1,
    0x100A0B0C, 0x89B303B1, 0x1B093369, 0x5954BC10, 0xB4388238, 0xED004087, 0xBC2F2231,
    0x2162EB44, 0x0D8198EE, 0xB00293B0, 0x90CB1780, 0xF4B35819, 0x0B6AC3B1, 0x81925E80,
    0xA480020E, 0xD01A8EE0, 0x4018E5BB, 0xBA8BFC2A, 0xA0008C0B, 0x89B2C916, 0xBC40F806,
    0x011CC3A2, 0x168885BC, 0xF322A000, 0xB461C768, 0x3380092E, 0x0209110D, 0x21C30028,
    0x00900180, 0x1101121C, 0x0C808108, 0x81147FC8, 0x0100580B, 0x5802C7D0, 0x00309DC3,
    0x0B92680D, 0x83FC81A1, 0x368B5AC6, 0x40BF2800, 0x20053763, 0x30425E40, 0xB342E0C4,
    0x58C12A50, 0x46790093, 0x84475A0F, 0xE091C468, 0x1CB2C100, 0x79351306, 0xAB94B364,
    0x80D80FB5, 0x178EC926, 0xD141B6F0, 0x38D49DB8, 0xA049C019, 0xB0161269, 0x80C80B00,
    0x0489EAB2, 0x1BEC8118, 0x08948924, 0x9448A2FF, 0x043B940B, 0x41F00D00, 0xE6C6401A,
    0x6A6743E0, 0x2E30C132, 0x9AB5EAA7, 0xE8180020, 0x891A513B, 0x4918245D, 0x6367A72B,
    0x49848AAE, 0xF780C2CA, 0x00EF8CCA, 0x25EA57C5, 0x1638CB8A, 0xF0158168, 0x89A44E31,
    0xEEACF0A2, 0x8CA601A8, 0xAD800A08, 0xA89FF4AF, 0x6801BB4C, 0xC5C8EEC2, 0x00A6C8D5,
    0x20C111B9, 0x4949103C, 0x6D006099, 0xE891C582, 0x3DFA8CCA, 0x4C9D1000, 0x34B6C78A,
    0x425002A9, 0xCAB55370, 0x30180A50, 0x80601101, 0x0389948E, 0x4CC00150, 0xAB9889BF,
    0x87CC3340, 0x8C8C4990, 0x15680888, 0x0B8E6420, 0xB8DF3F68, 0x0D724DCA, 0x8989BB7D,
    0xA4D9A4C9, 0x0B91AD08, 0xFC087C6B, 0x1485A300, 0x4AA2754D, 0xF84EB4D3, 0x10198CCA,
    0xA1A00D01, 0xB580409A, 0x501B0ED3, 0x4A8AE94E, 0x40CF016B, 0xB007B68B, 0x35F4DBAB,
    0xF60F337A, 0x380F89E4, 0x413B8649, 0x0DAA689A, 0x4098B272, 0x349B48CE, 0xB60F3459,
    0x12754E9C, 0x92493D00, 0xCD319AB6, 0x38CDC9E0, 0x3AF93DD0, 0x1299A125, 0x944B00B0,
    0xB3800808, 0x5101B817, 0xCC21C3C4, 0x4530004C, 0xEABDF819, 0x1CBE0EFC, 0x0903480C,
    0x4A3DD01B, 0x789016CB, 0x888BFA81, 0x1D2C280C, 0x83584748, 0x46B9719C, 0x00D0C432,
    0x98D6A55D, 0x10E0EB9B, 0x10B7181A, 0x2AD347F8, 0x521AD381, 0x21813013, 0x1812012D,
    0x81001101, 0xEAD0B012, 0xD4B993F0, 0x81701A10, 0x3EB2F1F7, 0x5098488C, 0xADB018C2,
    0xA9CFAD0E, 0xA81841F4, 0x0C241981, 0xE18A0B9E, 0xDBF90B0C, 0x09B2093F, 0x993DC991,
    0xFA6D0068, 0xA103133D, 0x55D1C357, 0x48ECCDCA, 0x00C01581, 0x06806005, 0x80030060,
    0x00108E3F, 0xD6807004, 0x481580C4, 0x2F881381, 0x41C50160, 0x80130191, 0x33830E1F,
    0x89C28019, 0xCCC8C8B8, 0x968AB1D0, 0x8147A80D, 0xC0C2CFC9, 0x0B3CE080, 0x0009CC61,
    0xB30D1009, 0xC7380709, 0xFD555085, 0xBBF4BDEC, 0xD0051780, 0x09A35D3B, 0x64639BE0,
    0x97A9740E, 0x6F8CD97F, 0x73B68CBB, 0x322CA74D, 0x3C898224, 0x94254C6D, 0x887D3601,
    0x180EFB16, 0x589E5110, 0xB7D44100, 0xFB89DD13, 0x941124EB, 0x4443E089, 0x12CB0899,
    0x30A2409A, 0x44288CCB, 0xC5A5555B, 0x5B78C633, 0x00CA400D, 0x6343836F, 0xC39F19AC,
    0x3231B900, 0xCB421AE5, 0xEC5CCD29, 0xD3154F80, 0x2C0C1403, 0x288498A1, 0x00609DC9,
    0x53128D52, 0x2B4A88E5, 0x88956B26, 0x8847232F, 0x418F28E8, 0x274D734B, 0x1A018391,
    0x21064CE8, 0x25B80480, 0x1A3540C9, 0x05660168, 0x019C2500, 0xDC802D84, 0xC9CB01A4,
    0xD7E57D54, 0x09015818, 0x780189C5, 0xB84AA181, 0x4A4FD8C1, 0xC88F09B9, 0x08A58CA4,
    0x122C1010, 0xC8F356FB, 0xA55D8A33, 0x18A61010, 0x6D818178, 0x00700290, 0xFD340813,
    0x000E01A9, 0x565C8B8B, 0x3A510098, 0xB3D5D133, 0x00E45C9D, 0x7558BD7E, 0xB80089BD,
    0x415A8CD9, 0x6300B0C1, 0x54164F83, 0xCF19EDCB, 0x8C471889, 0x10BE45C0, 0x516019B1,
    0x031B65A2, 0x20ECCF38, 0x804BC9A8, 0x7DDBEDBE, 0xF0048C1C, 0xB9534080, 0x159C6817,
    0xD8985AD8, 0x01699F57, 0x194F3B4E, 0xB5AE9B08, 0x09CD9E33, 0x8CB45810, 0xBDB00180,
    0xD3700289, 0x8E5688A0, 0x28B95350, 0x556B6E5B, 0x49D18B86, 0xB55AAC74, 0x4409F35B,
    0x45B14C63, 0x6001001A, 0x81000D00, 0x0D80E80E, 0x7D4580E8, 0xB8B0EA01, 0xDB814015,
    0x000F00ED, 0x47D80C01, 0x8A541802, 0x680F8030, 0x0181F6A1, 0xB02BB012, 0xCB5AD4F5,
    0xDC84DCD8, 0xEF5E8888, 0x089ED7A8, 0xADD81000, 0x9E572884, 0xBBFDBE28, 0x000898D4,
    0xC1138C60, 0x44C9889C, 0x00631208, 0x1B0FDAE1, 0x4DD5A900, 0x402C62A1, 0x0C0071AE,
    0x746280A0, 0xB8D2F701, 0x17960998, 0x46006000, 0x8EAD044D, 0x10AF7016, 0x380900A8,
    0x013224DE, 0x3099F389, 0x7D8601AD, 0x01A5AB88, 0xC40884E7, 0xD9B0B5AD, 0x8EE53080,
    0xFF09CDF8, 0x181C24EC, 0x3DB8C0DA, 0xD701B1C8, 0xA3112604, 0x08953B01, 0x889713FF,
    0xAAC75B18, 0xA14DF92E, 0xC6DC248B, 0x919E8EA0, 0x3A6B89D2, 0xA10152F9, 0x7269AFC4,
    0x81910CAF, 0x0E3BB012, 0x9CAB2610, 0x8ED60C08, 0xAB888D94, 0xE4F10EED, 0xB9800B89,
    0x1881E0A9, 0x837CB96D, 0x09962C28, 0xB924C001, 0xB891D7F0, 0xA9B8F34C, 0xCFA4CB2B,
    0xA9B661A5, 0x8CBA8000, 0xD0CEB61D, 0x3014ABBA, 0xD9800681, 0x6FA433FE, 0x53586253,
    0x4CE81B29, 0x08C8B805, 0xEE0E516E, 0x09BB6A93, 0xA9A8400D, 0x1D6301D8, 0x0BCCE60C,
    0x2A09BAAE, 0x98FE98F6, 0xB7F81309, 0xC1347A39, 0x4634AC5A, 0xCEBDC921, 0xCD40CCEB,
    0x400F8158, 0x00C5E380, 0x1A90B10D, 0x40884448, 0x81947A80, 0x0C8003DA, 0x0819C1F0,
    0x99F4B79B, 0x9C3922FD, 0x8CF980D0, 0x61601512, 0x671B189D, 0x1DA501C2, 0xC5B00189,
    0x896549ED, 0xA3BED828, 0x2A4C7745, 0xD4E4D657, 0x993E2569, 0x8F013DB1, 0xB7C9D998,
    0x9998E01A, 0x01417638, 0x07899605, 0xC1FA6218, 0xA7DB20B4, 0x67088570, 0x90141815,
    0xDA380F21, 0xDB90A81B, 0x5899E0F1, 0x659147C9, 0x8A2870C2, 0x1DD501D9, 0x98F51709,
    0x89DEF81C, 0x7D87E7E0, 0xD50A4CAE, 0x041D4E67, 0xC10D6410, 0x0190A60C, 0xD4011811,
    0x380300D2, 0x80400380, 0x8BE8B68A, 0x8003003E, 0x011D2300, 0x9A0CE012, 0x50CCC501,
    0xE3A80A01, 0x663C635F, 0x60F888A3, 0xE4E089DC, 0x02E0B340, 0xE01BDC78, 0x09BE3E0E,
    0x1CB2959F, 0xD6090190, 0x90095089, 0xCD89BC4A, 0x589A3684, 0x2398F31A, 0x1D345813,
    0x5E835B68, 0xD308039B, 0x4501B141, 0x780612A5, 0xADBE7880, 0x08006806, 0x901815A8,
    0xD1F5602F, 0x87CE9007, 0x45BC8038, 0x198089E9, 0x0D889BD3, 0x460B2BA6, 0x3AF81B00,
    0x22A7BD8C, 0x2DF25343, 0x1D265D01, 0x8C0C2629, 0xA81DA671, 0x5F5099CC, 0xA6E14083,
    0x8882DD2C, 0xD83007DB, 0xA5584133, 0x8D8B195E, 0x00A81501, 0xC3CC680A, 0x10098068,
    0x90BE4F81, 0x68813961, 0xA0150025, 0x88953257, 0x452B1E06, 0xDE580886, 0x53401A8E,
    0xA499F684, 0xEDC48155, 0x6BA013E2, 0x1A81C882, 0x79696A48, 0x09C4155B, 0x23514803,
    0x7A9C62E2, 0xDD41F2D1, 0xC4661096, 0x6BEF995E, 0x55DEB8E2, 0x0280A800, 0xCC0C6072,
    0xC0E00D0C, 0x1B3AFC40, 0x408851B8, 0xCA6626D7, 0x72E544DA, 0x31EBDA3A, 0xE9D01A45,
    0xCBBD8087, 0xF81A0BFD, 0x00109CED, 0x1924EEA3, 0xF0996C78, 0xEEEE48D9, 0x43803087,
    0x1E401102, 0x67D24CC9, 0xE11956E0, 0x5E63D316, 0x0020008E, 0xB515E80D, 0x234C31DA,
    0x65E19F4C, 0x3A562098, 0x588950BB, 0x168BF3E5, 0x0027E391, 0x499F1A50, 0x01A9FB6F,
    0x6D0D1457, 0xCE460C0D, 0x89A60B28, 0x30EC0804, 0x15F4DCA1, 0x004A5FAC, 0x308FDDF7,
    0x89D4EFB4, 0x121EB4C0, 0xD715EAF6, 0xB52F93D9, 0xDB4CA8C8, 0xC643E088, 0x2ED33DD5,
    0xEE11BCE7, 0x08800355, 0x18192610, 0x0D6889E1, 0xBD81D70B, 0xCEC20B0E, 0xE05811EB,
    0xBCDF0888, 0xF099E7A8, 0x9B3273B7, 0xD0991F27, 0x5996714C, 0x63AD5071, 0xBF809C1D,
    0x019AA57C, 0xC21B5C8B, 0x09089E30, 0x06D02D80, 0x682AFDEB, 0x749DB00A, 0x143B0073,
    0x3D95EDC6, 0x9DEE8BB9, 0xFE48E818, 0x809891EB, 0x3301D2BE, 0xB42CB317, 0x80900381,
    0x1681CABE, 0x372CEAF8, 0x59772D97, 0xA000213B, 0x54C049F2, 0x55CEE367, 0x4448BDCD,
    0x823F21E9, 0xDA381488, 0x5ABD4B74, 0x645F6423, 0x8BFC5701, 0x18988B46, 0xE6D8A236,
    0x20036708, 0x87F2E819, 0xF8903BC0, 0x4E280180, 0x457550F3, 0x2F461727, 0x806139E8,
    0xEEA77013, 0x60010C60, 0x7098EFE7, 0xBD9DB3B5, 0x8AFD80E6, 0xBAD9F881, 0x0A08DAB1,
    0x173535AD, 0x56A00B00, 0x7F8AC8AA, 0x3EBE89EE, 0x89C72613, 0x2C36300E, 0x300A089F,
    0xB2D80474, 0x5C6C38B6, 0xD8EFF5CF, 0x802887F5, 0xAB007007, 0x98058066, 0x95CBCEB9,
    0xF5008DE0, 0x7807006A, 0x09A5CD00, 0x3D80C001, 0xC4D29F6A, 0x808098D8, 0x6C089DE7,
    0x250D93EC, 0x8E02D801, 0x88D62F1B, 0xB62AB008, 0xEF681476, 0x4CE8089C, 0x609BE472,
    0x37DB656A, 0x1781209A, 0x830C0145, 0xF7465ECC, 0x48F1E972, 0xD68C8044, 0x81181380,
    0x1B815010, 0x895FB8C8, 0x31913F99, 0x168AD0CD, 0x82D38110, 0x34A68C80, 0xEFCBA406,
    0x580073B8, 0xD13ABA5C, 0x8958BEE9, 0x6ED1F85C, 0xB40F871C, 0xA87699F2, 0x281D3989,
    0x09DF4481, 0xF7F1300A, 0xC2C878AD, 0x08A6CE67, 0x3E0A9C18, 0xE1EDDB5E, 0x745F92FA,
    0x110171DB, 0xF4EC9240, 0x3A5B39BA, 0x0E301DFF, 0x68050100, 0x00288872, 0x9B2B5012,
    0xA0110992, 0x08846DD7, 0xB9014802, 0x6088EE81, 0x7C095680, 0x004ED7A6, 0xEF894F50,
    0xDBAA23A4, 0xDDA0C89B, 0xAD9101DA, 0x900C4589, 0xAD09978C, 0x181A8A9A, 0x81508CD7,
    0x3AFB27C6, 0xE8CBEFC1, 0x0CD924E4, 0x6700C9A0, 0x78105F26, 0xF0E322AF, 0xED71D089,
    0x6586EEB8, 0xB35B5AEB, 0x3901B808, 0x6786D0B3, 0x014018BE, 0xD0182811, 0x0F240F38,
    0x2A1A070C, 0x87FB9D18, 0x1E604730, 0x70FE94E7, 0x1AE606D7, 0x37CFF7E0, 0x7D1D8B15,
    0x1A58B941, 0x400E0158, 0x1D635C63, 0x98C671D7, 0x2ED3C8D0, 0xC23F6857, 0x97338509,
    0xA7F211C5, 0x0D8283B3, 0x5B81901D, 0x422D65F7, 0x3BBDD1E4, 0xB2710B63, 0x93FDF526,
    0xEC4FE971, 0x024B97D5, 0x021B0803, 0x51A8DA07, 0x180D0683, 0x6C32170A, 0x8CC66328,
    0x00081713, 0xE2F168A8, 0x1A320DC5, 0x11E8C446, 0x0B1988C0, 0xE8F8BC63, 0x19C2A361,
    0x10423026, 0xC5449299, 0xCE183507, 0x26F361B8, 0x523A9CCE, 0xF3E8F81C, 0x2F034FA7,
    0x9A2CE474, 0xA0020643, 0x28E43D3F, 0x00E8F38A, 0xE01D16A5, 0xAAF4E1C0, 0xA4251DD3,
    0xF5EAED72, 0x62B0D82B, 0x2B2D92C7, 0x86C24116, 0xA8D06630, 0x0BC5A321, 0x60650B94,
    0xEEB76BA8, 0x2C150B85, 0x50C188B0, 0x0BB55F86, 0x50D0B6D9, 0xB4882B80, 0x5074650A,
    0x5C85604A, 0x06315B19, 0xED781188, 0x2E288BCA, 0x40F00477, 0x38AC5AF1, 0x0B3072AB,
    0x1D898034, 0x6D586FA2, 0x0D815620, 0x587758AB, 0xE8827AF0, 0x623AD16A, 0xFBED361C,
    0xC2E0F037, 0x60457F87, 0x18CD05E3, 0xA080381E, 0x09800020, 0x64643097, 0xFA407A50,
    0x682914DA, 0xB97198C4, 0x2A1A8C61, 0x81054828, 0xA04F469D, 0xB42F8E11, 0xDF63E101,
    0xBE3011B9, 0x62A21CE0, 0x75B9F385, 0x1C4F78D0, 0xA8280040, 0xF3555A26, 0x0C404585,
    0xC3A55DB2, 0xD03D5E08, 0xE1586E54, 0x157FDFD0, 0x8621785A, 0x82500A19, 0x4080345C,
    0x91180040, 0x0F0D1D20, 0x5C80B528, 0xC030357E, 0xB0901001, 0xC8320D82, 0x277850C5,
    0x02D3F038, 0x55207DE7, 0xB0C5D206, 0x451E0182, 0x490D5DF0, 0x42DF145D, 0x233099E9,
    0xA0E5A20D, 0x11BD0903, 0x3C0AC037, 0x5898D7EC, 0x95780C25, 0xA571E955, 0x3A116E02,
    0x1906C3C5, 0x9A26799A, 0x81957669, 0xE9943562, 0xD50B4851, 0xD1502260, 0x45D2548D,
    0x01F03805, 0x377C350B, 0x501C0C97, 0x3488D1E4, 0x0C1407FA, 0x51F0A19C, 0x14293307,
    0x4D510A03, 0xE960E895, 0x971EDA51, 0xDC4A1D47, 0xB6AE5663, 0x55619BC3, 0x5553A610,
    0x0455E04D, 0xD3898AA4, 0xA884240E, 0xCAB1AC26, 0x8A06A16A, 0x4781A0D1, 0x5720A404,
    0x647E9B0D, 0x799362E7, 0x2A054034, 0x0C56A774, 0x65E0AC34, 0x9A5C0A45, 0x49520B28,
    0xA70C9DF0, 0x87423652, 0x81E45EB8, 0x59150C0D, 0xD9DF0B51, 0x270E2A50, 0x015FFA0C,
    0x95896C2D, 0x0ABC250E, 0x89B102D6, 0x5DA2C3B6, 0x8402D005, 0x03A4E2AB, 0xFACE920B,
    0x8701C02F, 0x2E432DC5, 0x02115948, 0xA067B6E1, 0xD0A0024F, 0x053E9D21, 0x0F0880C0,
    0x791DE5A9, 0x9A008516, 0x4548120D, 0x18346802, 0x8E021179, 0x6943542A, 0xD73AD517,
    0xE01C007D, 0x143165C2, 0x330E8385, 0x509FFC44, 0xC2B566AA, 0xA0C80558, 0x073553A0,
    0xEB06D5D9, 0x0CDACBEA, 0x34BC0B43, 0x345B4DD3, 0xC723B7A4, 0x360BF264, 0x0411FC30,
    0xD5CD5B54, 0x07782703, 0x84210CDE, 0x3265E288, 0xC85D6C18, 0x40C47C1E, 0x345EFD8A,
    0xBE72B180, 0x3A5FE8D9, 0xB9C180D9, 0x833029FF, 0xABF145CE, 0xF65457F4, 0x350E137D,
    0xBC55CB58, 0x9ADBEB40, 0x0E3B8DD3, 0x27310AF0, 0x37049180, 0xD5430720, 0xEDD90B57,
    0x3BDA2542, 0x9DA00B01, 0x2108AEEC, 0x06152063, 0x51F05E4C, 0xF0C63E09, 0x3325002E,
    0x1B9BC344, 0x0D030C98, 0x82593DB2, 0x50321802, 0xA6ECBE43, 0x0157B070, 0x51746090,
    0x15EDA83C, 0x86E7830A, 0x3FAB0EC3, 0x67F53D3E, 0x4C033B3E, 0x797E5517, 0x34C940E6,
    0x115E6657, 0x1C770270, 0x0C9D80B9, 0x82852B6E, 0x04F82D8F, 0x5ADA5AEC, 0x14DB4084,
    0x0DE4CF19, 0x2370AA4F, 0xBFE40E86, 0xF6F20BDF, 0x2F200E15, 0x81483B27, 0xB8A5A4BF,
    0x7AA8EDC5, 0x71207C0E, 0x9517203A, 0xDC3D6460, 0x1C4FDADB, 0x85EC1D20, 0xB0140045,
    0x5238438C, 0x8040A901, 0xC1A10A73, 0x35923CE9, 0x22D06086, 0x0B8919E6, 0x183B7610,
    0x2C0720E0, 0x3073C0A8, 0x160594C4, 0x00320765, 0xE03057DC, 0xCD089B3C, 0x9E0B252B,
    0x20D078BE, 0x89B13208, 0x48CF5966, 0x06B07054, 0x1F85A8CC, 0x8460CFC9, 0xCE2A1605,
    0xE02921C8, 0x3466090A, 0x0461FE03, 0x22928F8B, 0x1236BC46, 0x8A80019E, 0x0441797F,
    0x00A15760, 0x37886080, 0x980C41D9, 0xF21295F5, 0xFB1D7090, 0x38EC098A, 0xD0E4139B,
    0x243C8689, 0x90A8DC57, 0x6AE0DC17, 0xC9DB8805, 0x1091857C, 0x617C304C, 0xBA0C4059,
    0x7DCD2728, 0x19F50104, 0x823CBD4C, 0x4460ECA4, 0x90E82700, 0x12375A81, 0x42AF1019,
    0x8457C007, 0x0102D078, 0xF202657A, 0x520E9092, 0x080D15D8, 0x00304172, 0x29832222,
    0x8FC08B4C, 0x81111831, 0x9404E674, 0x04E60CCD, 0x0BC04965, 0x2D1293B0, 0xDE3124FE,
    0x9F1B64E2, 0x6DCD0325, 0x31EF4E4F, 0x506728C0, 0x404D0C9D, 0xC1E4BD06, 0x15F8120A,
    0x374FFC05, 0x6C0AEBD9, 0x1D1AB8FA, 0xC36A40B4, 0x4F3067BC, 0xC48C4302, 0xF33784E9,
    0xE252C288, 0x2018B2CC, 0xA1FA8FA0, 0x1A001254, 0x90A09819, 0xEDC0E117, 0xE932A5BE,
    0x2104E0C8, 0x30C2E0B2, 0x7E76C744, 0xF472050A, 0x8066024A, 0xE0B21EC4, 0x57B93FA3,
    0x02A28D2F, 0xA5B3E260, 0x8D0EBC4D, 0x5500070E, 0x3F8464A6, 0xC940E709, 0xD0EFCD02,
    0x414A9C60, 0x87A44D26, 0xC670C791, 0xA4F91592, 0xA1C22B40, 0x9680A8B9, 0x0BC059C2,
    0xC24F2076, 0x260460ED, 0x46EFCAE5, 0x79B393AA, 0xCC050425, 0xA05C0ECD, 0x1592974E,
    0xD2580282, 0x91589660, 0x8628F814, 0x60D6C13F, 0x2A160A8C, 0x52A3D189, 0x4AFA0061,
    0x2C0891FA, 0x1916A6D4, 0x50654180, 0x7520021B, 0x8E256A2D, 0x83502E00, 0x9745365E,
    0x47007961, 0x1A0392AF, 0x1B2BC6B8, 0x907EEAD0, 0x3ACDD652, 0xA9A00371, 0xF22AEF41,
    0xD5B947C2, 0x20D81327, 0x01C2C135, 0x9EC658D0, 0x09E9A13E, 0x1F19AA65, 0x216549E1,
    0x669B0A4B, 0x9E5700B7, 0x2211AA40, 0x12C4C64A, 0x96601C81, 0x24903A70, 0x59101850,
    0xB5D1E131, 0xE3EE7D9C, 0x96BD700C, 0x3100C001, 0x3E4FA363, 0x86779833, 0xE422B3C5,
    0x67D0044A, 0x32288F57, 0xC8B2A125, 0x2FD2476A, 0x4520A801, 0x004E24B3, 0x9483402A,
    0x64019586, 0x57710099, 0x72E09553, 0x28300125, 0xD05EBB2E, 0xB812E84A, 0xDF682171,
    0x50B00ED0, 0x64C4B2FE, 0x586DD97E, 0xEE2445A6, 0x838D549E, 0x3E0026C1, 0x5ACABE80,
    0x2A72A604, 0x77677C8D, 0x4024E05E, 0xD5655340, 0x0162C77B, 0x7A189C1D, 0x004AE53E,
    0xDD55F054, 0x36C0B534, 0xBD069E9E, 0xCC03B295, 0xE93F6508, 0x191AE626, 0xD18A4F16,
    0x88F54E04, 0x026268ED, 0x84001693, 0x45A50929, 0x17A29024, 0x77AD97D8, 0x0459323A,
    0x899A0190, 0x181DB889, 0x4006576B, 0x57EB1602, 0x8AF25807, 0xAAB53C09, 0xA1C0761A,
    0xD3337E37, 0xA1D07CAC, 0x8447C071, 0x2EC249F4, 0xE30C0343, 0xC97F2E28, 0x000C5723,
    0x1720BFB3, 0xCEC01A00, 0xBEC9240C, 0x25A0013B, 0x70411134, 0x32030CB4, 0xF206F6FF,
    0xF589903B, 0x4B4B838B, 0x2E008E85, 0x0D380E55, 0x2C0751E7, 0x206A72C4, 0x13F6A344,
    0x2BE8FDF8, 0x0CD1A45C, 0x4293FB64, 0x15B52E75, 0x588D2E91, 0x14054020, 0xDAB80676,
    0x106048D5, 0x8048DF5A, 0x34F83B05, 0xEC3054AB, 0x05C030B0, 0x508AB482, 0x94823C61,
    0x8EB884DE, 0xFFB63525, 0x0F600025, 0x18082926, 0x79FEA3F4, 0xF7B80F91, 0xE0D11EAA,
    0x6E232C8C, 0x51FA989F, 0x45A3D02F, 0xBF17FC34, 0xB703245A, 0x1004ACA3, 0x40D340DD,
    0x15F90500, 0x003D0D53, 0xC0571866, 0x01BECF06, 0xD5E2B9BD, 0xCF90F9A3, 0x9A387ED9,
    0xCC97FB4E, 0x08D6DAF4, 0x7F8BCF3B, 0xF93FDE12, 0xE36C2BBA, 0xA22D88E9, 0xCA272700,
    0x37051F05, 0x98000866, 0x2C1BC360, 0x0AC09001, 0x3C2ABCB8, 0x1F2C5192, 0x726AEDF0,
    0xF3060360, 0x813AD908, 0x2E217381, 0x729D3474, 0xF039F376, 0x72D05A48, 0xB0A01400,
    0x9B814032, 0xF281323D, 0xF60410B1, 0x564A70B2, 0x6C8AF510, 0xBB55216C, 0xA01C0036,
    0x7BC80ACD, 0x0B1B2930, 0xE94D9CB1, 0x04971108, 0x020A9658, 0x13839056, 0x350740DF,
    0x0C47B870, 0xAFB98250, 0x78220779, 0x6F03D0FB, 0x4EDC0721, 0xB4682A06, 0x03506109,
    0xBBC45B9E, 0x457C6183, 0x3FC12006, 0x5DAAC0D5, 0x969DDBA1, 0xCF8F917D, 0xF4B405C5,
    0x705E6800, 0x80C4EC01, 0x00CA07AB, 0xB47D8E0C, 0x36A0CC1C, 0x07000963, 0x31F6CEEA,
    0x339C057E, 0x280E1A0E, 0xF3C16E60, 0x381E42BE, 0x9BD8088F, 0x047AD2A2, 0x3D2ACF01,
    0x3E40134B, 0xEAC0D8B5, 0xE500795D, 0x87115EC1, 0x08EC18F5, 0x78B19F40, 0x4CA97D2A,
    0xD03103E0, 0x9347CF81, 0xBC0C1283, 0xFBA2EABF, 0x0330760D, 0xBFED730E, 0xCD6B0AFA,
    0x0C7F2F7B, 0x333BF759, 0x69A1C088, 0xF49F31E4, 0x0E2384F3, 0x0B1C06C0, 0xF2C0D48D,
    0x74D7D560, 0x046161CE, 0x8A542C05, 0x0D50045D, 0x44700DC6, 0x02C5754E, 0xE00E45F0,
    0x00C5DF5C, 0x008581FB, 0x840D8058, 0x9B280EDF, 0xBFC08CF8, 0x44CD0845, 0xA0A5FCC9,
    0x6B005C99, 0x5C0380BD, 0xC0A862CE, 0x8E4001D6, 0x24FC8910, 0x89F80900, 0xFEC0BC43,
    0xD19E4571, 0x1D2C0C08, 0x74DC9002, 0xA0EC5FC4, 0x9174EE1C, 0x5717D80C, 0xA40988B4,
    0xCE2DDF1F, 0xE010A00E, 0xB0028501, 0x4811DAC0, 0x574BB80F, 0xC4058010, 0x15820600,
    0x0A9AC80D, 0x8C712196, 0x009542C0, 0xEB893008, 0x8D92447D, 0x804C0C44, 0x26986801,
    0x180B00CD, 0xC00C4FE1, 0xE4D0C1F2, 0x5079D6BC, 0x1E804558, 0x0D043478, 0x144F9D9C,
    0x005401C0, 0x1640ECFB, 0x94510AAE, 0x4E21D040, 0x975C1809, 0xEC0680D9, 0x8014459E,
    0xF8618006, 0xA40E46B1, 0xA19A2440, 0x4146FA28, 0xB80A94F1, 0x93A45FC0, 0x9DD5A0C4,
    0xD06085AC, 0x8F8992C0, 0x0D8E880A, 0x60461B44, 0x00B9E140, 0x9FDC8D30, 0x5A04C438,
    0x80080044, 0x25005C02, 0x3A2350D5, 0xA1F4BD22, 0x06400C58, 0xD5FA1DD4, 0xDA04E19D,
    0xBE9F81EF, 0x8DC84534, 0xC7023622, 0xE290CC04, 0x7999C471, 0x9CAC0284, 0x0CC4D060,
    0xE6260060, 0x53480B49, 0x0344FE21, 0x2235E3A8, 0x109E38DD, 0xEF40600C, 0x6003C014,
    0x80A00580, 0x33CF4041, 0x553D164A, 0xA21E39C0, 0xBB231C46, 0x6180C0B4, 0xC07C0244,
    0x6B23F57C, 0x654B101C, 0x869A4423, 0x1110CC07, 0x498FD6B6, 0x00D07813, 0x5758400B,
    0xCD348CBC, 0xE0CC0940, 0x0A4931B6, 0xC48A147C, 0x06B0A3E3, 0xCC00D00F, 0x1C0F00DC,
    0x4D1C555B, 0x0E4CD04E, 0xCC0440A8, 0x001C54A0, 0xCE6185E8, 0x9407C0ED, 0xC065D31F,
    0x43162C0B, 0xE19EDFA6, 0xA5264464, 0xC8000858, 0xB474E4A0, 0x80051000, 0x4A23E401,
    0x5C0C80CE, 0x447A5200, 0x210F9C02, 0x7E4E0092, 0x8490EDC0, 0x3C62B173, 0xD44D8B8E,
    0xA4CA1450, 0x0A00DCDF, 0x7E40403C, 0x40880244, 0x3CE4F00D, 0xF91C40C5, 0x802400C4,
    0xD1E4C046, 0x780E80E8, 0xA529D2C0, 0x01458A60, 0xD2538640, 0x000C8340, 0x08001C01,
    0x60774080, 0x00C862E4, 0xDAE28409, 0x184D0C58, 0x80604FE4, 0x1B40D4E8, 0x392D845E,
    0xE5A80D65, 0x090510F3, 0x04586130, 0x809002C0, 0x0E4E2E33, 0x3191C07C, 0x00B407C0,
    0x71A275F8, 0x0E5DC0A5, 0xC69A6E26, 0x5559F801, 0xBD7B407E, 0xE6400D00, 0x0A40CC62,
    0x7057A470, 0x18D4ECDE, 0x7523A9BB, 0xF4CBC45D, 0xA688ECE2, 0x089CE86E, 0x1C579E68,
    0x1CC405C0, 0x8506EA41, 0x6001C478, 0xA4D00980, 0x2D9DDA68, 0x8E79A6E6, 0x80B40345,
    0x5F847126, 0x40A26740, 0x40400984, 0x00047A56, 0x9CE7638A, 0x4049F940, 0x7E0EE1E2,
    0x8E03C47E, 0xA7489363, 0x0ADF8051, 0xBC014058, 0x4054DBE5, 0x6D00F0E8, 0x740ED112,
    0x0014DE40, 0x0B405803, 0x500F00D0, 0x893C4E5B, 0x79E15599, 0x7C52A876, 0xA53A7B86,
    0x0B40D465, 0x20034090, 0x0FB22668, 0x4FE485E5, 0x1A120040, 0x22E1CB5E, 0x80A8064A,
    0x980BC4E6, 0x058289C0, 0x03802801, 0x6D54409C, 0x101C8127, 0x02801584, 0xD00A8050,
    0xE5168310, 0x0C093E59, 0x7A8E409C, 0xC58E9428, 0x60A885D4, 0xA00C0784, 0xA43C05C0,
    0xE8404454, 0xB80D8780, 0x12658FCA, 0x7580BC8D, 0x3C030002, 0x46B0438B, 0x46C53E8D,
    0x3662A822, 0xE6C808C0, 0x4DE83493, 0x6C0B80D8, 0x40140200, 0xA4C09008, 0xFA74A9CD,
    0x4738B2A5, 0x592A0E94, 0xC601C03C, 0xCB244423, 0x99407009, 0x84018576, 0x48D20E80,
    0xD4A37C0C, 0x21E2A111, 0xE98801D7, 0x58009A2B, 0x0C6AE862, 0xC0680984, 0xC1C04406,
    0x5001C884, 0x80880700, 0x0D80DC0B, 0x1E809EA8, 0x40A40845, 0x5D1C180D, 0x94536356,
    0xAA106180, 0xBA0592AE, 0x9255A38D, 0x21C80900, 0x054C4A87, 0x545FE658, 0x406549CB,
    0x6740D245, 0xD670A03A, 0x8CB94340, 0x9ADEC807, 0xEC0E84DE, 0x08C86A80, 0x55AAC40B,
    0x5C0E00CE, 0x292855A8, 0xB8A35097, 0xAD8B292E, 0xE81C04C0, 0x58EBAEAE, 0x600B0030,
    0xDE404924, 0x0A26A057, 0xACB79D50, 0x25322440, 0x0F40CE45, 0x8A53045E, 0xE8B09C8E,
    0xAD4F1CFC, 0x1855674A, 0x6C1D8B23, 0xE12C2EB5, 0x900F00E4, 0xC02406A8, 0xC52BB27C,
    0xF40104FA, 0x005C9DDF, 0x5C452A50, 0x592680D2, 0x241C0806, 0xD82BD60D, 0x7159D720,
    0x80827BE3, 0x9D403549, 0xBEC3205D, 0x4BEECC2C, 0x0540ACCD, 0xDEC56718, 0x8058586C,
    0xC9E0C255, 0xD66980A0, 0x20080892, 0x1E00C847, 0x4405845A, 0xC0C84393, 0xC91E4606,
    0xC86005AA, 0xDD91F4EB, 0xCC6A797C, 0xE1552D56, 0x008C0D80, 0xD72CE0DE, 0x9C030596,
    0xC9FC0D80, 0x32807443, 0x28024502, 0x69544428, 0x2440880D, 0xD809802A, 0xC0C44A6B,
    0x05445ACF, 0xD460A3A4, 0x66040B00, 0x09C06DDE, 0x5A900CD0, 0x24D2D5AD, 0x04C0951E,
    0x1ED74880, 0x0061966E, 0x0C6212D2, 0xA180C084, 0x629C05A6, 0x0D45AAA4, 0x061E6BA0,
    0x848A4620, 0x034006CD, 0x5A2F488C, 0xEC880706, 0x04C02149, 0xA685CAEC, 0x2CC2E025,
    0x0F00E971, 0x34089E18, 0xAE22E880, 0x3220FAEC, 0xB8775175, 0xC02C08C0, 0x01802001,
    0x94098054, 0x27D84200, 0x0544248D, 0x3C00991C, 0x49FE3E80, 0xB3008877, 0x44040008,
    0xC4266407, 0x01C581BA, 0x5D184044, 0xAEA6EA20, 0xEB055668, 0x4408C77A, 0xAECEDE80,
    0xB1457AF8, 0xB263EC01, 0xEDA48C85, 0x0BCB2638, 0x0643C06C, 0x8FB004C0, 0x7BECF00C,
    0x6800D7F2, 0xA7ACD780, 0xC840D40C, 0x7AFC0706, 0x00D40AC0, 0xEA6D50F4, 0x140EA05E,
    0x40600944, 0x032F8EF8, 0xAC00857B, 0xE53A70A1, 0x6140CC5A, 0xB277D91C, 0x646A7AD5,
    0x086EF61F, 0x3C60A124, 0x5DE00944, 0xB1000459, 0xE40A0084, 0xEB9493CF, 0x0E66CEAB,
    0x740880BC, 0x000C0200, 0x0D30368A, 0x8402C503, 0xE3C67ACE, 0x53A89846, 0x94044025,
    0xA74250C0, 0x02463465, 0xAEE4804C, 0x00D12667, 0x00499D1C, 0xE0030020, 0x2E9C0C6F,
    0x0AB14D71, 0x5F14E4CF, 0x40B40EEB, 0x0440800A, 0xD6B0C024, 0x99871830, 0x7EC0A404,
    0x540970EA, 0xE8ED0240, 0x8F807401, 0xCE7B85BA, 0xAB02FB40, 0xC7EC780C, 0xAC0BC786,
    0xAEC40600, 0x04001885, 0xBD22C088, 0xCF9C0B80, 0x152B62B7, 0x1F21AC1F, 0xC93C5572,
    0x0E00F00E, 0x600BC490, 0xC04003C0, 0x25318717, 0xC2850E07, 0xC5C638ED, 0x0780740B,
    0xE8074080, 0xE952FA63, 0xFAAFCC5A, 0xB0424B22, 0x6A340580, 0x044020C0, 0x5805C060,
    0x40980940, 0x4204189F, 0xB0440420, 0x00D44205, 0x05806E71, 0xE8040064, 0xB3072571,
    0x07001859, 0x4A559344, 0x077B2E30, 0xAFB04AFD, 0x780AF1CE, 0x6C4C0180, 0x00F090D3,
    0x5F35B354, 0xB30B35F3, 0x01499F36, 0xB408002C, 0x30E45B80, 0x26738F33, 0x940C2FED,
    0xF24E9640, 0x28B3AF36, 0xA004801E, 0x87733800, 0xA3F38F28, 0xAC8C5264, 0x803407C0,
    0x3F33B2CD, 0x5001A877, 0xA7AAD1C0, 0x29B3D05B, 0x9A2A00D7, 0x66DC04C0, 0xA1342F3F,
    0x7405073E, 0x460E2CC0, 0x4532DE70, 0xD046F453, 0x80640A40, 0x00402407, 0x7F4330CC,
    0x88B252B4, 0x01C01801, 0x8C094070, 0x40840880, 0x0834AE63, 0xA008C088, 0x2C6E2233,
    0x4D34CF48, 0xDF4DB4D7, 0xB4E74E34, 0x4F34EF4E, 0xFF4FB4F7, 0xB5075034, 0x51350F50,
    0x1F51B517, 0xB5275235, 0x58352F52, 0x00000404, 0x00000000

  EW_BITMAP_CLUT_EMPTY( WasherBgWool, Default )

  EW_BITMAPS_TABLE( WasherBgWool )
    EW_BITMAP( WasherBgWool, Default )
EW_END_OF_BITMAP_RES( WasherBgWool )

/* Table with links to derived variants of the bitmap resource : 'Washer::BgWool' */
EW_RES_WITHOUT_VARIANTS( WasherBgWool )

/* This is a bitmap resource. */
EW_DEFINE_BITMAP_RES( WasherBgEco )
  EW_BITMAP_FRAMES( WasherBgEco, Default, EW_DRIVER_VARIANT_ALPHA8, 480, 272, 0 )
    EW_BITMAP_FRAME( 0, 0, 0, 0, 0x00000000, 0x00000000 )

  EW_BITMAP_PIXEL( WasherBgEco, Default )                       /* ratio 3.53 % */
    0x1C080100, 0xC1A0B048, 0x2A130883, 0xA1B0C85C, 0x231087C3, 0xB1489C4A, 0x188BC5A2,
    0xC8DC6A33, 0x8FC7A3B1, 0x1C8A4320, 0xC9A4B249, 0xAA532893, 0xA5B2C95C, 0x633097CB,
    0xB3499CCA, 0x389BCDA6, 0xC9DCEA73, 0x9FCFA7B3, 0x1D0A8340, 0xD1A8B44A, 0x2A9348A3,
    0xA9B4CA5D, 0xA350A7D3, 0xB54A9D4A, 0x58ABD5AA, 0xCADD6AB3, 0xAFD7ABB5, 0x1D8AC360,
    0xD9ACB64B, 0xAAD368B3, 0xADB6CB5D, 0xE370B7DB, 0xB74B9DCA, 0x78BBDDAE, 0xCBDDEAF3,
    0xBFDFAFB7, 0x1E0B0380, 0xE1B0B84C, 0x2B1388C3, 0x81804B6E, 0x1E100884, 0x192C9E48,
    0x10090442, 0xCCDE2C04, 0x05826499, 0x30A8460A, 0x8D862291, 0xCF52341A, 0x753ABD58,
    0x4A26D38D, 0x2090E8A8, 0xB8CE8041, 0x50D006E1, 0x01CB0262, 0x08841A04, 0x8C86A311,
    0xC063C7E3, 0xB9BCCE58, 0x6832E473, 0x422110C8, 0xB9DB8102, 0x603D9BB3, 0x940775C2,
    0x40643204, 0x8D060321, 0xABD3CE19, 0x7A3CCF5F, 0x2E20188C, 0x3F4ED010, 0xCC1A866C,
    0x09205867, 0x178A0261, 0x9EC71834, 0xA740317A, 0xCDCD80DC, 0x210C0340, 0x7D59A03C,
    0xC1956610, 0x30C5CB82, 0x720F06C3, 0x220280A4, 0x718330A8, 0x9EF7AE07, 0x60DA0185,
    0x9C2E0D03, 0x2B6C4260, 0x749A7698, 0x6247B1EF, 0x101C140A, 0x69548DE1, 0x35732140,
    0x76005094, 0x00600916, 0x77142506, 0xD61F821C, 0x2F0B42E0, 0x04810064, 0x81205413,
    0xE019036D, 0x60130500, 0x4C0C41E6, 0x745EC6A2, 0x1F307830, 0xD536648E, 0xC9CF7E01,
    0x130141C0, 0x0700F6DD, 0x0320CC25, 0x28C2327A, 0x6C1907C3, 0x40000080, 0x035B743E,
    0x83006C1B, 0x17A42F7B, 0x682D0D03, 0x0A5966C0, 0x5E665A2C, 0x6210B80B, 0x40883182,
    0x0D0D0181, 0x25050130, 0x88A02A14, 0x4280D5C7, 0xF0181C08, 0x85C14723, 0x868802A0,
    0x9F40F8A2, 0x8370715F, 0xAA3C1C0D, 0x36930BD7, 0x2B0DA167, 0x040290AC, 0xAC20380C,
    0x70400CB0, 0x042A0AC2, 0x868C4328, 0x0B036816, 0xC0A07429, 0xA0112298, 0xD42F0700,
    0x34A0EB90, 0x01D618F8, 0xC390E834, 0x25E6B60C, 0x16037942, 0x35806738, 0x9C9A8BB4,
    0x6DA8CA47, 0xB0401C0B, 0x44084AA7, 0xE96AC290, 0x580108A1, 0x0370E827, 0x502C340E,
    0xA0105DEE, 0x0C821ED9, 0x0C5E7737, 0x80F0682B, 0x2098104C, 0x65C573A7, 0x3B0655E0,
    0x0DB030DC, 0x175C1EFF, 0x0BA02A01, 0x1C260CC3, 0xBAC36747, 0x0C4339CA, 0x40807C1F,
    0xC0053286, 0x39D20AC0, 0xD4070347, 0x0600255E, 0x838C7B03, 0x5C8B130D, 0xCF2B08D7,
    0x1B018170, 0xBA9A80A0, 0x6EA0C2DB, 0x109ABC74, 0xEA360282, 0x38058024, 0xD6429CEB,
    0x03B77156, 0x5C7F1E0E, 0x2D73D1B4, 0x0372A3B0, 0x03C02000, 0x42D0AC12, 0x30CC2D0A,
    0xCC3789AB, 0x2C0A02C0, 0x03C120AC, 0x00350298, 0xA826DA09, 0x0D53BDC2, 0x1D0D0160,
    0xD90390DF, 0x768D9F43, 0xCA48045C, 0x1C1B0D1C, 0x1904C084, 0x06017060, 0x78804C19,
    0xE0440151, 0xB283C982, 0x025400A0, 0x0881100C, 0x31EB882F, 0xF0AC2A0F, 0x4C0E0DB8,
    0x2605574E, 0xCF42C0C7, 0xC2501555, 0x1F03A98E, 0x5C0E0293, 0xE2F2C1A0, 0xF2C19F35,
    0x3D205FD0, 0xE067CC06, 0xEC380D82, 0x8FC78390, 0x0A40509F, 0xAB00C6E2, 0x60056EEE,
    0x683372F9, 0xFD01D470, 0x043EE045, 0x59765BF0, 0x540E5404, 0x9BE8E141, 0x074BB6D0,
    0x09416048, 0x0D81A1E5, 0x0283C074, 0x0880E0EE, 0x7502A02C, 0x281DC0C0, 0x1B647B50,
    0x20760E58, 0x002D7F83, 0x0190387B, 0x0182E8F9, 0x018C9D85, 0x86CC693E, 0x12827344,
    0x3706A0B0, 0x5C6A5770, 0xB81B1AF3, 0x402804C0, 0xE0140341, 0x20D149BA, 0x49333405,
    0x02973600, 0x0760F419, 0x045C7AE2, 0x22C446CB, 0x3868511A, 0x780E41C0, 0x08F92880,
    0x703C0244, 0x38360B9C, 0xC0B40217, 0x41203364, 0x0060064E, 0x04207003, 0x74113829,
    0xA9B0D596, 0x2A06C0C9, 0x1CAAC0E0, 0x18940186, 0xB82703A0, 0x28870301, 0x51020441,
    0xA06B1E76, 0x0398F71D, 0x04C8281B, 0x41404815, 0x1D302034, 0x728A87EC, 0x68F100B9,
    0xDC9A0150, 0x20190226, 0xE5087A01, 0x8AE0179C, 0x24CC9835, 0x9CC50A0C, 0x39CC9D43,
    0x01C929FA, 0x1D2E103C, 0x0C071044, 0xA20CD81C, 0x780F01D5, 0xB01C0360, 0xA7E003C0,
    0xD2B40D81, 0x2574B895, 0x80201C9E, 0x05440E1C, 0x0441E3DB, 0x00972910, 0x3293AC58,
    0x1C4C6100, 0xE15C0270, 0x11C8990F, 0x10412AE0, 0x808C1102, 0xC124D804, 0x1C304408,
    0x5E089C18, 0x0C5A9351, 0x0E11E746, 0xDC94C0D5, 0xAC0CA09B, 0x8D5300A6, 0xA005236F,
    0xE0611281, 0xC5BE6228, 0xD1082D00, 0x4EF04E0C, 0x99E08C95, 0x0DC1A4E2, 0x1582605A,
    0x0B016090, 0x8C02C068, 0x28049067, 0x202A0294, 0x26A20D0F, 0xAE041483, 0xC0D00223,
    0xC126C60D, 0x04A0BC1C, 0x4928B80E, 0x1D31D038, 0x739EC098, 0x6AF10099, 0x3C981DF0,
    0x7A014280, 0x20520B81, 0x32080A01, 0xC0D00C23, 0x33A62E0B, 0x01C4767E, 0x1CA74030,
    0x7EB7E071, 0x28002486, 0x1A0E5810, 0x90B9D280, 0x7C874132, 0xF06A0949, 0xD5314082,
    0xE88241A8, 0x817940CB, 0x03C0048D, 0xE39ED839, 0x962BF070, 0x19604044, 0xD7536864,
    0xF4160042, 0x79BE064E, 0xA01C0449, 0x20088F56, 0x15D42702, 0x917A6E0C, 0x6040AC02,
    0x0A41DB1E, 0xA492C994, 0x6B8DAE3A, 0x7B5F8B95, 0x59C90347, 0x601C00A5, 0xE050A0D6,
    0xE01888CB, 0x97138D05, 0x124AB006, 0x070C0C06, 0x626CA833, 0x0F0132D9, 0x4C05A0CA,
    0xC803CAD5, 0x55CCBE88, 0x00320104, 0x90600E6C, 0x4F80975A, 0x2D18258E, 0xBA80285D,
    0x2AD638F2, 0x0D2C900C, 0x04914024, 0x3AB000CC, 0x51688120, 0x918E8172, 0x9DBA60CD,
    0x5788090B, 0xE56A619E, 0xC195AC02, 0x109AEA0A, 0x8F371C03, 0x496CE022, 0xED830008,
    0xD10440E9, 0x52010BA5, 0xB502BC40, 0xD81F2B34, 0x07D40D51, 0x6ED80191, 0x80F83A60,
    0xDCE04C4C, 0xBD33901B, 0x0980196F, 0x109A683C, 0x3D004568, 0x213D10AC, 0xEAE70212,
    0x090756A0, 0x5010B580, 0x54140D81, 0x41482A05, 0xDD0A220A, 0x8F35808C, 0x5CF005F4,
    0xE2023002, 0x52A0E801, 0x06FEC019, 0xD1850142, 0x790CBDE0, 0x171CE3C0, 0x20048162,
    0x41081601, 0xD61A8209, 0xC7F0301C, 0x75A2003A, 0x19812231, 0x220500EB, 0xA8084BBE,
    0x34E89CDA, 0x6D7E29F2, 0x12075C41, 0x00C99582, 0xC0390A6C, 0x03B7B60C, 0x01E40E2D,
    0xE381781B, 0x19C0C810, 0x3AC7B12B, 0x277FC1A8, 0x6C1900C2, 0x4E585C6F, 0x60405CF2,
    0x48594983, 0x4A366B04, 0x32F05C02, 0x6C008C1A, 0xFA1A900B, 0x1010CBD0, 0x2D072C74,
    0x40021360, 0xF01B8310, 0x4B63C7E0, 0xD05009C1, 0x001C0801, 0x74CE9801, 0x80E2299C,
    0x02967F2D, 0x004BBE72, 0x04C9F02C, 0xCB02E0BD, 0x4DA04A0D, 0x494720B6, 0x45843DB2,
    0x78300248, 0x601C0383, 0x23B83604, 0x01C05305, 0xBC402C07, 0x5A184918, 0x50DC4073,
    0x290145E3, 0x68D4A0F0, 0x17298280, 0x932BB825, 0xE206EFDA, 0x71651D80, 0x58102421,
    0x0250460D, 0xCFCB8A39, 0x04C94297, 0x1DD6206C, 0x78D8D840, 0x5808C021, 0x94199F9B,
    0x113EB7E0, 0xD5060500, 0x4E8C1864, 0x99302700, 0x906B6A0C, 0x7B60C402, 0x0E9ED1F8,
    0x906A9D4E, 0x0371C050, 0xD0C681DB, 0x12EC17BD, 0x40337D0F, 0x5E0A0481, 0xB44EF593,
    0x5DC833C9, 0x32B03041, 0x2118181A, 0x7E1C6816, 0x8A016069, 0x1B00247B, 0xBB7E1EC0,
    0x2CBE70CA, 0x5BA8C4A0, 0x4056744E, 0x24E71581, 0xE50375A3, 0x00320FBE, 0xD367B55C,
    0xD0AF2902, 0xEE024072, 0x26008486, 0x7CD901E8, 0xFB96EA0C, 0xD82C02A5, 0xA06873EA,
    0xC01C0F82, 0xC0092AE4, 0xF1705C03, 0x75609904, 0x16012108, 0x05904DCF, 0x377200D4,
    0x2A4A6A88, 0x158FDDF0, 0x917EE9DB, 0x35B74EF7, 0x60941927, 0x09976003, 0x33904E03,
    0xD539F95D, 0x7B41B011, 0x81736056, 0x36B9C074, 0x904A7A68, 0xB34751CE, 0xDF70E800,
    0xE03600CB, 0x40C8F51E, 0x4098275B, 0x920D8004, 0x04605001, 0x0CE4AA05, 0x84F8A05C,
    0x244439EC, 0xE401882F, 0x9BD2C729, 0xA01D0044, 0x47B35881, 0x1E467A82, 0x40E80730,
    0x4679C2B6, 0x03E0B019, 0xE700680D, 0x07005231, 0x3184E07C, 0x500D9A97, 0x9C85D7C0,
    0x2A5C6560, 0xC90A0648, 0xE46BAC02, 0x3C682DAE, 0xECE06A0F, 0x5F260FDB, 0xA8105028,
    0x402DDF2E, 0x8501201A, 0xD80088C7, 0x18158257, 0x5327F927, 0x9FD20441, 0x8EF40D10,
    0x2DB904B6, 0x38A24FB1, 0x8191E017, 0xDE679020, 0x00111827, 0x6D132702, 0xA11AB1E9,
    0x001C0272, 0x62A2AF02, 0x0327C7C3, 0xD01D2420, 0x1D202201, 0x3A49C32F, 0x27D60197,
    0x30E65A10, 0x2D0036E7, 0x56485610, 0x01900312, 0x3A34263C, 0x101302B0, 0x17C80381,
    0x7331633F, 0x81CB4E12, 0x0302012B, 0x2928302D, 0x625101B0, 0x01839F01, 0xD2840840,
    0x62580163, 0x1A953231, 0x283E87F0, 0x62A701B2, 0x38128659, 0xC2451011, 0xC01A1034,
    0x00511E81, 0x3E478794, 0xF5AE0356, 0x00219D82, 0x26016008, 0x81C92D90, 0x22423120,
    0x6A2262EC, 0x92ED1A78, 0x5921CA1A, 0x332731E9, 0x601902A0, 0x01A1117B, 0x210336D1,
    0xA5CE0143, 0x03B48471, 0x192AF02D, 0xD5D31C11, 0x2A54EA78, 0x091F585E, 0xC0270110,
    0x5133D702, 0x6532C834, 0x62883274, 0x82E00E02, 0x1E01C107, 0xF1024FB4, 0x02A63E02,
    0x4B567102, 0xD02C03A7, 0x10D87601, 0x2500E242, 0xE5427FE0, 0x01803063, 0xDA8898A7,
    0xE39F00A1, 0x34F28302, 0x8732C892, 0xD2850342, 0x7F401301, 0xA8013114, 0x202E0313,
    0x4A803248, 0x0D102029, 0xC78D02E0, 0x1D403340, 0x0862A00C, 0x66120011, 0x01F01400,
    0x656652C9, 0x502E3DA3, 0x2E58B272, 0x200144BD, 0x630F46A0, 0x0311AC21, 0x851EC496,
    0x532F8722, 0x01B02C1C, 0x1D00601E, 0xD22D10F8, 0x0033201C, 0x036478C7, 0x34E78271,
    0x1A74077B, 0xA001A711, 0xD0181E23, 0x3D702801, 0xA7440767, 0x40233B24, 0x8DF89801,
    0x090041D9, 0x50050080, 0x4DA02701, 0xB302D021, 0xC1A82EE2, 0x03003791, 0x28025356,
    0x10092970, 0x3E711B8B, 0x4B923215, 0x00006357, 0x6668AC59, 0x7B413449, 0x34494414,
    0x03644B74, 0x0F00783B, 0x72659109, 0x2C319200, 0xC300D00E, 0x30094B32, 0x9281198F,
    0x86029352, 0x71075876, 0x3D702957, 0x4944203C, 0x19534434, 0x03D03A93, 0x7982C42E,
    0xE95C93C7, 0x80801411, 0x0B74B200, 0x400C1097, 0x4671D124, 0x72036445, 0xC0166BC8,
    0x96F95D6F, 0xE952F11D, 0x33DC0361, 0x4BD10B96, 0xF019036F, 0xD7C20113, 0x97F9704B,
    0x71309121, 0x59809758, 0x01213898, 0xCC81A037, 0x60399741, 0x98F98697, 0xEA5C1130,
    0x80394281, 0x99799058, 0xC96F812E, 0xA0393767, 0x99F9985F, 0x8334812C, 0x08A003A9,
    0x1289A69A, 0xB91EA271, 0xD9A78256, 0x4C71239A, 0xC903A2FD, 0x09B49AE8, 0x1EA7CF12,
    0x9003165B, 0x49BC9B57, 0x2869B711, 0xBD61D343, 0xB1159C39, 0x0361EB2F, 0xC476F03C,
    0x81119CB9, 0x35289002, 0x3B035326, 0x59CC9CA0, 0x2E710C9D, 0x1C8C48B6, 0x538E2250,
    0x9DF9D69A, 0x0A00510A, 0x10033AD0, 0x44400700, 0xEA9E0419, 0x400710E9, 0x74603295,
    0xED9EA9EB, 0xD03B4449, 0x9F79F185, 0x659F3104, 0x871F03E3, 0x0009FE9F, 0x0368F008,
    0x60290353, 0x9FF93B01, 0x1F0029A7, 0xD00B01B0, 0xA08A0745, 0x12A11A10, 0x5A14A13A,
    0xA17A16A1, 0x1AA19A18, 0xDA1CA1BA, 0xA1FA1EA1, 0x22A21A20, 0x5A24A23A, 0xA27A26A2,
    0x2AA29A28, 0xDA2CA2BA, 0xA2FA2EA2, 0x32A31A30, 0x5A34A33A, 0xA37A36A3, 0x3AA39A38,
    0xDA3CA3BA, 0xA3FA3EA3, 0x42A41A40, 0x5A44A43A, 0xA47A46A4, 0x4AA49A48, 0xDA4CA4BA,
    0xA4FA4EA4, 0x52A51A50, 0x5A54A53A, 0xA57A56A5, 0x5AA59A58, 0xDA5CA5BA, 0xA5FA5EA5,
    0x62A61A60, 0x5A64A63A, 0xA67A66A6, 0x6AA69A68, 0xDA6CA6BA, 0xA6FA6EA6, 0x72A71A70,
    0x5A74A73A, 0xA77A76A7, 0x7AA79A78, 0xDA7CA7BA, 0xA7FA7EA7, 0x82A81A80, 0x5A84A83A,
    0xA87A86A8, 0x8AA89A88, 0x3134A8BA, 0x92500A00, 0x70A8C1D7, 0x40390221, 0x01E2D003,
    0x220204AD, 0xD1C06BD0, 0x163A9284, 0xAD4E21E4, 0x649B1AA1, 0x01501D21, 0x9F32101A,
    0xC9C615FA, 0x67579730, 0xC06A702B, 0xD15BAAB2, 0x22284901, 0x304671EF, 0xC0220270,
    0xAB452200, 0x18992152, 0xB42B2EB3, 0x2EA2B91A, 0x45021288, 0x0152AC09, 0x1D12142E,
    0xD401D4AB, 0x41E23D03, 0x1E528702, 0x72215872, 0x60130292, 0x13DACC94, 0x8D022748,
    0x00076B62, 0x0060018C, 0x1CAE8007, 0x20354DA0, 0x2731CA27, 0x0201602A, 0x215BADF8,
    0x01300A00, 0x1527302B, 0x43328BC2, 0x001160AF, 0x0E00120F, 0xAADA9A20, 0xAFEABF26,
    0x2900E158, 0x20173A30, 0x03020978, 0x56B08630, 0xB0342911, 0x3F795B02, 0xF0754676,
    0x214FB126, 0x49302B00, 0x1252202E, 0x42162CB0, 0xB1C64E46, 0xE654F154, 0x92B001E1,
    0x02E1E801, 0xA986F762, 0x7150B287, 0x03273E00, 0x9510553E, 0xF3122873, 0x26221649,
    0xB714EB34, 0x495B1EF9, 0x20B01810, 0x24006031, 0x12B42143, 0x01114CB4, 0x6A035274,
    0xD0011057, 0x0003E922, 0xCB9CE004, 0xE99E0341, 0x020148B4, 0xC07BE20B, 0xC62D1028,
    0xAAD36E89, 0x5EB53036, 0x781F142B, 0x10964F32, 0x1A327681, 0x81E52917, 0xB6B9C28E,
    0x75016141, 0x392602EB, 0x03531610, 0x26010AAA, 0x89BB030B, 0x7E113AB7, 0x097641E6,
    0x41D34921, 0x27401210, 0x8601E034, 0xC007141B, 0xB6FAEF02, 0x3100A10A, 0x40221052,
    0x96E03127, 0x8113AB93, 0xE02D2B87, 0x2DA00810, 0x317AA02B, 0xEBA14AB2, 0x35269D13,
    0x0510D453, 0xE0322B80, 0xB510167A, 0x39BADAAA, 0x33276EB1, 0x87810C64, 0x25B5452C,
    0xABA93523, 0x68213ABB, 0x3A10FB80, 0x21063982, 0x03121401, 0x31BC6B1B, 0xE4DE4F91,
    0x01B10BBB, 0x0292C1A9, 0x2B2B21E1, 0x22D138BD, 0x0A9D4662, 0xE0332671, 0x76C10298,
    0xDEB853E8, 0xB8F512CB, 0xBE410E73, 0x06000BE6, 0xBB111F90, 0x22D130BE, 0x04BEA3BE,
    0xA47E01E1, 0x7B1103B8, 0xF6027327, 0xDBF8134B, 0x105AF302, 0x29031BFC, 0xF0117F40,
    0xB0702B86, 0xEFBECC03, 0x910FC061, 0x5A2027C0, 0x11BD5B96, 0x98F5131C, 0xBFC10EBC,
    0x3E109BE5, 0xBB980337, 0xB9612CC1, 0xE3BD6662, 0x2BF1AEDB, 0x1E801310, 0x2FC268E8,
    0xF3203961, 0x03489A10, 0x0F000C2D, 0x2C311F80, 0x73E12DC3, 0xD810F58D, 0x3BDA034B,
    0x98901110, 0x2DC3E3BE, 0x11E50181, 0xBCB10E4A, 0xAF1059F6, 0xCC4A310B, 0xC3D97212,
    0x7401A10D, 0xB108B929, 0x02F2CB5E, 0x26C556B1, 0xFBA4C471, 0x02100510, 0x06BB902E,
    0x234A9A21, 0x00A129C6, 0x7702E4E2, 0x19A2117B, 0x9A8C6EBC, 0xFE0351E8, 0x69A2116B,
    0xC77C5C03, 0x8D9A2126, 0xFC7D11BB, 0x124C80C7, 0x6A2E800A, 0xBC79C846, 0x11FC87C7,
    0xB52E8007, 0xD283C8CB, 0x121C8F7D, 0x2732789A, 0xC99A1195, 0xC97BFA25, 0x6F012119,
    0x4B4502F8, 0xC5499211, 0x40125CA0, 0x8116996C, 0x02C2B898, 0x13125CA9, 0x5ADE6822,
    0x8C498210, 0x0B124CB1, 0x6C4E2070, 0x682C3B11, 0xB7124CB9, 0x0A0F4EB9, 0x9DEC5300,
    0x0D120CC1, 0xA0352140, 0x021111C2, 0xC9C6AC4D, 0x1B9D11EC, 0x6821177F, 0x21CD3C41,
    0xC1CB95F1, 0x3961167D, 0x20CDAC1E, 0x5C49AA11, 0x037C2811, 0x1BCE2BE2, 0x32140101,
    0x10CC8E03, 0x0F1EF56D, 0x5121CEAC, 0xC07205CD, 0x33CB3108, 0x1CF40230, 0x2E800612,
    0xFC1138CF, 0xD65E327B, 0xB7A11FCF, 0x0ECACB5B, 0x6328C991, 0xB55120D0, 0x11CA4B75,
    0xEC01BD81, 0x972120D0, 0x9F02F283, 0x120B854C, 0x120D1671, 0x05B9001B, 0x3D1DC59D,
    0x11ED1F9B, 0x20CED021, 0x7D25BCA0, 0x00311FD2, 0xDB030BC3, 0x6D1410E6, 0x11DD2EB6,
    0x8A02F009, 0x710C5CAC, 0x5B932726, 0x0F11ED37, 0xA0357520, 0xC0D10B3F, 0x41C10BC4,
    0x85C1117D, 0x7467542E, 0x4BCE8BE0, 0xECBB11ED, 0xC7302AD4, 0x6AC23104, 0x0118D53B,
    0x273274C7, 0x1556A01F, 0xCCB0B480, 0x00811DD5, 0x30CBC2C9, 0x26D5CCE0, 0xD667AE73,
    0x92BB77EA, 0x593A328C, 0x02AC8210, 0x14D70B63, 0xB77D5781, 0x2406CD2C, 0x213E85C6,
    0x8D7ACB50, 0x01C00210, 0xC775D02D, 0x020E24D1, 0x1E6C0000, 0x14D85C39, 0x71E69151,
    0x2A221620, 0x3E017026, 0x2ACA3277, 0x00811CD9, 0x8353CD88, 0x03977522, 0xD9ED6F03,
    0xEC012117, 0xA98A2725, 0xCF802F2B, 0x0B5F5DA8, 0x034E0200, 0x32F4632F, 0x17DB1D58,
    0xA00C0031, 0x61901200, 0x1102822A, 0x0DBAC965, 0xB7D00212, 0xCADC9DC5, 0xDDCCDCBD,
    0xDCFDCEDC, 0xD2DD1DD0, 0x5DD4DD3D, 0xDD7DD6DD, 0xDADD9DD8, 0xDDDCDDBD, 0xDDFDDEDD,
    0x09DE1DE0, 0x00001011, 0x00000000

  EW_BITMAP_CLUT_EMPTY( WasherBgEco, Default )

  EW_BITMAPS_TABLE( WasherBgEco )
    EW_BITMAP( WasherBgEco, Default )
EW_END_OF_BITMAP_RES( WasherBgEco )

/* Table with links to derived variants of the bitmap resource : 'Washer::BgEco' */
EW_RES_WITHOUT_VARIANTS( WasherBgEco )

/* Color constant according UI design. */
const XColor WasherTempColor0 = { 0x2A, 0x73, 0x94, 0xFF };

/* Color constant according UI design. */
const XColor WasherTempColor2 = { 0xBC, 0xE4, 0x3F, 0xFF };

/* Color constant according UI design. */
const XColor WasherTempColor3 = { 0xFD, 0xFD, 0x34, 0xFF };

/* Color constant according UI design. */
const XColor WasherTempColor4 = { 0xFE, 0xC1, 0x2B, 0xFF };

/* Color constant according UI design. */
const XColor WasherTempColor5 = { 0xFD, 0x55, 0x21, 0xFF };

/* Color constant according UI design. */
const XColor WasherTempColor6 = { 0xFD, 0x1A, 0x1F, 0xFF };

/* Color constant according UI design. */
const XColor WasherTempColor1 = { 0x67, 0xA5, 0x6C, 0xFF };

/* This is a bitmap resource. */
EW_DEFINE_BITMAP_RES( WasherShadow )
  EW_BITMAP_FRAMES( WasherShadow, Default, EW_DRIVER_VARIANT_ALPHA8, 36, 36, 0 )
    EW_BITMAP_FRAME( 0, 0, 24, 24, 0x00000000, 0x00000000 )

  EW_BITMAP_PIXEL( WasherShadow, Default )                      /* ratio 20.37 % */
    0x1C09FF00, 0xC1A0B048, 0x08004F81, 0xA1A00008, 0x230786C3, 0x6092EC4A, 0x0F878101,
    0xD82C6A25, 0x058805E7, 0xD802310C, 0x289FF248, 0x0826362D, 0xA4B23910, 0x86755CC6,
    0xD229585C, 0x7F60C6A5, 0x89A06490, 0x9C44A6D1, 0xF466793A, 0x4EE81079, 0xE68B4496,
    0x69335A3C, 0x1D42A341, 0x34BA7D3A, 0x03A9C42A, 0x2AC522A1, 0xAE536B50, 0xFD727B5E,
    0xD8287617, 0x06CF5BAA, 0xACB58B4D, 0xAF6EB1D4, 0x762A65AA, 0x7696D5AE, 0x8B8D4ED9,
    0xB430EB17, 0xD9C4B522, 0x33594BB4, 0x2B138866, 0x95989C5E, 0xEE18231F, 0xA5B1201E,
    0x984DA650, 0x9CDE6B33, 0x36235359, 0x6DDC2A3C, 0x97888210, 0xAB526C35, 0x757ACD5E,
    0x1C292518, 0xE068C484, 0x311587C1, 0xCDDEE864, 0x166F37BB, 0x60182622, 0x020090A9,
    0x2B920D06, 0x399CCE5F, 0xEE040483, 0xBD4E9F12, 0xD8EBF5BA, 0xCEDF6BB3, 0xEFF7BBBD,
    0x0C63C3E0, 0x00000008, 0x00000000

  EW_BITMAP_CLUT_EMPTY( WasherShadow, Default )

  EW_BITMAPS_TABLE( WasherShadow )
    EW_BITMAP( WasherShadow, Default )
EW_END_OF_BITMAP_RES( WasherShadow )

/* Table with links to derived variants of the bitmap resource : 'Washer::Shadow' */
EW_RES_WITHOUT_VARIANTS( WasherShadow )

/* Initializer for the class 'Washer::StartButton' */
void WasherStartButton__Init( WasherStartButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsFrame__Init( &_this->Frame, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Background, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );
  CoreSystemEventHandler__Init( &_this->SystemEventHandler, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WasherStartButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0077 );
  CoreRectView__OnSetBounds( &_this->Frame, _Const0078 );
  ViewsFrame_OnSetColor( &_this->Frame, _Const004B );
  ViewsFrame_OnSetEdges( &_this->Frame, GraphicsEdgesBottom | GraphicsEdgesLeft 
  | GraphicsEdgesRight | GraphicsEdgesTop );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchHandler, _Const0079 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchHandler, _Const007A );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchHandler, _Const001B );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchHandler, _Const001C );
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const007B );
  ViewsRectangle_OnSetColor( &_this->Background, _Const007C );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text, _Const007B );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const007D ));
  CoreGroup__Add( _this, ((CoreView)&_this->Frame ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  ViewsFrame_OnSetBitmap( &_this->Frame, EwLoadResource( &WasherShadow, ResourcesBitmap ));
  _this->TouchHandler.OnLeave = EwNewSlot( _this, WasherStartButton_enterLeaveSlot );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, WasherStartButton_enterLeaveSlot );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, WasherStartButton_pressReleaseSlot );
  _this->TouchHandler.OnPress = EwNewSlot( _this, WasherStartButton_pressReleaseSlot );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &WasherListFontM, ResourcesFont ));
  _this->SystemEventHandler.OnEvent = EwNewSlot( _this, WasherStartButton_onEvent );
  CoreSystemEventHandler_OnSetEvent( &_this->SystemEventHandler, &EwGetAutoObject( 
  &WasherDevice, WasherDeviceClass )->RunningUpdateEvent );
}

/* Re-Initializer for the class 'Washer::StartButton' */
void WasherStartButton__ReInit( WasherStartButton _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsFrame__ReInit( &_this->Frame );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsRectangle__ReInit( &_this->Background );
  ViewsText__ReInit( &_this->Text );
  CoreSystemEventHandler__ReInit( &_this->SystemEventHandler );
}

/* Finalizer method for the class 'Washer::StartButton' */
void WasherStartButton__Done( WasherStartButton _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( WasherStartButton );

  /* Finalize all embedded objects */
  ViewsFrame__Done( &_this->Frame );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsRectangle__Done( &_this->Background );
  ViewsText__Done( &_this->Text );
  CoreSystemEventHandler__Done( &_this->SystemEventHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void WasherStartButton_UpdateViewState( WasherStartButton _this, XSet aState )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aState );

  if ( _this->IsRunning.Object == 0 )
    return;

  if ( EwOnGetBool( _this->IsRunning ))
    ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const007E ));
  else
    ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const007F ));

  if ( _this->TouchHandler.Down && _this->TouchHandler.Inside )
    ViewsRectangle_OnSetColor( &_this->Background, WasherStopColor );
  else
  {
    if ( EwOnGetBool( _this->IsRunning ))
      ViewsRectangle_OnSetColor( &_this->Background, WasherStopColor );
    else
      ViewsRectangle_OnSetColor( &_this->Background, WasherStartColor );
  }
}

/* This internal slot method is used to receive the corresponding signals form the 
   touch handler. */
void WasherStartButton_enterLeaveSlot( WasherStartButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is used to receive the corresponding signals form the 
   touch handler. */
void WasherStartButton_pressReleaseSlot( WasherStartButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->TouchHandler.Down && _this->TouchHandler.Inside )
  {
    if ( _this->IsRunning.Object != 0 )
      EwOnSetBool( _this->IsRunning, (XBool)!EwOnGetBool( _this->IsRunning ));

    EwSignal( _this->OnChange, ((XObject)_this ));
  }
}

/* 'C' function for method : 'Washer::StartButton.OnSetIsRunning()' */
void WasherStartButton_OnSetIsRunning( WasherStartButton _this, XRef value )
{
  if ( !EwCompRef( _this->IsRunning, value ))
    return;

  _this->IsRunning = value;
}

/* This slot method is executed when the associated system event handler 'SystemEventHandler' 
   receives an event. */
void WasherStartButton_onEvent( WasherStartButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwOnSetBool( _this->IsRunning, EwGetAutoObject( &WasherDevice, WasherDeviceClass )->Running );

  if ( EwOnGetBool( _this->IsRunning ))
    ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const007E ));
  else
    ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const007F ));

  if ( _this->TouchHandler.Down && _this->TouchHandler.Inside )
    ViewsRectangle_OnSetColor( &_this->Background, WasherStopColor );
  else
  {
    if ( EwOnGetBool( _this->IsRunning ))
    {
      ViewsRectangle_OnSetColor( &_this->Background, WasherStopColor );
    }
    else
    {
      ViewsRectangle_OnSetColor( &_this->Background, WasherStartColor );
    }
  }
}

/* Variants derived from the class : 'Washer::StartButton' */
EW_DEFINE_CLASS_VARIANTS( WasherStartButton )
EW_END_OF_CLASS_VARIANTS( WasherStartButton )

/* Virtual Method Table (VMT) for the class : 'Washer::StartButton' */
EW_DEFINE_CLASS( WasherStartButton, CoreGroup, OnChange, OnChange, IsRunning, Frame, 
                 _None, "Washer::StartButton" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WasherStartButton_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( WasherStartButton )

/* Color constant according UI design. */
const XColor WasherStartColor = { 0x8B, 0xD1, 0x36, 0xFF };

/* Color constant according UI design. */
const XColor WasherStopColor = { 0xD1, 0x3B, 0x00, 0xFF };

/* This is a bitmap resource. */
EW_DEFINE_BITMAP_RES( WasherBgSpin )
  EW_BITMAP_FRAMES( WasherBgSpin, Default, EW_DRIVER_VARIANT_ALPHA8, 480, 272, 0 )
    EW_BITMAP_FRAME( 0, 0, 0, 0, 0x00000000, 0x00000000 )

  EW_BITMAP_PIXEL( WasherBgSpin, Default )                      /* ratio 19.65 % */
    0x1C088900, 0x92889048, 0x2A12001B, 0xA1B0C85C, 0x131087C3, 0x83A0980A, 0x188B8EC7,
    0x18D46A33, 0x888987C4, 0x1C8A4320, 0xC9A4B249, 0x30012893, 0xC7C421A8, 0x2D2F97C6,
    0x7299482E, 0x38829305, 0x40911A07, 0x190027B3, 0x0466603F, 0xD1A7C092, 0xE4903785,
    0xC5C4781C, 0x054B90D1, 0xE081D122, 0x2001CA69, 0xEADD0A5C, 0x080A47A3, 0x1D8AC356,
    0x0161564B, 0xF47E340D, 0xC7942AD8, 0x1D650E8D, 0x2491800E, 0x3E23412A, 0xD88DC41A,
    0xAE4587C0, 0xF49AF621, 0x112ED4A0, 0x44018207, 0x40A3724D, 0x741188E2, 0xF1BB6568,
    0x0A158F87, 0xA0160B1E, 0x0A83C220, 0xB068321A, 0x818200F0, 0x66C79A00, 0x326401A0,
    0x803C8C65, 0x9A9078C4, 0x02C31285, 0x9061088F, 0xA087E17A, 0xECF0856C, 0x0E40910D,
    0xC0917623, 0x0954BC48, 0x17C4020D, 0xF5D17812, 0x3E1E4675, 0x1BD0AC7E, 0x0900A4FD,
    0xF84C2C17, 0xDFE2A340, 0x0885B11D, 0xBDA47229, 0x79AEF511, 0x42F1E0F4, 0x160B0503,
    0x1EEF4024, 0x18854072, 0x1D65AC40, 0xE0716A46, 0xDC2963D8, 0x3811DB86, 0x005D100C,
    0x54270030, 0xE7F0330F, 0x2D8507D0, 0x11118455, 0x12939608, 0x21600831, 0x70FC3607,
    0xF83E759E, 0xA803C300, 0x02110859, 0xC170300E, 0x80CC360C, 0x244A1183, 0x467B8481,
    0x11A3E8F4, 0x50490445, 0x78FE3F90, 0x24491204, 0x330E4469, 0x04C300D4, 0x9FB0380C,
    0x377D0A8B, 0xBE271043, 0x331083C6, 0x0959A01C, 0x1B811449, 0xD8B42E12, 0x643C025B,
    0x1F0F91B9, 0x00D0A950, 0xD517203C, 0x58782F11, 0x982D1250, 0x24015C49, 0x80E02108,
    0x42C1043D, 0x642E6E87, 0xB4180140, 0x3B0F42D0, 0x7B5ED11A, 0x6926E262, 0xEA3DEC54,
    0xA8361228, 0x050582E0, 0x0166E018, 0xE260E81D, 0x25F91780, 0x64246682, 0x75129768,
    0x5B159746, 0x5BC0FC3C, 0x45D41CA1, 0x95DC10E9, 0x2A129055, 0x76011858, 0xC3F45EA4,
    0x69E81A0D, 0x88156A21, 0x4310C290, 0x12048114, 0xED2A4E72, 0x592177B4, 0x98401084,
    0x5404C230, 0x6C42200A, 0x82596EC1, 0x60AD65B1, 0xA04961AB, 0xAE0C1DD0, 0x0B43F4BD,
    0x40600285, 0x94E6D10F, 0x117147C4, 0xFC09C4A4, 0x0F41C011, 0x03F75A7F, 0x29BA0610,
    0xE81C0500, 0x484183D0, 0xB5291904, 0x902C4710, 0x31284898, 0x68350F84, 0xD181C170,
    0x0F42C02D, 0x83D652ED, 0x4624150E, 0x46AA0D40, 0xD1064465, 0x65040035, 0x26EA103E,
    0x74172908, 0x12BA556D, 0xD1BE1EC1, 0x9603401D, 0x43F0F6A4, 0xCB1D990A, 0xE4360680,
    0x0F8F6480, 0xD3F4EC4B, 0x8498F73A, 0x70D43A12, 0x120E0381, 0x420C0117, 0xD095B9A8,
    0x562B9017, 0xAB9C3901, 0x441611B2, 0x30848217, 0x8BB1C851, 0x34D10006, 0x9BA8484E,
    0x742C1233, 0x37058017, 0x76194DB0, 0xDD1CC835, 0x20900900, 0x4290B383, 0x04E2F8AD,
    0x0D448A3D, 0xE5303429, 0x70600363, 0xC6A41043, 0x71D1432A, 0x4E335C9D, 0x18810446,
    0xFC043471, 0xC4241052, 0x465DB34B, 0x11EBA510, 0x1C4D642D, 0xCE98410A, 0xF81CD096,
    0x970DC25A, 0xEFFBEE32, 0xC3DB438D, 0xA63EB909, 0x0DD509C0, 0x450E8408, 0x0D8035ED,
    0xC3782C47, 0x204D8FE4, 0xBB9CCC04, 0xF50F8028, 0x0684A4E2, 0x7B241D65, 0x80A8026A,
    0xB25B80F9, 0x0A7465E0, 0x1103906C, 0xFC0F7449, 0x9117BEFC, 0x783B10C4, 0x1863FA30,
    0x5B37E0E4, 0x6D01D03E, 0xF932E2F6, 0x150924E1, 0x5E0ACE22, 0xC41595C6, 0x0366048B,
    0xF2CA0E9D, 0x66F5E682, 0xA0603302, 0x01C074C0, 0x00C6F511, 0x1299F814, 0x12BF4480,
    0x16483096, 0x7005C1BB, 0xA4021826, 0xDA804FC0, 0x37C609C1, 0x68F40A16, 0x0E202041,
    0xB5E07002, 0x2C00FC8C, 0x1040626E, 0x959056E6, 0x1D28CBC5, 0x54FA1DA8, 0x04C4BD94,
    0xE0260140, 0x408E1241, 0x8C39E044, 0x92484748, 0x84A49316, 0x49316E2E, 0x09A2BA8D,
    0x249EC207, 0x0E0580FC, 0x0E5C60F0, 0x05F43976, 0x13D40621, 0x659A050B, 0xAF816718,
    0x20D01D37, 0x94E07C4C, 0x73E0B542, 0x0CC24103, 0x91C476C4, 0x28680078, 0x7ACB0202,
    0x38178103, 0x338C80CA, 0x38A6B3C2, 0x41042084, 0x01903D3D, 0x81F03C08, 0x0412764E,
    0x07E4F4A0, 0x1301D03C, 0xEA07C0C8, 0x901124B1, 0x462AA3B4, 0xB03259F2, 0x82AD2100,
    0x45F81680, 0xDB783379, 0x20A04058, 0x89A101D6, 0xED81B989, 0x9283F234, 0xAE0169B9,
    0x0B3009D4, 0xE8119229, 0x2A823291, 0xE00C609E, 0x72AC1C01, 0xD46A477E, 0x02C07A11,
    0x0420AC14, 0x0140200C, 0x598039C6, 0xE39C6716, 0x540980AC, 0x0C180280, 0x84D961A1,
    0x0784D3E4, 0xC5ED4F02, 0x9FF84002, 0x03407E50, 0x05C5967B, 0x0E539CBD, 0x0B18F9FC,
    0x3E284F9C, 0x60A15108, 0xF4DCC800, 0x7924998A, 0x36420D00, 0xC09C1F21, 0xC049619C,
    0xBF107C08, 0x47AB5264, 0x0DC24459, 0x0B830064, 0xEB01802C, 0x18670C4B, 0xD01100A0,
    0x6A8C0620, 0x26213C94, 0x60901FC9, 0x00916556, 0x03F40650, 0x2E24CC1B, 0x40E8682C,
    0xDEB79092, 0x3EA280A0, 0x32A140BC, 0x2DD6D330, 0xA10DA213, 0x6A78C800, 0x0609FD83,
    0xDF8BB401, 0x23A482E2, 0x0240988B, 0x85A38813, 0x09813012, 0x3D0760C4, 0x14909248,
    0xA4222CE7, 0xE965A7E0, 0x84D70F53, 0xA5920183, 0x9E883F00, 0x81E08E61, 0x3D001CDE,
    0x1A81A15C, 0x9983B45D, 0x20AA0F7E, 0xB51280B9, 0x101A8404, 0x38082E34, 0xC5A01001,
    0x810229D6, 0x80C82107, 0x007A2158, 0x0805640E, 0xA4E8F238, 0x3404359C, 0x530425C6,
    0x72C80D7D, 0x80071657, 0xB0458EB6, 0xF042626A, 0x61048DCC, 0x40F25491, 0x58882540,
    0xB6A06888, 0x0701E16D, 0x02161B36, 0x504C2DAC, 0x505E123B, 0x0C0181E0, 0x190DB7B6,
    0x703C00C0, 0xD5E94754, 0x01456D69, 0x0082C50B, 0x4B4F2C19, 0x5953683D, 0xBB5C802C,
    0xC407211C, 0x78010B1D, 0xD81E15B8, 0x49DDB9E0, 0x59E40FC0, 0x070C2184, 0xC0E10ABA,
    0x03F66141, 0x006595C1, 0x68A8E01D, 0x1BACFAF7, 0xBA01E0AC, 0x0C482FC4, 0xDC1300B0,
    0x7C544740, 0x5082125A, 0x853EC782, 0x9EB83100, 0xAA707E96, 0xA840A0B2, 0x09424902,
    0xFD81A37A, 0x6E2E0BBA, 0x925DA3FA, 0x830550F0, 0xF9949100, 0x3BFC0E41, 0x40540116,
    0x98959407, 0x03908AFD, 0xBD203C11, 0x00C9060A, 0x1C82101E, 0x11848FD8, 0x30101FB3,
    0x0CA3C340, 0x616A0580, 0xE2C91DEC, 0x72AF1002, 0x01B52ACA, 0x83C22F52, 0x01C9BA81,
    0xCDC9CDD7, 0x0D023C14, 0x2307E6BF, 0x1C58B048, 0x391D8320, 0xE61C3DAD, 0x12AD9056,
    0xA0F41281, 0x249312AD, 0xC7298C0E, 0x3AF96C1C, 0x5940D83D, 0x3083E014, 0x3B08C4E7,
    0x3260AED8, 0x061F5C00, 0x350C4DC6, 0x6B7B78AF, 0x256F1302, 0xCB8E2808, 0x9EC04A01,
    0x066C373C, 0x9CEF801B, 0x1701629F, 0x123DA10C, 0xA40B0F6B, 0xDC061479, 0xF9B0CFE0,
    0xF2C39601, 0x462EB580, 0xC019A906, 0x83DCFE0C, 0x3BBA281C, 0xE3CA8BAB, 0x14801B7A,
    0x3C261A58, 0xD7A08208, 0xE6290198, 0x45160939, 0x6D47A880, 0x20140095, 0x308E3804,
    0x043090C4, 0x24F9000F, 0x759BE809, 0xB1699080, 0xE5417040, 0xFE05CC16, 0x8C2083AC,
    0x78034DC0, 0x5BEECAAD, 0xE0B40148, 0x0EC92FD8, 0x80C2F606, 0xA6612C17, 0x06702A1A,
    0xC4ED4A52, 0x33028014, 0xC5C02490, 0x62BA849C, 0x6B3E24D4, 0xD08046F4, 0x60BCB1E1,
    0xC20BA0B7, 0x8312C953, 0xC2C9A73F, 0x508151D1, 0x42E8F091, 0x6CCCC5CE, 0xEC0CC1F9,
    0x3AE9963A, 0x6975622A, 0x5DA604C1, 0xC040C170, 0x18684204, 0xB3C3DAC4, 0x832014A7,
    0xCF4219D6, 0x7A00B2AD, 0xB8090619, 0x60044CD6, 0x5B9283FD, 0xFD4D0248, 0x137BC3C1,
    0x41041780, 0x014E6707, 0x80D2C5C1, 0x5A5B681C, 0x4E01569D, 0x039FCE6B, 0x03AF2090,
    0x721219B6, 0x0CA7E720, 0xA7584000, 0x42C8C10C, 0x3A4B9D01, 0x27D02D35, 0x7200706C,
    0x758CA0E2, 0x08978ECB, 0x2011AE24, 0xC52CAB8C, 0x25A18226, 0xB01714A5, 0xE22EEC9C,
    0xDED3CE53, 0x40802238, 0x801129CD, 0x11ADF00B, 0x28FAB08B, 0x5E310027, 0x08163EFA,
    0x4A409DE8, 0x1607D2A5, 0x1F16104F, 0x8CB70331, 0xB2C7C571, 0x81281900, 0x42314CF2,
    0x9FCB640C, 0x02404401, 0x03C08010, 0x1681701C, 0x36F8E0DC, 0x8E0DBE48, 0x3814038F,
    0xF9A501C0, 0xA4CFE3FD, 0x77942102, 0x75F049B4, 0xF28057B5, 0x8800F109, 0xEB01DDC5,
    0xCD748209, 0x5CE3A008, 0x10952F79, 0xFCC31EB0, 0xB81C3BBA, 0x30806BEC, 0x4074B1E9,
    0xD23AD492, 0xB94C680C, 0x01002405, 0x2C030025, 0xA02F0290, 0x4F90401E, 0x0A300229,
    0x980A80B8, 0x49730322, 0x2A02A03F, 0x503102D0, 0x00A00A4F, 0x0A162734, 0x34D70290,
    0x03F0482D, 0x23753020, 0x979C0271, 0x7BC34211, 0x3A00E146, 0x16B357B3, 0x6EC01A17,
    0x54369042, 0x54110292, 0x82D04710, 0x7F35D2AE, 0x35AC03F3, 0x02C00A16, 0xCE29275F,
    0xA36103A2, 0x00400119, 0x28010002, 0xD02C0210, 0x03F1D812, 0xC1323196, 0xA1D947B2,
    0x0402B116, 0x26022028, 0xD00200B0, 0x03581A64, 0x7770B047, 0xF54504A1, 0x1AF4CE14,
    0x2203203E, 0x30251258, 0x04013A7E, 0x3717175B, 0xB5685730, 0x0192541C, 0x093746B6,
    0xD6302BE4, 0x5B803E16, 0x4000F162, 0x61768350, 0x4390413F, 0x1B01419A, 0xB65D0210,
    0x20104103, 0x1A891853, 0x580703E1, 0x01903411, 0x4F79801D, 0x228C0171, 0x03948186,
    0xBF13E6F4, 0xB02C8681, 0x03612486, 0x0E049620, 0xD58A18F4, 0x7D303C5E, 0x943DC1D1,
    0xA79F0412, 0x03500919, 0xB31954C3, 0x30021567, 0x89E04402, 0xEA044152, 0x30111893,
    0x8B802E01, 0x69226042, 0x18CC8922, 0x04026913, 0x38036042, 0x00110250, 0x7835C557,
    0x45273884, 0x51467810, 0x1197A702, 0x63029042, 0x447400E1, 0x7E004629, 0x1300217B,
    0xD04015B5, 0x7A121662, 0x8F8382AB, 0xF67E00C1, 0x3760421A, 0x76034363, 0xC76B8427,
    0x60C1567F, 0x4002F027, 0xD1F33B50, 0x5AA9068C, 0x39042320, 0x90220300, 0x12989A00,
    0x61032009, 0xE7247608, 0x37F5DE76, 0x6301403D, 0x986E0231, 0x19A0351B, 0x1674C01F,
    0x20131FC4, 0x1DD24B54, 0xD06E2004, 0x91632794, 0x8D903800, 0x4304714B, 0x46D58BB0,
    0x02701200, 0x072291AC, 0x885393B9, 0x0308941D, 0xA600D026, 0x90181218, 0x02B91457,
    0x06128871, 0x037F2250, 0x14F67C04, 0x1D03A001, 0x957D4AB9, 0x8B900818, 0x3403E118,
    0xE0371D19, 0x6DF17886, 0x188DF91B, 0x302A0411, 0x01B12294, 0x77953040, 0x30330471,
    0x01116192, 0x741B12DF, 0x797493C8, 0x02E1AD3B, 0x3D96E01E, 0x355A64F1, 0x03C04829,
    0x05127828, 0x83224A70, 0x12890F03, 0x38879010, 0x90410451, 0x78491B94, 0x3318D03D,
    0xB04991D8, 0x82417B95, 0x4F7437F3, 0xC6390291, 0x01604478, 0x0B129819, 0xF87301A0,
    0x97597332, 0x423B79A8, 0x702E03A0, 0x1257A401, 0x307B0001, 0xD3D11389, 0x32713D76,
    0x3F03B6B0, 0x59600300, 0x74799C12, 0x0817B8F8, 0xA5730390, 0x91A04203, 0x3300A22E,
    0xA8AB0485, 0x7DD01C19, 0xC103F130, 0x802D9509, 0x1CA29471, 0x03134981, 0xD0300130,
    0x9A98CB6E, 0xF28CD9E0, 0x10370421, 0x96600902, 0xA800810D, 0x223D7948, 0x01313E83,
    0x4213087D, 0x28FF9550, 0x04588537, 0x841638B0, 0x68762139, 0x03B00521, 0x7A04651E,
    0x000F1659, 0x58E72958, 0x74004162, 0xE8612D21, 0x00414774, 0x1D031019, 0x59E19A71,
    0x30A194A1, 0x1502C16A, 0x212585E0, 0x21B01B00, 0x8028E293, 0x50161348, 0x9EE72990,
    0x2001C14F, 0xF0310486, 0x78401218, 0xA98B5269, 0xA9D60241, 0x1896FB13, 0x30568009,
    0x971B03A3, 0x8A800D12, 0x360492D2, 0x39109F90, 0x40167E02, 0x507589E1, 0x9193A4B8,
    0x9DF80B26, 0x96A4B9BA, 0x077103B1, 0x0358509E, 0x0B9E801B, 0x29460131, 0x6E904784,
    0x225BF129, 0x79870393, 0x9F78FA12, 0xE81829C8, 0x47141427, 0x7ED01125, 0x897E514B,
    0xD9B902B1, 0x7EF03503, 0x3F01113D, 0x21026560, 0xA1C03049, 0x2600C128, 0x9A149BA0,
    0x22922939, 0x293F8040, 0xF02C4DE0, 0x00B02302, 0x92007006, 0x8A94008A, 0x007A9200,
    0x2900D006, 0xB02C02E0, 0x02802802, 0xAD04303C, 0x0A85A871, 0x01D63228, 0x041219AF,
    0x39B30280, 0x99604824, 0x8402E126, 0x00312C27, 0x82A128A8, 0x5A48251E, 0x2023125A,
    0xA7803C96, 0x4B8B21A9, 0x903A0461, 0x028146AA, 0xB111B9D0, 0x41348FE2, 0x96A04101,
    0x150411B9, 0xA1249A10, 0xAA534251, 0x411D82B0, 0xF0360430, 0x53703502, 0xD601000E,
    0x000B13D8, 0x00D00E01, 0x2F03502B, 0x34950360, 0x2E19581F, 0x1D038042, 0x3121AB60,
    0x47597D02, 0x3E3A9049, 0x902C0021, 0x1626989B, 0x28747722, 0x4007165A, 0x8A115C9C,
    0x1D0281D1, 0x2B0304B9, 0xA5001216, 0xF5041142, 0x301F1477, 0x2CE86204, 0x29AE303E,
    0x10080011, 0x9072A345, 0x360401B1, 0x402303B0, 0xAC001A01, 0x1A008164, 0x80391FF0,
    0x96204103, 0x14B22280, 0x5111AF40, 0x3F0A7C94, 0x0813E2FC, 0xD16DB1F0, 0x1289D903,
    0x31A70007, 0x31891089, 0x9BB82502, 0x35016254, 0x4AFA1B9A, 0x1F200A16, 0x478DC330,
    0x4B1791C1, 0x12698E27, 0xB9ABD005, 0x615D6679, 0x4E549B03, 0x0A1A8254, 0xE0220200,
    0x9071D912, 0x3204003D, 0xD1287A90, 0x29277F00, 0xBF13E7AE, 0x44999732, 0x218125B3,
    0x7BA372E8, 0x1A060111, 0xB1A03813, 0xF203A41F, 0xD7881784, 0x47D4D0AF, 0x697F7156,
    0x9B5223D7, 0x94CA1012, 0xAD3208CD, 0x202002A1, 0x0015504E, 0x2A6D7007, 0x23C91D90,
    0x04103E89, 0xB0763026, 0x7B4B0309, 0x13D92C27, 0x6C3F8022, 0x8AB00411, 0x58500212,
    0xC14133AC, 0xF0428744, 0x0331DD94, 0x3298C50D, 0x502513DA, 0x0322A582, 0x20125AC6,
    0xD1866480, 0x00E1479E, 0xD804302D, 0x203D79DA, 0x02D03504, 0xF8BA2010, 0x001200B5,
    0x7B112C03, 0x33597891, 0x50011284, 0x04A2939D, 0x0113D265, 0x8772A740, 0x01A1468E,
    0xF4048AAD, 0x50191719, 0x25449982, 0x4D58601C, 0xFB10674B, 0xA3D30012, 0x6991C127,
    0x99B61BA7, 0x1AD80012, 0x3A1D98CC, 0x10140280, 0x0065BDBC, 0xDE02E017, 0x81B18929,
    0x02A129A5, 0x23543AAD, 0x600713D6, 0xA7F508A2, 0x1D0388BC, 0xEA651789, 0xB0600B13,
    0x2E8AF6C8, 0x891D0092, 0x1618E204, 0x3065A002, 0xC1298F23, 0x03BBFB54, 0x01126BD2,
    0x30390150, 0x1AD16DAB, 0xBD01802D, 0x40031279, 0xC3EC3E00, 0x40C3F5D2, 0x910FABBC,
    0x3A502100, 0x41A5503F, 0x1C313433, 0x1B86E712, 0x27B131EC, 0x297374B1, 0x13EA0E04,
    0x88A2B018, 0x777917B8, 0x18FBAD69, 0x4391D02F, 0xB127B280, 0xC56194B9, 0x41019161,
    0xEBC06C28, 0x40B00313, 0x18130AEF, 0x6942C03A, 0x01600415, 0x2701C4A4, 0x603F0330,
    0x80788F49, 0x3DC7EC80, 0xB0240380, 0x01D01C01, 0x11C3B01A, 0xB0110011, 0xBCB19602,
    0x143CB117, 0x70229660, 0x0452947D, 0x8E127A23, 0x9A03322C, 0x5E63D079, 0xB7C8A03B,
    0x402F6BCA, 0xA3417BAD, 0x25BF8885, 0xFC360141, 0x15647003, 0xF6603A2A, 0xDCA202F3,
    0x19201B10, 0x32B6993D, 0x1C060180, 0x01400A11, 0x5D02B014, 0x02392716, 0xCC745761,
    0x5C492CC7, 0xD03997F4, 0x01202D03, 0x23B80014, 0xA00C0011, 0x7F203B02, 0x2FB692C1,
    0xE10CB760, 0x662C6B01, 0x1DC99048, 0xE6B0035A, 0x14786503, 0xF6BC4016, 0x6161CE22,
    0xA6C5EC00, 0x1019AC9D, 0x39B4B420, 0x0071349D, 0xD340030A, 0xF0181563, 0x04898BCD,
    0x10CA6020, 0x16514501, 0x0311962C, 0x0ECDC013, 0x3CBF0041, 0x03F03103, 0xC053204A,
    0x5520BC58, 0x6A0B6A31, 0x0DC1D00A, 0x0C35C461, 0x033040C9, 0x1B124A69, 0x232A8FB0,
    0x126BE604, 0x3F9B9013, 0x2147B7A0, 0x0393AC91, 0x1E825B45, 0x9AC22541, 0x14F48213,
    0x2C3B7C9B, 0x2ACE13ED, 0x13EA5F86, 0x532B100D, 0xB2832298, 0x029A10B1, 0x9D492860,
    0xF33A4639, 0x2991ED2C, 0x2684801B, 0x701F0061, 0xBCDBCBCD, 0x6A10EC5F, 0xA047603C,
    0x122B5703, 0x23962026, 0x9121D0A3, 0x21B4C998, 0x7C165B6C, 0x4509573B, 0x95E03025,
    0x11CF103E, 0x39F2C165, 0x008147C1, 0x47C50685, 0x312599A0, 0xC7130900, 0xB219211A,
    0xD60BA441, 0x2CD02B01, 0xACD4CAF7, 0x40433F13, 0xBBB01E03, 0x3801FD0B, 0xF3CACD80,
    0x01512656, 0xE8747A20, 0x0C291345, 0xC5B0406B, 0xC9BB8147, 0xF1824831, 0x041130CE,
    0x151D1D21, 0xD04A9B30, 0x003126B0, 0x30400CE4, 0xA121D1A0, 0x96A03D00, 0x346EF21B,
    0x09F16181, 0x3190412B, 0x16008128, 0xA4534190, 0xD7AD8A98, 0x1B9E404A, 0x510BCAA0,
    0x85001E00, 0xA9850AD8, 0xB016121D, 0x2F02E882, 0x74012134, 0xF03BACAD, 0x00F126D5,
    0x84047953, 0xF01B147D, 0x22E83C8D, 0x57C25012, 0x0592126C, 0xD270402B, 0x11035B1B,
    0x4DEB4ABC, 0x91700A12, 0x3A32F2A4, 0xE00EB58C, 0x91351C02, 0x1B34FDC7, 0x304104A2,
    0xDF631B03, 0xA62C002A, 0x4121BB6A, 0x04729218, 0x28123DF5, 0x19D29620, 0x6C269116,
    0xF0165B88, 0xED305ED9, 0x95E03322, 0x0D13D03D, 0xC713DDB0, 0x8F0127C2, 0x29B39263,
    0xB03B01E1, 0x03E959B5, 0x10CD2024, 0xA0220051, 0xE01E0034, 0x3A459491, 0xEDB40210,
    0xAA54C200, 0x0EE261D8, 0x8885E281, 0x125D3B04, 0xFD973D78, 0x60171565, 0x2B8464DC,
    0x5B21017B, 0x4CBD16E6, 0xAC3DA216, 0xD413D03C, 0x40324001, 0xC4F111D6, 0x3D2BC186,
    0x683A0271, 0x7BB1B11D, 0x69450126, 0x9E38AD09, 0x02B1BA67, 0x7910CB3F, 0x261B8524,
    0x834D6402, 0x641781B8, 0xCA62111C, 0x14F2AD15, 0xA062B271, 0xF02F164D, 0xE110408D,
    0x97BF118F, 0xEE0DCECC, 0xE71568BB, 0x03CE9124, 0x7E2A0496, 0xE8E6C512, 0x8A5C243E,
    0x6D8700EC, 0x427E6DC9, 0x0DDF078D, 0xE0090011, 0x7F3E6502, 0x0BE7B02C, 0xF7479BF1,
    0xE5B13491, 0x34B8D8EC, 0x6BA501A1, 0x404E5904, 0xEE03E8DF, 0x60091D18, 0x125D7658,
    0x5B115006, 0x9A606ED1, 0x70B88212, 0x1DEBB048, 0xCE9802CA, 0x03403E65, 0x3F10CDE3,
    0xB3F363B8, 0xED724521, 0x147B8ED7, 0x80330469, 0xD55172B0, 0x3B9BAE2E, 0x410AE900,
    0x20B28C00, 0xD8DDFBF3, 0xE992BF6B, 0x5E675E64, 0xF8156EB2, 0xC042EC3C, 0x7EC165DC,
    0x289CC4C9, 0x5D620221, 0x111DB403, 0x47EE7005, 0x3128CFB7, 0xAA66F700, 0x07111C52,
    0xA4EF0260, 0x78A885ED, 0xEE04445A, 0xA037AA4A, 0x8094C27C, 0x493F61D8, 0x4F0E3D12,
    0x03045429, 0xAE120C75, 0x2E2FB306, 0x00C10EEA, 0xCCE45D79, 0xCD39121A, 0x127E8CA6,
    0x6AA71EAC, 0xF5B417B8, 0x17BED135, 0x7288561F, 0xD00A10ED, 0xBFD36DB7, 0x47B01134,
    0x0DDE03C7, 0x90200311, 0x900313CA, 0x10211D2D, 0x69ED2404, 0x4404214A, 0x2B6402F0,
    0x00173302, 0x0CF59F58, 0x51A8F591, 0x02101700, 0x33020022, 0xF2CE2CC0, 0x30D312F4,
    0x04AD4028, 0x7B3C0200, 0xEDE03F3B, 0x4E00E10F, 0xA03D177E, 0x00910EEA, 0x5E034CE5,
    0x2009110E, 0xEF60465A, 0x8401F129, 0xDE7F03F7, 0xBA50251D, 0x0DF3B045, 0xF8ECC5D1,
    0x01D13DEB, 0xBF047C11, 0x4983129A, 0x0421E8F2, 0x00D0202E, 0x70370150, 0x5D634F7B,
    0x2B03D049, 0x401602C0, 0xC4400700, 0x0600210B, 0xB01A0060, 0xF4E02B02, 0x405C948F,
    0xC1216A10, 0x1F3E2E68, 0x9510AF4B, 0x42E91B8C, 0xAB302513, 0x10156DA8, 0x8ECA5E6C,
    0xC17873C2, 0x7313DFA8, 0x70464C94, 0x017111E4, 0x451F2AB3, 0xEA6F122F, 0xF26043F7,
    0x9633E120, 0xD03903EF, 0x00E12341, 0x45D1350C, 0x603D4594, 0x00D02503, 0x0A146F76,
    0x502000D0, 0x86104A3A, 0x22A7DF1D, 0xF10AE325, 0xC3603000, 0x31C3BBBF, 0x083D18BF,
    0x11ABF571, 0x0643D100, 0x0D058200, 0xF088441E, 0x44229142, 0x787C3E1C, 0x8A4246E4,
    0xB0022D15, 0x46C763D1, 0x4C831D8E, 0xA45218B8, 0x20461EC5, 0x6332449E, 0x32028024,
    0xB9847634, 0x958787E3, 0x38F80D16, 0x11675272, 0x1A6A1B24, 0x47C37054, 0x7132A24C,
    0xE0391824, 0x3A2410C3, 0x89E53A9D, 0x0A0B47C4, 0xB55E7F48, 0x8B02A088, 0x3E1A4992,
    0xE9B0EB05, 0x4D210109, 0xF31A2904, 0x23020C07, 0x1A68EC09, 0xAB0F88D6, 0xD1044357,
    0x06265691, 0x987914AC, 0x42849B04, 0x801791DF, 0x817205E8, 0x3F82E2F0, 0x12453B00,
    0x1E0AE563, 0x88F8777A, 0x00319651, 0x22C37116, 0x817589A1, 0x3796A18E, 0x6071C102,
    0x5E1B0224, 0x723D82C3, 0x0D0B8844, 0x06DF379A, 0x8A42C010, 0x3F5FB121, 0x4724922D,
    0x84249084, 0x63F8DE98, 0x8ED58146, 0xD181275F, 0x978E80F7, 0x18D07D45, 0x9243FB80,
    0xE05A47B0, 0x78E148A6, 0xC1131E5A, 0xF391155F, 0x081E91A9, 0xFBD78E46, 0x0C6DC1E3,
    0xB0D7039E, 0x8F41D35D, 0xF87996D2, 0x91354158, 0xBD421042, 0x49E220DF, 0x080A0FA2,
    0x2A00B080, 0x0E0380F0, 0xC2A0D036, 0xD090370A, 0xFC1A0B03, 0x3E030029, 0x24090190,
    0x21D03B1E, 0x20E88A23, 0x184684BF, 0x6E993902, 0x0EA46030, 0x08EA7BEC, 0xE10AB09F,
    0xBB88C430, 0xBE20016D, 0x1F88CA72, 0xA0CF3C38, 0xA98BFA17, 0xAA7F22BC, 0x94B03B80,
    0xD32460B0, 0x47A14080, 0xD1AC8021, 0x2AAEE606, 0xF8E43480, 0x04A44C53, 0x44AD7054,
    0xC2227887, 0xABB20705, 0x200A01E9, 0x1A8740F0, 0x88497066, 0x2204EE20, 0x0CEF3CCF,
    0x66E50842, 0x168721A0, 0x82809820, 0xE01242B6, 0x28801701, 0x689E4CD3, 0x0FA28BA8,
    0xB4CCA882, 0xCC985420, 0x12E6B049, 0x7002A7F0, 0x1FA8B4A8, 0x066F0058, 0x223A4F1A,
    0x920925B4, 0x76F207E1, 0x91556C18, 0x304B0C9A, 0xA1E2F529, 0x8B6E0507, 0x8C93D4E1,
    0xBE81A230, 0xB4D57050, 0x6080781E, 0x32980AA4, 0x8224CCF3, 0x95816138, 0x03005012,
    0x41E85A19, 0xE87C2008, 0x5D63DBA1, 0x1FDBB6F4, 0x86018CFA, 0x40601413, 0x20108445,
    0xB02407E1, 0xF9AA503C, 0x8840DA2C, 0x41F2F550, 0xD80E8BD5, 0x92A74481, 0x0E2FA148,
    0x87AB4D8A, 0xC0A33779, 0x9548C840, 0xAA098015, 0x11882A23, 0x80690E1A, 0xD546141B,
    0x02D35B84, 0x34DB8482, 0x2337E250, 0x804AC034, 0xCCB47415, 0xAD841D07, 0x30220438,
    0x21890DFE, 0xA2D4E84A, 0x81000C01, 0xF0821C04, 0x7F1767A1, 0x9EBA81DE, 0x0502087D,
    0xA8B4D613, 0x3D1AE300, 0x482288F0, 0x0CA13220, 0x084E4528, 0xC0924610, 0x388ED7E9,
    0xEE1BA7F8, 0xDBD30B55, 0xAE51F80E, 0x00548B48, 0x987EB4AD, 0x428BE298, 0x8D87D4DC,
    0x8721EA89, 0xA062FB9A, 0xC05D5AEC, 0xD416802A, 0x6907394E, 0x86C03A43, 0xB11D9B77,
    0x92440605, 0xFE1A83C0, 0xA06C0203, 0x87DA0F27, 0x21C8781F, 0x3A2B0D84, 0x0E2104C0,
    0xCCB8312F, 0x07E0AA2C, 0xDBAA8B88, 0xF046913D, 0x6A23A215, 0x10257A88, 0x730A2650,
    0x2132FB75, 0x5CC34DE4, 0x241A0095, 0xB387E8EF, 0x86083EDD, 0x823089D6, 0x0263B987,
    0x5ECDEAE2, 0x23A1DE38, 0xA7F43874, 0xF7C6080B, 0x5213E186, 0x9B4D07A0, 0x0706422E,
    0x81C84762, 0x81E8660B, 0x27D7CA6A, 0x3E1CDB6F, 0x0076E088, 0x37C17018, 0xA1A89533,
    0xE02484FA, 0x701F34D6, 0x084855D8, 0x20D797F0, 0xD9A203A1, 0x3238F001, 0x8054DC13,
    0x4882F008, 0x3B36284A, 0x788EA97C, 0xBF80C109, 0xC1840410, 0x383C845D, 0x2862D2D8,
    0x1A07BD10, 0xB13F5621, 0xD8140F80, 0x20D41E91, 0x00811780, 0x96066010, 0x7780F0E0,
    0x04002114, 0x6F8412B8, 0xE487CFB1, 0x800FC1E1, 0x840C0340, 0x880120D0, 0x77400DC0,
    0xC0DC24A0, 0xC0790982, 0xB1174E0E, 0x02648C15, 0x0FCB9227, 0x6212B88C, 0x31070AE1,
    0x340F8DBA, 0x3DE490F8, 0xC23948B1, 0x482E0897, 0x10400491, 0x58F04A22, 0x81C6D648,
    0x39C024CD, 0x4FE38AB5, 0xFF3FD01A, 0x217160F0, 0x6B0CD7A9, 0xC8148434, 0x0805208F,
    0xB5B60D01, 0xB2361FC2, 0xC2003E23, 0x3E44160D, 0x65E06C01, 0x0F024266, 0x1D45083A,
    0x6A34F230, 0xBE0A0914, 0xD63CAFF7, 0x22480104, 0xB6580FCA, 0x0F441019, 0xC0330D4A,
    0x9926D6D7, 0x01242235, 0x12487C63, 0xBA41E6DA, 0xA236E0D1, 0x0C0D9ADC, 0xC0019159,
    0x11448A60, 0x2242C902, 0x6E856002, 0xC84C2F7A, 0x03A04401, 0x91C5E5D3, 0x7FCD34D7,
    0x30027076, 0x3101C41E, 0x7C67DA60, 0xB54947F0, 0x703E3FC8, 0x70104880, 0x6110E047,
    0x0159217B, 0x9DF2D4F6, 0x946050DB, 0xC3580AA8, 0x0016993A, 0x042112D5, 0x892E01D0,
    0x56528490, 0x083A2884, 0xF3185F02, 0xA5860780, 0xE7484308, 0x38005655, 0x8E8104F2,
    0xD6812921, 0x362A969A, 0x1F004425, 0xB0E441C8, 0xB99FD239, 0x2CD0048A, 0x537A0908,
    0xD2A823A2, 0x1DA02522, 0x45B06EEA, 0x80B2B48A, 0x31DEB30C, 0x1D03C239, 0x36319390,
    0xE4F22410, 0xE815B0D6, 0xF01234F4, 0x704641E7, 0x40E2324F, 0x8A21147F, 0x18C7600F,
    0x35EC5C01, 0x4FE5004A, 0x9DD46030, 0x1486E0F6, 0x340A0009, 0xD8249BFA, 0x2914A900,
    0x206E0680, 0x15B69252, 0x4C383C39, 0x1059BA0A, 0xA980E406, 0x59CD914E, 0x9882A229,
    0x886352A6, 0x8B0D2AB2, 0xE495B5D0, 0xF8419180, 0x47A0612A, 0x75E821C3, 0x2BE81249,
    0x84207447, 0x00152613, 0xF4ABB824, 0x889069DE, 0x1A317429, 0x9C11E120, 0xA807157A,
    0x402152D0, 0x2AC60AD4, 0x91542497, 0x80700222, 0xCD88780D, 0x4F71054A, 0x1013E27C,
    0xAE27A082, 0x3AAE0FAE, 0x0B53C0C8, 0x08238300, 0x484375D4, 0x64BD1B16, 0xF7242019,
    0xE3750C22, 0x02F09043, 0x2F4A4CAC, 0x6DC9503D, 0x255C601E, 0x1661A094, 0x53358220,
    0xA6CB0199, 0xDC0FB334, 0x8262416C, 0xC48A6199, 0x4D792500, 0x93F24011, 0x4A64B801,
    0x002F6830, 0x20D2C4C8, 0x0A20EBE8, 0x9127ABE0, 0x26211A43, 0xC81B0727, 0xF03A8600,
    0x608C1101, 0x81002204, 0x81842807, 0x9214F2A2, 0x105F64F2, 0x00907801, 0xC6084070,
    0x2B7CA325, 0xF8EA0092, 0x492228E7, 0x421B79C1, 0x65049158, 0x31619585, 0x25701056,
    0xBF20CCD8, 0x8BCD617D, 0x825E5073, 0x60C68040, 0x615424D9, 0xDAC483E2, 0xCD03BCE5,
    0x10344FE7, 0x20B321D9, 0xA12024BF, 0x52807574, 0x3F805883, 0xB8D9EC8D, 0x14024056,
    0x0400402C, 0x2E054070, 0x600A8150, 0xA02E0460, 0x805C0D01, 0xD98C0F02, 0x80F81E02,
    0x81900402, 0x9A808C14, 0x7881EB3D, 0x13ADD729, 0x2B01EEC4, 0x56105915, 0x500F1089,
    0x284128B4, 0xF0164528, 0x4124A7E3, 0x01793F6C, 0x4BB23D86, 0x7A209CC6, 0x632F4846,
    0x8DE9205A, 0x3C0700F0, 0x6B010826, 0x768368F4, 0x64BE0784, 0xB6F4018C, 0x75CC201E,
    0x24F43124, 0x909C827F, 0xD1B38412, 0x4BA36230, 0xF4BA8C04, 0x2A0600F5, 0x08020048,
    0xA40600C0, 0xF0350720, 0x9092129E, 0x17142404, 0xC241B158, 0x845D97B2, 0x06E0D81C,
    0x07406022, 0x17016016, 0x3D6780C0, 0x820F1C9C, 0x16F98320, 0x6C3201C4, 0x8A3A0DDA,
    0xA7F97690, 0x084EB307, 0x0438480A, 0x02648A33, 0x0F4984A8, 0xC26EB062, 0xE5A1D660,
    0x380CD25E, 0xF01B409D, 0x7DF09FDB, 0xB979048A, 0x68DEC991, 0xE02E9631, 0x00427F01,
    0x493BE018, 0x0A08A595, 0x17D64774, 0x7320953C, 0x2DC0C1C6, 0xDC1F83D3, 0x901205E0,
    0xD03201B3, 0x3B36BB02, 0x54DDD136, 0x22308E6C, 0x02C0B819, 0x06C0A00A, 0x2603B06E,
    0x17084B1B, 0x7802882D, 0x60B16470, 0xB119AD07, 0x87C85ACC, 0x01040390, 0xC24044E6,
    0x0082AE09, 0xDE00FE4F, 0xCC01FF53, 0x0BB0D323, 0x1F081570, 0x21C23500, 0xB08B4B43,
    0x518C6ED0, 0x365FD3C0, 0x008C9FD5, 0x4219693E, 0x81F22B56, 0x6A160A25, 0x6F42157B,
    0x1A3A676B, 0x399A4984, 0x9A88EE28, 0x1911B4D5, 0x381F0601, 0x40460380, 0x0E519572,
    0x88333408, 0x20770C01, 0x2133D025, 0x5177000D, 0x11122EBE, 0x4008D79C, 0x444274C8,
    0x5721E860, 0x45028C29, 0x856440C2, 0x4106AE00, 0x28CD49EE, 0x9D109058, 0xB5065F85,
    0x5041518C, 0x1863144D, 0x2B07FDEA, 0x2041BA58, 0x23B50430, 0x1914450F, 0x4726C9C0,
    0x8E64201D, 0x00180100, 0x84206E07, 0xF0788024, 0x0BCA69B0, 0x0D00902C, 0x49E2CC9C,
    0x0F4441D7, 0x23A20379, 0xA108E80F, 0x18BF75E0, 0xD3B00292, 0xEFF04A29, 0x03F918AC,
    0xAC4633CB, 0x92D1E582, 0x3D042014, 0x3CF364C3, 0xB21A211E, 0x020BDABA, 0x0709FB2A,
    0xA8C0A868, 0x8198A4BF, 0x9508E3EF, 0xF8841BB9, 0x086BEB33, 0x0C884265, 0x440701C0,
    0x01B8211D, 0x073E780E, 0x501F8148, 0xBEBA2C02, 0x22887C12, 0x101E3998, 0x00580401,
    0x5D99E816, 0xC96E88E3, 0x8020003F, 0x9E0DF8D6, 0x121C00A8, 0x2840BD0A, 0xED88B9E7,
    0xC01D8B90, 0xA7E27D8A, 0x0A8C2419, 0xCBF7B8D8, 0x9DF9DEC1, 0x5AB5720F, 0xC15AA7B2,
    0x20588438, 0xC58C5AD7, 0x302121A2, 0x17A88BC0, 0x68B801FF, 0x3BDD01E2, 0x32282213,
    0xBD149800, 0xB01F2163, 0x8B680C01, 0xD881A008, 0x34133EB0, 0x02402313, 0x03815021,
    0x20148058, 0x0FE1A039, 0x19801B80, 0xA232BA20, 0xBCC80608, 0x2781D924, 0x00050844,
    0x0232E302, 0x911D9387, 0x5ACF0203, 0x3E20070C, 0x592EF0D8, 0x439E80F9, 0x1E242DA8,
    0x9D42480B, 0x2C258248, 0xC230CAB5, 0x4A8060AB, 0xAABF8C0C, 0xAC300189, 0x8AC553A4,
    0x43288170, 0x08438941, 0xE69C9902, 0x900928BB, 0x3E2C3A01, 0x9E3EBC39, 0x48148228,
    0x14580580, 0xFE08DC34, 0x10004510, 0x43101880, 0x8A0FC3A8, 0xF3D20128, 0x884B44BF,
    0xDA0CFBDC, 0xC0F109AB, 0x8CD8F315, 0xE514D95E, 0xABD19591, 0x006B1E20, 0x298C0BA7,
    0xAC63883C, 0x35A8CD81, 0xBB3D00B9, 0xCA293910, 0x0132F681, 0x1F0E0BA2, 0x5C692A54,
    0x01201D9B, 0x99B000D5, 0x8C80C5F3, 0x00099999, 0xF501A00C, 0x901FA6C9, 0xBC9801C4,
    0x823F8A02, 0xAB58B120, 0xB10444B7, 0x83BD0822, 0x42FB0020, 0x0DC01B1D, 0x1E94D9E3,
    0x22341868, 0x1E244E0F, 0x64B849B8, 0x108D884C, 0x8AC44902, 0x243A7BA6, 0x6891C578,
    0x95CA4F00, 0x0A88442F, 0x4A1A4120, 0x01388A15, 0x201DAC7D, 0x28E20178, 0x82181380,
    0x80C813F2, 0xC01F0E0C, 0x81380080, 0xB81170CB, 0xAC043F3A, 0xBF102348, 0xA4B25883,
    0x608AB523, 0x023AF381, 0x1889ABD3, 0xDA063910, 0x2C620C8C, 0x018DBC74, 0xB27E1C78,
    0xC8F2CB42, 0x94CB591A, 0xF01A01EC, 0x38809FB8, 0x08820A1A, 0x8817090C, 0x4AF01FC7,
    0x1F80388A, 0x00244668, 0x8008843B, 0x94BB7815, 0xB4C181D1, 0x82501D00, 0xC7103C5E,
    0x382345F4, 0x80401882, 0x9DC78ABA, 0x8C7C020A, 0x8EEC7300, 0x3F8842D1, 0xE0FFC0D4,
    0x00C8833D, 0x8E023AE3, 0xF00909FC, 0x8C63DBBA, 0xEE8B0A5B, 0x1259186A, 0x2CB46C15,
    0x700F5C6F, 0xC01F2834, 0x8048BEA9, 0xD60CFC45, 0xF00A895C, 0x81F34EC9, 0x28923489,
    0x21BE024B, 0x4E18174C, 0x1A021098, 0xA8019188, 0x9ADC38C7, 0x1F821A07, 0xD0863E20,
    0x4ED933CE, 0x0C167C81, 0xECE68A50, 0xBB902108, 0xD83A200E, 0x601E2284, 0x3D782024,
    0xC83B108A, 0x488BC9B0, 0x81995C1B, 0xB209FCB9, 0x6A5D3981, 0x95145698, 0x5327F405,
    0xD08B9B89, 0x49202001, 0x4F80C091, 0x301F95FC, 0x81A090B8, 0x470202DE, 0x8AD0084C,
    0x50581A99, 0x9839E813, 0x88120CA8, 0x4669FE11, 0x210228D8, 0x78192078, 0x81801E20,
    0x1F96D01D, 0xD2211A18, 0x82193BAD, 0x9E439413, 0x980D8C90, 0x2E712FAD, 0x22C66AFD,
    0xF410BAB8, 0x883D05A2, 0xACCAE010, 0xD16C1444, 0x8DBC028B, 0x231E3812, 0xDCFB01C8,
    0xAA8CD90C, 0x58AA4CDD, 0x688BC8FC, 0x89FA9A21, 0x24AE301C, 0xE959C988, 0x2EA01F2D,
    0xB544A08B, 0xBC441E9B, 0x247C0D00, 0x0AAE481F, 0x345FC140, 0x01A82309, 0x9D81B021,
    0xCCF501B1, 0x01D1A095, 0x3BD3AAF1, 0x195CA04D, 0xC3951017, 0x184CAA26, 0xC418D0B8,
    0xBF229F01, 0x843D51AD, 0x42048068, 0x88B4C18C, 0x9D346006, 0x18AB8B98, 0x01ECE181,
    0x120BEC94, 0xC0885040, 0x1D295934, 0x7F51A97C, 0xBC6FCD2A, 0x34A02188, 0x9820C8AC,
    0x1341D0FB, 0x01900109, 0xD181F532, 0x201A0DCC, 0x023022A1, 0x31882AC7, 0x98A1B5DD,
    0x8138030F, 0x233C1A66, 0x781F8208, 0x12F01AD3, 0xBC9F5C22, 0x44541C80, 0x80C8219C,
    0x8DD40CC2, 0x78BA96E0, 0x11AB5580, 0x15884AF2, 0x401CCD08, 0x493083C4, 0x960228A8,
    0x8AAD890C, 0x8C5BB20F, 0x8B3DD00E, 0xF0099594, 0x82181D49, 0x04AF2928, 0xD81F0B90,
    0x01C88256, 0x158AC29F, 0x50242F38, 0x80809ACE, 0x844B7CBD, 0x454C80E0, 0x08340B15,
    0x2035DD75, 0x48F70160, 0x4C83A180, 0x7B0221E4, 0x501A81C1, 0x370C1819, 0xD0C04A48,
    0x3AEF0241, 0x89956781, 0x2380DCDD, 0x8CB98F63, 0xD4FBA4A1, 0x2B80A084, 0x59AF3A95,
    0x8DB951A1, 0x4DA31002, 0x10DC5701, 0x08F3FE8F, 0x369E24B3, 0x908B4B2A, 0x091D1E01,
    0x7B0B959C, 0x49238915, 0x4452F499, 0xF23D9BB5, 0xC9F40029, 0x81101F26, 0x770050EC,
    0xD8869669, 0x31281C01, 0x20A1FD8A, 0x51D0D3E2, 0x01198082, 0x8318ED8E, 0x28E7CAD8,
    0xD56B8FD5, 0xCE57D8F8, 0x10A84CE1, 0x08ACE302, 0xABA0F950, 0x44F789FB, 0x122D4389,
    0x9A02180B, 0x882008E5, 0x4D720BCF, 0xCFBF38D8, 0xD0118C64, 0xCD4BADBD, 0x2C820540,
    0x1016883D, 0xB832D143, 0x294CBC8C, 0x000611BA, 0x0229474C, 0xAB53AA15, 0x6CEC291D,
    0x8EF82496, 0x1E15C3F4, 0x1805A558, 0xD0FAE302, 0x94B2B489, 0x48845929, 0x48BA8731,
    0xA2D4E883, 0xC54B5760, 0x3B1B510A, 0xA35A4959, 0xAD5B01FA, 0xB46DBEA5, 0xC08F3CF6,
    0x1D820F5A, 0x0A2C8D09, 0x82CBC4F5, 0x64310098, 0x80045288, 0x9E4F100E, 0xEB1F44BB,
    0x14A212D0, 0xCA2B7364, 0x54C74EC1, 0xB76AEA02, 0x6E81EB91, 0x00CFB7F2, 0x5B708252,
    0x84D0818E, 0x4CD300D8, 0xDBBCE0D9, 0xC65771B5, 0x231A9198, 0x35F4072A, 0xAB80431E,
    0xF59946A2, 0x4E0CDC3C, 0xE028440D, 0x7C86884C, 0x082CBE92, 0x20D8E00C, 0x90002FC0,
    0x103A4B80, 0x6316E560, 0x81A05EBD, 0xA26516AB, 0x1B001015, 0x281FCCB8, 0x2C650025,
    0x428005A0, 0xFB4EDBC3, 0xDB9090B4, 0x95B54208, 0xA4FE0058, 0x9844759B, 0x58287ACC,
    0x7B4D8C5D, 0x9B73E095, 0xB1CFCAF7, 0x7DC50F05, 0x095D464D, 0xB3AEBA98, 0x380C88AB,
    0x9754D3B2, 0x9E5325A4, 0xC0B2817B, 0x0224EA49, 0x0681D020, 0xCDABE08D, 0x0242875A,
    0x3201B40F, 0x83FCA20D, 0x17FD8B80, 0x26488602, 0xB01E124D, 0x01B882D9, 0x9FE17A81,
    0xC3818160, 0xC4F0DB9C, 0xDBDD915A, 0xE20FB488, 0x01A00131, 0x55CFD281, 0x3BF70009,
    0x02082289, 0x2D8ACE0F, 0xECC261E5, 0x022A8717, 0xF1016474, 0x681501FC, 0x45ED3410,
    0xCBB93414, 0x02476289, 0x822CC782, 0x4F12E80B, 0x68834352, 0x63E1E881, 0x910184BC,
    0xB8909893, 0x8252F380, 0xB008AE37, 0x5E16182C, 0x093E2E28, 0x5415595B, 0xB46E5E2E,
    0x9E38132C, 0xDBDDF024, 0x20CFD730, 0x51D091D7, 0x335B615C, 0xF024A124, 0xDD780062,
    0x3B4678F8, 0xBBCFC38A, 0xE48DCC1C, 0x2A60A182, 0x400B8086, 0x006BA064, 0xDF656E56,
    0x9C6DD7ED, 0x00908257, 0x8BD7FCD3, 0xFAAE00D0, 0x8C5C5A01, 0x242A0819, 0x48C5E318,
    0xB50654E3, 0x4BBD93CE, 0x8815925C, 0xDDD0239E, 0x0680108B, 0x4E780C44, 0x4D309B88,
    0xC938F01E, 0x115CADEB, 0x0B96014A, 0x470AE01C, 0xF8FE4F52, 0x68668581, 0x66163D14,
    0xBE29924E, 0x4E6A444D, 0x1526E9CC, 0x657964E0, 0xA05E10BA, 0x00C37BD0, 0xC3D6A535,
    0x4DB0ABE1, 0xDBDC42BC, 0x8A158060, 0x955B1BCB, 0x180D82A5, 0xE0C261A0, 0x8200A85D,
    0x9988ADE3, 0x263F2205, 0x15AA9B08, 0x8AA94E72, 0xAC655336, 0x1213F281, 0xDD32C016,
    0x06678212, 0xA4593B0B, 0x892DF1A0, 0x481B0C86, 0x8C45A500, 0x97B19AAC, 0x4D49B22C,
    0x692890A3, 0x9881ED48, 0xE3FE444E, 0x8BEE4098, 0xFE54856E, 0xBBD60F3D, 0x2CB56B2E,
    0x1D8F5E97, 0xD0C652A0, 0x693AEE00, 0xAE01708B, 0xE08AA7EA, 0x01B8EEE7, 0x94EB5175,
    0x880F27C9, 0x2EC197B2, 0x20AF5C63, 0x6D86E0A0, 0x56082188, 0x98B9E688, 0x1C4500E1,
    0xA0B01CB9, 0x5DBD9476, 0x50098826, 0x52E9B5CF, 0x9DBA79D2, 0x51DF095C, 0x0CDE4569,
    0xA195FEB3, 0x3EBF925A, 0x9E25FCB4, 0x5FDB55F0, 0x860E0BEE, 0x6530220A, 0x31AC3AE5,
    0x3D8100DE, 0xD9882313, 0xA99B5E5E, 0xD35B00B2, 0x81B82409, 0x1EE66019, 0x6D168200,
    0x6C66D9D8, 0xF888F6C3, 0xE8070242, 0xCCCC7880, 0xB4804082, 0x4A8809DD, 0x098E0808,
    0x0488B983, 0xFA383DD0, 0x8B4C4C89, 0x50D02AC9, 0x91E4AA0A, 0xC0D00495, 0xD72F2E50,
    0x5DD68A86, 0x2813AA09, 0xE18F40F6, 0xB6988EBC, 0x6550EED2, 0x2C007883, 0x30E201D6,
    0x6CBDDA00, 0x296E7015, 0x466B020A, 0x88623710, 0xA0519A76, 0xB0EEF049, 0xDE200301,
    0x4E81E1DA, 0x215AC661, 0x40D4336B, 0x0288BACA, 0x5BAD01E0, 0x491091DF, 0x8AEF9151,
    0x53980068, 0x4DE955EF, 0x5AE000C4, 0x3D486F82, 0x63689171, 0x8AE91BD9, 0x12EBED10,
    0x553883DE, 0x16E7A8B9, 0x03FFD320, 0x01699127, 0x16623815, 0x26D9F08A, 0x16D02182,
    0x2C970B3C, 0xD43193EB, 0xE093BC89, 0x250A7F24, 0xA0070100, 0x428A5DEE, 0x65883E90,
    0x181EE8E1, 0x6B708A71, 0x9B01F8A8, 0xCCC3B5A6, 0x1316D837, 0xAA820D54, 0xE4F98F04,
    0xA7F47C18, 0x19920F32, 0xD014890F, 0x89FC50BD, 0xF48F8F16, 0x4DB9ED32, 0x391B7B88,
    0x0E10681B, 0xC0234668, 0x19FB8A81, 0x260B0AB8, 0x10CB1D37, 0xEC40FFAF, 0x6CC840A7,
    0x209DEA52, 0x27880402, 0x0188266D, 0xFAA081D0, 0x004D92D0, 0x1D50C630, 0x46DD28C0,
    0x00A7139E, 0x7ADE2D45, 0xF4D373EE, 0x1B48DC69, 0x1E1E6E8E, 0x29B33BA3, 0x54D63D12,
    0x8AEB881D, 0x3C0D0140, 0x69988B5C, 0x195E62BC, 0x78C18C46, 0x023B102F, 0x9F95681E,
    0x874C81E9, 0x0CA93F08, 0xE4B91E8E, 0x382189D6, 0x29BC63F2, 0xDE1B5F3F, 0xA127BD89,
    0x9D4638C6, 0x0708A6FE, 0xB719BA7A, 0x6CE9515E, 0x1BD2BE99, 0x28030C5F, 0x3FF8A25F,
    0x5D7442CB, 0x50090F07, 0xAECEE1D6, 0x7E74609A, 0xB0835F3A, 0x2610D846, 0xA4AC8084,
    0x7D7C27CB, 0x0130F60D, 0xB018E6EE, 0xD6847078, 0xD8E093DC, 0x086420E4, 0xC4B08138,
    0x15FF62C6, 0x1497501A, 0x0E71C0D0, 0x15470209, 0x5309167D, 0xE4DA1E0F, 0xED60E7CD,
    0xB14075C0, 0x66B9ACB4, 0x0128F3DD, 0x9FA13755, 0xAB910088, 0x7921A48C, 0x565BF954,
    0xA0F74CB9, 0xAC670680, 0x7135DCA6, 0x7F03F4B3, 0x88876C4A, 0xCFD21F4B, 0xE00A0178,
    0xBF10CAAA, 0xE18EE9FA, 0xB988ED51, 0xD9788365, 0x91F7EB84, 0xDA79E150, 0xEFD8020C,
    0xC5F78346, 0xFB8180F0, 0xA5AF3A01, 0x3DD47808, 0x608B73C6, 0x719D7381, 0xBAEFC00A,
    0x479B6626, 0xDC366E6B, 0xD90009AB, 0x4017B51E, 0xEA801E43, 0x1F76DF25, 0x3F69FA42,
    0x413F697A, 0xB480A823, 0x4A848B4C, 0xF9FF9B29, 0x179B5F5A, 0xBA808847, 0x00089AEC,
    0x27254F57, 0x0FB98BED, 0x0C27B38C, 0x248EB6F2, 0x477D2A4B, 0x2367B8D5, 0x91F76CD3,
    0x1DD83A40, 0x817EDA82, 0xCBF9FF3D, 0xA8B6D6CA, 0x81C5C580, 0xC6391DEE, 0x5E6697B7,
    0x7E0EA520, 0xCF81F8D3, 0xA00B0160, 0x472E5554, 0x4FFAFBAD, 0xB471A637, 0x1E381088,
    0x071D95C2, 0x45F181F4, 0x65B2CC8F, 0x1E50BC4C, 0x5155F360, 0xFD621A7D, 0xF43A7BCB,
    0x5F79ED0C, 0x61A018AF, 0x13F5E002, 0xDBA663EC, 0x4C1FC8EC, 0x218A7DE0, 0xBFF980E0,
    0x5C7FC62E, 0xF8768A92, 0x3B1E0807, 0x482C1206, 0x84910850, 0xA112170A, 0xC187A360,
    0x24703C82, 0x87B16000, 0x8F0B8611, 0xD1E8B0CC, 0x11200822, 0xF8A9020B, 0x0A0024F1,
    0x342A3449, 0xCA0103D2, 0xFC231E98, 0xC7903918, 0x7732930D, 0x92B1149E, 0x22249125,
    0x1A251278, 0x1D0EE6D2, 0x6D141442, 0x01E3F4EA, 0x1681191F, 0x6774F9D1, 0x8940238A,
    0xE1421914, 0x220F802A, 0xC170FE91, 0xAD9203F3, 0x44749044, 0x4DAC6219, 0x00163A1E,
    0x2D5690A8, 0x7C291392, 0x63C82520, 0x7C21C688, 0x8C2E12FB, 0x85420794, 0xC0FB0C41,
    0x60C4C29B, 0x7848429B, 0xE81770F4, 0x4B280911, 0x03CBE908, 0x3F0ACF26, 0xFAF92681,
    0x88DC0254, 0x0058883A, 0x68C4731B, 0x0460478D, 0xA8F4DD70, 0x98411D4D, 0x91EDEEDA,
    0x55ADC600, 0x7194A37D, 0x1F11A359, 0xEDF6DFAE, 0x8BA78111, 0xA02FC8E3, 0x2203201C,
    0x6B161659, 0x646ADD68, 0x84EC06C7, 0x221C2F13, 0xF4FA30DE, 0x2CD61788, 0x0DF65E4C,
    0xFA23E707, 0x82D1E148, 0x2A4AB512, 0x43A08CA0, 0x6C3D4DA0, 0x6A4A9440, 0x53DFC125,
    0x9B962C13, 0x07120810, 0x0C36779B, 0xB84EDC40, 0x851BB4D9, 0x153701BD, 0x0865C34B,
    0x74380100, 0x361192C7, 0x0D805580, 0x5BC85E00, 0xA114094C, 0x80431116, 0xA90251F6,
    0x0303F48D, 0x15C04400, 0x575C1D5E, 0x45811018, 0x86911E96, 0x7CD0A7AD, 0x15B63523,
    0x40D81B12, 0x25164958, 0x1F931520, 0x924354C4, 0x0320FD04, 0xF1080D51, 0x39A66922,
    0x48674145, 0x6FA62109, 0x83E55210, 0x64A21F01, 0xBA1848E1, 0xC286D579, 0x059C4559,
    0xDAD8184B, 0xE5F63555, 0x453C09C3, 0x494B21C0, 0x5ED310A0, 0x1F60FD7D, 0x26C42D00,
    0xB41E0D5B, 0x434B27F7, 0x67A97916, 0x66542580, 0x711D5BA6, 0x7D119C02, 0xD20C51E6,
    0x0E84642D, 0x62A0E131, 0x35156544, 0x211A88C3, 0x15516681, 0x5203A108, 0x21904C41,
    0x542E8F09, 0xCE6D0FC4, 0x06A851E9, 0x536C39C9, 0xA7755275, 0xB56E056F, 0xB011581F,
    0x3C64D11A, 0x1196AA95, 0x8314C41A, 0xD0FD06A5, 0xC22E0001, 0x2F060478, 0x5FD06B74,
    0x298B9D1A, 0xA0F506BB, 0xE984B010, 0x3A7783F0, 0x92A9307C, 0x9C645A81, 0x14A03D77,
    0x16D30EC0, 0x447683F4, 0x42AA60C1, 0x55706448, 0x7AE04305, 0xF614AEE1, 0xC88C96AA,
    0x521CC45A, 0x945C5A51, 0xEB2E5401, 0x32B10AA6, 0x4FB0AA84, 0xBA2F80C5, 0x13C0383A,
    0x172540BF, 0x8F0FC353, 0x160E43C4, 0x43322089, 0xE36059B3, 0xB425EF48, 0xDB41BB60,
    0x43426414, 0x876E9614, 0x83305C44, 0xE0C25AC0, 0x8E840851, 0x2D4C43CC, 0x0F903964,
    0x708B5B05, 0xEC31B342, 0x499AC670, 0xCC5A9F9C, 0xD0F1887E, 0x927C6F66, 0xD9804304,
    0x79AEDAA1, 0x311212CC, 0xCA02C6B8, 0xA820E112, 0x10D323D4, 0x177906D3, 0xDB0943E4,
    0x12109D71, 0xF4D0C820, 0x2E3181E0, 0x09E4D0B4, 0x25B3EC6E, 0xD65488A4, 0xD6A0251E,
    0x34CE0E8B, 0x3C3F40F9, 0x46E1F2C7, 0x0394FCD4, 0x2BCD8701, 0x8C5B1FD9, 0xAF1A48F6,
    0x6FDB53BD, 0x8661E46B, 0xB09DF43C, 0x902D57DD, 0xD43DE3C3, 0x0BAF9A10, 0x49E7C125,
    0xA675F6AB, 0xD4B7BB8E, 0x1F8F05C3, 0x90D5D1A4, 0x8C64BD0B, 0x83E0EFD2, 0x20AD1BED,
    0x003BF542, 0xCE027111, 0x08C49427, 0x33C04D28, 0x810C3A41, 0x932D4CBC, 0x2D55EFE8,
    0xE883BBAC, 0x72E9AA19, 0x1EC1C4DC, 0x1766EC91, 0xC97C0893, 0x407A1F4E, 0x2A77BA10,
    0x02C5800E, 0x0FC9B360, 0x139287E0, 0x11236CE0, 0x2E0088FB, 0xD01F1367, 0x281D0006,
    0x4040C25E, 0xAC0DF602, 0x1EB3407B, 0x0412090A, 0x206FDC85, 0x108ADAEF, 0xA53A0038,
    0x067CA820, 0x2849CCA2, 0x28834270, 0x99285685, 0x7394E941, 0x2FDC1515, 0x09F2147F,
    0x9BE7FAB6, 0x802419FF, 0xDBA1CC02, 0x103FA80C, 0x4E770426, 0xDC520D41, 0xCC9439E7,
    0xE931520D, 0xD7F0E800, 0x4EE88B02, 0x40C84338, 0xA9A206F8, 0x8531A485, 0x11217A98,
    0xADA66538, 0x4103C104, 0xC5001990, 0x981B8036, 0x21287D0F, 0xE58D1E13, 0xA0B093C3,
    0x09710982, 0x96488858, 0x890711D1, 0x6F6251DE, 0x63905898, 0x1D24F13D, 0x2121E430,
    0x798994D9, 0x391F934A, 0xF07AF841, 0x20089D80, 0x4B614038, 0x9049244C, 0x46A8E41E,
    0x0C184C0A, 0xEC46902E, 0x6E848429, 0xB4D15C8C, 0x08963447, 0xF9840441, 0x704905C1,
    0x24A0A138, 0xA0BAB966, 0xAFD2B24C, 0x99111644, 0xEB4121BD, 0xB049E448, 0x942072A8,
    0x3847A4AC, 0x18224980, 0x713C9A61, 0x507A8764, 0x8004A6B2, 0xDCCB8F07, 0xAD89B44E,
    0x00449D85, 0x529EA82C, 0x964E0298, 0x2D04211C, 0x7C0EE308, 0xDE368446, 0x783F52F2,
    0xB85A1151, 0xE0A94F3D, 0x01EBF704, 0x45466C97, 0x2500AC24, 0x24E40C0E, 0x9092899D,
    0x2B2AF32D, 0xA80F9FB8, 0x79183633, 0x6AC529F3, 0x09B135DF, 0xA7227980, 0x401931A3,
    0x8487CC0D, 0x06E581C2, 0xD3C1FB8F, 0x68825276, 0x0A598EDE, 0x4CE615B8, 0x75FD9160,
    0x90350248, 0xB8AB1C1E, 0x0F5A7EC3, 0x1775438E, 0x02805E93, 0x36A409D0, 0xC8E9E000,
    0x9380206A, 0x407C2040, 0xCC855B10, 0x628B4887, 0xE1B68254, 0xF590EBA4, 0x86E881D1,
    0x08B52245, 0xA199A558, 0x8FD36C04, 0xF5694157, 0x2A4DF608, 0x08598426, 0xD2105E90,
    0xD2AD2217, 0xEC770320, 0x48592ECB, 0x46267ED4, 0x235B338E, 0x02D09043, 0x6F753015,
    0x1162A53B, 0x93805076, 0xAB4B001C, 0xB40749E3, 0x5CA7BF4A, 0x755E2C94, 0x52195A4D,
    0x601C2084, 0xCA4D6363, 0x91FACE52, 0xA4D68AD0, 0x56E1B128, 0x5B51EADC, 0x322E8C06,
    0x3CAC0011, 0x7C944635, 0xD03E7C20, 0x040D5B16, 0x878C9A02, 0xEC1B4621, 0x0436892D,
    0x564D21E9, 0x5301582C, 0xD611E06F, 0xA507EBC2, 0x2EFD893D, 0x680F13BB, 0xE48B9996,
    0xB4D96415, 0x6734B131, 0x6EA5AA46, 0xDE608515, 0x384B88DE, 0x08CA7CEC, 0x1F104A8E,
    0xE64697AC, 0x8AFA4A0B, 0x981EBA03, 0x12305C28, 0xA39AE2CA, 0x1722DA11, 0xE34BD853,
    0x0329E90A, 0x270FDC19, 0x692C85D3, 0x085D9251, 0x98993232, 0x1453EADC, 0x0AF06149,
    0xB5E3BAC7, 0xE0560F65, 0x953ED554, 0x2C9AA88A, 0xCAF02085, 0xAA60F243, 0xF8AD3957,
    0xA05ED6E2, 0xD8870128, 0x28E9EA65, 0x49142FD8, 0x490C9FEF, 0x9C0B39A3, 0x340A381E,
    0x81CA2481, 0xDFC7AA0E, 0x598E7307, 0x55DFB82C, 0x97514289, 0x1A29D66D, 0x7B8551BE,
    0xDD53D503, 0x93164260, 0x403C5914, 0xB96C8F62, 0x10CD5225, 0x354C2E0A, 0x2C9790B0,
    0x11918632, 0x27928406, 0x16784523, 0x78E941A1, 0x5E0D0070, 0xD3DAB8C8, 0xA225909E,
    0x94401FA9, 0x5544AF24, 0x5FDCEB92, 0x2B97A000, 0x47AEB840, 0xEA83300C, 0x53279945,
    0x0A55DF9E, 0xA6ED6930, 0xDD0DA169, 0x288A0918, 0x748F31E6, 0x90F82AA1, 0xC42390FC,
    0x05C008A7, 0x4E81F3D5, 0xAD017277, 0x1EC460F2, 0x4CA29051, 0xD5972D73, 0x4184BE20,
    0x13091C6C, 0x27A340E4, 0xEC068431, 0x84008B2B, 0xD16F041F, 0x38E80E8D, 0xE500A001,
    0x32AB0D0D, 0x9FA635D9, 0x8E168102, 0x3524432F, 0x85917E5E, 0x895B6E00, 0x0856DFD4,
    0xEA943331, 0x2AEAA591, 0xEC60780A, 0x16932DCA, 0xF06619E4, 0x2CAE888E, 0x71596D82,
    0x6DB403C0, 0xED0ACFEE, 0x7B134017, 0xB6510820, 0x840293C0, 0xD120EB43, 0x99745A01,
    0x1CAC18AB, 0x952077CA, 0x4FBAC9DE, 0x3CA2E555, 0xA6DE98F4, 0x7591BA62, 0x010384D3,
    0xC006A404, 0x9439860A, 0x673BED0C, 0x9F8A7D09, 0x9E021632, 0x14A2B100, 0x12F322CF,
    0x4142CA60, 0x0DB40360, 0x39F0426A, 0x20F54BEC, 0xCF4F0408, 0x709081C1, 0xC8FC2C1D,
    0x74999F0E, 0x2E9DEB1F, 0x1098C49F, 0x5BC64A23, 0x58A6E8B2, 0x75124E3D, 0x19860A4D,
    0xA02961EE, 0xF933E2E2, 0xDB1AF798, 0x60E6FBB1, 0x9F60624C, 0x958418C2, 0x31882FC7,
    0x59165F59, 0x05C39293, 0x981A0225, 0x2218BD21, 0x0EC67E50, 0x4FF81408, 0x709D8D0A,
    0x08F2BDF1, 0x61D6E032, 0x266A5EA2, 0xB623EA31, 0xB7BE784A, 0x3DBF9DE6, 0x1A669005,
    0xB079A664, 0x2C6EFC62, 0xC2046101, 0x808CC7CC, 0x3898DAFF, 0xE81C4759, 0xE5EE3277,
    0x2D251EB5, 0xB04C72E7, 0x341D9718, 0x65342EA0, 0x60321248, 0x98FF6435, 0xEA478430,
    0x7C705E10, 0xC8A624C3, 0x742C54AF, 0x0058E30F, 0x7FE54094, 0x9841AC34, 0x9FB713C7,
    0xD14DDE52, 0xE8B7CE21, 0xB0DFD59A, 0x2BCC2DF4, 0xE34B61A9, 0x0166DBDA, 0x58130F4D,
    0x395BE010, 0x4770FB5F, 0x2647FCA8, 0x7C1F3A00, 0x039C345A, 0x1919E2E3, 0x4086111B,
    0x1C570805, 0x9B09F2C1, 0xDD1F38A6, 0x300A40B4, 0x1DA9BB55, 0x001DB069, 0x0C6E5AE0,
    0xC49DF881, 0xEC4C25ED, 0xB92D9DDD, 0xC9F567CF, 0xFB01257D, 0xD1FC887D, 0x57DDFA5E,
    0x048864E2, 0xC607608C, 0x461D5DC4, 0xF6C0100D, 0x68120E1D, 0xC0A04A0B, 0xB39A7DAB,
    0x5C100874, 0xE00E0300, 0x904BB09F, 0xF09153E0, 0x17152E40, 0x09C0B8DD, 0x8C94A040,
    0x9FB0505E, 0x0D048DEE, 0xF494C4F1, 0xCDB20BD1, 0x850041CF, 0xE08918CC, 0x0F49B8A0,
    0x59DF7810, 0x80722179, 0xD5D0B361, 0x01C58081, 0x61E70734, 0x120E0D9C, 0x458764F0,
    0xEC7220F4, 0x53E00480, 0x59210982, 0x16024BB4, 0xD71D0BC6, 0x4B5B0061, 0x6D8040E4,
    0x5FA9DC10, 0x101FB0A1, 0xD40D861E, 0x005047D7, 0x55C695DF, 0x69460068, 0xE1986F8D,
    0xEF4104AF, 0x391A0C59, 0xD489B462, 0x788778E6, 0xFC054851, 0xCB4042DE, 0x9D52C855,
    0x144ECF0D, 0xE1600E80, 0x040EA8BF, 0x8E1D8C15, 0x19161E0C, 0xC152FCF5, 0x08CFC631,
    0x80D90C1B, 0x28D65DD2, 0x88110552, 0xD06E1CDF, 0xFF84EDA7, 0xEE064B3D, 0x08DE3244,
    0x0346F626, 0xAC119E8C, 0xC0BCC599, 0x98E2B97E, 0x6077A355, 0x23347123, 0x535B5866,
    0x5A2B4DE0, 0xDF011761, 0x8DE2D120, 0x9E2DD6EC, 0xE1EA1E0A, 0x2F4A2A2E, 0xC50ACBCA,
    0x4501808B, 0x5F50C810, 0x6C698104, 0xD8B9AD00, 0xAB634447, 0xBC4ED6EC, 0xE270BC23,
    0x041E2055, 0xA89A6419, 0xC0C0DAD9, 0x6A9D6D7E, 0x6644008D, 0x0EDE3888, 0x55E17011,
    0xF1A28C9C, 0x22C9FC84, 0x4163B04A, 0x557861D6, 0x4AE5B1C0, 0xB31408F7, 0x2620E3D5,
    0x1E051A44, 0x3C009850, 0x959DCFBD, 0x8459C6CE, 0xEF45914B, 0xD80684EC, 0x053C5B5F,
    0x4C48DDB5, 0x1E06C711, 0x89BA4E52, 0xC9D6340B, 0x2537251D, 0x64206BA5, 0xCAC10D15,
    0x81746474, 0x0469CEE4, 0x4BE48E25, 0x0D6423B9, 0x58200681, 0x0FD3E0F7, 0xBD5121FC,
    0x90F1F610, 0x500DFA00, 0x399780C5, 0x84798625, 0x06D65800, 0xD84C5FE1, 0xA4F54A80,
    0x8DE5D053, 0xBC6F65E8, 0xCDAE53DE, 0x0EC61D3D, 0x0159DAD8, 0x8864CBE6, 0x24253E54,
    0xCA55CB5A, 0xE3AA565E, 0xC154BE2C, 0x58722464, 0xC6E5F0C0, 0xF192D5FB, 0x25B12015,
    0x9C018118, 0x0C4090F1, 0x196ED5C4, 0x14122C40, 0x635BFD6F, 0x2E3A447A, 0x853D2A04,
    0xA899F001, 0x386DA390, 0x232C11E5, 0x44595CB2, 0x96535420, 0xC711E48E, 0x6B44BA62,
    0xCA63DB5E, 0xD6C64844, 0x1D043D20, 0xF87E9EFA, 0x4469E01D, 0x81044A5A, 0x2CBA5B11,
    0x10C1F197, 0x0FDE2C0D, 0xE04580BC, 0x90F88187, 0x7D1D9808, 0x9D194511, 0x85164392,
    0x7159D5AF, 0xDC008536, 0xC1212600, 0x02085233, 0x64B7A6D0, 0xE0DA4461, 0x70C851A8,
    0x785804BE, 0xE7045C64, 0x20E7C495, 0x7D460085, 0x224C04DA, 0xCFC07004, 0x98940E39,
    0x89051BA5, 0xCB8901B2, 0xFC0880E4, 0xC00128DB, 0xACDDF006, 0xA50CD6F0, 0x114641D6,
    0x53A55455, 0xB8A2A78C, 0x404847D6, 0x6BA7E15B, 0x7CD0DC74, 0xC029255D, 0x87E0726B,
    0xDA7B67F4, 0x1FD671DE, 0x71120C93, 0x4C0C0805, 0x679C01C8, 0x1D803CA1, 0xFDF14A75,
    0xD8167549, 0x211A0275, 0xFC0E5156, 0x49C91654, 0x0D86626A, 0xD60C6618, 0x99780BD9,
    0x371A344C, 0x519B5379, 0x959810E1, 0x7EA29C6D, 0x4E7F2084, 0x28B135A7, 0x50662CB2,
    0xD84F29A8, 0xE4485828, 0x9320D647, 0x7E8A5FD0, 0x1F71F6A0, 0x08007D3D, 0x100EDD98,
    0x0105D0A2, 0xD10F5A84, 0x252D2754, 0x9F180816, 0x00C00188, 0x04E228CC, 0x1E9CE6A5,
    0xC444EDDA, 0xFE8DC429, 0xD9D4D306, 0xDF270AA2, 0xB9964119, 0x86E5DE09, 0x65998DDE,
    0x98128432, 0xE9C055E9, 0x80639855, 0x628EA370, 0x4FAA7786, 0xBED169C5, 0x200E8E94,
    0x8AE64EC0, 0x0F861674, 0x2D7229F8, 0xC6127609, 0x0E0C8E1E, 0xE55E00B4, 0xDDF00817,
    0x245AC411, 0x91FA0F86, 0xD4A80D12, 0xC8C53DA9, 0xDA190C65, 0x4A78CDC6, 0x058C6E95,
    0x900F1530, 0x662D6AA8, 0x27410811, 0x016427F2, 0xA2AC8E41, 0xB6EAB992, 0xE4E9CE94,
    0x80EE9A10, 0x9E845A3F, 0xE4BF8722, 0x4F75042A, 0x678F2EB0, 0x14D212DE, 0xCA9DD020,
    0x67A6940C, 0x740A8820, 0xE368B32A, 0xBA40E461, 0xC57044CA, 0xDECA0956, 0x6F9DD1F9,
    0xF8ACA908, 0x250C9CE5, 0x98EB4C7D, 0xBE0D8071, 0x5642299C, 0x53E47011, 0xBD9D61B4,
    0x1CD44CA1, 0x8B84C595, 0x64D88EC6, 0xCB00F980, 0x4B1501B4, 0x080F6754, 0x10A5D1C1,
    0x60461A68, 0x2685D719, 0x09485C9C, 0x3881148C, 0xC000449D, 0x9F4D8340, 0xC423784C,
    0x5804C55E, 0x46FAA4D5, 0xA426C264, 0x7A410B0E, 0x159E7A4B, 0xC609325E, 0xC2A946F6,
    0xDECA8C26, 0xA7C5C8E3, 0x265C047E, 0x8F4803E5, 0x2690E00F, 0x74080F1A, 0x079612AB,
    0xBC40FDA0, 0xD4D113F6, 0x49310BAD, 0x8F40B80B, 0xEA401DA1, 0xDE5DFB07, 0xBD0512C9,
    0x62989875, 0x00D9531D, 0x0087120D, 0x44C8EC58, 0x2730B0ED, 0x89251504, 0x545AEA39,
    0xA9906FAD, 0xF85FC633, 0x644ECB54, 0xE380CBAB, 0xBA26F047, 0xB4B86614, 0x40400815,
    0xD06CF6DD, 0xF8104619, 0x17290A2A, 0xAFEB0DC1, 0x000A4108, 0x6CA8C449, 0x06011487,
    0x756D1314, 0x2290E91B, 0x5C660C58, 0x706F6D28, 0x01117DC0, 0x0105128A, 0x70E0E7D8,
    0x2E39892C, 0x87C59A6C, 0xCC81A8A8, 0x1F9E7227, 0x02C47E05, 0x1C0FCE70, 0xA63CA36E,
    0x876B4400, 0xD6C1002D, 0xEBEC4B19, 0xD0AEC0F2, 0x0461AEC8, 0xC0DC4B6C, 0x4C4A2A03,
    0xAE358979, 0x2C6847DA, 0x4F20610F, 0x6077AFD8, 0x56544F2E, 0x46D838F5, 0x98C6D23D,
    0x2F2C61E8, 0xCC539471, 0xA84F29BA, 0x61ADE8D8, 0xC523F5DC, 0x1E1416BE, 0x847E7EC1,
    0xE2D7440C, 0x28B61342, 0x23F6C280, 0xC061184B, 0x0ECE010C, 0xD8240F16, 0x779F3309,
    0xE1E2C094, 0x00857E4F, 0x6BD6295D, 0xC4E0ED5D, 0x22A2332A, 0x43AAA1BA, 0x45C24111,
    0xC09C8650, 0xA4168CE1, 0x6F020B0D, 0xCC5AA5D0, 0x9B8D96DF, 0x52489CE8, 0x0D0D5FEB,
    0xC3C49EE4, 0x88CC1FAE, 0x8069DA21, 0x0380B20A, 0x26A1D408, 0x8104D1E1, 0xCDD3F479,
    0x1D68C116, 0x46CA4C9D, 0x5F59D00C, 0x156940E8, 0x8DD266C0, 0x51311D44, 0xA99A4512,
    0x6D8411C5, 0x03A9E1EE, 0xF80184A3, 0x2B3129D8, 0x6AA97CB2, 0x79892880, 0x89BB01B0,
    0x9F687653, 0x16481B90, 0xA0C204D0, 0x001EA555, 0x36216D4C, 0x046B0B00, 0x110F8AFB,
    0xF10A1D18, 0x41128480, 0x9350BA92, 0x1D2F8A6E, 0xAB28CDAB, 0xF9EA3280, 0x5A0BC806,
    0x6BB011EE, 0x06E66451, 0xDD7B2C91, 0x4C6D8D57, 0x5C694001, 0x918A00D4, 0x6B8EA558,
    0xBD453712, 0xCAF61626, 0x97EC0844, 0x4C64080B, 0xE4779CA4, 0x447EE2C0, 0x0F5C25D9,
    0xCC45A964, 0xC04608C0, 0x17E9F807, 0xEEBF4427, 0x728ACDC0, 0x0FCCCECE, 0x1EB8CDB8,
    0x0DD091DF, 0xCCE5F00B, 0x1528C0F8, 0x442B2580, 0x0284A13D, 0xB1139810, 0x4DD2888D,
    0x0D84F2D7, 0xDA34D7CF, 0x614004C6, 0x34CC6CB6, 0x39C9EB5B, 0x26E929F3, 0x429FD9CB,
    0xF3210537, 0x06BF2190, 0xBFD3755D, 0xF1CE13BC, 0x70E805C6, 0x0540A8D7, 0x653EA014,
    0x7394910F, 0x0F61FF27, 0x0B398100, 0x9C1B37C1, 0x0800E0A7, 0x696EE4B0, 0xD5D536C0,
    0x4B1B7144, 0x734694C9, 0x85172D85, 0x5F643003, 0x9F314866, 0xCC6DAD4A, 0xF6CAE609,
    0x46315256, 0xA6209CF2, 0x354536E8, 0x20FF4FE1, 0xEC345532, 0x6F71D047, 0x52FF869A,
    0xC0C052C5, 0x0AC5012C, 0x880F07A3, 0x810410F4, 0x8000F40F, 0x07599C34, 0x80F80F0C,
    0x1C719B49, 0x370BC4D5, 0x00951991, 0x28D06EBE, 0xB40EC00D, 0x000B4355, 0x9D89FD83,
    0xDE2C04A2, 0x053F4517, 0x0F2BC409, 0xD9EDB1F4, 0x4070C6DD, 0x0A4B7CF8, 0xF751481A,
    0x9AAAEE86, 0x7946706B, 0xC40304F1, 0x0A1CCE71, 0x0B406C4A, 0x4CA914C1, 0x403C0922,
    0x62AED275, 0x174991BC, 0x4108108D, 0x6B010010, 0x00108107, 0x010F5B06, 0x1A659810,
    0xB409656B, 0xC0FD8100, 0xE7107DA7, 0x7E86410C, 0x54E00584, 0xD2EBBC5C, 0xFC12136E,
    0xC0945133, 0xEFAF81F9, 0x6446F660, 0x17EF22AD, 0xD316AACA, 0xE810C876, 0xE4586BB1,
    0x0486BA37, 0xBCBBA490, 0xF3C44C97, 0x47EC805A, 0xD4BBB5CC, 0xC05175C0, 0x02968D36,
    0x894080CC, 0x4BB36966, 0x6B80FC0F, 0x85B0010F, 0xF58C1035, 0x1E049338, 0x140A00C7,
    0x44540FA0, 0x00305F3D, 0xD49FF56B, 0x87444CB4, 0x51305481, 0xB8805CC4, 0xA7808525,
    0xAB0DAE72, 0xAB710CCE, 0x2E871DD6, 0x723754B2, 0xB053752C, 0x3790B7B3, 0x4B6F484A,
    0x7F2FC0E8, 0x0831A6C4, 0x0EC01482, 0xF809A0A8, 0x11D2AF1B, 0x8D1398E4, 0xD4D05D0F,
    0x00FCC8F6, 0x85F4F006, 0xFDD85AC4, 0xCEA50F97, 0x4EE154E3, 0x600E400C, 0x2285B292,
    0xB3803C4F, 0x246BB832, 0x76185E2B, 0x88002051, 0x000F4417, 0xF6453630, 0x87EFE0C8,
    0xDA54EDB4, 0xEFE85166, 0x47F740C0, 0xA9DF0074, 0x805849E2, 0xF500F5D9, 0xE8E71896,
    0x1BE2F38A, 0x4BB27855, 0x4E358942, 0x51A40E06, 0x6940E00F, 0x788F0049, 0x80032C8A,
    0x0F96D00A, 0x566180CC, 0xF74F44DD, 0x0FD1872C, 0xC0711DC0, 0x4C5AB6F2, 0x948AB6CB,
    0x04E974FB, 0xA228713A, 0x34363E56, 0xCB9B539E, 0x929EE684, 0x8F447FA3, 0x26E2F70E,
    0x529F2400, 0xEC006C0A, 0xECA6F47E, 0xB3857237, 0x06C11070, 0xFA1180D0, 0x00046B40,
    0x111DF00E, 0x7B3D31E4, 0x049F14F1, 0x55E99736, 0x3DE40004, 0x800C865C, 0xC5A6C778,
    0x5687C050, 0xF65C713A, 0xB88C29E8, 0x4656BAA5, 0x4E044F2C, 0x0184F1F8, 0x9DCDB8B4,
    0xB14B0844, 0x55342047, 0x54048114, 0xC5024BF8, 0x41B9D718, 0xCB2940F8, 0x77FC0933,
    0xC1410461, 0xD48C3108, 0x06404C4D, 0x02E71601, 0xF8C8FB58, 0x6E0853E7, 0x94086680,
    0x0E1A077B, 0xD77C8FCB, 0x69384998, 0xBC6DB31C, 0x56C92600, 0xE65D9882, 0x6F9684ED,
    0x44F56DA2, 0x0B80F90B, 0xF8031538, 0x00CCCE7B, 0x0F5A0326, 0xB328BBBC, 0xB6904DFB,
    0x6300A0AC, 0x037A2201, 0x73E403C0, 0xAE26D8D2, 0xBBA7155A, 0x8582D739, 0x469F9C08,
    0x1E970711, 0xF3F30281, 0x36372139, 0x605E05D9, 0x189AB637, 0xA4C55DD5, 0x7CB83BB7,
    0x32E536D3, 0x1069FB3D, 0xF00A2890, 0xC074127A, 0xC522FA85, 0x890A34A4, 0x00B3BDF4,
    0xC2CAE7BA, 0xC40FC014, 0xC4C4A1B4, 0x0E861FD6, 0x5F1FCFF4, 0x85174E70, 0x6FCBBB77,
    0xF40186F7, 0x40EA3580, 0x024B0F34, 0xEC96B988, 0x3B0D2573, 0x01796066, 0x15474663,
    0x8CCFC240, 0x1544EEE9, 0x23A193D3, 0xEC73C6CA, 0xD265AC01, 0xBFA0C034, 0xF5739FEF,
    0x0F8916A0, 0x18A9FAB8, 0x3B840A41, 0x0B1EA560, 0xF011FAF0, 0x894BDEC0, 0xE507D38D,
    0xED3A84C6, 0x227C55D8, 0xEFB99059, 0x4BB6208C, 0x00F6BC4C, 0xE58ECF0F, 0x14B0FB32,
    0x053D587C, 0xA44CCEF1, 0x275FC4CB, 0x18C04C51, 0x08C8B0CD, 0xD0123AF0, 0x7DF80340,
    0xA6FC9A6F, 0xE07A7D78, 0x48C2AF4A, 0x094100D7, 0xD0593E88, 0xC08A0D00, 0xC1CE234D,
    0xD809845B, 0x00DB7633, 0x53B25287, 0xD89FD08C, 0x1A5C6DA5, 0xC5BD3D3D, 0x0FBB743C,
    0xDFB8B0F3, 0xD1011DE8, 0x00028853, 0x11104032, 0x11889038, 0x2610000D, 0x2130B854,
    0x203B1F8C, 0xC3F89446, 0x2485C303, 0x48D41094, 0x8B0988E4, 0x90F07002, 0x10077238,
    0xFC09088F, 0x6351B230, 0x86141192, 0x83B99490, 0x049610C7, 0xF211108B, 0x9F4CE443,
    0xB0FC793F, 0x12235379, 0xF862271B, 0x07B119F8, 0x2000030D, 0x9449C908, 0x0C008CE3,
    0xF9FD2823, 0x854585E3, 0x35509013, 0x578083F2, 0xFAB408AF, 0x6CC0A204, 0xC23385DB,
    0xE3E234DE, 0x16BB5BAA, 0x39E8DC0D, 0xBB824813, 0x0003017F, 0x1166F711, 0xF7038106,
    0xC9137958, 0x1C00C40C, 0x2409F8F4, 0x4307DB84, 0x923CB2A6, 0x0E458043, 0x58F68040,
    0x12435090, 0x588B02AA, 0x297A0110, 0x4E411E44, 0xC41226A3, 0x3ED6E487, 0x3D890A83,
    0x1891C8B0, 0x7EDF6A29, 0x8440014D, 0x1A898B22, 0x21807209, 0xD5B61981, 0xE37B703E,
    0x2D245508, 0x2B485710, 0xB28C8793, 0x4046158F, 0x0E48D2CE, 0xB01377F0, 0xC483F99E,
    0x4709F779, 0x848A2698, 0x3EB37BED, 0xF18D17C6, 0x1D108158, 0x61787B3E, 0xC876B700,
    0x18E225AF, 0xC9A1E082, 0x06885052, 0x022AE4C2, 0xBC161382, 0x64DD87ED, 0x1F882213,
    0x2F61E07A, 0xCFFC401D, 0xF87A1E35, 0x32DD0821, 0x162C6D8B, 0x2970A856, 0x00C8801E,
    0xA87A0380, 0x0EE3AA8E, 0x21038862, 0x05620296, 0x22282EB7, 0x8B8E8D45, 0x7E873100,
    0xFB3DA20A, 0x092AA34A, 0x6AF3ED19, 0x1264E803, 0xC12884A2, 0x1B066013, 0x4061ABC9,
    0x811A192C, 0xAAC68DCB, 0x5C01300F, 0xBEA492A0, 0xBE40E2DC, 0x4AF37C9B, 0xD248ED85,
    0x120687E1, 0x21888072, 0x0281F4C9, 0xA9FCE81C, 0xD430DD07, 0x830D0868, 0x20080208,
    0xA8713D12, 0xA21B7942, 0x50761407, 0x2A1EB713, 0x19004000, 0x0929BC20, 0x61D2F017,
    0xC07AEE2F, 0xA8012CD3, 0xC0BF6EB3, 0x3709A01A, 0xAF7D4C1D, 0x8272A240, 0x90864C00,
    0x1D07899C, 0xB015BD6C, 0xC8DCC604, 0xAA175F25, 0x94964DE0, 0x11B1E0B0, 0x03741082,
    0x75A330CB, 0x522C0708, 0x7E91D020, 0x0E213500, 0x866CD53A, 0xB1706C05, 0xC520A135,
    0xF8D44849, 0x21A7342C, 0x52C1B062, 0x40987B00, 0x858E19D3, 0x14EF8713, 0x6B85A00A,
    0x2DC14227, 0xE8D5BA0D, 0xF3034C88, 0x70DC59A0, 0xA901D288, 0x588C73E6, 0xE1880684,
    0x7BCCD75D, 0xD205AEF8, 0x2589281D, 0xDEA0A62D, 0x2C0C72A2, 0xFA218983, 0x1EB6D561,
    0x8E094AA4, 0x2970A217, 0x284C8C1F, 0x9A5B8086, 0xC4198121, 0x7288117D, 0x88AD3E79,
    0xF0E86566, 0x943A8836, 0x3E1B0097, 0x7908F326, 0xE720BA19, 0xEC3C3C91, 0x15821CD4,
    0x012F86F8, 0x0C492BD3, 0x23212CA2, 0xB2B88EA2, 0xD4011E63, 0x54B762D6, 0x20B79AA8,
    0x0698B562, 0x0F2A05B5, 0xBB7090BC, 0x2AB6AFC1, 0x1FB51B80, 0x83086398, 0xAA6A25A7,
    0x08108480, 0x9481EF42, 0xF5062A70, 0x07A1D36E, 0x59EDA220, 0x508482F2, 0x7AD6D46A,
    0x1D4675E0, 0x08B22692, 0xA0421728, 0x6DFD1ED2, 0x07CE836B, 0xC0D9E23A, 0xC47C0036,
    0xC1A4B3B6, 0xB88E8240, 0x93D6E1FB, 0xB6ECFA64, 0x87CE4D38, 0x2B8211DD, 0xABC01EB9,
    0x841D6481, 0x032CD040, 0x2058C87C, 0x2AF04E24, 0x1082A5A9, 0x220B211B, 0x03866EB7,
    0x687C605C, 0x7C9D1F18, 0x208373B7, 0x701F27D9, 0x1E8133C0, 0x8948D668, 0xC1722D06,
    0x7877A275, 0x14022CCA, 0xC062AB13, 0x5F817002, 0x23F07C88, 0x70E034FB, 0x5D418047,
    0x9F2AE61E, 0xC0774104, 0x8002C863, 0x6023BCE0, 0xD0267807, 0x1084115B, 0x8054C0B3,
    0x01E9336C, 0x1F12DAFC, 0x0100FCB1, 0xF7808916, 0x85277264, 0x04750084, 0x5801CA31,
    0x0D110400, 0x803E222D, 0x2568F88D, 0xE10021A4, 0xC1FB8D72, 0x80A84A0D, 0x85CFB41F,
    0x430CE833, 0x92428036, 0x6E0240F8, 0x2E75A111, 0xCC059880, 0x903F076F, 0x405C7BDA,
    0x6D9D8DC4, 0x61E83600, 0x40E8290D, 0x6BE0588B, 0xD9DE529E, 0x223CE012, 0xAD31ECAC,
    0x10C522FA, 0x440315E8, 0x902249D0, 0x307B1513, 0xE421FB03, 0x5D4C2D05, 0x0290140E,
    0x35B1BC21, 0xF8420941, 0x0D1397C4, 0x34866649, 0x01100D7C, 0x1C1F80D0, 0xC848206E,
    0x6218E0C1, 0xB2101F01, 0x0B340264, 0xB6061802, 0x05863C1B, 0x0D81EBF3, 0x019E75F0,
    0x42568D50, 0x40ADDD80, 0xFC88C4A0, 0xF4620600, 0x73AC988A, 0x00218B46, 0x630B0291,
    0x3F305E60, 0x0525D88A, 0x10022C44, 0x0490A8F6, 0x3B9380E4, 0x14080208, 0xC5948022,
    0x704008E6, 0xF0720780, 0x4E3CE13F, 0x973A2808, 0x287204CF, 0x9180F420, 0x0F5A8434,
    0x00805046, 0xB3086080, 0xA8105323, 0x6A2E90C5, 0x74D62693, 0x89280B8B, 0xC6018204,
    0x89FA1E01, 0x1EE6420F, 0x776FE963, 0xAF653026, 0xFC10B96C, 0x7106CD80, 0x8809DB3C,
    0x80C7BB58, 0x283F9B40, 0xA4F45B5D, 0xA579E846, 0x22AC5403, 0x00A21407, 0x20525020,
    0x04421847, 0x8383700E, 0x3E83D399, 0x180FC1F0, 0xCA994DD5, 0x11B55154, 0xE8534B1A,
    0x4A71A303, 0x0223A98D, 0x80421542, 0x2DCD6D5C, 0x46823816, 0x1218F065, 0x586292C8,
    0x94E1C192, 0xA587BAB0, 0xB03F2967, 0xC211425D, 0xA112773C, 0x88C4B631, 0x2BFAA458,
    0x2ED55A2A, 0x9EE2202F, 0x1B916346, 0x3E0793D0, 0x84541330, 0x1882D240, 0x080B0501,
    0x9A707041, 0x2802BD57, 0x4D182608, 0xC7E07204, 0xA80109D4, 0x4AC1610A, 0x2382F7CF,
    0x0B00857A, 0x031361CD, 0x4E660043, 0x59EF24E6, 0xD3C92840, 0xAAFAAB83, 0x41F3E601,
    0x42BAB0F4, 0x96C41A22, 0xF382080C, 0x1598FABA, 0x2307D368, 0xB6030BB0, 0x5A5ABCFA,
    0x040A01C4, 0xD2145390, 0x2861C300, 0xC09B7609, 0x57B9C60D, 0x0835EEE1, 0x00290034,
    0xD8847048, 0x5E6D90BA, 0x2B3D00D1, 0x7A2B83D5, 0xFCF90505, 0xC03E5FE5, 0x60E89A54,
    0x2279E7BA, 0xB0F64E63, 0x082FCC16, 0x426D0DAE, 0x8942D048, 0x707F32DA, 0xB12A41CA,
    0xD01F5DAB, 0x69666B00, 0xA08D1F81, 0x40948B2C, 0xC20110BB, 0x80F2136C, 0xA8E86291,
    0x9D8115AE, 0xE1609B86, 0x83B3E0FC, 0x3151EC03, 0x741F0484, 0x6BAD2137, 0xC9748926,
    0x537C0A10, 0x2B48422E, 0x5B600E60, 0x6CC0F899, 0x0F0029EE, 0xC28478D4, 0x41006ADE,
    0x920E4DC3, 0xD003D589, 0x803A2E51, 0x403EEEEF, 0x863D64C4, 0x89F2A200, 0x4FB0860E,
    0x4F6034B3, 0x0EC23954, 0x0290B930, 0x3E35AE38, 0x1642C0F8, 0x150C3EC0, 0x70350901,
    0x0A0C0100, 0xD5EB055D, 0x4C3827A5, 0xE5405401, 0x07612142, 0x07C84D9B, 0x674CD082,
    0x072DC0AA, 0x9269E498, 0x94C44D00, 0x80418A80, 0x70387BEC, 0x20F42338, 0xC0AAC4C9,
    0x92391A10, 0x21379CA6, 0x16ED880B, 0x23464A13, 0x2530327B, 0x180F66D0, 0xF813166D,
    0x5D170931, 0x1CD56D48, 0x442A3B04, 0x1DA56774, 0x00505411, 0x07F6AC07, 0x5EF2DE81,
    0x78830C19, 0x4907807A, 0x924129E8, 0x271883A0, 0xFC1D03A4, 0xEB160C27, 0xF59C1615,
    0xF5C83608, 0x5899FCC5, 0x9A678287, 0xC5AF329E, 0x20BE6054, 0x69B43908, 0x64077233,
    0xCEAD83CC, 0xF0143C05, 0xCC56A5CF, 0x61040510, 0xF3B845B9, 0x6B604042, 0x7429589F,
    0xAC34F038, 0x02022087, 0x40052024, 0xF3A9F060, 0xFC1FB8EA, 0x0AB60560, 0x807405C0,
    0xA4E2E584, 0x88567DB7, 0xA82A6E05, 0x215B641F, 0x90A4A019, 0x13176C32, 0xCC07D7F4,
    0x6E788F06, 0x4DDDE1E4, 0x21D24016, 0x27840034, 0x7684BA17, 0xCF056066, 0x6962D4F4,
    0xD78084B3, 0x42AFA838, 0x4D1AD65C, 0x3300642F, 0x90F8E328, 0x100D83F0, 0x802600C0,
    0x07CD38C1, 0x489088EF, 0x41203308, 0x0112AE02, 0x2075C8B8, 0x0AC23846, 0x06108C6E,
    0x3C45F930, 0x1845B6F8, 0x5CC65980, 0x970162F7, 0xD4B08049, 0xF8028882, 0x26101E61,
    0x80FB43D7, 0x7F65CB22, 0x51388509, 0xC0C20092, 0x3C8A8090, 0x0A5BA128, 0xBCA25ED0,
    0xBCE48E4F, 0x9B8E100D, 0x40C40110, 0xF7E6AF09, 0x80D398A4, 0x72A0D817, 0x88F9D6C1,
    0x1583786C, 0x032CA04C, 0x8E0D80A8, 0x3AC1F440, 0xCD80213C, 0x50844439, 0x2004B691,
    0xC1E360E3, 0x0292EFC9, 0xE9E1022A, 0x468FE9E0, 0x94AC481B, 0x2C07C4CF, 0x5A05ED0B,
    0x82F3A4F8, 0x0F6FA7B2, 0xFE72020C, 0xE5B76383, 0x42370702, 0x00D22D14, 0x07A8BDBA,
    0x08FBD79A, 0x232E5AE2, 0x3008A120, 0x2A008E20, 0xEC9A0240, 0xCA26E744, 0x704C0EC1,
    0x0025FB01, 0x82403C05, 0x45692BE4, 0x03C004AF, 0x0AD1ED78, 0x1590BD86, 0x5C2E5CBC,
    0x4D248C43, 0x581F112D, 0x50274A25, 0xB6CF28EF, 0x39991EED, 0x6AD836A1, 0xFECD08AD,
    0x02F8CC8C, 0xABB40463, 0xF6C07207, 0xCE0562DA, 0x2DFC2E6A, 0xD0002E21, 0x4C07A90A,
    0xC018E4E0, 0x258B0407, 0x4E07EDF4, 0x401E9E20, 0x43AA9604, 0xE2278DE6, 0x2440246F,
    0xADADE628, 0x44048078, 0xA00876C0, 0xCA805C03, 0x7A236DF6, 0x50140623, 0xBC600621,
    0x2A8AACD4, 0x80342CCB, 0xEA8092A4, 0x7ABC62EE, 0xE3CEA024, 0x3ACB4E00, 0x36589008,
    0xE05CB580, 0x004A12D7, 0x93034B1C, 0xC030D08A, 0x61CB5008, 0x389FA310, 0x03D0BCA9,
    0x090B9608, 0x110A0068, 0x4DC404C2, 0xDFC0662D, 0x9406A012, 0x208A67AB, 0x028F5A23,
    0x0600C29E, 0x40580280, 0x06C04E05, 0xE6514086, 0x10FCA5CD, 0x086518A6, 0x5604E06E,
    0x802405E0, 0x0205F000, 0x86068030, 0xA768FC08, 0xC94AC208, 0xFEB10068, 0x4FD20589,
    0xEC602A21, 0x400726C0, 0xE2B22ECF, 0x4A2BE865, 0x78B46046, 0x656F01E0, 0x328264A8,
    0x72000E2E, 0x5156D16C, 0x425068EE, 0x489B4E3E, 0xE2BD06E4, 0x590FD803, 0x4222CCE4,
    0x0222BFA0, 0x6FA06A08, 0x32002212, 0x70DCCC40, 0x07C094F9, 0x1E05406C, 0x44BE01A0,
    0x01801AD4, 0x171A51A4, 0xA0191A60, 0x01E01A01, 0x1A013014, 0xC06602A0, 0x08C8D606,
    0x963C9066, 0x6ADE05E0, 0x06800C21, 0x7880117C, 0x6D38FF80, 0x08A46EC0, 0x0A2EEF52,
    0xC47A39E0, 0x0103DEFD, 0x5C49C254, 0x802057CF, 0x156C6116, 0x5EC8C98B, 0xC306A129,
    0xE1E0583A, 0xECB40F46, 0xE67C9F02, 0x21874008, 0x76A3C044, 0xC06C4EC0, 0x05C01916,
    0x22912D5C, 0x209208EF, 0x05E05807, 0x0A008AEA, 0xA00C00A0, 0x25200600, 0x4AE68007,
    0xE03524D2, 0x05C05C05, 0x22FBE082, 0xAEE6EFCF, 0x0C803207, 0x70FC8001, 0x40772280,
    0xE58C2829, 0x943624B6, 0xA300F760, 0x24912804, 0xA321207E, 0x085A03A4, 0x57D1CE83,
    0xC300E034, 0xC012B42B, 0xD6607C67, 0x62024A12, 0xCE922C6B, 0x9FF0882E, 0x1222D2A2,
    0xC8471F60, 0x8649A51D, 0x4832436E, 0xC034D860, 0x34F26CFB, 0x08090F96, 0xCC188743,
    0x5CE360A5, 0x992E89DA, 0xCA4A870F, 0x1DC05208, 0x06050211, 0x207C6869, 0x62130407,
    0x8EB0406A, 0x83F90C60, 0x4A3310AD, 0x85160006, 0x257CE445, 0x8166B400, 0x3496CE12,
    0xC094B620, 0xD8AE2E7A, 0x1E32B034, 0x865E4143, 0x0282EECD, 0x8E34F0B0, 0x114C0700,
    0x07001000, 0x8436F2D4, 0xD0A00520, 0xAB804400, 0x846792E2, 0x92FCC384, 0x06A0923C,
    0x28211336, 0xE8686700, 0x21B22E07, 0x5E07D319, 0xA7FCF373, 0x3CF28C47, 0x0A95B20E,
    0xC0384C12, 0x39A06A94, 0x62F3A81D, 0xB156F811, 0x14ACF403, 0xE853631F, 0xCE2C07C9,
    0xB040542E, 0x0D274B7A, 0x11D606A0, 0x22207080, 0x58014213, 0xF37EF960, 0x090F953E,
    0x3A02A074, 0xC00E2111, 0xCB408003, 0xDCB70BFC, 0xA67D15A2, 0x2DB38608, 0x5C45F3AE,
    0xE00C4A33, 0xC4AA3407, 0xFEF4461E, 0x2BCF2189, 0x4FB0A601, 0x90213156, 0xF122A350,
    0x65E3B42F, 0x0622D084, 0xA9A8DF20, 0x00927405, 0xC8868716, 0x4C3E0549, 0x3EA01C21,
    0x693F1237, 0x20733814, 0x5353FA03, 0xCCB8001A, 0xE0620829, 0x03E2152B, 0x9034EC20,
    0xA3031F00, 0x152C4400, 0x4C4A2DA1, 0xC9E2D3C0, 0xFF682062, 0x7202F156, 0x72987691,
    0x00400143, 0xCE0683E7, 0x89FF39E3, 0x2A222CF2, 0x3ED10D5E, 0xB36605E2, 0x06E08290,
    0x230C803C, 0x60929040, 0x52146B1C, 0x38072FBE, 0x80014720, 0x7CA05200, 0xECB1547A,
    0x54C6E482, 0x0042FF42, 0x7AE72060, 0x63ECFF00, 0x090B62DB, 0x4E62D4AE, 0x709ED1E0,
    0x49C76515, 0x24B434C0, 0xE23737C0, 0x2EEF4A08, 0x7828134C, 0x02DD1840, 0x58703203,
    0xCE05AFC6, 0xC0822810, 0x2111E605, 0xF204A012, 0x54E32FAD, 0xDF408E7C, 0x2E034064,
    0xE00A2111, 0x9CCADA03, 0x7405471E, 0xCBBE2152, 0x3C080E3A, 0x7F17C032, 0x631F5320,
    0x58D1E2D2, 0x942F24B1, 0x6D08D36D, 0xC6C824C6, 0xDE2134B0, 0xF0AAC8C6, 0xED4AC758,
    0xFB5426D0, 0xF51B1871, 0x07EFE4F2, 0x1749E05A, 0x738A0082, 0x3774DE08, 0xF4E8D55F,
    0xA0140533, 0x02853557, 0xCCCD206A, 0xA03330E9, 0x04E21356, 0x3B52F4AA, 0x60123C15,
    0x42C2B674, 0x22C883DD, 0xE0327814, 0xD64574DA, 0x5A045156, 0x35A63AE8, 0x46E2C021,
    0xDAE08086, 0x29CF492C, 0x05A2BD55, 0x4037AA48, 0xA01C2193, 0x86B27C06, 0x19304B3E,
    0x007203A0, 0xA8E09408, 0xA89135D4, 0x007808EC, 0x2DD10E06, 0x6602E008, 0xE9CCB820,
    0x22D16C87, 0x8C3773D2, 0x33CE0860, 0x06000230, 0xA35FAAD8, 0x846EBEE4, 0x61F5C808,
    0x7E938068, 0x8BCF1760, 0x69280AF3, 0x114803C1, 0x070E0703, 0x300EC009, 0x6E8F0040,
    0xC2155E00, 0x36246A00, 0xE5348CA8, 0x2A595E68, 0xE8004D57, 0x360182CC, 0x42A40640,
    0x726DCE09, 0x9009208A, 0x00485160, 0x6215F003, 0x7D5E6038, 0x057504A0, 0x2172B518,
    0x8D0325F4, 0xA3C09EC0, 0x08117C03, 0x7A3DF3BC, 0xCD23488F, 0x818E72CF, 0xC4D0D156,
    0xF3B40742, 0x4EC06C2F, 0x7C5B8301, 0x84CF45E6, 0x03827CE2, 0x368A6301, 0x969C08B6,
    0x5F600C21, 0x7A5B1076, 0x42DB1980, 0x03000600, 0xE605C04E, 0xD4872E8A, 0x38F2F90D,
    0x4604C07C, 0x16BC0100, 0x27A03C25, 0x6A2475C1, 0x16A80383, 0x03253621, 0xED630485,
    0x45C669C2, 0x3303CF5B, 0x8608A70F, 0x23ED3120, 0x3D6E4000, 0x591562BA, 0xF5BAAA00,
    0x3AA07231, 0x3200A311, 0x561C2374, 0x89729358, 0xB2413526, 0xA08C5687, 0xA5E6F102,
    0x6C278AF2, 0x37AC03C0, 0x01201200, 0x6A05F6DA, 0xB76D6E60, 0x80380123, 0x932E9563,
    0x20600860, 0x02605E06, 0xDB53C012, 0x20260062, 0x75764E05, 0x980725B1, 0x606AA837,
    0x0942375F, 0x0631159C, 0xCF2E0680, 0x3037C407, 0x7B4893C0, 0xEBFAAA70, 0xAB108C07,
    0x7C82E956, 0xE0884B16, 0x03C31F7B, 0xC0DBC98C, 0xA0580023, 0x77E06B3C, 0x6F55C5B7,
    0x80600924, 0x0640216A, 0x48A70936, 0x80740824, 0x70202405, 0x2401C9E5, 0x40220220,
    0x06E06404, 0xA98A6072, 0x60718A98, 0x02002C05, 0x42024022, 0x401623F8, 0xFCD12603,
    0x46085574, 0x156D7340, 0x63AB7869, 0x7B38C4CF, 0x63ECBF44, 0x9912BAC6, 0x7516882A,
    0x4AB18180, 0x50C392D1, 0x8E29A3ED, 0xCDA43017, 0x5FC612C8, 0x1607CCD5, 0xD6182ED5,
    0x920090EF, 0xEC0402DA, 0x2ADAAF2E, 0x05406A08, 0xF2008022, 0xE00A96D6, 0x86204A00,
    0x7AAF6A5C, 0x82157D6E, 0x7C6FBC02, 0x11836092, 0xAC9ABB23, 0x2EF92A05, 0x4E3AD676,
    0xC0165897, 0x08022562, 0x61156C9E, 0xD8DCAA00, 0x2828AA3E, 0xFC0403C1, 0xF85208E8,
    0x54A0442F, 0x0A462247, 0xC3AD8786, 0x716CDAED, 0x60249824, 0xE04A4484, 0x8C52C603,
    0x3C034004, 0xCC1878C0, 0xC102976F, 0x17894048, 0x11C404A2, 0x303096E6, 0x7873033E,
    0x23119A20, 0x35AB9603, 0x4E3DF8CD, 0xE078BB40, 0x013156BD, 0x7E2E5092, 0xE3119CC0,
    0xC4D90B27, 0x8C235328, 0x631F5A40, 0xAD805E00, 0x3E302530, 0xC9A93560, 0x9E573C07,
    0x9671E028, 0x00808539, 0x04607607, 0x7402A02A, 0x001C3DD8, 0x06C02E03, 0xF75E8500,
    0x4BFE71CA, 0x05621959, 0x5420B032, 0xC0143DC7, 0x0763B8EA, 0x7A3DE834, 0x608E928C,
    0xA4E61FA5, 0x2F351699, 0x37CD57EE, 0x2683DD6B, 0x017AC070, 0x4CE18643, 0xC042FF8D,
    0xD719499A, 0x198D5F39, 0x0400846C, 0x420116BC, 0x940407A0, 0x08086D53, 0x60066062,
    0x402001B6, 0x00C2EF97, 0x1A01C020, 0xE06A0560, 0x27607605, 0x99A1A43C, 0x60700859,
    0x01E2EF49, 0x496798D0, 0x006708EB, 0x32C082BA, 0xE16183CF, 0x657DA70C, 0x67E65EA9,
    0x63490B43, 0x056EC54B, 0x3E408222, 0x62C7A3DD, 0xFA12830B, 0x5C75862F, 0x6ED1A404,
    0x40942C57, 0x0178CC06, 0x31643A02, 0x60810FC7, 0x05204E90, 0x51242056, 0xE00E0260,
    0x00DB41B3, 0x5C040016, 0xF0EE05A0, 0x87606404, 0xB78870FC, 0x8038D4AC, 0x0362179B,
    0xB043037A, 0xA2DB93D0, 0xA3C06E00, 0xED9522B8, 0x08D4C362, 0x8DF8BA83, 0x09A68C9B,
    0x0CF4022D, 0x35C4C19E, 0x7E4B1902, 0x63CF71D0, 0x086F2EEF, 0x442BD860, 0xE3E752C0,
    0x2BDAF406, 0x9E4E6020, 0x63FE869A, 0x5770FB04, 0x39BC0C46, 0x6AF79B04, 0x67204C9C,
    0x6C6D22CF, 0x1A6167B2, 0xA3C05031, 0x03628448, 0x09F25503, 0x03E57DA8, 0xC5AB0AC6,
    0x2ED077A8, 0xBB65653A, 0x523DDBB2, 0xEA7E5685, 0x8C401A3C, 0xEF96E575, 0x99BE03C2,
    0x94808F67, 0x9201CFC7, 0xEF0E438D, 0x43991DC2, 0x87B0E052, 0x9A4607EC, 0x3DD85A23,
    0x7E90B6B6, 0xAED782A0, 0x7773C597, 0x3C07000E, 0xFA8A066B, 0x13402061, 0xFF8E5069,
    0x57A0BFDA, 0x6BAD78A0, 0x2EE003CF, 0xF48C082C, 0x38E0382E, 0xE8D7ACA6, 0x8016215B,
    0xC3087852, 0x82343C95, 0x36D20720, 0x05200630, 0x0CCC69DA, 0x20483CF7, 0x36A2497D,
    0x0C01E4C1, 0x14123E7A, 0xAAA60C4B, 0xE8A1397E, 0xB7B66C1A, 0xA7864BC6, 0xCE060301,
    0x5BF0092A, 0x703CB195, 0xB23118EA, 0x6AB96E22, 0x8FA03E08, 0x74041555, 0xFC974F40,
    0x878245CF, 0xD4034066, 0x80302CDB, 0x37B26C73, 0xFB9EC06C, 0xE5B19854, 0x83A3C1C6,
    0x899F29F3, 0x6938C965, 0x009156D0, 0x889730C0, 0xD95AFE45, 0x9F897BA4, 0xBC4B2E25,
    0xE0625054, 0x5FE21972, 0x6F6E7C3F, 0xA7EFBDE0, 0xC2D50603, 0x6CF0FCFF, 0xD6A4050A,
    0x0DB3E82E, 0xDF579C87, 0x4CB40263, 0x311D0A29, 0xE383004C, 0x1D8207C6, 0x47B00C4B,
    0xA6781C4C, 0x1B78BDD3, 0x06E70230, 0xFCD1BB60, 0x32AA0908, 0x91A01830, 0xA606C2B7,
    0x2B031D1D, 0x04CF232E, 0x13187D50, 0x47BA04C0, 0xAF3D67C1, 0x2E5B2A5C, 0xD8399280,
    0x239C3EEB, 0x11B0408C, 0x4E9801E3, 0xD6E07450, 0x5E0303C1, 0xFCC6094D, 0x65EF7056,
    0xF8D09CCE, 0x1D3EC8DA, 0x79022397, 0x0A3CFDE8, 0x03E72CC0, 0x94031FAD, 0x22080CD5,
    0x163548F3, 0x07E37B4E, 0x21CA178C, 0x96DC0580, 0xDD378643, 0xD207A449, 0xB7EC060C,
    0x07058BA2, 0x4C520EFA, 0x22DDB6CA, 0x90A44802, 0xFFB82078, 0x20780082, 0x61FDAE9F,
    0x37D95BE2, 0x57A60294, 0x3C1D8E08, 0x6F4B8D04, 0x68D533A5, 0x2EFC382E, 0x63D1C03E,
    0xE31F47F9, 0x4E008402, 0x6E09420B, 0xA22DCBE0, 0x04202200, 0x78F0806C, 0xCC15AC82,
    0x07C50643, 0x2606206A, 0xC2EFDF40, 0xE8C06601, 0x62CA8520, 0x1353BF80, 0x086265DD,
    0x6B7AF6C8, 0xDB0CACE0, 0x698B3A81, 0x6CAB1D29, 0x1D208B40, 0xC18703E1, 0xE0ACC3ED,
    0x431F0B4C, 0x07F1D65F, 0x809F9B88, 0xC239DE20, 0xD9E02437, 0x4C0376BF, 0x6279A3D6,
    0x51607DD6, 0x2D56671C, 0x963DF240, 0xF94AB805, 0xFFBA608E, 0x107669C2, 0x3DDC2408,
    0x7E3AD40C, 0xC8A8D91C, 0xBCF71607, 0xCC5A5622, 0x0FE5C03E, 0x01456ED7, 0x530357DA,
    0xCB56301F, 0x2BDF4842, 0xF55D5D72, 0x23DDEC8D, 0x04576525, 0xFA9C8460, 0x5BCD6FB0,
    0xA5E54426, 0x84ADAC18, 0xC0440540, 0x3ED760AF, 0xD7375C8E, 0x1A4123FE, 0x5C7C93B1,
    0x2E3C1E0E, 0x6319CBA0, 0x01E57DEF, 0x73789A50, 0xA052AB1E, 0x6CE06A80, 0x04082264,
    0x5CCA3DFF, 0xF85E685A, 0xDEEEFA9D, 0xC03A2DDC, 0x8882013E, 0x0B0481C0, 0x4472440A,
    0x000104C6, 0x087C3A1A, 0x04C36231, 0x8080100A, 0x0B4542D1, 0x00824220, 0x87D201F9,
    0x45241E8F, 0x240900FA, 0x37221048, 0xB178B050, 0x058201A2, 0xBCDA2403, 0x8B01D0D9,
    0xFA0C4921, 0xC8C4682C, 0x8B38020B, 0x6410E43A, 0x4CA5D287, 0x11710299, 0x0054A8C0,
    0xF91C7805, 0x1088D039, 0x4ABB5305, 0xA9A3F174, 0xBC131FD8, 0x60BA359A, 0x44AC1148,
    0x3B385892, 0x1F0EEC55, 0x1CDEE033, 0xDB2AE370, 0xDA883B23, 0x87A3C085, 0x5041B15C,
    0x40BB3D44, 0x6CB592C6, 0x82391E7D, 0xBB014323, 0x90400336, 0x83C20110, 0x5C240E07,
    0x4523017C, 0x200FCD85, 0x21308844, 0x049C6501, 0x8228C020, 0x82E37184, 0x5D948048,
    0x1003F0DD, 0x029B831E, 0xB70061B9, 0x903600C3, 0x412B5E34, 0x400E51B8, 0xE1FD2B7A,
    0x15653942, 0x9642B13D, 0x9070712E, 0x1C1FD2DB, 0xC913FD91, 0x720CD589, 0x14AE7608,
    0x66BF0B08, 0xA2088C05, 0x22C13677, 0x30F09047, 0xF630E0A1, 0x180370FD, 0x42039110,
    0xC447C9E0, 0xA09C4911, 0x2421709A, 0x347A5E85, 0x08DD2704, 0x849635C6, 0x9449FC09,
    0xF5E70E80, 0x1703C3C6, 0x10C0A576, 0xC1C11D8D, 0xD60D0D87, 0x85FC0BC3, 0x4A5B2130,
    0x049945BC, 0x03F7A21B, 0xA59E100C, 0x11B10E80, 0x30719408, 0x89993070, 0xC1444A42,
    0xC63C4209, 0xDC497CE3, 0x07728180, 0x835CD0A4, 0x0311003B, 0xF071C27B, 0xD448635D,
    0x2743A430, 0x101BD944, 0x54597424, 0x54FA2D0B, 0x5E370F84, 0x300F9BD8, 0x0E00374A,
    0x4464FDF1, 0x06AC0B0F, 0xCE5210C2, 0x669BC365, 0x1101E00D, 0x5039263B, 0x5098407D,
    0xF2649041, 0x3C080117, 0x8F2035B4, 0x82810848, 0xA0519495, 0x067B0F83, 0xDD4D42D1,
    0x50291119, 0x26403443, 0xC6F03E03, 0x2C070EA1, 0x4102D36A, 0x12503A84, 0xA6D90C23,
    0x17610C0C, 0xF65A11A2, 0xEF59A960, 0x1043D9ED, 0x0095DAB3, 0x3AC18F0B, 0x2848119B,
    0x110B03C1, 0x6AEAC020, 0xC2003806, 0x0124450D, 0x2285A12A, 0xD2038341, 0x8CC4005D,
    0x82A101CE, 0x201DC27E, 0x50476CE7, 0x610B28B0, 0x07441739, 0x42144AD1, 0x11153F75,
    0x866C9AC4, 0x1F7F0199, 0x0A65AAE8, 0xA0C07DB8, 0xB0944294, 0xCE72045A, 0x4963EDA9,
    0x0181F8A4, 0x912BCEFA, 0xD0400700, 0x1C490E02, 0x4540EDAB, 0xBB036128, 0xDBB065D2,
    0x8B943F9E, 0x9C3B01DD, 0x64C09E19, 0x0F5E8C92, 0xED1AF437, 0xDB204001, 0x3A42B0D6,
    0x9E0D03E7, 0xBD832762, 0x02012958, 0x2C941B6E, 0xDC261065, 0x3C06D76A, 0x40B1DA0C,
    0x43DA82CA, 0x102C2309, 0x06D1B980, 0x24070030, 0x4216B0C4, 0xC47C7B51, 0x0CD01F0F,
    0xBC3002D7, 0x2710252B, 0x0C1B8D68, 0x17578742, 0x4B8A1999, 0x3F14BC98, 0x40DCC244,
    0xCEE090FD, 0x1FC06EE3, 0x8C003B02, 0x78421155, 0x3F061AB8, 0x0FA0DAA0, 0xD679F838,
    0x80FC2100, 0x1363E204, 0x2A126D71, 0x06C180C1, 0x406976DE, 0xD08C1906, 0x28460FC3,
    0xB0D470C1, 0xA2824109, 0x03B031C2, 0x31020DDB, 0x85ABDC02, 0x4741BAD0, 0x99277108,
    0x83D73ABF, 0x8A2F680D, 0x23381080, 0xE89902B1, 0xAAC380F1, 0xF5005DFB, 0x4E8FBF4F,
    0x01230559, 0xAB93441B, 0x0F82301D, 0x104E6ED8, 0x212A06A8, 0xD8390DC4, 0x1265C1D0,
    0x5774C030, 0x81103003, 0xB0581004, 0xF0370E42, 0x99128490, 0xCE3E4B67, 0x2A084125,
    0x08709C08, 0xE01D8200, 0x003C306D, 0x53F80782, 0x8CE02482, 0xC0804373, 0x03D016A2,
    0x08060DC8, 0x43DBD817, 0x82B2C052, 0x5D2B8E28, 0xF8C21DBA, 0x1A108203, 0x33133EC4,
    0x28168C8B, 0x80F81E17, 0x4CA42405, 0x83D03C01, 0x845005CC, 0x120FA98F, 0x21849092,
    0x3005C0D0, 0x8E0C4180, 0xA09802F8, 0x39A00560, 0xF0600C62, 0xE10C1B82, 0xC8404887,
    0x43B73463, 0x08012423, 0x72A1A825, 0x21030006, 0x0D39D068, 0x447EDC24, 0x28F904A0,
    0x2A8B0441, 0xB8600E00, 0xD079DC14, 0x0B500C21, 0x8280925B, 0x37AC1545, 0x761E083F,
    0x15B7E388, 0x0F3708AA, 0xA69ECC08, 0x51EC03A4, 0xC81C0046, 0xC8767D41, 0x7154FA16,
    0x21EC9392, 0xC1392B25, 0x07C7D600, 0x6AE16822, 0x1F834036, 0x4090E0E8, 0x267ED7E8,
    0x1E4C8450, 0xD28B42C1, 0x2072CC4D, 0x20A239BD, 0xD51B1E90, 0xC7005EA2, 0x42E0B0E7,
    0x1601D007, 0x5D84927D, 0x3D01A6E2, 0x7CB014D0, 0xD9F88290, 0xA0160025, 0x097F1541,
    0x534668C9, 0xC1B84759, 0x80A3F8D9, 0x97210812, 0x0756094D, 0x2000E3F7, 0x4920B340,
    0x4EA95BA8, 0x84201E85, 0xB1398E60, 0xA0925623, 0xC0215602, 0x81F4DC06, 0x8163F905,
    0x68A785EA, 0x981DA1B8, 0x0A8336DA, 0x2801B17C, 0x32EB01E0, 0x1E84CD29, 0x68408B47,
    0x867E0381, 0xC0F0089D, 0xC1FA0D76, 0x1FB3920D, 0x9C610C09, 0x179B2904, 0x63034487,
    0xEC6669B6, 0x540B8004, 0x902231E8, 0x4347558A, 0x74AA0F8F, 0x304D2C21, 0x4DC50295,
    0x4E805002, 0x962081EE, 0x060029B8, 0x2504006C, 0x44A15000, 0x86B5CE3D, 0x7C0F0380,
    0x58063A54, 0x69492181, 0x4729D902, 0x68E04502, 0x00C08056, 0xA4407556, 0x5641EC0C,
    0xDE8109D9, 0xF1090411, 0xB80CD79C, 0xB020972A, 0xA02642F1, 0xF08CF965, 0x205CDC4D,
    0x01DB26A7, 0x2C477404, 0x2780E010, 0x42AA2D62, 0x1E8448B5, 0x42022080, 0x820D80EA,
    0x0A324630, 0x89FBAD61, 0x436691C0, 0x4991EF1F, 0xE0DD7401, 0x0339D909, 0x71440A94,
    0x04179AD0, 0xA5D2E71E, 0x9A2F070A, 0xE21218F5, 0xFC0A9ABA, 0x994D9B80, 0x89EE0BE8,
    0x6094059D, 0xA1D14106, 0x9B09A55F, 0x04E0E4C7, 0x0392110B, 0x43AE1062, 0x0F0745CE,
    0x7A038FE4, 0x258F57D0, 0x12649F81, 0x2AD00C40, 0x40E81E16, 0x409AD1B4, 0xD972DB69,
    0xA2809979, 0x0B41F162, 0xE4B2A43E, 0x2208AD4A, 0x7004CDC3, 0x02975DC0, 0x540603E1,
    0xA010010E, 0xC126E781, 0x9A8DB78A, 0xBE831E11, 0x01809C18, 0x028E53C7, 0xE14C505C,
    0x3C05E94E, 0xC5650E95, 0x7C23B9CB, 0x481F5A20, 0xCA306FAF, 0xC56174CE, 0x2A904008,
    0x83A00CAB, 0x07E536C4, 0x555464A6, 0xCE83D5D5, 0xEF0086E2, 0x76BC30D1, 0x4A6501C0,
    0x08100127, 0xE4020E81, 0xF7D654BF, 0x9FEBE65E, 0x8280720F, 0x48757C08, 0xEA40F807,
    0x86A28C4C, 0x083858AA, 0x907C9008, 0x455660B0, 0x2AE3B400, 0x70393B2B, 0xD924255D,
    0xE324AE83, 0x57293C0E, 0x07888F19, 0x084DC47E, 0x1E602248, 0x17062104, 0x0474B218,
    0x400C8180, 0x439D07C9, 0xB8B50070, 0xC1001F31, 0x40D81B06, 0x80348797, 0x90ED2204,
    0x0481C83F, 0x059ABAF0, 0x493E4D3C, 0x0EAB0E88, 0x426E0350, 0xAAACBA8F, 0xC08F558A,
    0x8976FE83, 0x26EDD038, 0x9B8CCC0C, 0x2D99680A, 0x6E3111F6, 0x2046100E, 0x405325CB,
    0x4D6A01A8, 0x60008024, 0x802204C0, 0xE2D45A81, 0x49662AC3, 0xA4BD553E, 0x84544411,
    0x04A0941C, 0xAA40181C, 0xE00175E7, 0x3F863A8A, 0xA59DC188, 0x0AEBAA63, 0x8B3E0924,
    0x38F60AD6, 0x7A9C2118, 0xEB70276F, 0x560B8A41, 0x839B0C1E, 0x91DBEA26, 0xBB6C707D,
    0x7304E010, 0xA902B011, 0x22E6E104, 0x4014DD60, 0xD05C0BC1, 0x40D41682, 0xA4BC5A08,
    0x03C38DBD, 0x05E0B778, 0x01C0E02D, 0x49009010, 0x1700689B, 0x9DA56508, 0x6820A993,
    0xF80D44C0, 0x60959B81, 0xE07168AB, 0x01F94CE0, 0x80F9D92B, 0x06E63AA1, 0x09E39D10,
    0x1E94BC1C, 0xFBD3C0E8, 0xE412C179, 0x29C63BF3, 0x35E801E7, 0xE07A5CF7, 0x7A600882,
    0x80580351, 0x73802003, 0xE726939C, 0x81406F38, 0x0D006A4B, 0xAC0820D4, 0x5810EE8D,
    0x70E56E10, 0x49B3B1E0, 0x7D000BC2, 0xF8640421, 0x292E5779, 0x49199C00, 0xA4B64823,
    0x5CACA807, 0x15A423A0, 0x4440BB28, 0x749C2C20, 0xC90E7143, 0x101D0619, 0xFEDFD5B8,
    0xE0840310, 0xB9774406, 0x71D03345, 0x042004E9, 0x0C323941, 0x031FCEA0, 0x3576F1BC,
    0x34062765, 0xC12E3BEE, 0x4813001D, 0xF8CC7A7B, 0x3B5815A1, 0xCEE0452B, 0x58806154,
    0xA2CA6773, 0xE2F1D825, 0xCB10DF3F, 0x4576A090, 0x5E0FEEEF, 0x0CEC5ED0, 0xD6B305C0,
    0xDE480D52, 0xEE452FA5, 0x801C73E2, 0x04492323, 0x5DDDBE45, 0xCA81F3CF, 0xAC0053F9,
    0x9408D643, 0x759E4DC3, 0x05E7F200, 0x802A07C1, 0x5EADE82D, 0xA0D80D00, 0x41DF2E81,
    0x6D306703, 0x06E014EC, 0x0CD41763, 0x10243C2C, 0xE68373FC, 0xEFB7A764, 0x9BCFCC28,
    0xCD2FD86A, 0x397A74BB, 0x5874FA76, 0xC1480B3A, 0x3B5FABF2, 0x0460D81F, 0x90FE7E8C,
    0x2C011004, 0x56DA7740, 0x03A0407D, 0x8624234B, 0x42B17933, 0x2427E003, 0x3C6C3418,
    0xB7BA0390, 0x33871937, 0xB003F045, 0x301576F7, 0x1EA1727E, 0xF12E8242, 0x00210487,
    0x01216778, 0x1C6C3798, 0x002E63F2, 0x2647FE24, 0x2900A003, 0x574402F0, 0x6721727A,
    0xC27FD029, 0xD03E00D1, 0x0370487D, 0x0B24373F, 0x21E87830, 0x52537A04, 0x495D7031,
    0x27A06530, 0x20D4B800, 0x1778503D, 0xB03B0062, 0x04839C80, 0x9480E030, 0x801B0031,
    0x60275E03, 0x2903B120, 0xE6BF0160, 0x0021D882, 0x2F020006, 0x54A31210, 0x02E2C17D,
    0x182265E5, 0xD83D0400, 0x03031480, 0x6E16281D, 0x801776F3, 0x1D710578, 0x0A005865,
    0x87A97BD4, 0x0390061D, 0x3B205855, 0x21FB52B0, 0x3B501E00, 0x194717F8, 0x801A0264,
    0x15386565, 0xF94A0010, 0xF21A8907, 0x7330181B, 0x2C0021C2, 0x859077D0, 0x76E03204,
    0x0A78E467, 0x483903C4, 0x04100626, 0x66555556, 0x90158657, 0x02E33141, 0x051D27EE,
    0x78880360, 0x6E904304, 0x72027329, 0x24648296, 0x03604143, 0x1301B035, 0xF8968950,
    0x01300E10, 0x3B03502E, 0x48C35880, 0x76D8C63C, 0x3300325D, 0x550804A0, 0x8B802C55,
    0x42021242, 0x418120D0, 0x52737B81, 0x9664E25A, 0x96D002A8, 0x21F7E956, 0xF24698D9,
    0xA7D92A01, 0x8D25B21C, 0xA93C48D4, 0xF0330433, 0x11501B02, 0x0510F8CC, 0xC02D7360,
    0x4DB03C02, 0x0A8908B5, 0x803603F4, 0x1D885901, 0x0423A013, 0x44EB5F72, 0x80400D31,
    0x140411E8, 0x73D45259, 0x8400411C, 0xA95CE7CF, 0x775B03E8, 0x02F00121, 0x2D5F7888,
    0x81948CB0, 0x64C62E00, 0x2340A909, 0x60390401, 0x01302902, 0x7B90E003, 0x40050043,
    0x02502400, 0x30126833, 0x312214B9, 0x82501803, 0xF70221CA, 0x10472045, 0x2438F404,
    0x1521A00E, 0x24737B45, 0x5E203B00, 0x00846048, 0xD8A90149, 0x1FC7C540, 0x478F102C,
    0x42422AA6, 0x03801F00, 0x6C03E040, 0xB3B59428, 0x01D5D21B, 0x1A01F01D, 0xB00228B8,
    0x01B01E01, 0x3F637036, 0x296A2E10, 0x02F12794, 0xC2947015, 0x81D40061, 0x04028250,
    0xE54F27BF, 0x69632346, 0x22342075, 0x0E90078A, 0x127A01A1, 0x93903633, 0x610291C2,
    0xD0481B39, 0x21F8B203, 0x3601C004, 0x28F84DB0, 0x03F80425, 0xEB8C712A, 0x50130163,
    0x79E01701, 0x16017982, 0x90100140, 0x03603B02, 0x25129034, 0x79A59A43, 0x00F02D12,
    0x141D889F, 0xD2928730, 0x9258AC03, 0x328A902B, 0xA25D9C63, 0x0441C769, 0xAB9917CE,
    0x414A7C97, 0x65E92B17, 0x462C98A3, 0x59643280, 0x66203101, 0x244879BB, 0x197A4191,
    0x03A04304, 0x320306FB, 0x60320330, 0x00A01002, 0xF19F000C, 0xD00B9F29, 0x03301E00,
    0x2C4509EB, 0x20440340, 0x9E211F04, 0x3D6E6835, 0xA0380400, 0x26488B02, 0x04764624,
    0xB7230492, 0x02A00137, 0x42162878, 0x241E9240, 0x47791100, 0x0F99132E, 0x90370041,
    0x6860418A, 0x6E872243, 0x304A39C6, 0x226A0603, 0x3901E00E, 0x896B8600, 0x12643270,
    0x26125126, 0x003F1201, 0xA2F4C5A3, 0x2C722122, 0x22E1464A, 0x9D601703, 0xDC0081D8,
    0x21B09857, 0x21F99703, 0x368EC02C, 0x75255CC8, 0x17D17B8E, 0x13111A19, 0x033C9080,
    0x00F24279, 0xBD23C7DC, 0x4242A558, 0x12602697, 0x61A3A97C, 0x040CA62A, 0x02103612,
    0x2128B9D0, 0x4A220400, 0x01E6B704, 0x1A21F9C0, 0x31E99D30, 0x01447395, 0x9526869B,
    0x7112A507, 0x3B78E201, 0x316A884B, 0x71C799A0, 0x9CB02F04, 0x080011B8, 0xB02D0230,
    0xA6385E7C, 0x32930A8F, 0x20281CD4, 0x1FCA4601, 0xE302E00C, 0x341594B3, 0x91701347,
    0x965161CE, 0x2006243A, 0x8EE25A4E, 0x2C1C3A7B, 0x214DA100, 0x9275CD6D, 0x404E4556,
    0xAA700150, 0x00D0021C, 0x6D68901B, 0xEABBA909, 0x03E6DA72, 0x31039042, 0x96937497,
    0x23C1B001, 0x7321D1F4, 0xD92F0174, 0x91F03326, 0xD6A4D314, 0x89720411, 0x95C02AAA,
    0xFC884036, 0x001E0011, 0x2CA23C1F, 0x118A7030, 0xB037AB85, 0xAE6ABCA2, 0x497D6431,
    0x702B0391, 0x217A8701, 0x4703500A, 0x81F3AB00, 0xAE102404, 0x291481FC, 0x2AEE1818,
    0x80B01B24, 0xA895E045, 0xE882113A, 0xAFC03852, 0x8300A176, 0x503E2926, 0x35D37B22,
    0x733B53E1, 0x9930AE7A, 0x33D1BB61, 0x7387001F, 0xD0420244, 0x1F51027D, 0x1D314959,
    0xD7CA9940, 0x00F756B0, 0xCD25A3CA, 0xF137B023, 0x3917D600, 0x26A2603C, 0xC4FAA412,
    0x0315F716, 0x012AC9AF, 0xA00F0050, 0x2E18C102, 0x6BB13122, 0x3ABFA2E9, 0x00593603,
    0x14242AA2, 0x9AC7A420, 0x85103604, 0x9F012314, 0xEA1376AA, 0x03300141, 0x3D0475E2,
    0xCB2B8DF0, 0x969B1278, 0x3D1FCAD9, 0xB6479D89, 0x2A5B5B58, 0x3401F00A, 0xF0414610,
    0xB4166038, 0x409E28E3, 0x26F90430, 0x73E01003, 0x2F00978B, 0x8ADE94A0, 0x98102C04,
    0xE600A21F, 0xB03F2521, 0x56D4ECA5, 0x5CB4F546, 0x9026111B, 0x1505DDA4, 0x530142AC,
    0x931F2494, 0x76F94603, 0x13015003, 0x503901A0, 0xB6C9A203, 0xBBB5214A, 0x2672917A,
    0x03933D04, 0x16012030, 0x2756A680, 0x04002400, 0x48249412, 0xEB2503F0, 0xA1C00941,
    0x56A1F349, 0x439C0137, 0xB8AAA721, 0x12023112, 0xC1E303FB, 0x02C00B2A, 0x4717BB34,
    0x6B380360, 0x01F00675, 0x9A88E01C, 0xF04085D2, 0x03A5AB11, 0x9B79AA60, 0x980697A7,
    0x02951303, 0x4E02001B, 0x40147709, 0xAF4AF385, 0x0B47398C, 0x38A90390, 0x25DAB460,
    0x75AB02AE, 0xAB02B482, 0x1EAB1202, 0x491C2B7F, 0x4B1EA6C9, 0x82E43404, 0x2093CB47,
    0x502602A0, 0x03102202, 0x3896811D, 0x5A37181A, 0x97AA31A3, 0x23028BA5, 0x80280260,
    0x93800D02, 0x1EBF8006, 0x203600E4, 0x1DF284AF, 0xFCBF3021, 0xD29900D1, 0x7569DB36,
    0xE2031001, 0xFB1916B5, 0x007136BB, 0x40745037, 0xA2D1AE00, 0xBFB03200, 0x22043856,
    0x47CFB600, 0x00B00C00, 0x4100A00B, 0xE00900AC, 0x02702400, 0x2711911A, 0xC0150270,
    0xC4111400, 0x19C3EC3F, 0xB00E770C, 0xB93B7B02, 0x1E99E034, 0xE25242F4, 0x98D5D903,
    0x0095880B, 0x00001019, 0x00000000

  EW_BITMAP_CLUT_EMPTY( WasherBgSpin, Default )

  EW_BITMAPS_TABLE( WasherBgSpin )
    EW_BITMAP( WasherBgSpin, Default )
EW_END_OF_BITMAP_RES( WasherBgSpin )

/* Table with links to derived variants of the bitmap resource : 'Washer::BgSpin' */
EW_RES_WITHOUT_VARIANTS( WasherBgSpin )

/* This is a bitmap resource. */
EW_DEFINE_BITMAP_RES( WasherBgDrain )
  EW_BITMAP_FRAMES( WasherBgDrain, Default, EW_DRIVER_VARIANT_ALPHA8, 480, 272, 0 )
    EW_BITMAP_FRAME( 0, 0, 0, 0, 0x00000000, 0x00000000 )

  EW_BITMAP_PIXEL( WasherBgDrain, Default )                     /* ratio 5.42 % */
    0x1C080100, 0xC1A0B048, 0x2A130883, 0xA1B0C85C, 0x231087C3, 0xB1489C4A, 0x188BC5A2,
    0xC8DC6A33, 0x8FC7A3B1, 0x1C8A4320, 0xC9A4B249, 0xAA532893, 0xA5B2C95C, 0x633097CB,
    0xB3499CCA, 0x389BCDA6, 0xC9DCEA73, 0x9FCFA7B3, 0x1D0A8340, 0xD1A8B44A, 0x2A9348A3,
    0xA9B4CA5D, 0xA350A7D3, 0xB54A9D4A, 0x58ABD5AA, 0xCADD6AB3, 0xAFD7ABB5, 0x1D8AC360,
    0xD9ACB64B, 0x0E5968B3, 0x4341C0B8, 0x2E180C06, 0xB740B05C, 0x70B905AE, 0xB0D86833,
    0xBFDA4161, 0x0C530380, 0x838220F0, 0xCC6A360B, 0xC8032188, 0x22412110, 0xA3F20103,
    0x931FE5B2, 0x22164481, 0x180DC864, 0x28E06833, 0x048200E1, 0xAB538203, 0xC1402B2E,
    0x56300B01, 0xC40CD0B0, 0xB7DB8F47, 0xCDDEE877, 0xDD6FB7BB, 0xC6DF703C, 0x8A46843C,
    0x28102517, 0xB9BABD40, 0x0801A873, 0x0240F008, 0x951EED45, 0xCEDEFC7D, 0x1D6FBBBD,
    0x08F7B23C, 0x09842332, 0x3C040305, 0x681ECF5F, 0x501A0B00, 0xA3E1C0F4, 0xF8FBF7B6,
    0x1F0EEFF3, 0x1A0EC724, 0xDED01D7C, 0x44C20480, 0xC81104C0, 0x420F8350, 0x0F03B0F4,
    0xA12845FA, 0xA8543C77, 0x70380D99, 0x05030110, 0x4821E876, 0x42F04009, 0x7100420C,
    0xA613841B, 0xB77762A8, 0x0BC39831, 0xC040241E, 0xF8D63487, 0x740300D0, 0x3F760270,
    0x7762B838, 0x83E6E83A, 0x090D960F, 0x723F9061, 0x4190C3C7, 0x024250B4, 0xE528D803,
    0x80100094, 0x103D0B41, 0x3A0EA499, 0x7683F8F0, 0xD9A6564B, 0x50A03A0F, 0x882108C2,
    0x34090250, 0x650410F8, 0xA5E83A5F, 0xA9203C0F, 0xEC409762, 0x0D074380, 0x80E7E950,
    0x82704002, 0x88AE5F0E, 0xB2257D5B, 0x300B42A0, 0x02009098, 0xE9202809, 0x10200A02,
    0x24064180, 0x09A4A940, 0x06407024, 0x42C0B831, 0x110C380A, 0xAA278F44, 0x3B1043C8,
    0x020140CC, 0xDA9AC67F, 0x50D02001, 0x56118A19, 0x421043F8, 0x0D8330CC, 0xC1203817,
    0x94869703, 0x381004C0, 0x300D82D0, 0x898430F4, 0x5C184A15, 0xD0B03710, 0x66B27A80,
    0x0600963B, 0x8983A088, 0x03E9BA13, 0x70783B0E, 0xBE510681, 0x1606C134, 0x896410CC,
    0x44092E13, 0xAB600F0B, 0x055ABDED, 0x3B0B01B0, 0x0E9FA9D0, 0xC400F244, 0x1070220A,
    0xA934BD80, 0x220940E7, 0xBFE5A704, 0xC350F03F, 0x6BE00A08, 0x68055531, 0xF97D8350,
    0x0B66E92D, 0x40705C2C, 0xB01D3EBA, 0xEC290A40, 0xAB7E9D70, 0x870250F2, 0x54BCC717,
    0xE104378E, 0x083D7E23, 0x1B0CC391, 0x02D48B5C, 0x8340BC11, 0x27E2FE10, 0x542A0F70,
    0x43D2F32C, 0xC6C1C00D, 0x04185337, 0x005C2F0F, 0xB80E4933, 0x25078300, 0xB7815011,
    0xC3FC7594, 0xC5F8270E, 0x613CD9F4, 0xF7B80300, 0x0D43E785, 0xD280381E, 0x81283700,
    0x9C201204, 0x28070044, 0x9D83E97C, 0x8390FE4A, 0x6DA20208, 0x4C014CF8, 0xF7A14330,
    0x0E8400F5, 0xF2404026, 0x41180949, 0xCC481104, 0x08009290, 0x1043007C, 0x2797E1DA,
    0x6E1C0508, 0xA80C4B7A, 0x4B7776C0, 0x07C36106, 0xC094AF85, 0xA0C398E5, 0x603104D6,
    0xE176F517, 0x8CC150DD, 0x524F07A7, 0x2D101B01, 0x582F0EFA, 0xB34B7C00, 0xED848E5F,
    0x0240392E, 0x2DB63D0E, 0x14090BC4, 0x1CF6FC2B, 0xDB684039, 0x34A09711, 0x1ED7CD4C,
    0x331A0093, 0x209E1DCE, 0xFBFDCC20, 0x42C00D13, 0x30E781D1, 0x9531EC42, 0x024CFCFF,
    0xEAC3105C, 0x0E41F1DC, 0x02BF001E, 0xFD036446, 0x60D8D0A2, 0x41FD1367, 0x58127F8F,
    0x737CEEDC, 0xCE4C169B, 0x482C1880, 0x9B905E03, 0x050898EE, 0x0389C009, 0x0D00326F,
    0xBF570CD4, 0x3A0D9811, 0x0A16C190, 0xF8100024, 0x63B09016, 0x64E53E82, 0xC0213884,
    0x36306E06, 0x04210516, 0xFBE173CB, 0x8882E004, 0x33080EB1, 0x704F0080, 0x94039398,
    0xD1BF8000, 0xC885010E, 0x20B8083D, 0xD889DD4F, 0x43788205, 0x276FEDDA, 0x0BC06001,
    0x1DA2C6A6, 0x54398064, 0x86081D34, 0xB8EDBA10, 0xF2B00469, 0x32771309, 0x8CA80A00,
    0x41984375, 0x3688D2E9, 0x87A09C05, 0x0C820BBC, 0x39941022, 0x5004712E, 0x68A10DE4,
    0x323E0140, 0xE9D8022D, 0xB0429D0E, 0xB218A047, 0x01981527, 0x3393B716, 0x66323813,
    0x078DB013, 0xA1C84071, 0xF227B25C, 0x82771EAB, 0xDE4F8270, 0xA01A008B, 0x787F051F,
    0xF17A4B41, 0x21894281, 0xB0337F20, 0x4A92B9F1, 0x1001B80A, 0x201BD850, 0x4594A0C4,
    0x104FE539, 0xBA230220, 0xF81B07F1, 0x17BF3025, 0x52D418C8, 0x0A04CA28, 0x24A66C07,
    0x9A4D7021, 0xC0006235, 0x0DA0E3B8, 0xD9288FB8, 0xD603CA04, 0x04DEB806, 0xFCE003E1,
    0xC38203D0, 0x30D9B19D, 0xCF74E929, 0x9DD0840A, 0x9E208820, 0x3D008A05, 0x1B03F853,
    0xF9294D98, 0x271FCA0C, 0x94209BB8, 0xA1EDA000, 0xE8532880, 0xD35C1003, 0x4A0D0928,
    0x4BB06A04, 0xA200A277, 0x3380B9CF, 0x0B1E137D, 0x41A3253C, 0xDAAD8031, 0x69819BB9,
    0xD181A40F, 0xF93930C0, 0xF49E4683, 0x40294F96, 0x0403B863, 0xA6145C17, 0x1900F164,
    0x0903F8A3, 0x42A50544, 0x78890019, 0x024A832A, 0xE0222CD5, 0x207B1BA7, 0x14E2A3B7,
    0xD5602E3A, 0x03608076, 0x2C753E34, 0x0042181C, 0xA8357079, 0xFB289520, 0xC86EA964,
    0x76AFCE73, 0x20390145, 0x74C86EE6, 0x0F3AAB50, 0x81495097, 0x03F3B758, 0x2C15BA16,
    0x4301C80D, 0x1B83F077, 0x672A71C4, 0xA4094A2D, 0xC01F9BFA, 0x615DAFF3, 0x5AB690C0,
    0x254AAF03, 0x810945B1, 0x84237F56, 0x2B76427F, 0x4B68E830, 0xCBC5C063, 0x1D2AB55E,
    0xAB146998, 0x04AB59FA, 0xB57C6FA0, 0x6B305620, 0x948C0C94, 0x41B83D37, 0x152B5B59,
    0x37B63014, 0x5666B03E, 0x0E146B68, 0x3C485688, 0x9D6F2CB0, 0xEEB94312, 0xBCF73B00,
    0x328D710A, 0x608E3746, 0x809151B9, 0x1B737B2A, 0xB4F6CE64, 0xDAC01957, 0x8F8413B6,
    0x0129B762, 0x750A6D08, 0x28A3DAC0, 0x64532F60, 0xB2D74A08, 0xF4FC0B81, 0x41580227,
    0x9C13791B, 0x29179EF8, 0x76E2B803, 0x8401C084, 0x4A0960F6, 0x1A054210, 0xA4015192,
    0x504A0920, 0x82920A42, 0x90520480, 0x2FFC4A07, 0x57B03452, 0x95A100DF, 0x1280A94A,
    0x2184672E, 0xE0BE4064, 0x5A00C845, 0xFF120470, 0xE8132940, 0xA07F7381, 0x851B0D39,
    0x81FD8302, 0x81429727, 0x08989311, 0x3E485605, 0x24030009, 0x3D08EED0, 0x9D240A58,
    0xDB0983EB, 0x88012878, 0xF3777EC1, 0x8526C3B7, 0xF2303200, 0x84408AE5, 0x9D24226F,
    0x8B419006, 0xBF045C49, 0x9B04E52A, 0x320FAFE5, 0xA8A064FC, 0xC1FBCD20, 0xECAF6EC1,
    0xA1133182, 0x41084608, 0x8089B242, 0x0899681A, 0x7A00D396, 0xE0DC7053, 0x3BCDAFE0,
    0x0973B1C1, 0x22FC950C, 0x3E77CB81, 0x9CBE0902, 0x002481E2, 0x823E7F07, 0x14F02E10,
    0x37B40C03, 0x4BC1483F, 0x01938D11, 0x93978974, 0x52004A8E, 0x1C22E760, 0x06A30501,
    0xA01729C0, 0x211B3F83, 0x8A7D3608, 0x9BFC6403, 0xD4949821, 0x43222139, 0xA7E873E7,
    0x9008C098, 0x5411C226, 0x3A4BBEE0, 0x3E760780, 0x30260FC2, 0x5A141315, 0x76066C07,
    0xC9B02A4D, 0x2A57B662, 0x17B64022, 0x14E96B65, 0xD107C03F, 0xA37F81EE, 0xB2C6BFF2,
    0x4136DB40, 0xE37DA9C0, 0x055ACF03, 0xDCB04604, 0x47392B5D, 0xCEC10009, 0x7441E048,
    0xE73DE2A5, 0xF0C82102, 0x1BA10996, 0x70AD032B, 0xD45ECEE0, 0x589840A3, 0x3B442101,
    0xCAA57507, 0x9BACE006, 0x8420E81E, 0x92C98709, 0x5F03BA49, 0x8003455E, 0x600D62F6,
    0x080C4385, 0xBB98DF41, 0xA2B1C801, 0x00FEE382, 0x097721C4, 0x840B8E0B, 0x02E572EB,
    0x11F98043, 0x03808070, 0x290374E0, 0x8A0D5E77, 0xF006155D, 0xCA1537BA, 0x9251CE78,
    0xA0CE28DA, 0x40A157AD, 0x039E0010, 0x79C10C0A, 0x9E00D02F, 0xE50328BD, 0x1C03A55E,
    0xB00C97EF, 0x1891753E, 0xAC1306C0, 0x12B59CD0, 0xD9D81F81, 0x72D98E08, 0x6C908610,
    0xB4A0BC24, 0xCD816959, 0x94F6D031, 0x38E78090, 0x7A03CAFF, 0xDDDA6AD0, 0x6047D939,
    0x12AD7DC1, 0xFC772981, 0xFC2F4C06, 0x2D101A47, 0xEA40F3A8, 0x9FC1DD91, 0x573B4F1D,
    0x3B2C5A8B, 0x35BDA5E7, 0x7415922F, 0x1708A5BB, 0xEF475C0B, 0x209B5778, 0x77915DD6,
    0x733079DC, 0x01E47FD6, 0x0FCDD7AF, 0x0496705C, 0xA5CEC0D8, 0xC9CF8237, 0xABE08182,
    0xEFBEF12C, 0x68A31148, 0x601CB3D4, 0x422FA306, 0x1666F211, 0xF2C0C801, 0xF4793584,
    0xB94E2233, 0x7F0540FE, 0x9196B2C1, 0x48B3666D, 0x1DE68A34, 0xEB6046FF, 0x859B6FF9,
    0x42482E00, 0xE8208A12, 0xF2C0B8BF, 0xE203903C, 0x61147F27, 0x1BE57100, 0x041826A1,
    0x60140120, 0x0101667F, 0x047FD73C, 0xE0241178, 0x80303D7C, 0x2D102813, 0x30398000,
    0x10A81979, 0x407E0008, 0x781F50F0, 0x73C00D10, 0x118257DC, 0xC80001F1, 0x82A6EB03,
    0x2F001000, 0x203D7960, 0x83078003, 0xDF001108, 0x870D6F47, 0x01C10583, 0xDE03F7CE,
    0x510983E5, 0x04052C71, 0x038447D5, 0xF4130351, 0x84A02F03, 0x9602610B, 0x485084E7,
    0x71C01510, 0x5573203C, 0xD00C1078, 0x03F1BC79, 0x0085B627, 0x30370060, 0x67A04041,
    0x23104862, 0x60398580, 0x02784476, 0x6903A800, 0x50051038, 0x4FE57203, 0x166B2873,
    0xA87369C8, 0x1C15A200, 0x3284A80E, 0xB0417968, 0x7A98627C, 0x7902D5DC, 0x30171028,
    0x8506566C, 0x3A3BB7DE, 0x288B60A0, 0x5C080710, 0x15855849, 0xD4ED0430, 0x89559503,
    0x084CD000, 0x484A5788, 0x88A85302, 0x1C0138A0, 0xF03603D7, 0x1E084488, 0x62881808,
    0xA1BD6528, 0x60B04303, 0x3800A855, 0x803C4C40, 0x86286E03, 0xED6F4852, 0xE86B8447,
    0x8A086861, 0x558716B2, 0x302A0018, 0x88B8C385, 0x72429007, 0x10098506, 0x7B88017C,
    0xEE8C5879, 0xD8388864, 0x03D41300, 0xB18958A4, 0x08DC8084, 0x1BE78283, 0xC86D4041,
    0x20371048, 0x8AE03E57, 0xEE8E7825, 0x28EB8EA4, 0x6F48ED10, 0xBA82A7BD, 0x403E4C48,
    0x1038F57C, 0x3D5A2016, 0xB83065E0, 0x03F4ED89, 0x038FF031, 0x96A09061, 0x8E383E90,
    0xFF6B9750, 0x03B90048, 0x76C02F5C, 0x0F0017E3, 0x390A8F82, 0x1BB8F210, 0x306BF8B6,
    0x98087708, 0x02F8F58F, 0xF40405A2, 0x700F8258, 0x8C757389, 0xEE00B91D, 0xB8138E58,
    0x7AB8E858, 0x7F00990A, 0x38D803C8, 0x7C10207E, 0x1D58F040, 0xF0080009, 0x8380368D,
    0x9E653029, 0x08A09188, 0x8BD51D02, 0x0A7E37A0, 0x30378580, 0x02110494, 0x2A8857C1,
    0xC52493A8, 0x10295693, 0x304C5936, 0x20088139, 0x64E03D57, 0xC447695F, 0x282A9414,
    0x84879602, 0xBB84B95F, 0x703403C3, 0x0327BE83, 0x718E95A2, 0x34C48F69, 0x7BE81889,
    0xB748A7D3, 0x000097B8, 0x9266A08B, 0xBC8887E3, 0x69120421, 0x4148BB95, 0xFA7D18F0,
    0xB8FE5C05, 0x80001897, 0xE57BE988, 0x402B5C07, 0x6FE00098, 0xE39386F4, 0xF85F90C7,
    0x0139846E, 0x1F9087C1, 0x56A08468, 0x75A97199, 0x1481F8A3, 0xF7C25BF0, 0x9B398484,
    0x139B6907, 0x49B18AA8, 0x5739A498, 0x1C9BB8A8, 0x69849AA7, 0x6A089C01, 0xA08139A6,
    0xF9BA6A09, 0x9070429A, 0xCB8049C9, 0xF9045B89, 0x8FC4C195, 0x7581999D, 0x37735247,
    0x5C081B94, 0x7F9DA7E8, 0xF95F7038, 0x03E1BC9D, 0xDB8139E1, 0xD9911BE9, 0x9E08CD91,
    0xBD9EB81F, 0x39EE7991, 0x9F19E865, 0x0A97F5C7, 0x29F03F39, 0x99E9DC9E, 0x549E6000,
    0x28049E96, 0x8431FB9F, 0xCD002956, 0x19CA9FD2, 0x7F103E7C, 0x13010971, 0xB9D903E4,
    0x90E9A99B, 0xC29BF97B, 0xC7F29D17, 0x99E90D9B, 0xC1584A1A, 0xFA1E8049, 0x91D8E185,
    0x2385F9AC, 0xC9B87F2A, 0x9B399E9C, 0xF29CD808, 0xB03FA217, 0xA25956A2, 0x24A18573,
    0x6A1C9C3A, 0x9C09D395, 0xBB53A81F, 0x69849F73, 0x8B81C0A0, 0xFC993819, 0xB9FA0375,
    0x52423B8E, 0x1F7AC9ED, 0x403A1BA9, 0x95692204, 0x5485E001, 0x879AA516, 0x98C1BE92,
    0xC598F984, 0x17BE9994, 0x92B92903, 0x8A924956, 0x5A4D0414, 0x80850278, 0x04943A57,
    0xB8FC0360, 0x94581F63, 0x71947414, 0x961E93F9, 0x95381982, 0x7B039524, 0xA1BC8DA9,
    0x00782595, 0x7B8AC52C, 0x16A0A7C9, 0x94E8197B, 0xE4039750, 0xB0018F59, 0x89E3BB02,
    0x227D193D, 0x404271C0, 0x00A94382, 0x387509CF, 0xCA8C8380, 0xA7E0401B, 0x50A7890A,
    0x38309557, 0x5DC87600, 0x7994C02E, 0x884D01B8, 0x92E82AA4, 0x6D042A54, 0x5978873A,
    0x8388948B, 0x5C5DC915, 0xB98A879A, 0x83E6EA1B, 0x9E242A3F, 0x46CF8FFA, 0xA3D03F4C,
    0x26AA19B2, 0x3A29943A, 0x82AA3257, 0xAD5DC833, 0x48A691D8, 0x82582F52, 0x719825EA,
    0x791A8A0A, 0x7D1ABB87, 0x1284D020, 0x70078EB8, 0x0335FC8F, 0x5C813976, 0x490AA919,
    0x96352DA8, 0x81A88830, 0xF873951A, 0x855A8D9E, 0x34959022, 0x48D58739, 0xAB203752,
    0xA201D804, 0xB7D003E5, 0x8DF01288, 0x6A855635, 0xBA64AA6A, 0x4C5A5E85, 0xEE844A68,
    0x4A8E5B8A, 0x50DB1BB0, 0x1783EB19, 0xBA279C30, 0x242AD585, 0x10830B25, 0x903D7E00,
    0xAC18736D, 0x55A109E7, 0xBAA6AE18, 0x806869AE, 0x15040572, 0x101D830B, 0x879AAC77,
    0x30414958, 0x082581E0, 0x4D1808A8, 0xE8B38873, 0x484AB038, 0xB3285F7F, 0x815DA855,
    0xE830AC3A, 0x0407CE01, 0x34838AFC, 0x5034AC6B, 0xB1300189, 0x55A76654, 0x14BC4F38,
    0x01985BB2, 0xBF8AC7C1, 0xAB0B96D8, 0x78B879A3, 0xD50411DF, 0xA00983E9, 0xB62242A5,
    0xC0AC588B, 0x2B0803A1, 0x7690247F, 0x44B5403D, 0x6242AC98, 0x006830B3, 0x04AA6A62,
    0xC004895A, 0x0306F484, 0x1B7BEB7D, 0x603E7E00, 0x0198A0AB, 0x3887C822, 0xE834AAE8,
    0xB8E8EB9A, 0x30B115C0, 0x94BC71B8, 0x01A8EB89, 0x9A0415C7, 0x8003825B, 0x032242AB,
    0x8D873A99, 0x1036771B, 0x021753B9, 0xDCB4873C, 0x28CFB57A, 0x9668D17F, 0xFF54E037,
    0xC9860068, 0xB3B0395F, 0x4770B785, 0xDB56971B, 0xA24A1558, 0x7B89E5C7, 0xDBA00019,
    0x813A601B, 0x6685FBD5, 0x47EF8FFB, 0x46003541, 0x31BCD3DB, 0x3A53A00A, 0x12ABBD57,
    0x0D010006, 0x203502A0, 0x02F03003, 0x2E02E35A, 0x00342230, 0x00E00F03, 0x041318B2,
    0x400C0100, 0x03103502, 0xF0BF3BEF, 0x61A002FB, 0x00D33D03, 0x0E12FBB1, 0xD01D00C0,
    0xB1FC01BE, 0x43ADFAC6, 0x256A00D9, 0x00412D77, 0x3302B017, 0xD2433440, 0xC1E1B6C1,
    0x2C3A0C1D, 0x90050230, 0x002127C0, 0x3002B00D, 0x037E0430, 0x1F5C2EC2, 0x0C028A35,
    0x4123BB60, 0x02300800, 0x1E1B573B, 0x22FD489C, 0x59A9719A, 0x21B2958D, 0xC02000A1,
    0x56A23D43, 0x2B1B6459, 0x712F7840, 0x7DF02100, 0x01C4825F, 0xB02E1954, 0x017128BD,
    0xFC30F978, 0x65B95CE5, 0x3748F5C2, 0x7303E50C, 0x202976EB, 0x2125CE30, 0x13036195,
    0x511DC5E0, 0x2AB02100, 0x5F211583, 0xAB960312, 0x51C01937, 0x8320F7E0, 0x4AE30405,
    0x7CE01798, 0x1ABC8210, 0x94320231, 0x0405DC24, 0x209DD02A, 0x73D435E1, 0x1D822AC6,
    0x23A08036, 0x20320131, 0x5CFC8E04, 0x00B9E57C, 0x0A4A000A, 0xB440365C, 0xB738A116,
    0x19E7C865, 0xCA001C04, 0x07001116, 0x4C9602F0, 0x03C451CA, 0x20BC202A, 0xB0250081,
    0x5CE49C5D, 0x7BC8A275, 0x55AA0089, 0x11E9424C, 0x91023006, 0xA4F5CAE4, 0x82C1235B,
    0xABCC4C79, 0xFBAB0342, 0x7CE3DE11, 0xA860379E, 0x6102C9BA, 0x04158301, 0x0711AB2E,
    0xC5430340, 0x2712433A, 0x431D8215, 0xF1F771E2, 0xC3401A37, 0xD600C10E, 0x2C1E1F91,
    0xC1D22D63, 0x2059D338, 0xE51360E1, 0x02A6391D, 0x5B956C6C, 0x7035AC6B, 0x02410FAE,
    0x2E4E4616, 0x202F02C2, 0x01002703, 0x2000B00B, 0xC0310300, 0x23D04228, 0x3E2ABC97,
    0x0A1211D5, 0x339AC6CD, 0x0502B03D, 0x901602CD, 0x01700C00, 0xBBBF3223, 0x740174F2,
    0x118BA603, 0x1455900F, 0xB4B22442, 0xBF903F1F, 0x37004A00, 0xE2647E00, 0x109CF900,
    0x44CDD359, 0x10240395, 0x000B5901, 0x1C011003, 0xDCBD8BB0, 0xBE703758, 0x2B006112,
    0x442969F0, 0x01302D2D, 0x11002D30, 0xF0310120, 0x1B6C972D, 0x061193A4, 0xA3C601E0,
    0x82C41F24, 0xD4C7D5E4, 0xC018103C, 0x04125D50, 0x0CB6B029, 0x90240071, 0x02D43E25,
    0x0B1125F6, 0xE53441D3, 0x10EC1202, 0x3A036239, 0x1C066F4D, 0x00B108AF, 0x0FD16D00,
    0xC0350412, 0x010183C4, 0x5F1DE584, 0x900B0262, 0x71DC1000, 0x5FCE802C, 0x45249619,
    0x11247027, 0x82039C4E, 0x2219302D, 0x18D696D9, 0x567C3D57, 0xF004108C, 0xC713D401,
    0x9E5152FD, 0xD00B102D, 0x5CFCC937, 0x16030040, 0x5000D370, 0xC9778201, 0xB0026632,
    0x126D0012, 0xD7E03B45, 0x797F8D63, 0x9040632C, 0x01803403, 0xA6106D27, 0x828402E1,
    0x1C903EDB, 0xA1003119, 0xE9E75C74, 0x17403203, 0x1500FD6A, 0xB0390290, 0x042750D7,
    0xB4007030, 0x2012107D, 0x5B8DDE03, 0x1301F71E, 0x4007B3B0, 0x03902601, 0x39459593,
    0x98708F40, 0xDC903B42, 0x0F106D63, 0xE1BFCAD0, 0x1931C120, 0x1CBF535A, 0x400D00E0,
    0xBF502E01, 0x9720D41C, 0x10382FDC, 0x00E11B86, 0x8ED111B3, 0x202E4793, 0x01E03303,
    0x5700A00D, 0xCD0D0342, 0xDA834403, 0x1C45BD89, 0xC02A0031, 0x03F95DD4, 0x15036042,
    0xF023034E, 0x01100D00, 0x32034029, 0xC03502E0, 0xDFDD2446, 0x24023043, 0xB9B40293,
    0x9680421B, 0x1610BDF9, 0x9D4CC670, 0x287C1D25, 0x4238DCF0, 0x01206CC0, 0x22CCF502,
    0x1DE46CED, 0x4242E0BC, 0x119A9303, 0x54D82C14, 0xFCE331EA, 0x3A2246CE, 0x13AB6033,
    0x871DCA30, 0x10EE41CF, 0xC0E3D024, 0xC211E201, 0xDE301955, 0xFF00710F, 0x723FE543,
    0x11CC63D6, 0xC450B009, 0x184E3BCC, 0x91B01144, 0xA803A6F4, 0x9601E41C, 0x229E26C7,
    0xFE02E1B6, 0x137B116C, 0x5FCE7B1E, 0x264C7041, 0xAD4531A1, 0x011226CC, 0x6401552F,
    0x203C20FE, 0x109E67C9, 0x86036003, 0xC3BCE74E, 0x124CCD55, 0x2D4FB00C, 0xB2AB23FD,
    0x1283BF03, 0xA432A60E, 0x103DCECE, 0x61588F02, 0x9F98DCD7, 0xB01510CE, 0xEB31C0EA,
    0x83E6EAC6, 0xE01211CE, 0xC8638E02, 0x2203A302, 0xA11CE8B0, 0xE5AD6D00, 0x2F1B51F9,
    0xBE857520, 0xEBB7A755, 0xE4D88110, 0x3300E744, 0xCB201BC7, 0xCD00F12A, 0xE2FFCC38,
    0x03903D38, 0x0F12FD59, 0x42442DE0, 0x2781F9CE, 0xD9025402, 0x4CFB255C, 0xED8ACB65,
    0x1D02210F, 0xFDA96176, 0x0411D8C2, 0xAB00B1C8, 0x900211ED, 0x33632931, 0x43C2FC2F,
    0xD02802E0, 0xC17EE000, 0x3002901C, 0xEF0920D0, 0x02AE91C2, 0x05517019, 0x857C2B60,
    0xEF8F0F03, 0x69A9510A, 0xD9E871D7, 0x02DF2602, 0x70031BF2, 0x300D00A3, 0x00A129EC,
    0x3301400B, 0x7BF00320, 0x02FF26F2, 0x0B029342, 0xEDC000F0, 0x00E00412, 0x3302D00B,
    0x602E0300, 0x02FF28F3, 0x0EF3A033, 0xE43C820F, 0xE5703B46, 0xD610CF20, 0xEB864F56,
    0xDD46B44A, 0x51ECC8AC, 0xC981104F, 0x48EAF859, 0x3EE8685D, 0xBF5BCBA0, 0xD6E00B10,
    0x2EB4C603, 0x3CC96BB4, 0xF65CD304, 0xC94E2110, 0x4B78042C, 0xE865DA45, 0x17F704EF,
    0xBDD4D8E1, 0xE70E3F03, 0xB6014368, 0x50405FCC, 0x111F7AF5, 0x3ADD452A, 0x002B0410,
    0x90134BF8, 0xA703FE44, 0xA113F87E, 0x2F3D1653, 0xB63A6F3D, 0xA259C675, 0x114F94EB,
    0x6FD16601, 0xA3C1D623, 0xF9C8CD00, 0x1BF9FE9D, 0x302C0021, 0x0425CFF2, 0xCF3A7F5F,
    0x720EF7D6, 0x113FAAD7, 0x3BFAE6AB, 0x30240410, 0x50227FF0, 0x64402CC9, 0x8113FB7F,
    0x634C5266, 0x01127E9E, 0x2FCBFCB0, 0xFCC00300, 0xD01EEFCC, 0x3FCF001F, 0x00410EFD,
    0x02C8E1F2, 0xDFC4F5A4, 0x04302610, 0x2B535FDA, 0xC0160121, 0x03903A01, 0x35035037,
    0xAFEB0340, 0x02A8EDFE, 0xC3019013, 0x701112EF, 0x03701901, 0x34FE903A, 0x6FECFEC0,
    0x2C0FF803, 0x01C18100, 0x0D058200, 0x64219012, 0x0D8642C7, 0x6048E481, 0x8A44E250,
    0xC45E2D15, 0x46E35198, 0x7E3D1D8E, 0xE4521904, 0x29259248, 0xA3E1C07A, 0x3D1E4AE1,
    0x99302056, 0x1583C051, 0xF9087A33, 0x0F6743C1, 0xEC7B3D9E, 0x07043204, 0x63300D0D,
    0x40A00C96, 0x431E0CC4, 0xC96CE880, 0x1E542A33, 0x98E8843F, 0x44C16251, 0x32572A94,
    0xE8C2C96C, 0xCD65B251, 0x569B459E, 0x0591DAED, 0xEAF8FC60, 0x0085C6F0, 0x80740969,
    0x0F87C411, 0x2EFD711E, 0x6E03E1EC, 0xD802098B, 0xE1A01C5E, 0x7FBE6085, 0xFC10F2FD,
    0xBA83C583, 0xE9084A06, 0x84C7B8FB, 0x7F3D9DC3, 0x745A1D06, 0x822F014C, 0x0421E638,
    0x1AB36185, 0xA1F0FC72, 0x866CF1C3, 0x18C4803F, 0x84C03A18, 0xD2BC401B, 0x8577BD9E,
    0xE3BF1D88, 0x6101E8FE, 0xCDE672F4, 0x3B2F3F9D, 0x1E8F8520, 0xB0E47D8E, 0x0DC1D640,
    0x2FBDC0EA, 0xAB623C14, 0x802A0867, 0x1C0EFF54, 0x7ECC9048, 0x0E50D87F, 0xFA7CFE5D,
    0x7837A1F5, 0x8B7038ED, 0xB00722B1, 0x013D2C80, 0x0060A29F, 0x20D80AB6, 0x9C04B808,
    0x7AD9A5AD, 0xD603C200, 0x42B0A3EC, 0x698C2F0B, 0x727E1A81, 0x3E1C080C, 0x0C242BA8,
    0x3D2A786A, 0xE20C4CA8, 0x52D40205, 0x4F0137A0, 0xBF3DACD4, 0x4300EA7E, 0x31C46F1B,
    0xF0348A47, 0x5C20BF4D, 0x0123E0A0, 0xBD02083E, 0x2A7B6CE0, 0xF0741C07, 0x72200801,
    0x0B868F52, 0x840012CE, 0xA1D36894, 0xC3AF2407, 0x9F080721, 0x1DB641EC, 0x88306A78,
    0x31D45616, 0x9CD7354D, 0x7E1902CF, 0x1FBDD310, 0x23803854, 0x2E307207, 0x5C9AC82E,
    0x52140481, 0x0180E0A8, 0x05410818, 0x41A04614, 0xEABF3CAF, 0xA2110821, 0x1908615B,
    0x084BDAE3, 0xB3F84617, 0x40080403, 0x47430340, 0x49BCE168, 0x8721EAE3, 0x33642611,
    0x3D575555, 0x8C22052C, 0x12876F74, 0x0088BA22, 0x8BFC0211, 0x805E8787, 0x29540140,
    0x12814032, 0xD46D8062, 0x41C07C86, 0x60369882, 0x5CA7B512, 0x340140D0, 0x03400A2B,
    0x420B68CC, 0xE558F187, 0x4B6F5BB6, 0x4482401A, 0x8429CC1B, 0x40122802, 0x73D81B03,
    0x140CAE0C, 0x1581C900, 0x878EB302, 0x51081815, 0xE86008C8, 0x48BE2FEE, 0x0A22F6D8,
    0x3AD05866, 0xEFE83820, 0x6617855B, 0x460422D8, 0x2041AC10, 0xCD00F06A, 0x80C00A00,
    0x05FD30E0, 0x477804A2, 0x5CCAE082, 0xB28C907F, 0x20B0028E, 0x821B45AF, 0x2984860C,
    0x1682200A, 0x52D06B90, 0x39C61ACE, 0x80299D67, 0x7F07BCE1, 0x1003B0F8, 0xAC195A5A,
    0xCF886420, 0xD8840FA4, 0x5CD82FF8, 0x8C0360E0, 0xA5210AEE, 0x21F3ACD8, 0xE02A8CC8,
    0x3CBFE0B7, 0x9D57E10C, 0xDB9B26C7, 0xD2806E11, 0xD5D821D9, 0xCE14876F, 0x19026B25,
    0xD1ABFED8, 0x21B8681F, 0x90341A87, 0x72138260, 0x1A86C1C8, 0x65963414, 0xF3A84E21,
    0x202E0122, 0x7E86E8B8, 0xB2818172, 0x559CA727, 0x97A06204, 0x8A749DB6, 0xD007A9EB,
    0xDA4C8FFA, 0x6492D2A4, 0x2E02A2BE, 0x6F141036, 0x39448440, 0x1C87ED44, 0x76BCA832,
    0x609CD7DB, 0x6B819F06, 0x4546C649, 0xFC2D35A0, 0x779066BC, 0xC0306620, 0x70220122,
    0xBF5837C1, 0xDBEC21D6, 0xC6DEA7A7, 0x9C2ED16A, 0xA8629DD4, 0x440333A0, 0xE2CE2E40,
    0x0361DDFD, 0x60522903, 0x13041B04, 0x4C1F6EBF, 0xF97ABE08, 0x008FA7E7, 0x9128720C,
    0x08515D77, 0x6208AD98, 0x18E38210, 0x94211904, 0x39137920, 0xA06A06C0, 0x06CDBA03,
    0x40382836, 0x4137E8BE, 0x00C7360A, 0x0341C81E, 0x1983D383, 0x7001C08C, 0x2A010B5B,
    0x8CC6A6F0, 0xE955076F, 0xF01E0B41, 0x69B806AB, 0x0E039C5D, 0x00E052C9, 0x86D05609,
    0x020D0437, 0xECBF803E, 0x3252A4B1, 0x0403C158, 0xC00916C5, 0x43C435E0, 0x937C42CD,
    0x06E41403, 0xC0380100, 0x02C04601, 0x5DAF3DD3, 0x0E1A492E, 0xCEC5B8B5, 0x024985DC,
    0x7296495C, 0x060F1922, 0x19646C40, 0xA04A0700, 0xCC910812, 0x8DB46F8D, 0xBB404083,
    0x00800E27, 0xD101201F, 0xC11A8890, 0x5C7240A4, 0x43206404, 0x94C58158, 0x928D3BF0,
    0x0034F70D, 0x9140B342, 0x41601C00, 0x02504E0A, 0x04D2524A, 0x0441527F, 0x09A68002,
    0x3D042060, 0x8F1ECDE8, 0x20100374, 0x44828CE0, 0x32492A65, 0x60940480, 0xE1EA4507,
    0x04228057, 0x06A0C81A, 0x04807813, 0x0496A94E, 0x2801603C, 0x6E0C01B0, 0x69013A72,
    0x88300809, 0xB95501C0, 0x449A664C, 0x81881A01, 0x233962AE, 0x52C9349E, 0x0AC1782B,
    0x0500801A, 0xAB71202C, 0x1202805C, 0xC00F8070, 0x81A99220, 0xD78A548D, 0x208C1B24,
    0x6784CD02, 0x80F24B3C, 0x7F24A411, 0xB16313C5, 0x1C8414B4, 0x23044088, 0x4C094120,
    0x14130270, 0x400300C5, 0x200C0168, 0xD4101181, 0xC1182504, 0x02E04008, 0x74A5F105,
    0x930D9C60, 0x3A02B272, 0x1FA3D3CA, 0x2E0048FD, 0x901C0260, 0x6C2669AC, 0xE49CC908,
    0x079C20A4, 0x41B83807, 0x83BA5F4C, 0x49F4ACF5, 0xCB2943E1, 0x1483F360, 0x3500A088,
    0x85506904, 0x2C04117A, 0x44000560, 0xCA73158E, 0x70C0AA32, 0x89E27AA9, 0x03006E10,
    0x9760240B, 0x566AC543, 0x0880320B, 0x4F774BA8, 0xC553E699, 0xF8BE90BA, 0xB0360840,
    0xF0220A01, 0xD5B6AD31, 0xC0C117AD, 0x44A06806, 0xA7358E51, 0x0EE25A4C, 0xF881C044,
    0x7FAFD5BD, 0x04008895, 0x84130120, 0xC15535E0, 0xA3D35DA9, 0x0B14C803, 0x41202808,
    0x5807CEC5, 0x227656CA, 0x04C04008, 0x1902A060, 0xA2A92DAC, 0x7B592C53, 0xEC21A4D2,
    0x182F0540, 0x00160181, 0xD6B6CB54, 0x002904B5, 0xCB60292E, 0x0840D018, 0x4E696842,
    0xDE5BBA9A, 0x41420552, 0x7410C208, 0x90198300, 0xF81301D2, 0xBB956BE3, 0x406D5ADC,
    0x80B01803, 0x26106E06, 0x06F4C125, 0x5A2EC568, 0xD925DA65, 0x1504C0F4, 0x380640C0,
    0x96E644E0, 0x111ABCD7, 0xBB054200, 0x77B6F65E, 0xEC9D08BD, 0x5F3BE579, 0xBED7D6FA,
    0x7E6FC5F7, 0xFE5FBBF5, 0xFFBFD7F6, 0x05807005, 0x1702603C, 0x4607C0D8, 0xBC158270,
    0xD8370660, 0x48A60FC1, 0x00000040, 0x00000000

  EW_BITMAP_CLUT_EMPTY( WasherBgDrain, Default )

  EW_BITMAPS_TABLE( WasherBgDrain )
    EW_BITMAP( WasherBgDrain, Default )
EW_END_OF_BITMAP_RES( WasherBgDrain )

/* Table with links to derived variants of the bitmap resource : 'Washer::BgDrain' */
EW_RES_WITHOUT_VARIANTS( WasherBgDrain )

/* This is a bitmap resource. */
EW_DEFINE_BITMAP_RES( WasherBgEasyCare )
  EW_BITMAP_FRAMES( WasherBgEasyCare, Default, EW_DRIVER_VARIANT_ALPHA8, 480, 272, 0 )
    EW_BITMAP_FRAME( 0, 0, 0, 0, 0x00000000, 0x00000000 )

  EW_BITMAP_PIXEL( WasherBgEasyCare, Default )                  /* ratio 7.77 % */
    0x1C080100, 0xC1A0B048, 0x2A130883, 0xA1B0C85C, 0x231087C3, 0xB1489C4A, 0x188BC5A2,
    0xC8DC6A33, 0x8FC7A3B1, 0x1C8A4320, 0xC9A4B249, 0xAA532893, 0xA5B2C95C, 0x633097CB,
    0xB3499CCA, 0x389BCDA6, 0xC9DCEA73, 0x9FCFA7B3, 0x1D0A8340, 0xD1A8B44A, 0x2A9348A3,
    0xA9B4CA5D, 0xA350A7D3, 0xB54A9D4A, 0x58ABD5AA, 0x0058062D, 0x0783C201, 0x28381A0E,
    0x8CC6A361, 0xC8623219, 0x40812180, 0x02068DD6, 0x574B9DBC, 0x080480A7, 0x80581810,
    0x150B05C2, 0x18F05428, 0x90082422, 0x2B123E1F, 0x4803EC5E, 0x2B750D0D, 0x0321F02E,
    0x048C0143, 0xCCDE46E4, 0x0180A139, 0x20700402, 0x8B43C221, 0xEC7A3F20, 0x75A3F1D8,
    0x743B1F6B, 0xBB4D58E8, 0x3D1D6DB6, 0x0CE87484, 0x25130431, 0xC0A08449, 0x806159A0,
    0x8C2A03D0, 0x45426120, 0xA3BC0E0F, 0xA1C07E6F, 0x381E8A02, 0x0C30F86C, 0xEFEDB544,
    0xE6D3C3E0, 0x748163D1, 0x18903D86, 0x09647231, 0x2A251F12, 0xE068180C, 0x1A0D0601,
    0x61F8E856, 0xFF92C8D8, 0xC321304A, 0x05520479, 0xC0370896, 0xDD10C3A0, 0x78A0E0F1,
    0x9DF84610, 0x88142F0F, 0x1C450490, 0x4A120461, 0x12047120, 0xC3B1244B, 0xE0E4380D,
    0xFC4A1103, 0x2C120497, 0x87A2B122, 0xA0312846, 0x55263485, 0xB02A0380, 0x3D0F9DB0,
    0x8483C0F4, 0x63F839E2, 0x11044078, 0xD4401084, 0x3503DE46, 0x12C2B412, 0x01711046,
    0xB1143C07, 0x261F11C4, 0xEB8C25A1, 0x119FF8A5, 0x4420F23C, 0x6934338C, 0x9C0E50A6,
    0x3F624380, 0x6C9DF900, 0x272101AD, 0x30E43A10, 0x0C3E0F5B, 0x23101AB9, 0x07C1E074,
    0x43B9E824, 0xD65C330F, 0xF8440224, 0x1140C2D7, 0x7F840098, 0xDEB7AE1A, 0xC09C4311,
    0xB8159FC1, 0xC0084005, 0x99E9A0ED, 0x8124E6A0, 0x1A08418E, 0xF23D62E1, 0x230983E7,
    0x0A428098, 0x40302825, 0x201AB401, 0xB26D0C40, 0x0840C096, 0x102820FC, 0x616A7C34,
    0x69604909, 0x48024141, 0x491002D0, 0x11A92874, 0x1F305C2F, 0x89401541, 0x66A10444,
    0x2F02535B, 0x8F6116B4, 0x44310278, 0x20B82C0F, 0x240F0B43, 0x0B0300B0, 0x03D09714,
    0x43E0EDB0, 0x9079040A, 0xCC3F6D2B, 0x368D2BB0, 0x4243B874, 0xC3206006, 0x97AA210F,
    0xC84012C4, 0x0201C150, 0x055FEB55, 0x52FC46DA, 0x90E42100, 0x19E47864, 0x13598336,
    0x93014048, 0xC3B01D15, 0x3C31D88F, 0xAEF70D50, 0xE60E83F6, 0x7A811815, 0x42910847,
    0x9C000203, 0x84400D41, 0x3D12E598, 0x050130C0, 0xB1012E1A, 0x54A744C4, 0x98420A80,
    0x490F5ABA, 0x0642B0F6, 0xD19BB81A, 0x70FF1707, 0xD4064102, 0x3E6D1DE0, 0xCD4230E4,
    0x80700926, 0xA0B138B0, 0xCE1DA4C4, 0x0A030260, 0x0D01B01D, 0x61B12656, 0x09743E87,
    0x9378D159, 0xE08F01A4, 0x094336B5, 0x12068412, 0xB8FC3801, 0xF0144124, 0x2F1064AD,
    0x0112404C, 0x4410BC1C, 0x80701B0D, 0x00024E00, 0x06871EA1, 0x0D04512B, 0x50A0181F,
    0x10D02403, 0x25EB7B29, 0xACDE6151, 0x07C0347B, 0x83E84EBE, 0x0D900F0B, 0x2C430692,
    0x02C983ED, 0xBC43A061, 0x031625B5, 0xD47AD305, 0x8DDD0E81, 0x2E9D03FC, 0x07D36040,
    0x82611F72, 0x78AF040B, 0xD041C1C4, 0x08E5C180, 0xB37D1089, 0xFAD0F79B, 0x70391AF8,
    0x0E4AEC43, 0x280382D1, 0xBC42D00D, 0x2EE0A83E, 0x977ECB02, 0x342C0CF1, 0x07466860,
    0xD6C4107C, 0x0C4C69E3, 0x97BC5026, 0xC506A008, 0x0E65C1EA, 0x08198180, 0x72C50981,
    0xF07E12D1, 0x4EF00802, 0x41C00120, 0x02C086B1, 0x4560D009, 0x089F203E, 0x1E00E22B,
    0x395F0F00, 0x4D0140D8, 0x01F40092, 0xC3600581, 0x4800D220, 0x40C9709B, 0xE1599605,
    0x00600243, 0x62E0EC0D, 0x0C8ED9E2, 0x96C3102E, 0x4B3D4030, 0x14414128, 0x101901B0,
    0x522E6741, 0x00540FC2, 0xE0516981, 0x0DD84B6C, 0xC2005400, 0x87717A11, 0xBCA1A43E,
    0x9680A062, 0x3F41E04C, 0x03114174, 0x001B81A0, 0xC34C36F1, 0x303A0C53, 0x40063282,
    0x63B9066A, 0x27804806, 0x77E781A5, 0x06C1B040, 0x171288F0, 0x4408E128, 0x16419900,
    0x18198220, 0x337359A1, 0xD04E1002, 0xA11E2E00, 0xC003EC08, 0x84245805, 0x93F17D96,
    0xB7402907, 0x2083D54C, 0x17260064, 0x620FDF40, 0x208236C0, 0xF1870460, 0x20810D63,
    0x60D81C84, 0x40B03307, 0x01702C05, 0x02F2F80C, 0x08809816, 0x379DA07A, 0x7979678E,
    0x70D30F02, 0x95DB01B0, 0x583B0084, 0x22160DD1, 0xA0980500, 0xE089C006, 0x1EA08A12,
    0x01240D19, 0x078249EC, 0x824E4940, 0x4106A01C, 0x6A0FCEF8, 0x7498AC70, 0xF2F29920,
    0x89160881, 0x4A941E02, 0x1211AB96, 0x24748AD3, 0x30C61421, 0xD2E31279, 0x0601807E,
    0xE807A0B0, 0x6F3D8DB3, 0x8E1D01E0, 0x62500304, 0x2218DDC2, 0x80980700, 0x52C2CD07,
    0x90271CEA, 0x048D0404, 0x02672CE5, 0xDA9B37CE, 0x8404E104, 0x0606496C, 0xD0204F95,
    0x000A20CE, 0xE98CE141, 0xE0F12026, 0x1A183907, 0x82801C00, 0x698785C2, 0x1140A036,
    0x2441A247, 0x02223028, 0xD6A380A0, 0x141C8483, 0x01FE9C0F, 0xB93F4869, 0x709C1B80,
    0xC1304264, 0x3E70144D, 0x0440ED7C, 0x044833A2, 0xC41B304A, 0x7FA6B494, 0x40CAC1F4,
    0x5C139070, 0x9D0836D5, 0x924A0601, 0x411C2100, 0x48A82E09, 0x104A3E03, 0x89488268,
    0x9522F553, 0x719B0868, 0x360104E2, 0x3742E200, 0x20029080, 0x51A839A0, 0x1ACE0F0C,
    0x70981D21, 0xC100303B, 0x82983105, 0x9E14DD8B, 0x0D6B51B6, 0x8DCCE032, 0x486CE08C,
    0x0C44A450, 0x1406C889, 0xC21D04E4, 0x4B034381, 0xD5B80134, 0xE3204054, 0x01900A4E,
    0x7B540D6F, 0x02A8ADA5, 0xC1BF804E, 0xE457C618, 0x108F9701, 0xC41B4B4A, 0x700C0440,
    0x957004E6, 0xC0541ECF, 0x82003C03, 0x83794B1F, 0x238FEC0D, 0x8B81F005, 0x87D4306A,
    0x49734024, 0x48418188, 0x7022A500, 0x2379B68F, 0x0A680BC0, 0xD6CC1804, 0xC2153C26,
    0x83494AD6, 0xBEE02C11, 0x05C08102, 0x0E012028, 0x080709D8, 0x1A0EF046, 0xEC0B0137,
    0xF81E942B, 0xAB0D4B5F, 0xACA54080, 0x40854036, 0x01222F79, 0x22A07D83, 0x4EA8881C,
    0xF65EC207, 0x44BE183C, 0x6ECE002B, 0xEB0DD2E3, 0xA9A981A4, 0xE05A76E1, 0x846694DD,
    0x62053200, 0x1C40740F, 0xAD45F082, 0x0529753F, 0x0E832238, 0x0DC5C101, 0x7C8B01D9,
    0x7C825610, 0x38476CE0, 0x65B58A31, 0x477E3700, 0xB1B02C08, 0xC6E0305D, 0x478EFDAD,
    0x2B40D026, 0x10009237, 0x494F5764, 0x4F12F31A, 0x2E814260, 0xBC99066F, 0xAAEC0308,
    0x04541604, 0x9EB84402, 0x00D20E0A, 0xC8611EBB, 0x02588E53, 0x7B617070, 0x3CCB40A2,
    0x82DBC021, 0x06135A00, 0x38370721, 0xF0260401, 0x4020885D, 0x01B01902, 0x6329D20E,
    0x6DB6B818, 0x7861F824, 0x35027312, 0xD604244F, 0x544516C2, 0x0F532D60, 0x58493D24,
    0xC5B5A041, 0xB5C1DF80, 0xD1B56C07, 0x26205803, 0x47A78D1F, 0x0B418A45, 0x05828062,
    0xC8018028, 0x92025766, 0x68042ECD, 0x10345CE0, 0x64F46A42, 0x043E14CF, 0x70BBB001,
    0x8273533E, 0xBC44434A, 0xC841B04A, 0x84830CE8, 0xB3467B80, 0x5803533E, 0x001CBC1A,
    0x780C299A, 0x56574DF6, 0x0628DC1B, 0x1233CB4F, 0x9879F86C, 0x6B8E2954, 0x6964103F,
    0x1D00E215, 0x364F74D1, 0x0FA200E8, 0x250C8132, 0x0113AA41, 0x99C4DC81, 0x3378F490,
    0x807A66DD, 0xAF936D09, 0x00453AF7, 0x67410806, 0xCA4F8DF1, 0x886306CA, 0x2CD46559,
    0x28C44952, 0x503707F3, 0x705A43F5, 0x3C782236, 0xC244D822, 0x831BEE0F, 0xE3099566,
    0xBFC09A35, 0x268304F7, 0x0900254B, 0x700AD1C0, 0x28C40430, 0xF2E05BF7, 0xE0701081,
    0x60201182, 0x8AD910E0, 0x1DFC240B, 0xEB00BD3C, 0x7F822CAE, 0x97914D64, 0x09AB48C5,
    0xA59180D1, 0x58E8F40C, 0x71B57920, 0x92A1D829, 0xF4580900, 0xC1883406, 0x4FF9FA0C,
    0x41810923, 0x044B3169, 0x8CF6C022, 0x62650724, 0x3E0E29BC, 0x780E10CC, 0x95130908,
    0x96CE0A48, 0xC4228E04, 0x77784A61, 0x0193A3DB, 0x0806DAED, 0x00CE8E87, 0xFC01B030,
    0x50F4E064, 0x000600DB, 0xEC0A91EC, 0x8508695D, 0xD214F381, 0x8456A32F, 0x11704100,
    0x30E2160E, 0x3A5E6DA1, 0x49B4E01C, 0x50FBFB01, 0x7D5E4082, 0xBC0841DB, 0xFB0E902D,
    0x79150427, 0x98B523F2, 0xBEFBE710, 0x81019CF8, 0x041369F0, 0x20FF6388, 0x10012806,
    0x2183BADE, 0x2599C0C8, 0x3E112438, 0xC819113D, 0xC78508CD, 0x64380F1A, 0x65D3EFD8,
    0x0EF84204, 0x7F6D7210, 0x01A00484, 0x1C79E031, 0x363D0367, 0x7B900310, 0x1373F04A,
    0xB37200D1, 0x10C67B04, 0xE2048645, 0x616F7FD6, 0x71C3B902, 0xFE8147FC, 0x57893BE7,
    0x3D12F529, 0x2C11179A, 0x30462C50, 0x81110962, 0x5781A3E2, 0x40420241, 0x7F553759,
    0x0110982A, 0x73490250, 0x2F40411B, 0xD1407000, 0x301C02B3, 0x00610677, 0x0D7B65E2,
    0x14218111, 0x02115483, 0x8C1E44C6, 0x410C8465, 0x65758901, 0xEA00A58C, 0xC04925D1,
    0x10C74627, 0x4604C016, 0xD1D004C0, 0x22B02710, 0x5084C829, 0x35A001C1, 0x79104032,
    0x30300862, 0xA3235090, 0x45C00603, 0x5821D48F, 0x503C04D2, 0x03310E46, 0x0E7EB2C5,
    0x52580101, 0x86982104, 0x68015149, 0x04F335C4, 0x00110C88, 0xF2883018, 0x264A0302,
    0x03B01F81, 0x4A372044, 0xB8760400, 0x21900F10, 0x0D10F578, 0x103C39B0, 0x14788667,
    0x9F23D013, 0xA89F7DE7, 0x86501110, 0x4B1EB03F, 0x500B4ED0, 0x03A23164, 0x250007AC,
    0x20212D60, 0x00070B00, 0x9403D005, 0x50230467, 0x4A91468A, 0xC203A282, 0xA10E8BE1,
    0x03A32902, 0x2703F7B9, 0x42314866, 0x0061087D, 0x44291040, 0x14290430, 0x03400A8B,
    0x4A25804C, 0x464802F0, 0x0091388C, 0x421B61E4, 0xC8DE3F20, 0x03900710, 0xE8518400,
    0xF0071026, 0x2FF22C03, 0x5301510A, 0xA21F22C8, 0x7B303A04, 0xD70291C6, 0x603B2313,
    0x1398E582, 0x3B7DB013, 0xD8FF5590, 0x4C601710, 0x05676044, 0x421E0211, 0x10689E04,
    0x45367034, 0x004303D0, 0x04748F41, 0x1010B84B, 0xD25003D0, 0x90535F2C, 0xC150713A,
    0xA9208853, 0x4272B710, 0x50106453, 0x87D004A5, 0x22C2BD10, 0x1A00E3E2, 0x85A80310,
    0x7E08FE04, 0x368DA4D8, 0x492549E0, 0x27A03913, 0x0C93D414, 0xF1B58821, 0x10528B03,
    0xA404B550, 0x70301058, 0x67104348, 0x48372026, 0x76AE0410, 0x02000210, 0x42713045,
    0x49420120, 0x27A03713, 0xB103503E, 0x595F93D8, 0x10273294, 0x4B1ED8D0, 0x157B1049,
    0x10294723, 0x17367024, 0x671A10D7, 0x0260462D, 0x2495D83E, 0xC6ED93F1, 0x10697A78,
    0x5C82D01D, 0x18EC96F3, 0x10B96A04, 0x4725002F, 0x202F93C0, 0x10987F97, 0x58793004,
    0xC03904C2, 0x12A97F93, 0x3F5707DA, 0x89977B20, 0x35B03835, 0x49746593, 0xF10496B9,
    0x67567900, 0x7704363E, 0xE1110355, 0x71304301, 0x9D830044, 0x60091279, 0x03B4EA22,
    0xDE97901F, 0x040001F8, 0x51D92D04, 0x0B8BD8AA, 0xE49741F1, 0x1EC79389, 0x0810D967,
    0x74870370, 0x8B702B57, 0x0C11C9B3, 0x150A55D0, 0x7CC03204, 0x4A5E793D, 0x064D0392,
    0x86821F4E, 0xDA012107, 0x10007C48, 0x9C28DA01, 0x29003110, 0xD48F22C0, 0x9D198F03,
    0xAF006121, 0xF03A2137, 0x02A97F9B, 0x5C03F46F, 0x82C41029, 0x9D804004, 0x43939105,
    0x50008950, 0x1118617B, 0x57043014, 0x070A2C52, 0x68A1269F, 0x4250A7C8, 0x58DD0250,
    0x59600F8E, 0x026E52F8, 0xE3740331, 0x80D01410, 0xDE10280F, 0x17EC2943, 0x03000A11,
    0x325772C5, 0x1A0E7370, 0x02700812, 0x354EA5FA, 0xE95D7960, 0x0384F953, 0xE2008465,
    0xD3570495, 0xA0200110, 0x3151E5EF, 0xE1128192, 0x4529EC01, 0x24A2D4ED, 0x19D401F1,
    0xA4903F3C, 0xDB018942, 0xE56C0417, 0x93704C30, 0x1E018108, 0x8A2104A2, 0x94A76200,
    0x3F015117, 0x00299350, 0x116A4A9D, 0x0A2A59F2, 0x559B2AB5, 0x99F00890, 0x000391E3,
    0xC1EF7EE0, 0x40810AA2, 0x2B60F953, 0x503621D0, 0x00610CA1, 0xED8D902F, 0x79BA0331,
    0x004114A6, 0x9F8E101A, 0x0A040397, 0x42702A92, 0x1601E03D, 0x310FA1A7, 0x02980D01,
    0xED023360, 0x1111A765, 0x44861100, 0x86857037, 0xC00F11EA, 0x03A4EA1A, 0x0B8FFA8D,
    0x21833290, 0xA9D79576, 0x38713039, 0x00223970, 0x11A7F025, 0xAF39A00A, 0x9AA3A008,
    0x6DA58F11, 0x6601635D, 0x3004846A, 0x1FB27A03, 0x125B248F, 0x13670181, 0x01604123,
    0x4721E01B, 0x2114AA90, 0x04B3A702, 0xBDAC3035, 0xAA31A45A, 0x02E03F24, 0x24862963,
    0xA0459020, 0x9E997E04, 0x4754C4D1, 0x79AA0350, 0x115A3404, 0x87AD2014, 0xB85D2314,
    0x015120AD, 0xD66DA034, 0xA880ABC9, 0x1B497C00, 0x8503E043, 0xFAD1104A, 0x0487EF2C,
    0x0C114AE7, 0x92947B90, 0x22B03A01, 0xF6AA2040, 0xB00311BA, 0x6F527402, 0x1203403F,
    0x817810DB, 0x1AB9657D, 0x9D8CE8C2, 0xC2CF64AA, 0x1129B254, 0x1F4582BD, 0xB25001D6,
    0xB1392404, 0xEA34811F, 0x6B1B0364, 0xA580331C, 0xF90166B3, 0x43AB35C7, 0xACD01911,
    0x1221A4DC, 0x11C6AFC8, 0x90A1FE91, 0x2C039003, 0x0B4403C2, 0x001114B3, 0xC18A2026,
    0x97F10373, 0x04702610, 0x0E681B38, 0x54C73230, 0x545112A2, 0xED22B7CA, 0x010FB5E9,
    0x1C52645B, 0x5521BA9A, 0xD118B4EB, 0x5A132800, 0x07955038, 0xC02B0011, 0x76D9C968,
    0x421B45D4, 0x01129840, 0x0182583D, 0x43794901, 0xDADA0250, 0x04279401, 0x79011A04,
    0xCB220486, 0x3035E0B6, 0x0F03B5A1, 0xC02C1089, 0x7D876468, 0x83427017, 0x91109961,
    0x03C04896, 0x31008003, 0x104CA820, 0x0109BA03, 0xF8044B41, 0xAA3B1038, 0x11FB8E90,
    0x17032004, 0xB03C435B, 0x01A107BA, 0xF694626D, 0x46F542D7, 0x11557904, 0x5D972020,
    0x18910248, 0xA5003E23, 0x1367D109, 0x0000B8D7, 0xBAF5EA6E, 0x5B003120, 0x99EE50A7,
    0x6BE01410, 0xE27FD4AB, 0x549D9457, 0x7B900511, 0x6003A049, 0xB03C00C3, 0x024048A0,
    0x1C001758, 0x80281FEA, 0xBD06E710, 0x95002121, 0x703F50AB, 0x01810701, 0xE803E3E8,
    0x701B7D89, 0xB9704855, 0xA7B2D6A7, 0x89349684, 0x03A04B25, 0x2E103B64, 0x5B3DB2D0,
    0xA3B00310, 0x1EBF0A21, 0x20290011, 0x9195D990, 0x6A014102, 0xDA9C4F9A, 0x1ABAFF76,
    0x0CB35247, 0x47BAA3A1, 0x01C00110, 0x43231231, 0xA62598F0, 0x7F103D04, 0xEF95201E,
    0x611DC12A, 0x90390202, 0x826837D4, 0x8B6B03E2, 0x6181D771, 0x1276804A, 0x902C0111,
    0x9C949721, 0xA8038010, 0x202D0475, 0x2580162C, 0x02AD4953, 0xD0435AC1, 0x11CC34A6,
    0x3DC16023, 0x300536C0, 0x8C242703, 0x1476DC52, 0x41B49820, 0x1115EE04, 0x1C037016,
    0x5A602922, 0x02700110, 0x3A85B1EE, 0xB00F4990, 0xBF621F21, 0x38341797, 0x0121C578,
    0x0345703B, 0x70AF9010, 0x3AE102F5, 0x03200365, 0x4A04065E, 0x39CABED0, 0x4114D102,
    0x08A5C2CE, 0xF22801C1, 0x9B904548, 0x4448FC4A, 0xC009104A, 0xB77047B0, 0x9211DC7C,
    0x0462BF4A, 0x7DFB0904, 0x486183D4, 0xD1C6B880, 0x1EEB9500, 0x2E9BE8F5, 0x803E2C50,
    0x03500B9D, 0x92546A82, 0xC107BBF8, 0xBFB79455, 0x75120CA1, 0xF041240B, 0x0117F6B2,
    0xC0915434, 0x6001103C, 0x57703201, 0x3B0484DD, 0xC1F301C0, 0x0410475E, 0x02102C56,
    0xD21B0280, 0xB12CD2CD, 0xDC027007, 0xA0361FE4, 0x112CC1AD, 0xF4036006, 0xA7DD2106,
    0x5269DA82, 0x6E59B953, 0x75A8C6A3, 0x01403348, 0x43CD61C5, 0x1601C1D0, 0x488AB604,
    0x1B01D030, 0xC4BD0170, 0x22802D01, 0xE7C2293A, 0x200511AC, 0x1E0C1B03, 0xFC03703C,
    0x902679BC, 0x23103D32, 0x2500D9BF, 0x921ECFE0, 0x1C204C04, 0x9A54300A, 0xCCB5047A,
    0x82300910, 0x1D307AF3, 0xA1BF22E2, 0x0290468D, 0x16D0BC85, 0x92629911, 0x4356311A,
    0x5482A813, 0xF0441B63, 0x01100A1E, 0x5823102F, 0xD03C2CD2, 0x83AA7601, 0x3187BC92,
    0x04100440, 0xD1E8F4C5, 0xAA032046, 0xE124D325, 0x02BD0200, 0xA003301B, 0x284603A9,
    0x27BA3600, 0xF38EE1EC, 0x8019CF6A, 0x21A00A64, 0x0D9E404C, 0xB01D00C1, 0x1854FF75,
    0xB6020035, 0xC129D54B, 0x03D2F702, 0x3181A8EB, 0x8D1765E0, 0x04321C3A, 0x06C33029,
    0xB4972C41, 0x0031129F, 0x88003004, 0x4CE6003D, 0x00F11CD7, 0xEF03F400, 0x20157DF9,
    0x21B28990, 0x1302503C, 0x8005102D, 0xD8E1EF51, 0x67043881, 0x6D820415, 0x6F591B7F,
    0x114DD043, 0x98AE1C6C, 0x148DA045, 0x3A440013, 0xABC80440, 0x38B2DD81, 0x0CA98892,
    0x748F5A71, 0xDAFD3103, 0x35864137, 0x6CD90354, 0x12C6C821, 0x26A719BC, 0x23060420,
    0x008109D9, 0x46330033, 0x1DC0B9C0, 0x03FC1F14, 0x212A0BAE, 0xA12AC8C0, 0x021526A3,
    0x1F44F00B, 0xD0390462, 0x19A01001, 0x2A016005, 0x025AC950, 0x141DD59E, 0xDA99BD5F,
    0xF12C1AB2, 0x520C20CE, 0xD603600E, 0xA0472203, 0x03E60803, 0x089CD04A, 0xCDEFB593,
    0x35BA3F13, 0x67DDC03E, 0x526B0072, 0x74811FDB, 0x3900A007, 0x924A6BC2, 0x33AA89A4,
    0x8FE012CD, 0x502B85A7, 0x13DE05DC, 0x9B24ABFD, 0x60221D2D, 0x11BCC624, 0x230061A1,
    0xA28E0210, 0xAAC56A1A, 0xA657D4D3, 0x639C7621, 0x03B04504, 0x1FB72025, 0x5C5913FE,
    0x1E7C3D94, 0x34279029, 0x4110B4D0, 0x69B6BCD0, 0xD82107E3, 0x8006B73D, 0x02701C00,
    0xBF30B020, 0x0137E3BD, 0x041DB202, 0xEF204C61, 0x21188CAC, 0x01801000, 0xFABB2035,
    0x364188A5, 0x150E54B9, 0x0802D002, 0x82A0A3DE, 0x2AB1ABCC, 0x09003114, 0xF02E0190,
    0xB526D202, 0x8723F212, 0xEE67DA51, 0xC6400A14, 0x35C9B43F, 0xD32A86B2, 0x00210DC0,
    0x7502400B, 0x403E508B, 0x3CBE4A59, 0x6602923D, 0xE14FE7DE, 0x9A4B7ADD, 0x2F001205,
    0x003E3C00, 0x014107CA, 0x3B03701C, 0x0E8E68C0, 0x0416F71E, 0x4F2AD03A, 0x4A7E0043,
    0x01014AE9, 0xA18F76D4, 0xC5269012, 0x00C102E7, 0xF71DA022, 0x65C92104, 0x03002D18,
    0x3F6C7028, 0x414FEAEE, 0xD3934BE8, 0x185BD267, 0x6105A946, 0x03001E00, 0x186BE5D9,
    0x14B55373, 0xEC478369, 0xF9CA919C, 0x4D8D03B4, 0xA71B5C17, 0x27549405, 0x272E0390,
    0x03F1FB1E, 0x1B02326B, 0xFED8E3A0, 0x43523A16, 0x02235DAB, 0xF5B80360, 0xAF90189B,
    0x4C4C7707, 0x97CB0263, 0x1D1EED19, 0x4046F012, 0xB266D860, 0x0295A1D3, 0xEA01B011,
    0x434B502C, 0x02E03791, 0xDD008014, 0x3152EFFE, 0x8C2525C6, 0x25204D93, 0xD2F26DA0,
    0x1E4F0C74, 0xE902B18E, 0x2234F142, 0xF0332901, 0xE1BBC2A0, 0xC34BEA51, 0xF130153C,
    0x30156F24, 0xDC00E080, 0xF0C00924, 0x34188D10, 0x18B601D0, 0xA18266F3, 0x4DECC32A,
    0xDB91D762, 0x02624975, 0x3EB0300A, 0xC35A175F, 0x266C7B35, 0xD932902D, 0xB20E6D33,
    0x0220381D, 0xBCF4BE23, 0x98E90191, 0x42519CF5, 0x1156C960, 0xAEA288C0, 0xE4401402,
    0x3D1BCF5A, 0x30401B4E, 0xC6319DEC, 0x4320B1B4, 0x9F744773, 0xF062DAF6, 0xD2E1E1B4,
    0x59A002B1, 0x378F7699, 0x3F594007, 0x7216E820, 0xF7FF42DD, 0x5300A2DA, 0x4216E27A,
    0x6B888301, 0xE0345F88, 0x59F67718, 0x27BF6B23, 0x04F91F6E, 0xD1E3A8F2, 0x001267A7,
    0x351E3E6A, 0x2F9AF680, 0x4F9DB71D, 0x7F267A72, 0x59BE567E, 0x3EF312FA, 0x4D80A435,
    0x79BD0122, 0x24DFAECA, 0x04771C1A, 0xC2F7E83F, 0xFB7CE503, 0x20FB92D9, 0x1E04043B,
    0x4F9EEF1D, 0xA1FC0D5C, 0xEFBD01B2, 0xF01266F7, 0xCA573945, 0xCF402A0F, 0x741DD91A,
    0x0E20B7C2, 0xF205FD3E, 0xBCF1ACB1, 0x435FBF50, 0x3266FDCE, 0x283EDF01, 0x86266C03,
    0xC266FE4F, 0x267E3E82, 0xF2C1F00E, 0x124DFEC4, 0xC3C32902, 0xEFAE3267, 0x8216FF4F,
    0x03F28200, 0xC0024100, 0x0D058240, 0x5098441E, 0x0D8642E1, 0x58343E1D, 0x8A0EC7C2,
    0x8020783B, 0x46E35198, 0x7E3D1D8E, 0xE4521904, 0x4D259248, 0xA4004C86, 0x23208EE2,
    0x9984BE4E, 0x204AE531, 0xC4DE6220, 0x4EE75399, 0x7E7D3D9E, 0x2563D0BC, 0x8D3F0A8F,
    0xB15A14A2, 0x4DA651E5, 0x1A853E9D, 0x1F8CA475, 0x90DC7915, 0x8AA1159A, 0x1AAF1489,
    0xEC561AD0, 0x3F65B258, 0x316AE8B6, 0x2EA95987, 0x11E57AAA, 0xBA5CED80, 0x851EED75,
    0x8FE29490, 0x2A8F770D, 0xA2A3C1C0, 0x0D7E810F, 0xF89C461F, 0x15210521, 0xAA290C75,
    0x21856758, 0x10EA283A, 0x66F25912, 0x82CD9DCE, 0x8783CB48, 0x3B31CF03, 0xE3D1DDA4,
    0xADD66941, 0x200CF75D, 0x168FE2BA, 0xB0064BAF, 0x6D859B38, 0x7B7DBDDE, 0xF0436014,
    0x41BF175E, 0xBB3E1006, 0xCDE671B8, 0x5950879D, 0xE70307B1, 0xF5BC3D1C, 0x76FABD4A,
    0x4441ACEE, 0x415981DF, 0x57D08877, 0x5E4F1906, 0x06BBFAFD, 0xC14E0F02, 0xD089E1BE,
    0xC7CAC037, 0x4CEB5F9F, 0x1FF52EA5, 0xCB084054, 0x3FE9AA28, 0x6A340F03, 0xA344BD03,
    0x10824100, 0xFF258BD0, 0x42B0A41C, 0x8EC06293, 0x442C1C07, 0x081B3421, 0x114430B0,
    0x86000A3D, 0xC1907AB4, 0xD43217C2, 0x5F174461, 0x01B28874, 0x82420077, 0xE170030A,
    0xE46015C4, 0x2682C7B1, 0x21076F00, 0x02B0A41A, 0x62022B01, 0x84971F02, 0x7CBD06B1,
    0x2042C178, 0x498C831D, 0x61BC452B, 0x887E1DB8, 0x9E1942C1, 0x2BAE417C, 0xA83044C7,
    0xC0B87A95, 0xFCB41CC2, 0xDF324A21, 0x20846FFC, 0x42A04A68, 0xC8A39202, 0xE4E01507,
    0x5800BE53, 0x0286B058, 0xBA4F342A, 0x9444FAF4, 0x046700BB, 0x0B0B0422, 0x43884F0D,
    0x3994A513, 0xE2042207, 0x084D0B03, 0x2B10064D, 0x1837F505, 0x06A1EBB0, 0x20541D31,
    0x0A6D4608, 0x58DE55B5, 0x0AAD70C8, 0x426F3C21, 0x2CF56F57, 0xD4B6EC02, 0xBD3342C0,
    0x5C00E1BA, 0x828CED87, 0xB2AB2F39, 0xC2ACAA42, 0x1567588A, 0x52AF4153, 0x5610AA31,
    0x367D64AB, 0x6074BF5B, 0x010A4DD3, 0x0E87D2D3, 0xAEB725B4, 0xAC1CD605, 0xA82D0B04,
    0xCB22294C, 0x122C9785, 0x5A8C1B1A, 0x5644A70A, 0x70173EB3, 0x1E0681A0, 0xBB5E37B0,
    0x87D5D846, 0x41441180, 0xE80618DA, 0x56088073, 0x1F07D1A0, 0x8561B882, 0x2B360549,
    0x707F5D81, 0xF6DCC6F4, 0x0BCF8DAA, 0x35020064, 0x41C0828B, 0xA2C98C5F, 0x2AC2A955,
    0x2E2F41B4, 0x03401CDF, 0x4D407E1B, 0xE080D4CB, 0x3AB36560, 0x0ACEB664, 0x2BCF7817,
    0x803CAF1B, 0x88821C03, 0x842107B0, 0xC1386203, 0xAC99F022, 0xD16AAD15, 0x3CCF79C2,
    0x44034798, 0x33E981C8, 0x0341B881, 0x6D001A03, 0x16AA1A36, 0x072C814B, 0x48442133,
    0x01125BC5, 0xD9D4B612, 0xC0681F87, 0xB00820C0, 0xB602C213, 0xA2B192B5, 0xC8944321,
    0x747B4F2A, 0x761E0500, 0x16EF41E5, 0xA0C01026, 0xB5203E03, 0xEAB3C186, 0x2CD55760,
    0x4D2698D4, 0xD0007C61, 0x01ECB41F, 0x604C1D08, 0x1882F2A0, 0x55074130, 0xF379EA69,
    0x736370A7, 0x5D77D037, 0x3602446A, 0xD407D518, 0x8341A87F, 0x6068038B, 0x5F4E1E85,
    0x3F52A289, 0xE4299DB5, 0x442184D8, 0xC1FE7405, 0x30031083, 0x519B83C0, 0x0C067893,
    0x80481D4E, 0x5E15600C, 0x1C91893A, 0xAEA67A37, 0x0A5DF33B, 0x54CE92B9, 0x6130170B,
    0x94221F07, 0x01F202BC, 0x6A06C018, 0xF8C73380, 0xFB7C0800, 0x306EF38E, 0x0519F728,
    0x18B92C52, 0x15E6AE82, 0x0208216C, 0x50DD482D, 0x0782C624, 0x0A208EB8, 0x980E0120,
    0xC5D495E7, 0x2B0C02E0, 0x12920E00, 0xD0355E84, 0x01A80527, 0xA21616EA, 0x6D689C15,
    0x04C01A07, 0xAF3E9430, 0xDA052D44, 0x92008821, 0xE108A347, 0xF01105CC, 0x10380020,
    0xD125529D, 0x0FE13985, 0x82208245, 0x63E03510, 0x7E9A3A5B, 0x20B23004, 0x3D080CE4,
    0x0C02C128, 0xBC088012, 0xFB3A64A0, 0x90200AA2, 0xA8112710, 0x09D44F7D, 0xC2D7F806,
    0x8A4E150A, 0x004FCA4A, 0x19B25804, 0x23074F2D, 0x2C419610, 0xCC1FAA30, 0x403E71E8,
    0x52111001, 0x88696381, 0x09C47081, 0x8362AC86, 0x5F0821FF, 0xE08219E1, 0x0E0063E4,
    0x0B07E0DC, 0x400DA032, 0x0C81C8F0, 0x203302E0, 0x625474A0, 0xF2540402, 0xCAE83220,
    0xC900320F, 0x5985A09C, 0x7494E222, 0x049EB866, 0x5A696088, 0xC40F5C8A, 0x1881BD07,
    0x10350340, 0x1651091B, 0x4429AE82, 0x41F1D102, 0x4B46180D, 0x256AE898, 0x859BE83F,
    0x909B3770, 0x0A002775, 0x3096C138, 0xAC1583D5, 0x080620D1, 0xB64A0DC1, 0x8F15FD92,
    0xC1690F94, 0x17D0825B, 0x0264BE6A, 0xCAA4C2C7, 0xD9B3141C, 0x153BA974, 0x7ECE5848,
    0xAC110390, 0x137620C6, 0x307D35E7, 0x20448F39, 0x66221A37, 0xA802473D, 0x68AF59A0,
    0x755349A9, 0x5801A00A, 0xA36C8C16, 0x4A04631C, 0xA52083C0, 0x8027074E, 0xF2332B80,
    0x4AB12DB6, 0xD74124A2, 0x2155BC5E, 0x3533E012, 0x028DE4CD, 0x08B4B040, 0x340820F1,
    0x0D3BC0D8, 0x8D0C0160, 0xC4CB3530, 0x30164669, 0xF205AC52, 0x407921A5, 0x3717F54C,
    0x6E8781B9, 0x09E6F9BF, 0xD4B3A752, 0xD30280CC, 0x3E018824, 0x3A648360, 0xE83607EF,
    0x52393BC0, 0xAE3C1200, 0xEAA03F79, 0x27224153, 0x3FF52676, 0x0C152022, 0x069BCAC0,
    0x4607E0A8, 0x0E0A2765, 0x164FD6DA, 0x0CD96F70, 0xA08329C9, 0x51BE43B3, 0x41311EAE,
    0xA15684C1, 0x746921D0, 0xAC0091BC, 0x1F956754, 0x3C2DE100, 0x1A001CF8, 0xB1A89F40,
    0xB0300833, 0x223D1380, 0x68442102, 0xEA747F4B, 0xD9523B63, 0x428AD8BD, 0x6D9095B4,
    0xA1C3B872, 0x1F0131A4, 0x580FD638, 0x5A0CBC90, 0x402F6F45, 0xE01E48E2, 0xEC49E696,
    0xED941104, 0x1A801046, 0x42ACBC21, 0x1D1BC80C, 0x0B00434B, 0xC06980C8, 0x07185D54,
    0xFCA4C302, 0xB43C0860, 0x583917C8, 0xD2A40A12, 0x81684079, 0xDABBA322, 0xBE40E4D0,
    0x6A609A0E, 0x021AC734, 0x3393EF78, 0x3E0D88A2, 0x78821F70, 0x303A2BA0, 0x675927E4,
    0x917C0B92, 0x80A03A26, 0x91ABE74A, 0x03886AFC, 0x8551080D, 0xB119D6B3, 0x16B5D08A,
    0xCB1641E1, 0xB81981A7, 0x8D047536, 0x103048ED, 0x40A52DA4, 0x890E138C, 0x943C4A01,
    0x0720E420, 0x8A40A026, 0xE73F43F5, 0x0F338F55, 0x4A0E4148, 0x0D8995EB, 0x29043687,
    0x1A8D2740, 0x20CC2039, 0xC92E0403, 0x84275112, 0x2438C1DA, 0x0F4A1C76, 0x1A04307C,
    0x0B0280C0, 0xF27B2BD8, 0x1F111342, 0x40120086, 0xA2BD614B, 0x204C11AA, 0x41D14207,
    0x8280148D, 0xA495941B, 0x03C1503C, 0x10924CC2, 0x3A30762C, 0x4395A8C8, 0xEDCF0182,
    0x365A074A, 0x10560BA0, 0xB8480281, 0x8CC47639, 0x3BF2FCFC, 0xB3919C1A, 0xB500F039,
    0xC7A27042, 0x0B078A61, 0x8607898E, 0xDC19CEC0, 0x911DD057, 0x80680F6A, 0x60F5E5D7,
    0x9A8E8746, 0x81D0460F, 0x99E73B3D, 0x5FA3C134, 0x1C82000A, 0x063C39A8, 0xF60701BC,
    0x48AF32DA, 0x982290A7, 0x70124C2C, 0xFA3A4451, 0xE7E119D4, 0x8064BA5E, 0x8BA0CECC,
    0x0FD025E8, 0x13BC506E, 0x8379476E, 0x145DA6E9, 0x9B3B8230, 0x88190696, 0xD34E01A8,
    0xEC5343BC, 0x093D6A03, 0x16907203, 0xCA00D81F, 0x0108F6CF, 0x0C156862, 0x1501D587,
    0xCE0D8190, 0x00B81B2B, 0x78330841, 0x501C0401, 0xF15CD7EB, 0x9731CB07, 0x983CFCE3,
    0xA2205726, 0x0E410808, 0x209565E8, 0x3B6CC0D8, 0x84780161, 0x1F7C6FD7, 0x0AD20687,
    0x8AD40181, 0x80A00B00, 0x93CD655B, 0xE8A082DE, 0xD9C01C06, 0x5EE3699B, 0x2116CC7C,
    0x25B010D6, 0x07AE4173, 0xE4040012, 0x3983C1CF, 0x325FC32C, 0xB7DB9102, 0x6A9123E4,
    0x83007E6A, 0x7FE02810, 0x0800A172, 0x953FB062, 0x916F5ABC, 0x18090143, 0x6ED50010,
    0xEC570286, 0x12C79941, 0xEE415801, 0xE7302893, 0xD8043AEB, 0x2436A2BF, 0xD9401802,
    0x6E00B211, 0xC9074F39, 0xAC47FA7E, 0x05555CD5, 0x1904E85B, 0x10360140, 0x8C482164,
    0x81CB13AB, 0x01805A0E, 0x6B667683, 0x56BC0183, 0xBD544002, 0x2506ED8D, 0x20FFC048,
    0x7520AD10, 0xB81105BA, 0x40024339, 0xF9341701, 0xB6701302, 0x0402D20D, 0x245E062A,
    0xF37A380E, 0x1AC5D344, 0x00F339E4, 0x46034050, 0x9C1C0300, 0x04C007B7, 0x206680AD,
    0x00480783, 0x204977DE, 0x150BA0B2, 0x06806002, 0x0D7266BE, 0x01106AD2, 0x9D05E04C,
    0x120E2557, 0x97D57A99, 0x0DA0B5A0, 0x5F0E9702, 0x49222590, 0x891FB6B0, 0xE1F07A04,
    0x0860F533, 0x05C17036, 0x0A77B95A, 0x1A0700A8, 0x9A60089F, 0x818B833F, 0x03810016,
    0x10BF3D08, 0x8C1A0C00, 0x120FDBF7, 0xEA22B4A8, 0xA77BA081, 0x2FAEE801, 0xF1B21D42,
    0x88F31D00, 0xA438D804, 0x4B1D012B, 0x81E8E1A1, 0xF83E981B, 0xD00788E3, 0x9E6ABF81,
    0x1FB4EC16, 0x90128140, 0x25700100, 0x1480F006, 0x6ACF0898, 0x9FDB56C1, 0x00B1C012,
    0x58B22888, 0xA9712414, 0xC70088A8, 0xD12DB5F1, 0x8823CA93, 0x54010003, 0x42230D42,
    0x80409337, 0x1A2F7275, 0x0AF901C1, 0x0200EC01, 0x8FC1427D, 0x080F0010, 0xB001FDA8,
    0xD4989C16, 0x300D0120, 0x00200135, 0x84814006, 0xDB6C19C1, 0x81D1398B, 0x0E00D81C,
    0x899624D0, 0x0A92EA90, 0xD2BEF80B, 0x2B501D3B, 0x81200808, 0xDA1FE338, 0xA8983D40,
    0x81E01880, 0xB2816011, 0x28D21FDA, 0xB6921526, 0x04897C2F, 0x681A3EF0, 0x416BE3AD,
    0x211C88AB, 0x201B81C8, 0xB7B80881, 0x058053A1, 0xB8170158, 0x24F82181, 0xC78B844E,
    0xC819BC69, 0x80780F81, 0xA745280A, 0xD2600090, 0x8A63B881, 0x1A80C002, 0xA8E92758,
    0x98381231, 0x218B421C, 0x51D388B3, 0xBF200701, 0x010F1B7C, 0xE01A8080, 0x31798921,
    0x388CB2E0, 0x344B45E3, 0x01336A09, 0xAE1A8BD9, 0xE32D3DD2, 0xBD0017B2, 0x05257005,
    0xB80C8098, 0x81F01981, 0xE722BBC6, 0x202032D1, 0x01601A02, 0x04810819, 0xEBDF8060,
    0x16016589, 0x1BB750A7, 0xD31A2D68, 0x08334C81, 0xEF81A2EE, 0x101D8F3A, 0x80109FAF,
    0xE5B230D3, 0xD2F82988, 0x80D8C9C6, 0x9309601B, 0x9343C169, 0xBB098918, 0xBD002803,
    0x200D00B3, 0x01C01F81, 0x8D48C203, 0x601E9894, 0x814013B3, 0x20803385, 0xF27889BC,
    0x093C66C4, 0x19A2FA2B, 0x880E3601, 0x00E001A8, 0xAB357460, 0x72660950, 0x0BD00C8A,
    0x0A814020, 0x9AD09A90, 0x00189CC8, 0x14812804, 0x299C24F8, 0xABFC4EC3, 0x0E81335E,
    0x000042F0, 0x80F001C2, 0x56811812, 0x981E2BFB, 0x2CE92DCA, 0x0E268B04, 0xC81000E0,
    0x00109843, 0x13969018, 0x88078A60, 0x326A6B9C, 0xFE9FF80D, 0x027630F2, 0x49845982,
    0x468110A3, 0x725801CA, 0xCA593D9E, 0x0480109E, 0x70148058, 0xC5682101, 0xFD0A1C4E,
    0xC01AAD69, 0x80A80C01, 0x04884317, 0x800C0038, 0x81A81501, 0xF9A2F821, 0x78D92D73,
    0xAD68209C, 0x1D01B019, 0xA0088148, 0x00A00B00, 0xC608DBBD, 0xDBB51460, 0x3D900189,
    0x1881F322, 0x48832AF8, 0x1D901000, 0x1AC9519D, 0x3BE780E0, 0x1130018A, 0xC297CB22,
    0xFC680A3C, 0x820019C5, 0xAB4C746F, 0xB821C018, 0x81681781, 0xBE807805, 0x6C4C0004,
    0x01C01080, 0x2101A819, 0x20D14C60, 0xCD04E838, 0x208214E6, 0x90170178, 0x80B81981,
    0x138073E0, 0xA1630854, 0x89CCAC92, 0x1F2CF809, 0x49FFA0E0, 0xB3881280, 0x1A01F1BC,
    0x6CEC00B0, 0x01B8020A, 0xD7114193, 0x089DCE44, 0x9A500B80, 0xE7BDCC92, 0x1C8D8D4C,
    0x81401802, 0x85C97AE7, 0xC80D0038, 0x81B00B00, 0xCC01B81D, 0xBBFA4E68, 0x1FDC8D8C,
    0x130C69BD, 0x60148138, 0x00281101, 0x03803803, 0x600ACBE8, 0x09F39211, 0x409FD249,
    0x88073A1B, 0x1D3B2596, 0x8D4D9017, 0xF88DC9A0, 0xD04A6E15, 0x0DC1A0A8, 0x5A580110,
    0x4B181F1E, 0xAA9E5B76, 0x100ECDB8, 0x3BCB094A, 0x13007000, 0xF00F0110, 0xD278A12E,
    0xCB4C72FF, 0xF2CEABF8, 0x99D81C81, 0x0F00E819, 0x50120100, 0x00080092, 0xA62E12A9,
    0x48203C18, 0x9F5987B6, 0x8532D0CB, 0x4887CF84, 0xD3CBB0B2, 0x9281208F, 0x1D22B532,
    0x816A6350, 0x70438CC5, 0xA1D4CC74, 0x81C81B98, 0xA500C50D, 0x4004B243, 0x00E80280,
    0x13815017, 0x48218180, 0xC395123F, 0x202F7B62, 0xA81DCD20, 0xC28D4601, 0x1A89FB9D,
    0xD93A9022, 0x9CF393A8, 0x912A0A03, 0x6A750048, 0x09881B47, 0xF0BBE802, 0x1D410F40,
    0x8078010B, 0x56380ABE, 0x7D084F14, 0xCD201FC5, 0x18819018, 0x80070088, 0x082D0400,
    0x5E808802, 0x981A00AD, 0x81701881, 0xCF54D01D, 0xEBF9CF12, 0xCF1AD044, 0x9FC0713C,
    0xE809D388, 0xB263DCA4, 0x4800B019, 0x881408D5, 0x89B90D0E, 0x6F9FD3F6, 0xC99655D5,
    0xD5180A00, 0x441E61B0, 0x348DC335, 0x814815B8, 0x03007816, 0x5C5B8048, 0xD0D80708,
    0x8B00C00A, 0xB01B01C4, 0xCE6D5001, 0xBB417325, 0x4CFBA48A, 0xD1F22FC2, 0x07086520,
    0xF0208EC0, 0x35B89827, 0x78C2291A, 0x70B90B35, 0x80F01080, 0xBFB5701B, 0x35615262,
    0x29F0AAAC, 0x1100F01B, 0x18F18120, 0x082D7400, 0x028B9536, 0x001100F8, 0x80F80F01,
    0xE68D4A84, 0xD8A65391, 0x8BDC8C00, 0x97B3C81F, 0xE34FA098, 0x81189240, 0x750210AE,
    0x2B5D5901, 0x01380600, 0xA6015813, 0x757C48D9, 0x820A924C, 0x1BC8B31A, 0xD80C00C8,
    0x08EB0880, 0x0548F517, 0x5AD70178, 0x80389D5A, 0x1FA43C77, 0x1887D8B2, 0xC7D01F3C,
    0xC10D8891, 0x8D1F8C10, 0x0010BADA, 0x11804807, 0x61400190, 0x5954D04C, 0x500D144F,
    0x9818AD6D, 0x00BD5181, 0x1A009D65, 0x6218086D, 0x09FD8F93, 0x1B81E148, 0x7D585BAB,
    0xADB01F9B, 0x52974097, 0xA8D2DBD9, 0x818008C5, 0x75B4A81B, 0x059556EA, 0x2034D02D,
    0x1E821820, 0x60150150, 0x0094F481, 0xAB453C04, 0x3954882B, 0xC5EBDA8F, 0xEB0209A2,
    0xB1760982, 0x89C94C8C, 0x5A01E8F7, 0x20D75D0D, 0x52400E00, 0xA9338D26, 0xB44EDC2C,
    0x5309BD0C, 0x1FB990D1, 0x80108158, 0x01481259, 0xA698EA34, 0x416380E8, 0x09059A11,
    0xCB91A5E1, 0xB8F7898A, 0x0DE5E48A, 0x370019EE, 0x4815011C, 0x9E13443F, 0x765E8D26,
    0x1D86ABFA, 0x5F201C0A, 0x4380409C, 0x7AED2293, 0x8C11B709, 0x985F401F, 0x6166DF50,
    0x0010DFDF, 0x04805806, 0x50188138, 0x82201C81, 0xAD4D05F9, 0x32E6DFBD, 0x9428A6D5,
    0x8F5FEB7A, 0xC08BB1E0, 0xE05E0489, 0x0A0060EE, 0x30078098, 0x01A01C81, 0x20D6B019,
    0xC4F141D0, 0x2924E7E0, 0x118A7C49, 0x8A7A55C4, 0x91A2E609, 0xCF8915CC, 0x9612DE45,
    0x00F0088F, 0x1000C80E, 0xC01D3E38, 0xD869D901, 0x39DFB1D3, 0xF8A82C44, 0x01CD7580,
    0xD4885566, 0x808B4993, 0x5BB8935C, 0x036212FD, 0xC8024201, 0x0132D1BB, 0x4D59D012,
    0x8BE399C4, 0xB44D309C, 0x010A73F5, 0xA81FA988, 0x80588532, 0x0D80ED9D, 0xBD9780D0,
    0xC3B80D4A, 0x1B01000E, 0x82F2A0FE, 0x16889838, 0x2FC260B5, 0x580290AE, 0x00480500,
    0x15007D49, 0x80170180, 0x00581301, 0x0D0A362B, 0x2DCB9D98, 0x80980845, 0x1A01D810,
    0x6CF381C0, 0x5FC99C62, 0x1CE165C4, 0x50090148, 0x9E72E992, 0x90D01019, 0x443E58E8,
    0x8E0B4164, 0x81BDA0AE, 0x73200020, 0xBF9BC6CB, 0xD4CF2619, 0x60188201, 0x8C7D5401,
    0xD8093E28, 0x9DEF91A4, 0x00CB1865, 0x0701ADF1, 0xCB6BD4C0, 0x3C750860, 0x989148E9,
    0x8A7258E8, 0x9F7665DB, 0x82C76001, 0x237649FB, 0xC334164B, 0x6DE70D30, 0x89AA01E5,
    0x61EA5B09, 0x0BB2B66E, 0xFD7C95D8, 0x01390101, 0x16016815, 0x7DB30080, 0x813004D1,
    0x14016017, 0x28210198, 0x81F54E99, 0x90DBD01B, 0x581F2098, 0xAE8E774B, 0x923DD3AD,
    0x801901FA, 0x00780901, 0x03086CCB, 0x00058080, 0x56E89668, 0x3E817B2D, 0xDA58C14D,
    0x2E8E8658, 0x1C92426B, 0x15B181C0, 0xA0100689, 0x1EAB7B38, 0x4090DCE8, 0x01D9A900,
    0xC7E92640, 0x032D0B42, 0x08DE9023, 0xE5813005, 0x3816AF01, 0x81108E68, 0xF88200E8,
    0x6AE8E9B8, 0x9B332E00, 0x0088766D, 0xD8118038, 0x685CBA12, 0xD1006890, 0x96A4B0DC,
    0xCE15BEAB, 0xA2804093, 0xC0200D0E, 0x816090D1, 0xAD639A58, 0x8006E59E, 0x9A902101,
    0x7B8921EC, 0x45DE2292, 0x802665EB, 0x0260000F, 0xA88FE651, 0xDCA6A300, 0xABE446B9,
    0xEEBCCA2E, 0x1DEB9C88, 0x066776BF, 0x82296A98, 0x9C488F5A, 0xC32598BD, 0x0365E866,
    0x52061D1C, 0x6138D815, 0x369BEC82, 0x0AF19B80, 0x86E2D81D, 0x91D993F8, 0xECCC6CA2,
    0x93803665, 0x821B8BDB, 0x2CDDD208, 0xD2E03A29, 0x180A66E6, 0xAC702032, 0x5F25E885,
    0x86B3C953, 0x80E6776D, 0x1F01CACF, 0x611A67E6, 0xE0101EA7, 0x1C6776DD, 0x391DA589,
    0x80280088, 0xA341C006, 0x80153FB2, 0x62FEE358, 0xEC0B4805, 0xD536235D, 0x01301000,
    0xB21C80D1, 0xA64B00E1, 0x29AE216E, 0x1AE4F924, 0x8C7681A0, 0x01C1D4E7, 0xBF6F1A40,
    0xFA54002E, 0x98A41DE5, 0xF7D81012, 0x8B196926, 0xA9F362E7, 0xAEAD401E, 0x2E926FC6,
    0xDEA3EF80, 0x1A1FD5FC, 0x0E7500F8, 0x001ED870, 0x37815274, 0x28085154, 0xF05F0000,
    0x0BF0B70A, 0xD70CF0C7, 0xF0E70DF0, 0x0FF0F70E, 0x1710F107, 0xF12711F1, 0x13F13712,
    0x5714F147, 0xF16715F1, 0x17F17716, 0x9718F187, 0xF1A719F1, 0x1BF1B71A, 0xD71CF1C7,
    0x71E71DF1, 0x00080DF6, 0x00000000

  EW_BITMAP_CLUT_EMPTY( WasherBgEasyCare, Default )

  EW_BITMAPS_TABLE( WasherBgEasyCare )
    EW_BITMAP( WasherBgEasyCare, Default )
EW_END_OF_BITMAP_RES( WasherBgEasyCare )

/* Table with links to derived variants of the bitmap resource : 'Washer::BgEasyCare' */
EW_RES_WITHOUT_VARIANTS( WasherBgEasyCare )

/* Embedded Wizard */
