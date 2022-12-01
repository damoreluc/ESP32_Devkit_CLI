#include <Stepper/moveTo.h>

void moveTo(uint32_t position) {
    stepper->moveTo(position);
}
