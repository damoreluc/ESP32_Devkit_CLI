#include <Stepper/stepper_enable.h>

void stepperEnable() {
    //stepper->setAutoEnable(true);
    stepper->enableOutputs();
}
