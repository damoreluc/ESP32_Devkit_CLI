#include <Commands/cmdDisable.h>

// Commands
Command cmdDisable;

// callback function for disable command
void cmdDisableCallback(cmd *commandPointer) {

    // set speed on driver
    driver_enabled = false;
    stepperDisable();

    Serial.println("Stepper driver is OFF");

    prompt(); 
}