#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <string.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

 struct molecule
{
  char molecular_formula[50];
  char trivialname[100];

};

void print_molecular_formula(const struct molecule *Molecule);
void print_trivialname(const struct molecule *Molecule);


void setup() {

 struct molecule nitric_acid = {
  "HNO3", 
  "Salpetersaure"
 };
struct molecule *nitric_acid_p;
nitric_acid_p = &nitric_acid;
 
 

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);

  print_molecular_formula(nitric_acid_p);
  delay(500);
  print_trivialname(nitric_acid_p);
  
}


void loop() {
}




void print_molecular_formula(const struct molecule *Molecule){

 char Molecular_formula[50];
 strcpy(Molecular_formula, Molecule->molecular_formula);

  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
  display.setTextSize(2);
  display.setCursor(0, 0);
  display.println(Molecular_formula);
  display.display();
}

void print_trivialname(const struct molecule *Molecule){

char Trivialname[100];
strcpy(Trivialname, Molecule->trivialname);

  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
  display.setTextSize(2);
  display.setCursor(0, 0);
  display.println(Trivialname);
  display.display();
}