#ifndef _CMD_RUN_BACKWARD_H
#define _CMD_RUN_BACKWARD_H

#include <Arduino.h>
#include <SimpleCLI.h>
#include <Commands/prompt.h>
#include <Stepper/stepper_define.h>
#include <Stepper/stepper_data.h>
#include <Stepper/runBackward.h>

// Commands
extern Command cmdRunBackward;

// callback function for run backward command
void cmdRunBackwardCallback(cmd *commandPointer);

#endif