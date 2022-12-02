#include <Commands/cmdStart.h>

// Commands
Command cmdStart;

// callback function for start command
void cmdStartCallback(cmd *commandPointer) {

    // set speed on driver
    stepperStart();

    Serial.println("Stepper driver is ON");

    Serial.print("# "); 
}