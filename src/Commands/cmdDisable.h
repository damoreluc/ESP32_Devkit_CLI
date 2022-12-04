#ifndef _CMD_DISABLE_H
#define _CMD_DISABLE_H

#include <Arduino.h>
#include <SimpleCLI.h>
#include <Commands/prompt.h>
#include <Stepper/stepper_define.h>
#include <Stepper/stepper_data.h>
#include <Stepper/stepper_disable.h>

// Commands
extern Command cmdDisable;

// callback function for disable command
void cmdDisableCallback(cmd *commandPointer);

#endif