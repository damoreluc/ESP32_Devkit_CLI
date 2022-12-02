#include <Stepper/stepper_stop.h>

void stepperStop() {
    stepper->disableOutputs();
}
