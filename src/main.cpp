#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <string.h>
#include "molecules.h"
#include "states.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

 struct molecule nitric_acid = {
  "HNO3", 
  "Salpetersaure"
 };

struct molecule *nitric_acid_p = &nitric_acid;

states CurrentState = INIT;



void setup() {

  pinMode(5, INPUT_PULLUP);

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  print_molecular_formula(&display, nitric_acid_p);
}


void loop() {

transition(&CurrentState);
output(&CurrentState, nitric_acid_p, &display);

}