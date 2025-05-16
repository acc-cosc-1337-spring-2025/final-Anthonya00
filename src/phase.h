//
#include <iostream>

#include "die.h"
#include "roll.h"
#include "shooter.h"

#ifndef phase
#define phase

enum class RollOutcome{
    natural,
    craps,
    point,
    seven_out,
    nopoint,
};

class Phase {

    public:

        virtual enum RollOutcome get_outcome(Roll*roller)= 0;


};


#endif
