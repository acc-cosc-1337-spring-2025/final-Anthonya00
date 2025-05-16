#include <iostream>

#include "die.h"
#include "roll.h"
#include "shooter.h"
#include "phase.h"


#ifndef come_out_phase
#define come_out_phase




class Comeoutphase:public Phase{

    public:

       enum RollOutcome get_outcome(Roll*roller) override ;
        
        
};

#endif