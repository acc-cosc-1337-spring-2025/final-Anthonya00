//
#include <iostream>
#include "die.h"

#ifndef roll
#define roll




class Roll:public Die{

    public:

        Roll(Die die1,Die die2):die1_(die1),die2_(die2){}
        void roll_dice();
        int roll_value() const;
        

    private:

        Die& die1_;
        Die& die2_;
        int rolled_value;
        

       
};


#endif