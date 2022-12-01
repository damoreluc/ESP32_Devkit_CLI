#include <Commands/cmdSetMicrostepping.h>

// Commands
Command cmdSetMicrostepping;

extern uint16_t mu;

// callback function for SetMicrostepping command
void cmdSetMicrosteppingCallback(cmd *commandPointer)
{
    Command c(commandPointer); // Create wrapper class instance for the pointer
    String sUSteps;

    // Get first (and only) Argument
    Argument arg = c.getArgument(0);

    // Get value of argument
    sUSteps = arg.getValue();
    mu = abs(sUSteps.toInt());

    // set microstepping parameter on driver
    setMicrosteppingValue(mu);

    Serial.print("Microstepping: ");
    Serial.println(mu);

    Serial.print("# ");
}