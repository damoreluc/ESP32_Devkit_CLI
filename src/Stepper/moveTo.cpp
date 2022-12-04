#include <Stepper/moveTo.h>

void moveTo(int32_t iposition) {
//    Serial.print("Move to absolute position: ");
//    Serial.println(iposition);
    stepper->moveTo(iposition);
}
