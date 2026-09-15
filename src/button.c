#include"button.h"
#include <Arduino.h>

int isButtonPressed(uint8_t pin){

    if (digitalRead(pin)){
        delay(200);
        return 1;
    }
    else{
        return 0;
    }
}