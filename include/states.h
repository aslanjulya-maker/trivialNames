#ifndef STATES_H
#define STATES_H

#include "button.h"
#include "molecules.h"
#include <Adafruit_SSD1306.h>

enum states{
    INIT, SHOW_FORMULA, SHOW_NAME
};

void transition(enum states *State);

void output(const enum states *State, const struct molecule *CurrentMolecule, Adafruit_SSD1306 *display);


#endif