#include <Commands/cmdMove.h>

// Commands
Command cmdMove;

// callback function for move command
void cmdMoveCallback(cmd *commandPointer)
{
    Command c(commandPointer); // Create wrapper class instance for the pointer
    String sStep;

    // Get first (and only) Argument
    Argument arg = c.getArgument(0);

    // Get value of argument
    sStep = arg.getValue();
    position = sStep.toInt();

    // do relative move
    moverel(position);

    Serial.print("Move relative: ");
    Serial.println(position);

    Serial.print("# "); 
}