#include <Stepper/moveRel.h>

void moverel(uint32_t position) {
    stepper->move(position);
}
