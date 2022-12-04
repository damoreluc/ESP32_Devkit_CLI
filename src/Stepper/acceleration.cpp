#include <Stepper/acceleration.h>

void setAccelerationValue(uint32_t uacceleration) {
    stepper->setAcceleration(uacceleration);
}
