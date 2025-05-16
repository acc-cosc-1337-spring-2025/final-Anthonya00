//
#include "phase.h"
#include "come_out_phase.h"


RollOutcome Comeoutphase :: get_outcome(Roll*roller){

    if(roller->roll_value() == 7 || roller->roll_value() == 11 ){

        return RollOutcome::natural;
    }
    
    else if(roller->roll_value() == 2 || roller->roll_value() == 3 || roller->roll_value() == 12 ){

        return RollOutcome::craps;
    }

    else{

        return RollOutcome::point;
    } 

        
}