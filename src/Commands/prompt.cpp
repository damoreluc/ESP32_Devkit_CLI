#include <Commands/prompt.h>

void prompt() {
    Serial.print("< ");
    Serial.print(driver_enabled? "Enabled": "Stopped");
    Serial.print(", m = ");
    Serial.print(mu);    
    Serial.print(", v = ");
    Serial.print(speed);
    Serial.print(", a = ");
    Serial.print(acceleration);   
    Serial.print("> # ");     
}