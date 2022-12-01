#ifndef _CMD_SET_MICROSTEPPING_H
#define _CMD_SET_MICROSTEPPING_H

#include <Arduino.h>
#include <SimpleCLI.h>
#include <Stepper/stepper_define.h>
#include <Stepper/stepper_data.h>
#include <Stepper/microstepping.h>

// Commands
extern Command cmdSetMicrostepping;

// callback function for SetMicrostepping command
void cmdSetMicrosteppingCallback(cmd *commandPointer);

#endif