//=============================================================================
// Project: Capers Hexapod
// Description: This code controls a hexapod robot with three degrees of 
//              freedom per leg. 
//
// This code is specifically configured for the Lynxmotion BotBoarduino using the 
// SSC-32 servo controller.
//
// Before uploading this code to your robot, make sure to properly configure the 
// settings in the Hex_Cfg.h file. The settings which will need to be configured 
// for your specific robot are
//   * The lenghts of each leg section
//   * The mechanical limits of each servo
//   * The dimensions of the body
//   * The angular offsets between the center of the body and each leg
//   * The distance offset between the center of the body and each leg
//   * Feed starting positions
//
//=============================================================================
// Header Files
//=============================================================================

#define DEFINE_HEX_GLOBALS
#if ARDUINO>99
#include <Arduino.h>
#else
#endif
#include <EEPROM.h>
#include <PS2X_lib.h>
#include <SoftwareSerial.h>

#include "Hex_CFG.h"
#include "Capers.h"
#include "Capers_Input_PS2.h"
#include "Capers_Driver_SSC32.h"
#include "Capers_Code.h"

