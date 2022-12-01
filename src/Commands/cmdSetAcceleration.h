#ifndef _CMD_SET_ACCELERATION_H
#define _CMD_SET_ACCELERATION_H

#include <Arduino.h>
#include <SimpleCLI.h>
#include <Stepper/stepper_define.h>
#include <Stepper/stepper_data.h>
#include <Stepper/acceleration.h>

// Commands
extern Command cmdSetAcceleration;

// callback function for setAcceleration command
void cmdSetAccelerationCallback(cmd *commandPointer);

#endif