#include "catch_amalgamated.h"
void convertSecToHourMinSec(int sec)
{
	//for you to add
}
TEST_CASE("testing convertSecToHourMinSec")
{
	int hour;
	int min;
	int sec;
	int totalSec;
	SECTION("less than 60 seconds")
	{
		totalSec = 56;
		convertSecToHourMinSec(totalSec, hour, min, sec);
		REQUIRE(hour == 0);
		REQUIRE(min == 0);
		REQUIRE(sec == totalSec);
	}
	// for you to add more SECTIONS
}

