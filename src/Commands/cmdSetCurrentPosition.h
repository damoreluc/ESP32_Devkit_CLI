#ifndef _CMD_SET_CURRENT_POSITION_H
#define _CMD_SET_CURRENT_POSITION_H

#include <Arduino.h>
#include <SimpleCLI.h>
#include <Commands/prompt.h>
#include <Stepper/stepper_define.h>
#include <Stepper/stepper_data.h>
#include <Stepper/setCurrentPosition.h>

// Commands
extern Command cmdSetCurrentPosition;

// callback function for cmdSetCurrentPosition command
void cmdSetCurrentPositionCallback(cmd *commandPointer);

#endif