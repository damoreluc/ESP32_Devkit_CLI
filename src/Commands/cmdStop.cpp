#include <Commands/cmdStop.h>

// Commands
Command cmdStop;

// callback function for stop command
void cmdStopCallback(cmd *commandPointer) {

    // set speed on driver
    stepperStop();

    Serial.println("Stepper driver is OFF");

    Serial.print("# "); 
}