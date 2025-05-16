//
#include "point_phase.h"
#include "come_out_phase.h"


RollOutcome Pointphase :: get_outcome(Roll*roller){

    if(roller->roll_value() == point ){

        return RollOutcome::point;
    }
    
    else if(roller->roll_value() == 7  ){

        return RollOutcome::seven_out;
    }

    else{

        return RollOutcome::nopoint;
    } 

        
}