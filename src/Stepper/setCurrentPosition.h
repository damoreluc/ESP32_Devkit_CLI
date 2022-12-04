#ifndef _SET_CURRENT_POSITION_H
#define _SET_CURRENT_POSITION_H

#include <Arduino.h>
#include <FastAccelStepper.h>
#include <Stepper/stepper_define.h>
#include <Stepper/stepper_data.h>

void setCurrentPosition(int32_t new_pos);

#endif