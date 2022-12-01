#ifndef _MICROSTEPPING_H
#define _MICROSTEPPING_H

#include <Arduino.h>
#include <FastAccelStepper.h>
#include <Stepper/stepper_define.h>
#include <Stepper/stepper_data.h>

void setMicrosteppingValue(uint16_t m);

#endif