#include <Stepper/acceleration.h>

void setAccelerationValue(uint32_t acceleration) {
    stepper->setAcceleration(mu * acceleration);
}
