#ifndef _CMD_SET_SPEED_H
#define _CMD_SET_SPEED_H

#include <Arduino.h>
#include <SimpleCLI.h>

// Commands
extern Command cmdSetSpeed;

// callback function for setSpeed command
void cmdSetSpeedCallback(cmd *commandPointer);

#endif