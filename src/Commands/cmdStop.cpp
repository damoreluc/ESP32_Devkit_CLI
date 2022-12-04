#include <Commands/cmdStop.h>

// Commands
Command cmdStop;

// callback function for stop command
void cmdStopCallback(cmd *commandPointer) {

    // decelerate and stop the stepper
    stepperStop();

    prompt(); 
}