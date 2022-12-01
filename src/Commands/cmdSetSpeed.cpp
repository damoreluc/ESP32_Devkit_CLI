#include <Commands/cmdSetSpeed.h>

// Commands
Command cmdSetSpeed;

// callback function for setSpeed command
void cmdSetSpeedCallback(cmd *commandPointer) {
    Command c(commandPointer); // Create wrapper class instance for the pointer
    String sSpeed;

    // Get first (and only) Argument
    Argument arg = c.getArgument(0);

    // Get value of argument
    sSpeed = arg.getValue();
    speed = abs(sSpeed.toInt());

    // set speed on driver
    setSpeedValue(speed);

    Serial.print("Speed: ");
    Serial.print(speed);
    Serial.println(" step/s");

    Serial.print("# "); 
}