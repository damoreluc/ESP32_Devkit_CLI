#include <Commands/cmdSetAcceleration.h>

// Commands
Command cmdSetAcceleration;

// callback function for setAcceleration command
void cmdSetAccelerationCallback(cmd *commandPointer) {
    Command c(commandPointer); // Create wrapper class instance for the pointer
    String sAccel;
    uint32_t iAccel;

    // Get first (and only) Argument
    Argument arg = c.getArgument(0);

    // Get value of argument
    sAccel = arg.getValue();
    iAccel = abs(sAccel.toInt());

    Serial.print("Acceleration: ");
    Serial.print(iAccel);
    Serial.println(" step/s^2");

    Serial.print("# "); 
}