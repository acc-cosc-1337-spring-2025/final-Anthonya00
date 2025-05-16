//
#include "shooter.h"
#include <iostream>

using std:: cout;

Roll* Shooter:: throw_dice(Die& die1,Die& die2){
    Roll* two_dice = new Roll(die1,die2);

    two_dice->roll_dice();
    rolls.push_back(two_dice);

    return two_dice;

}

void Shooter:: display_rolled_values(){

    for (auto & ichigo: rolls ){

        std:: cout<<ichigo->roll_value();

    }

}

Shooter:: ~Shooter(){

    for (auto & ichigo: rolls ){

        delete ichigo;

    }

}