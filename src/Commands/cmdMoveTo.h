#ifndef _CMD_MOVE_TO_H
#define _CMD_MOVE_TO_H

#include <Arduino.h>
#include <SimpleCLI.h>

// Commands
extern Command cmdMoveTo;

// callback function for moveTo command
void cmdMoveToCallback(cmd *commandPointer);

#endif