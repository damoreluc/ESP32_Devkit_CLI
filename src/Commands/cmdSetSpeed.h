#ifndef _CMD_SET_SPEED_H
#define _CMD_SET_SPEED_H

#include <Arduino.h>
#include <SimpleCLI.h>
#include <Stepper/stepper_define.h>
#include <Stepper/stepper_data.h>
#include <Stepper/speed.h>

// Commands
extern Command cmdSetSpeed;

// callback function for setSpeed command
void cmdSetSpeedCallback(cmd *commandPointer);

#endif