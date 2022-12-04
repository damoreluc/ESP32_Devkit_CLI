#ifndef _CMD_GET_CURRENT_POSITION_H
#define _CMD_GET_CURRENT_POSITION_H

#include <Arduino.h>
#include <SimpleCLI.h>
#include <Commands/prompt.h>
#include <Stepper/stepper_define.h>
#include <Stepper/stepper_data.h>
#include <Stepper/getCurrentPosition.h>

// Commands
extern Command cmdGetCurrentPosition;

// callback function for cmdSetCurrentPosition command
void cmdGetCurrentPositionCallback(cmd *commandPointer);

#endif