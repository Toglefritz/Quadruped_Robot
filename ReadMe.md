# Capers the Hexapod Robot

## Attribution

The code in this repository was originally developed by GitHub user KurtE.
The source of this fork is: [https://github.com/KurtE/Arduino_Phoenix_Parts](https://github.com/KurtE/Arduino_Phoenix_Parts).

## Hardware

Generally speaking, a hexapod robot's electronics system has three main subsystems:  the microcontroller, server controller, and control input.

This code assumes that the hexapod uses the following electronics systems:

* The microcontroller is a Botboarduino from [Lynxmotion](http://www.lynxmotion.com/c-153-botboarduino.aspx).
* The servo controller is an SSC-32U from [Lynxmotion](http://www.lynxmotion.com/p-1032-ssc-32u-usb-servo-controller.aspx).
* For input the robot uses a wireless Platstation 2 controller like one from [Lynxmotion](http://www.lynxmotion.com/p-1096-ps2-robot-controller-v4.aspx)

This repository also includes a library for using NeoPixel LED lighting products from [Adafruit](https://www.adafruit.com/category/168). NeoPixels, which
come in a variety of shapes and sizes allow the easy addition of lighting effects or visual feedback to the robot.

Hexapod robots use a total of 18 servos. Since the robot itself can be quite heavy depending upon the construction, it is important to equip
the robot with servos that are strong enough to support the robot's weight. Servos which provide at least 8 kg/cm of torque are
recommended.

## Installation

To use this code you need to copy each of the folders inside the *libraries* directory into your Arduino Library directory.  

In the Arduino IDE, open **Capers_PS2_SSC32.ino**. Customize the code as needed to suit your robot's geometry and supplemental hardware (like LEDs).
