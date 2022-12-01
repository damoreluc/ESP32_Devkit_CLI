#ifndef _CMD_MOVE_TO_H
#define _CMD_MOVE_TO_H

#include <Arduino.h>
#include <SimpleCLI.h>
#include <Stepper/stepper_define.h>
#include <Stepper/stepper_data.h>
#include <Stepper/moveTo.h>

// Commands
extern Command cmdMoveTo;

// callback function for moveTo command
void cmdMoveToCallback(cmd *commandPointer);

#endif