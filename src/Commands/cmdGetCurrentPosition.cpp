#include <Commands/cmdGetCurrentPosition.h>

// Commands
Command cmdGetCurrentPosition;

// callback function for cmdGetCurrentPosition command
void cmdGetCurrentPositionCallback(cmd *commandPointer)
{

    Serial.print("Current position: ");
    Serial.println( getCurrentPosition() );

    prompt();
}