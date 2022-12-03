#ifndef _ERRORS_H
#define _ERRORS_H

#include <Arduino.h>
#include <SimpleCLI.h>
#include <Commands/prompt.h>

// Commands
extern Command cmdMove;

// callback function for move command
void errorCallback(cmd_error* e);

#endif