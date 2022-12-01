#include <Commands/cmdMove.h>

// Commands
Command cmdMove;

// callback function for move command
void cmdMoveCallback(cmd *commandPointer)
{
    Command c(commandPointer); // Create wrapper class instance for the pointer
    String sStep;
    uint32_t iSteps;

    if (c.getArg("f").isSet() && c.getArg("b").isSet())
    {
        Serial.println("Use -f or -b, not both");
        Serial.print("# ");
        return;
    }
    else if (c.getArg("f").isSet() && !c.getArg("b").isSet())
    {
        // get number of steps
        sStep = c.getArgument("f").getValue();
        iSteps = abs(sStep.toInt());
        Serial.print("Moving forward ");
        Serial.print(iSteps);
        Serial.println(" steps");
    }
    else if (!c.getArg("f").isSet() && c.getArg("b").isSet())
    {
        // get number of steps
        sStep = c.getArgument("b").getValue();
        iSteps = abs(sStep.toInt());
        Serial.print("Moving backward ");
        Serial.print(iSteps);
        Serial.println(" steps");
    }

    Serial.print("# ");
}