#ifndef _CMD_MOVE_H
#define _CMD_MOVE_H

#include <Arduino.h>
#include <SimpleCLI.h>
#include <Stepper/stepper_define.h>
#include <Stepper/stepper_data.h>
#include <Stepper/moverel.h>

// Commands
extern Command cmdMove;

// callback function for move command
void cmdMoveCallback(cmd *commandPointer);

#endif