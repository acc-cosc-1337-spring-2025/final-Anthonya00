//
#include "die.h"
#include <iostream>

int Die::roll_die(){

    return rand() % 6 + 1;

}