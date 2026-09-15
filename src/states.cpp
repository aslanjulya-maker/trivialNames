#include "states.h"


void transition(enum states *State){
    
    if((*State == INIT) && isButtonPressed(5)){

        *State = SHOW_FORMULA;
    }

    if((*State == SHOW_FORMULA) && isButtonPressed(5)){

        *State = SHOW_NAME;
    }

    if((*State == SHOW_NAME) && isButtonPressed(5)){

        *State = SHOW_FORMULA;
    }

}

void output(const enum states *State, const struct molecule *CurrentMolecule, Adafruit_SSD1306 *display){

    if(*State == INIT){
        print_init(display);
    }

    if(*State == SHOW_FORMULA){
        print_molecular_formula(display, CurrentMolecule);
    }

    if(*State == SHOW_NAME){
        print_trivialname(display, CurrentMolecule);
    }
}