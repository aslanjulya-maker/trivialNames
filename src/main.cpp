#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "molecules.h"
#include "states.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

constexpr uint8_t BUTTON_PIN = 5;

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);


states CurrentState = INIT;
molecule CurrentMolecule;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  randomSeed(analogRead(A0));

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
}

void loop() {
  int buttonPressed = isButtonPressed(BUTTON_PIN);
  states previousState = CurrentState;

  transition(&CurrentState, buttonPressed);

  if (previousState != CurrentState && CurrentState == SHOW_FORMULA) {
    getRandomMolecule(&CurrentMolecule);
  }

  output(&CurrentState, &CurrentMolecule, &display);
}
