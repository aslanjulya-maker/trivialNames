#include"button.h"
#include <Arduino.h>

int isButtonPressed(uint8_t pin){

return digitalRead(pin) == LOW;

}