#include "molecules.h"

void print_molecular_formula(Adafruit_SSD1306 *display, const struct molecule *Molecule){

 char Molecular_formula[50];
 strcpy(Molecular_formula, Molecule->molecular_formula);

  display->clearDisplay();
  display->setTextColor(SSD1306_WHITE);
  display->setTextSize(2);
  display->setCursor(0, 0);
  display->println(Molecular_formula);
  display->display();
}

void print_trivialname(Adafruit_SSD1306 *display, const struct molecule *Molecule){

char Trivialname[100];
strcpy(Trivialname, Molecule->trivialname);

  display->clearDisplay();
  display->setTextColor(SSD1306_WHITE);
  display->setTextSize(2);
  display->setCursor(0, 0);
  display->println(Trivialname);
  display->display();
}

void print_init(Adafruit_SSD1306 *display){

    display->clearDisplay();
  display->setTextColor(SSD1306_WHITE);
  display->setTextSize(2);
  display->setCursor(0, 0);
  display->println("Marhaban");
  display->display();
}