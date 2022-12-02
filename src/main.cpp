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
#include <Commands/cmdMove.h>
#include <Commands/cmdMoveTo.h>
#include <Commands/cmdSetMicrostepping.h>
#include <Commands/cmdSetSpeed.h>
#include <Commands/cmdSetAcceleration.h>
#include <Commands/cmdStart.h>
#include <Commands/cmdStop.h>
#include <Commands/help.h>
#include <Commands/Errors.h>

#include <FastAccelStepper.h>
#include <Stepper/stepper_init.h>


// Create CLI Object
SimpleCLI cli;

// Commands
extern Command cmdMove;
extern Command cmdMoveTo;
extern Command cmdSetMicrostepping;
extern Command cmdSetSpeed;
extern Command cmdSetAcceleration;
extern Command cmdStart;
extern Command cmdStop;
extern Command cmdHelp;

// // stepper driver
extern FastAccelStepperEngine engine;
extern FastAccelStepper *stepper;

void setup()
{
    Serial.begin(115200);
    Serial.println("Interactive stepper driver");

    cli.setOnError(errorCallback);

    cmdStart = cli.addCmd("start", cmdStartCallback);

    cmdStop = cli.addCmd("stop", cmdStopCallback);

    cmdMove = cli.addSingleArgCmd("move", cmdMoveCallback);
    cmdMove.setDescription(" Move stepper n steps forward or backward from current position");

    cmdMoveTo = cli.addSingleArgCmd("moveTo", cmdMoveToCallback);
    cmdMoveTo.setDescription(" Move stepper to absolute position");

    cmdSetMicrostepping = cli.addSingleArgCmd("setMicrostepping", cmdSetMicrosteppingCallback);
    cmdSetMicrostepping.setDescription(" Set microstepping [1, 2, 4, 8, 16, 32]");

    cmdSetSpeed = cli.addSingleArgCmd("setSpeed", cmdSetSpeedCallback);
    cmdSetSpeed.setDescription(" Set speed in steps/s");

    cmdSetAcceleration = cli.addSingleArgCmd("setAcceleration", cmdSetAccelerationCallback);
    cmdSetAcceleration.setDescription(" Set acceleration in steps/s^2");

    cmdHelp = cli.addCommand("help,?", cmdHelpCallback);
    cmdHelp.setDescription(" Get help!");

    // inizializzazione driver
    stepperInit();

    Serial.println("Started!");

    Serial.print("# "); //
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

        // if (input.length() > 0) {
        if (input.length() > 0 && ch == '\n')
        { //
            // Serial.print("# ");
            // Serial.println(input);

            cli.parse(input);

            input = ""; //
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
