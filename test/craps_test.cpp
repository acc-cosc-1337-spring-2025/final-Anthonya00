#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"
#include "shooter.h"
#include"phase.h"
#include"come_out_phase.h"
#include"point_phase.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Check if die returns a number between 1-6"){

	Die die1 ; 

	for (int i = 1; i < 10; i++){

		REQUIRE(die1.roll_die() <= 6  );
		REQUIRE(die1.roll_die() >= 1  );
		
	}

}


TEST_CASE("Check die rolls return a value from 2 to 12"){

	Die die1; 
	Die die2;
	Roll roller(die1 , die2); 

	for (int i = 1; i < 10; i++){
		
		roller.roll_dice();
		REQUIRE( roller.roll_value() <= 12);
		REQUIRE( roller.roll_value() >= 2);
	}
	
}


TEST_CASE("Test shooter returns a Roll verify that the roll result 2-12"){

	Die die1; 
	Die die2;
	Shooter player(die1 , die2); 

	for (int i = 1; i < 10; i++){
		
		Roll* zangetsu = player.throw_dice(die1,die2);
		int v1 = zangetsu->roll_value();
		REQUIRE( v1 <= 12);
		REQUIRE( zangetsu->roll_value() >= 2);
	}

}


TEST_CASE(" ComeOutPhase get outcomes returns values RollOutcome"){

	Die die1;
	Die die2;

	Shooter player(die1, die2);

	Comeoutphase kenpachi;

	Roll*roller;
	
	do{

		roller = player.throw_dice(die1,die2);
	}while(roller->roll_value()!= 2);
	REQUIRE(kenpachi.get_outcome(roller) == RollOutcome::craps );

	do{

		roller = player.throw_dice(die1,die2);
	}while(roller->roll_value()!= 3);
	REQUIRE(kenpachi.get_outcome(roller) == RollOutcome::craps );

	do{

		roller = player.throw_dice(die1,die2);
	}while(roller->roll_value()!= 4);
	REQUIRE(kenpachi.get_outcome(roller) == RollOutcome::point );

	do{

		roller = player.throw_dice(die1,die2);
	}while(roller->roll_value()!= 5);
	REQUIRE(kenpachi.get_outcome(roller) == RollOutcome::point );

	do{

		roller = player.throw_dice(die1,die2);
	}while(roller->roll_value()!= 6);
	REQUIRE(kenpachi.get_outcome(roller) == RollOutcome::point );

	do{

		roller = player.throw_dice(die1,die2);
	}while(roller->roll_value()!= 7);
	REQUIRE(kenpachi.get_outcome(roller) == RollOutcome::natural );

	do{

		roller = player.throw_dice(die1,die2);
	}while(roller->roll_value()!= 8);
	REQUIRE(kenpachi.get_outcome(roller) == RollOutcome::point );

	do{

		roller = player.throw_dice(die1,die2);
	}while(roller->roll_value()!= 9);
	REQUIRE(kenpachi.get_outcome(roller) == RollOutcome::point );

	do{

		roller = player.throw_dice(die1,die2);
	}while(roller->roll_value()!= 10);
	REQUIRE(kenpachi.get_outcome(roller) == RollOutcome::point );

	do{

		roller = player.throw_dice(die1,die2);
	}while(roller->roll_value()!= 11);
	REQUIRE(kenpachi.get_outcome(roller) == RollOutcome::natural );

	do{

		roller = player.throw_dice(die1,die2);
	}while(roller->roll_value()!= 12);
	REQUIRE(kenpachi.get_outcome(roller) == RollOutcome::craps );

	

}


TEST_CASE(" Test that PointPhase get outcomes returns values RollOutcome"){

	Die die1;
	Die die2;

	Shooter player(die1, die2);

	Pointphase kenpachi(4);

	Roll*roller;
	
	do{

		roller = player.throw_dice(die1,die2);
	}while(roller->roll_value()!= 2);
	REQUIRE(kenpachi.get_outcome(roller) == RollOutcome::nopoint );

	do{

		roller = player.throw_dice(die1,die2);
	}while(roller->roll_value()!= 3);
	REQUIRE(kenpachi.get_outcome(roller) == RollOutcome::nopoint );

	do{

		roller = player.throw_dice(die1,die2);
	}while(roller->roll_value()!= 4);
	REQUIRE(kenpachi.get_outcome(roller) == RollOutcome::point );

	do{

		roller = player.throw_dice(die1,die2);
	}while(roller->roll_value()!= 5);
	REQUIRE(kenpachi.get_outcome(roller) == RollOutcome::nopoint );

	do{

		roller = player.throw_dice(die1,die2);
	}while(roller->roll_value()!= 6);
	REQUIRE(kenpachi.get_outcome(roller) == RollOutcome::nopoint );

	do{

		roller = player.throw_dice(die1,die2);
	}while(roller->roll_value()!= 7);
	REQUIRE(kenpachi.get_outcome(roller) == RollOutcome::seven_out );

	do{

		roller = player.throw_dice(die1,die2);
	}while(roller->roll_value()!= 8);
	REQUIRE(kenpachi.get_outcome(roller) == RollOutcome::nopoint );

	do{

		roller = player.throw_dice(die1,die2);
	}while(roller->roll_value()!= 9);
	REQUIRE(kenpachi.get_outcome(roller) == RollOutcome::nopoint );

	do{

		roller = player.throw_dice(die1,die2);
	}while(roller->roll_value()!= 10);
	REQUIRE(kenpachi.get_outcome(roller) == RollOutcome::nopoint );

	do{

		roller = player.throw_dice(die1,die2);
	}while(roller->roll_value()!= 11);
	REQUIRE(kenpachi.get_outcome(roller) == RollOutcome::nopoint );

	do{

		roller = player.throw_dice(die1,die2);
	}while(roller->roll_value()!= 12);
	REQUIRE(kenpachi.get_outcome(roller) == RollOutcome::nopoint );

}