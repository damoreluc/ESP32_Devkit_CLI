#include <Stepper/speed.h>

void setSpeedValue(uint32_t uspeed) {
    stepper->setSpeedInHz(uspeed);
}
