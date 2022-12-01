#include <Commands/cmdMoveTo.h>

// Commands
Command cmdMoveTo;

// callback function for moveTo command
void cmdMoveToCallback(cmd *commandPointer)
{
    Command c(commandPointer); // Create wrapper class instance for the pointer
    String sStep;

    // Get first (and only) Argument
    Argument arg = c.getArgument(0);

    // Get value of argument
    sStep = arg.getValue();
    position = sStep.toInt();

    // do absolute move
    moveTo(position);

    Serial.print("Move to absolute position: ");
    Serial.println(position);

    Serial.print("# ");     
}