#include <Commands/help.h>

// Commands
Command cmdHelp;

extern SimpleCLI cli;

// callback function for help command
void cmdHelpCallback(cmd *commandPointer)
{
    Serial.println("Help:");
    Serial.print(cli.toString());
    prompt();
}