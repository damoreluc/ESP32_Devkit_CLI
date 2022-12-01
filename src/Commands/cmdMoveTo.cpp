#include <Commands/cmdMove.h>

// Commands
Command cmdMoveTo;

// callback function for moveTo command
void cmdMoveToCallback(cmd *commandPointer)
{
    Command c(commandPointer); // Create wrapper class instance for the pointer
    String sStep;
    int32_t iSteps;

    // Get first (and only) Argument
    Argument arg = c.getArgument(0);

    // Get value of argument
    sStep = arg.getValue();
    iSteps = sStep.toInt();

    Serial.print("Move to absolute position: ");
    Serial.println(iSteps);
}