//=============================================================================
// Project: Jeb the Quadruped Robot
//
// Description: This code controls a quadruped robot with three degrees of 
//              freedom per leg. 
//
// This code is specifically configured for the Lynxmotion BotBoarduino using the 
// SSC-32 servo controller.
//
// Before uploading this code to your robot, make sure to properly configure the 
// settings in the Quad_CFG.h file. The settings which will need to be configured 
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
#include <Wire.h>
#include <EEPROM.h>
#include <PS2X_lib.h>

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#include <SoftwareSerial.h>
#include "Quad_CFG.h"
#include "Jeb.h"
#include "Jeb_Input_PS2.h"
#include "Jeb_Driver_SSC32.h"
#include "Jeb_Code.h"

