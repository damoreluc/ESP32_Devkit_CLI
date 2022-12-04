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

    Serial.println("Started!");

    prompt();
}

String input = ""; //

void loop()
{
    if (Serial.available())
    {
        // String input = Serial.readStringUntil('\n');
        char ch = Serial.read(); //
        Serial.print(ch);        //
        input += ch;

        if (input.length() > 0 && ch == '\n')
        { 
            // Serial.print("# ");
            // Serial.println(input);

            cli.parse(input);

            input = ""; 
        }
    }

    // if (cli.available())
    // {
    //     Command c = cli.getCmd();

    //     int argNum = c.countArgs();

    //     Serial.print("> ");
    //     Serial.print(c.getName());
    //     Serial.print(' ');

    //     for (int i = 0; i < argNum; ++i)
    //     {
    //         Argument arg = c.getArgument(i);
    //         // if(arg.isSet()) {
    //         Serial.print(arg.toString());
    //         Serial.print(' ');
    //         // }
    //     }

    //     Serial.println();
    // }
}
