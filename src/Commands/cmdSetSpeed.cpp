#include <Commands/cmdSetSpeed.h>

// Commands
Command cmdSetSpeed;

// callback function for setSpeed command
void cmdSetSpeedCallback(cmd *commandPointer)
{
    Command c(commandPointer); // Create wrapper class instance for the pointer
    String sSpeed;

    // Get first (and only) Argument
    Argument arg = c.getArgument(0);

    // Get value of argument
    sSpeed = arg.getValue();
    speed = abs(sSpeed.toInt());

    if (speed > 5000)
    {
        speed = 5000;
        Serial.print(" Speed limited to ");
        Serial.print(speed);
        Serial.println(" step/s");
    }
    else
    {
        Serial.print("Speed: ");
        Serial.print(speed);
        Serial.println(" step/s");
    }

    // set speed on driver
    setSpeedValue(speed * mu);

    prompt();
}