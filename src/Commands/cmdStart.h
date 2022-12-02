#ifndef _CMD_START_H
#define _CMD_START_H

#include <Arduino.h>
#include <SimpleCLI.h>
#include <Stepper/stepper_define.h>
#include <Stepper/stepper_data.h>
#include <Stepper/stepper_start.h>

// Commands
extern Command cmdStart;

// callback function for start command
void cmdStartCallback(cmd *commandPointer);

#endif