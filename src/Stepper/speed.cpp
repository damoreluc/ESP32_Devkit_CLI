#include <Stepper/speed.h>

void setSpeedValue(uint32_t speed) {
    stepper->setSpeedInHz(mu * speed);
}
