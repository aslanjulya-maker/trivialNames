#include "states.h"


void transition(enum states *State){
    
    switch(*State){

        case INIT:
            if(isButtonPressed(5)){
            *State = SHOW_FORMULA;
            }
        break;

        case SHOW_FORMULA:
            if(isButtonPressed(5)){
                *State = SHOW_NAME;
                delay(200);
            }
        break;

        case SHOW_NAME:
            if(isButtonPressed(5)){
                *State = SHOW_FORMULA;
                delay(200);
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