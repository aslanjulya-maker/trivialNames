#include "states.h"

void transition(enum states *State, int buttonPressed){
    
    switch(*State){

        case INIT:
            if(buttonPressed){
                *State = SHOW_FORMULA;
            }
        break;

        case SHOW_FORMULA:
            if(buttonPressed){
                *State = SHOW_NAME;
            }
        break;

        case SHOW_NAME:
            if(buttonPressed){
                *State = SHOW_FORMULA;
            }
        break;
    }

}

void output(const enum states *State, const struct molecule *CurrentMolecule, Adafruit_SSD1306 *display){

    switch (*State)
    {
 
        case INIT:
        print_init(display);
        break;

        case SHOW_FORMULA:
        print_molecular_formula(display, CurrentMolecule);
        break;

        case SHOW_NAME:
        print_trivialname(display, CurrentMolecule);
        break;

    }

}
