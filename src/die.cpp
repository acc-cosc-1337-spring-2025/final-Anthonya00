//
#include "die.h"
#include <iostream>

int Die::roll(){

    return rand() % 6 + 1;

}