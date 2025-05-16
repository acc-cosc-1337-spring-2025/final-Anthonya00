#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"
#include "shooter.h"

/*TEST_CASE("Verify Test Configuration", "verification") {
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
	
}*/


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