#include <Stepper/moveTo.h>

void moveTo(uint32_t position) {
//    Serial.print("Move to absolute position: ");
//    Serial.println(position);
    stepper->moveTo(position);
}
