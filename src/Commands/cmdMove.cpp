#include <Commands/cmdMove.h>

// Commands
Command cmdMove;

// driver enable
extern bool driver_enabled;

// callback function for move command
void cmdMoveCallback(cmd *commandPointer)
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

    // do relative move
    moverel(position*mu);

    Serial.print("Move relative: ");
    Serial.println(position*mu);
    }

    prompt();
}