#ifndef _STEPPER_DATA_H
#define _STEPPER_DATA_H

#include <Arduino.h>
#include <FastAccelStepper.h>
#include <Stepper/stepper_data.h>
#include <Stepper/stepper_define.h>
#include <Stepper/stepper_init.h>

// stepper driver
extern FastAccelStepperEngine engine;
extern FastAccelStepper *stepper;
// microstepping
extern uint16_t mu;

void stepperInit()
{
   pinMode(mode0, OUTPUT);
   pinMode(mode1, OUTPUT);
   pinMode(mode2, OUTPUT);
   
   engine.init();
   stepper = engine.stepperConnectToPin(stepPinStepper);

   if (stepper)
   {
      stepper->setDirectionPin(dirPinStepper);
      stepper->setEnablePin(enablePinStepper);
      stepper->setAutoEnable(false);
   }
   else
   {
      Serial.println("Stepper Not initialized!");
      delay(1000);
   }
}

#endif