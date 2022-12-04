#ifndef _CMD_HALT_H
#define _CMD_HALT_H

#include <Arduino.h>
#include <SimpleCLI.h>
#include <Commands/prompt.h>
#include <Stepper/stepper_define.h>
#include <Stepper/stepper_data.h>
#include <Stepper/stepper_halt.h>

// Commands
extern Command cmdHalt;

// callback function for halt command
void cmdHaltCallback(cmd *commandPointer);

#endif