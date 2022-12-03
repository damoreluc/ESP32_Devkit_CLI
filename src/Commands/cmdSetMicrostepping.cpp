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

    // is mu value legit?
    uint16_t muValues[] = {1, 2, 4, 8, 16, 32};
    bool inSet = false;
    for (uint16_t i = 0; i < (sizeof(muValues) / sizeof(uint16_t) ); i++)
    {
        inSet |= (mu == muValues[i]);
    }

    if (!inSet)
    {
        mu = 1;
        Serial.print("Microstepping clipped to: ");
        Serial.println(mu);
    }
    else
    {
        Serial.print("Microstepping: ");
        Serial.println(mu);
    }

    // set microstepping parameter on driver
    setMicrosteppingValue(mu);

    prompt();
}