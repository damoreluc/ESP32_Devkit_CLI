#include <Stepper/microstepping.h>

void setMicrosteppingValue(uint16_t m)
{
    switch (m)
    {
    case 1:
        // select full step mode (M2 M1 M0 = 0 0 0)
        digitalWrite(mode0, LOW);
        digitalWrite(mode1, LOW);
        digitalWrite(mode2, LOW);
        break;

    case 2:
        // select half step mode (M2 M1 M0 = 0 0 1)
        digitalWrite(mode0, HIGH);
        digitalWrite(mode1, LOW);
        digitalWrite(mode2, LOW);
        break;

    case 4:
        // select 1/4 step mode (M2 M1 M0 = 0 1 0)
        digitalWrite(mode0, LOW);
        digitalWrite(mode1, HIGH);
        digitalWrite(mode2, LOW);
        break;

    case 8:
        // select 1/8 step mode (M2 M1 M0 = 0 1 1)
        digitalWrite(mode0, HIGH);
        digitalWrite(mode1, HIGH);
        digitalWrite(mode2, LOW);
        break;

    case 16:
        // select 1/16 step mode (M2 M1 M0 = 1 0 0)
        digitalWrite(mode0, LOW);
        digitalWrite(mode1, LOW);
        digitalWrite(mode2, HIGH);
        break;

    case 32:
        // select 1/32 step mode (M2 M1 M0 = 1 0 1)
        digitalWrite(mode0, HIGH);
        digitalWrite(mode1, LOW);
        digitalWrite(mode2, HIGH);
        break;

    default:
        // select full step mode (M2 M1 M0 = 0 0 0)
        digitalWrite(mode0, LOW);
        digitalWrite(mode1, LOW);
        digitalWrite(mode2, LOW);
        break;
    }
}
