#include <Commands/cmdHalt.h>

// Commands
Command cmdHalt;

// callback function for halt command
void cmdHaltCallback(cmd *commandPointer) {

    // abruptly stop the stepper
    stepperHalt();

    prompt(); 
}