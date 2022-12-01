#include <Commands/cmdSetSpeed.h>

// Commands
Command cmdSetSpeed;

// callback function for setSpeed command
void cmdSetSpeedCallback(cmd *commandPointer) {
    Command c(commandPointer); // Create wrapper class instance for the pointer
    String sSpeed;
    uint32_t iSpeed;

    // Get first (and only) Argument
    Argument arg = c.getArgument(0);

    // Get value of argument
    sSpeed = arg.getValue();
    iSpeed = abs(sSpeed.toInt());

    Serial.print("Speed: ");
    Serial.print(iSpeed);
    Serial.println(" step/s");

    Serial.print("# "); 
}