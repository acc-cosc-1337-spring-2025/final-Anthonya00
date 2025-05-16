#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Check if die returns a number between 1-6"){

	Die die1 ; 

	for (int i = 1; i < 10; i++){

		REQUIRE(die1.roll() <= 6  );
		REQUIRE(die1.roll() >= 1  );
		
	}


}
