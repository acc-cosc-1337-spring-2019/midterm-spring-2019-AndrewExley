#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"

//Create a test case that shows that a copy of Die are not the same
//objects in memory


TEST_CASE("Test case for class_copy")
{
	Die die1;				
	die1.roll();
	int die1_g = die1.rolled_value();

	Die die2 = die1;
	

	Die& die3 = die1;
	
	REQUIRE(die2.rolled_value() == die1_g);

	REQUIRE(&die3 == &die1);	
	REQUIRE(die3.rolled_value() == die1_g);
}

}