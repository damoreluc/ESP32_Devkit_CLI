#include <Commands/cmdRunBackward.h>

// Commands
Command cmdRunBackward;

// driver enable
extern bool driver_enabled;

// callback function for run backward command
void cmdRunBackwardCallback(cmd *commandPointer)
{
    if (!driver_enabled)
    {
        Serial.println("driver disabled (use command enable)");
    }
    else
    {
        // the motor run continuously in one direction
        runBackward();
    }
    prompt();
}