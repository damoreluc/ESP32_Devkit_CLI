#include <Commands/cmdSetCurrentPosition.h>

// Commands
Command cmdSetCurrentPosition;

// callback function for cmdSetCurrentPosition command
void cmdSetCurrentPositionCallback(cmd *commandPointer)
{
    Command c(commandPointer); // Create wrapper class instance for the pointer
    String sNewPosition;
    int32_t iNewPosition;

    // Get first (and only) Argument
    Argument arg = c.getArgument(0);

    // Get value of argument
    sNewPosition = arg.getValue();
    iNewPosition = sNewPosition.toInt();

    if (iNewPosition > 2000000)
    {
        iNewPosition = 2000000;
        Serial.print("New position clipped to: ");
        Serial.println(iNewPosition);
    }
    else if(iNewPosition < -2000000)
    {
        iNewPosition = -2000000;
        Serial.print("New position clipped to: ");
        Serial.println(iNewPosition);
    }
    else    
    {
        Serial.print("New Position: ");
        Serial.println(iNewPosition);
    }

    // set current position parameter on driver
    setCurrentPosition(iNewPosition);

    prompt();
}