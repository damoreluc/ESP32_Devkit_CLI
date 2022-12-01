#include <Commands/cmdSetAcceleration.h>

// Commands
Command cmdSetAcceleration;

// callback function for setAcceleration command
void cmdSetAccelerationCallback(cmd *commandPointer) {
    Command c(commandPointer); // Create wrapper class instance for the pointer
    String sAccel;

    // Get first (and only) Argument
    Argument arg = c.getArgument(0);

    // Get value of argument
    sAccel = arg.getValue();
    acceleration = abs(sAccel.toInt());

    // set acceleration on driver
    setAccelerationValue(acceleration);

    Serial.print("Acceleration: ");
    Serial.print(acceleration);
    Serial.println(" step/s^2");

    Serial.print("# "); 
}