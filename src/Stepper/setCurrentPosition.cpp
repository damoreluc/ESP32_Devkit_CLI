#include <Stepper/setCurrentPosition.h>

void setCurrentPosition(int32_t new_pos) {
    stepper->setCurrentPosition(new_pos);
}
