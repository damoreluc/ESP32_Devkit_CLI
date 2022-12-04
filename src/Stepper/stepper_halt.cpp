#include <Stepper/stepper_halt.h>

void stepperHalt() {
    int32_t actualPosition = stepper->getCurrentPosition();
    stepper->forceStopAndNewPosition(actualPosition);
}
