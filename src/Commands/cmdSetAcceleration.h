#ifndef _CMD_SET_ACCELERATION_H
#define _CMD_SET_ACCELERATION_H

#include <Arduino.h>
#include <SimpleCLI.h>

// Commands
extern Command cmdSetAcceleration;

// callback function for setAcceleration command
void cmdSetAccelerationCallback(cmd *commandPointer);

#endif