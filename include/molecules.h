#ifndef MOLECULE_H
#define MOLECULE_H

#include <Adafruit_SSD1306.h>

struct molecule
{
  char molecular_formula[50];
  char trivialname[100];
};

void print_molecular_formula(Adafruit_SSD1306 *display, const struct molecule *Molecule);
void print_trivialname(Adafruit_SSD1306 *display, const struct molecule *Molecule);
void print_init(Adafruit_SSD1306 *display);

#endif