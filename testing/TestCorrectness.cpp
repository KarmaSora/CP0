#include "catch_amalgamated.hpp"
#include "Test.h"

TEST_CASE("Testing small example")
{
	SECTION("returingText")
	{
		REQUIRE("This is the text" == returningText());
	}
	SECTION("readFromFile")
	{
		REQUIRE(readFromFile("file22.txt") == 22);
	}
	SECTION("adding intergers"){
		int result = add(10, 40);
		REQUIRE	(result == 50);
	}
}