#include <Stepper/stepper_disable.h>

void stepperDisable() {
    stepper->disableOutputs();
}
