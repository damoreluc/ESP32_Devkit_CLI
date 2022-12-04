#include <Commands/cmdMoveTo.h>

// Commands
Command cmdMoveTo;

// driver enable
extern bool driver_enabled;

// callback function for moveTo command
void cmdMoveToCallback(cmd *commandPointer)
{
    Command c(commandPointer); // Create wrapper class instance for the pointer
    String sStep;

    if (!driver_enabled)
    {
        Serial.println("driver disabled (use command enable)");
    }
    else
    {
        // Get first (and only) Argument
        Argument arg = c.getArgument(0);

        // Get value of argument
        sStep = arg.getValue();
        position = sStep.toInt();

        // do absolute move
        moveTo(position * mu);

        Serial.print("Move to absolute position: ");
        Serial.println(position * mu);
    }
    prompt();
}