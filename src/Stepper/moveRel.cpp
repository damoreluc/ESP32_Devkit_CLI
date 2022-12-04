#include <Stepper/moveRel.h>

void moverel(int32_t iposition) {
    stepper->move(iposition);
}
