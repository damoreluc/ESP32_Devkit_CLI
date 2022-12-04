#include <Commands/createCommands.h>

void createCommands(SimpleCLI &cli) {

    cli.setOnError(errorCallback);

    cmdEnable = cli.addCmd("enable", cmdEnableCallback);
    cmdEnable.setDescription(" Enable stepper driver");

    cmdDisable = cli.addCmd("disable", cmdDisableCallback);
    cmdDisable.setDescription(" Disable stepper driver");
    
    cmdMove = cli.addSingleArgCmd("move", cmdMoveCallback);
    cmdMove.setDescription(" Move stepper n steps forward or backward from current position");

    cmdMoveTo = cli.addSingleArgCmd("moveTo", cmdMoveToCallback);
    cmdMoveTo.setDescription(" Move stepper to absolute position");

    cmdRunForward = cli.addCmd("runForward", cmdRunForwardCallback);
    cmdRunForward.setDescription(" Run continuously in forward direction");

    cmdRunBackward = cli.addCmd("runBackward", cmdRunBackwardCallback);
    cmdRunBackward.setDescription(" Run continuously in backward direction");

    cmdStop = cli.addCmd("stop", cmdStopCallback);
    cmdStop.setDescription(" Stop the running stepper with normal deceleration");

    cmdHalt = cli.addCmd("halt", cmdHaltCallback);
    cmdHalt.setDescription(" Abruptly stop the running stepper without deceleration");

    cmdGetCurrentPosition = cli.addCmd("getPosition", cmdGetCurrentPositionCallback);
    cmdGetCurrentPosition.setDescription(" Get current position");

    cmdSetCurrentPosition = cli.addSingleArgCmd("setPosition", cmdSetCurrentPositionCallback);
    cmdSetCurrentPosition.setDescription(" Set current position");

    cmdSetMicrostepping = cli.addSingleArgCmd("setMicrostepping", cmdSetMicrosteppingCallback);
    cmdSetMicrostepping.setDescription(" Set microstepping [1, 2, 4, 8, 16, 32]");

    cmdSetSpeed = cli.addSingleArgCmd("setSpeed", cmdSetSpeedCallback);
    cmdSetSpeed.setDescription(" Set speed in steps/s");

    cmdSetAcceleration = cli.addSingleArgCmd("setAcceleration", cmdSetAccelerationCallback);
    cmdSetAcceleration.setDescription(" Set acceleration in steps/s^2");

    cmdHelp = cli.addCommand("help,?", cmdHelpCallback);
    cmdHelp.setDescription(" Get help!");    
}