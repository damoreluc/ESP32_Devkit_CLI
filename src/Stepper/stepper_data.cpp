#ifndef _STEPPER_DATA_H
#define _STEPPER_DATA_H

#include <Arduino.h>
#include <FastAccelStepper.h>
#include <Stepper/stepper_define.h>

// stepper driver
FastAccelStepperEngine engine = FastAccelStepperEngine();
FastAccelStepper *stepper = NULL;

// driver enable
bool driver_enabled = false;

// microstepping
uint16_t mu = 1;

// position
int32_t position = 0;

// speed
uint32_t speed = 100;

// acceleration
uint32_t acceleration = 100;

#endif