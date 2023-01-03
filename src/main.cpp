/*
   Copyright (c) 2019 Stefan Kremser
   This software is licensed under the MIT License. See the license file for details.
   Source: github.com/spacehuhn/SimpleCLI
 */

/*
   This is an example with all types of arguments and commands, error check and help command.
   No callbacks are used here, you can check the callback example for that.

   PLEASE NOTE: 115200 is the baud rate and Newline is enabled in the serial monitor
 */

// Include Library
#include <Arduino.h>
#include <SimpleCLI.h>
#include <Commands/createCommands.h>

#include <FastAccelStepper.h>
#include <Stepper/stepper_init.h>

// Create CLI Object
SimpleCLI cli;


// stepper driver
extern FastAccelStepperEngine engine;
extern FastAccelStepper *stepper;

void setup()
{
    Serial.begin(115200);
    Serial.println("Interactive stepper driver");
    
    createCommands(cli);

    // inizializzazione driver
    stepperInit();

    Serial.println("Driver started!");

    prompt();
}

String input = ""; //

void loop()
{
    if (Serial.available())
    {
        char ch = Serial.read(); //
        // manage backspace
        if (ch == '\b')
        {
            if (input.length() > 0)
            {
                input = input.substring(0, (input.length() - 1));
                Serial.print('\b'); Serial.print(' '); Serial.print('\b');
            }
        }
        else // insert character into buffer string
        {
            Serial.print(ch);
            input += ch;
        }

        if (input.length() > 0 && ch == '\n')
        {
            cli.parse(input);

            input = "";
        }
    }

}
