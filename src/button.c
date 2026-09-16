#include "button.h"
#include <Arduino.h>

int isButtonPressed(uint8_t pin) {
    static uint8_t previousState = HIGH;
    uint8_t currentState = digitalRead(pin);

    // Give a mechanical contact time to settle, then sample it again.
    if (currentState != previousState) {
        delay(20);
        currentState = digitalRead(pin);
    }

    int pressEvent = previousState == HIGH && currentState == LOW;
    previousState = currentState;

    return pressEvent;
}
