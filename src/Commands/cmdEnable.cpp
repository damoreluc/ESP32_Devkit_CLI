#include <Commands/cmdEnable.h>

// Commands
Command cmdEnable;

// callback function for enable command
void cmdEnableCallback(cmd *commandPointer) {

    // set speed on driver
    driver_enabled = true;
    stepperEnable();

    Serial.println("Stepper driver is ON");

    prompt();
}