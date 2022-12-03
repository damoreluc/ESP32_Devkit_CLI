#ifndef _STEPPER_DATA_H
#define _STEPPER_DATA_H

#include <Arduino.h>
#include <FastAccelStepper.h>
#include <Stepper/stepper_define.h>

// stepper driver
extern FastAccelStepperEngine engine;
extern FastAccelStepper *stepper;

// driver enable
extern bool driver_enabled;

// microstepping
extern uint16_t mu;

// position
extern int32_t position;

// speed
extern int32_t speed;

// acceleration
extern uint32_t acceleration;

#endif