#include <Commands/cmdRunForward.h>

// Commands
Command cmdRunForward;

// driver enable
extern bool driver_enabled;

// callback function for run forward command
void cmdRunForwardCallback(cmd *commandPointer)
{
    if (!driver_enabled)
    {
        Serial.println("driver disabled (use command enable)");
    }
    else
    {
        // the motor run continuously in one direction
        runForward();
    }

    prompt();
}