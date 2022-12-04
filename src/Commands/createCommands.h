#ifndef _CREATE_COMMANDS_H
#define _CREATE_COMMANDS_H

#include <Arduino.h>
#include <SimpleCLI.h>
#include <Commands/cmdMove.h>
#include <Commands/cmdMoveTo.h>
#include <Commands/cmdRunForward.h>
#include <Commands/cmdRunBackward.h>
#include <Commands/cmdGetCurrentPosition.h>
#include <Commands/cmdSetCurrentPosition.h>
#include <Commands/cmdSetMicrostepping.h>
#include <Commands/cmdSetSpeed.h>
#include <Commands/cmdSetAcceleration.h>
#include <Commands/cmdEnable.h>
#include <Commands/cmdDisable.h>
#include <Commands/cmdStop.h>
#include <Commands/cmdHalt.h>
#include <Commands/help.h>
#include <Commands/Errors.h>
#include <Commands/prompt.h>

// Commands
extern Command cmdMove;
extern Command cmdMoveTo;
extern Command cmdGetCurrentPosition;
extern Command cmdSetCurrentPosition;
extern Command cmdRunForward;
extern Command cmdRunBackward;
extern Command cmdSetMicrostepping;
extern Command cmdSetSpeed;
extern Command cmdSetAcceleration;
extern Command cmdEnable;
extern Command cmdDisable;
extern Command cmdStop;
extern Command cmdHalt;
extern Command cmdHelp;

void createCommands(SimpleCLI &cli);

#endif