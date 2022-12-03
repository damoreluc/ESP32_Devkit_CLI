#ifndef _CMD_STOP_H
#define _CMD_STOP_H

#include <Arduino.h>
#include <SimpleCLI.h>
#include <Commands/prompt.h>
#include <Stepper/stepper_define.h>
#include <Stepper/stepper_data.h>
#include <Stepper/stepper_stop.h>

// Commands
extern Command cmdStop;

// callback function for stop command
void cmdStopCallback(cmd *commandPointer);

#endif