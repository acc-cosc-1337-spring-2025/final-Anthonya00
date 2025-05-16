#include "catch.hpp"
#include "die.h"
#include "roll.h"
#include "shooter.h"
#include"phase.h"
#include"come_out_phase.h"
#include"point_phase.h"

#include <iostream>
using std:: cin;
using std:: cout;
using std::srand;

int main(){
	srand(time(0));
	
	Die die1; 
	Die die2;
	Shooter shoot(die1 , die2);
	Roll* roller;

	Comeoutphase phase1;
	do{

		roller = shoot.throw_dice(die1, die2);
		cout<<roller->roll_value()<<" Roll again \n";

	}while (phase1.get_outcome(roller) == RollOutcome::natural || phase1.get_outcome(roller) == RollOutcome::craps);

	cout<<roller->roll_value()<<" Start of point phase\n";
	cout<<" Roll until rolled value or 7 is rolled \n";

	Pointphase phase2(roller->roll_value());
	do{
		roller = shoot.throw_dice(die1, die2);
		cout<<roller->roll_value()<<" Roll again \n";

	}while (phase2.get_outcome(roller) == RollOutcome::nopoint);
	
	cout<<roller->roll_value()<<" End of point phase\n";
	shoot.display_rolled_values();
	
	
	return 0;
}