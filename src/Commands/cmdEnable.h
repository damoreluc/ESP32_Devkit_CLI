#ifndef _CMD_ENABLE_H
#define _CMD_ENABLE_H

#include <Arduino.h>
#include <SimpleCLI.h>
#include <Commands/prompt.h>
#include <Stepper/stepper_define.h>
#include <Stepper/stepper_data.h>
#include <Stepper/stepper_enable.h>

// Commands
extern Command cmdEnable;

// callback function for enable command
void cmdEnableCallback(cmd *commandPointer);

#endif