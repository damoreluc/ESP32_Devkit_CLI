#ifndef _CMD_RUN_FORWARD_H
#define _CMD_RUN_FORWARD_H

#include <Arduino.h>
#include <SimpleCLI.h>
#include <Commands/prompt.h>
#include <Stepper/stepper_define.h>
#include <Stepper/stepper_data.h>
#include <Stepper/runForward.h>

// Commands
extern Command cmdRunForward;

// callback function for run forward command
void cmdRunForwardCallback(cmd *commandPointer);

#endif