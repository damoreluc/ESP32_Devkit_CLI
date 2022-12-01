#include <Commands/cmdSetMicrostepping.h>

// Commands
Command cmdSetMicrostepping;

// callback function for SetMicrostepping command
void cmdSetMicrosteppingCallback(cmd *commandPointer)
{
    Command c(commandPointer); // Create wrapper class instance for the pointer
    String sUSteps;
    uint32_t iUSteps;

    // Get first (and only) Argument
    Argument arg = c.getArgument(0);

    // Get value of argument
    sUSteps = arg.getValue();
    iUSteps = abs(sUSteps.toInt());

    Serial.print("Microstepping: ");
    Serial.println(iUSteps);

    Serial.print("# ");
}