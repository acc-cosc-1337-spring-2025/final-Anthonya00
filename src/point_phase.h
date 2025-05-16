//
#include <iostream>

#include "die.h"
#include "roll.h"
#include "shooter.h"
#include "come_out_phase.h"



#ifndef point_phase
#define point_phase



class Pointphase:public Phase{

    public:

        enum RollOutcome get_outcome(Roll*roller) override ;

        Pointphase(int p):point (p){}
        
        

    private:

       int point ;
 
};









#endif
