#include <iostream>
#include "die.h"
#include "roll.h"
#include <vector>

using std:: vector;

#ifndef shooter
#define shooter




class Shooter:public Roll{

    public:

        Shooter(Die die1,Die die2):Roll(die1,die2){}
        ~Shooter();
        Roll* throw_dice(Die& die1,Die& die2);
        void display_rolled_values();
        
        

    private:

       vector<Roll*> rolls ;
        

       
};


#endif