//
#include "roll.h"
//#include "die.h"
#include <iostream>


void Roll::roll_dice(){

    int result1 = die1_.roll_die();
    int result2 = die2_.roll_die();

    
    rolled_value = result1+result2;

}

int Roll::roll_value() const{

    return rolled_value;
}









