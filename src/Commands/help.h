#ifndef _HELP_H
#define _HELP_H

#include <Arduino.h>
#include <SimpleCLI.h>
#include <Commands/prompt.h>

// Commands
extern Command cmdHelp;

// callback function for help command
void cmdHelpCallback(cmd *commandPointer);
#endif