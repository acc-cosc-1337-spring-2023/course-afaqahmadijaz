#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test factorial function")	{
	SECTION("Handles positive input")	{
		REQUIRE(factorial(3) == 6);
        REQUIRE(factorial(5) == 120);
        REQUIRE(factorial(6) == 720);
    }

    SECTION("Handles zero input")	{
        REQUIRE(factorial(0) == 1);
    }
}

TEST_CASE("Test gcd function")	{
    SECTION("Handles positive input")	{
        REQUIRE(gcd(5, 15) == 5);
        REQUIRE(gcd(21, 28) == 7);
        REQUIRE(gcd(25, 100) == 25);
    }

    SECTION("Handles negative input")	{
        REQUIRE(gcd(-5, -15) == 5);
        REQUIRE(gcd(-21, 28) == 7);
        REQUIRE(gcd(25, -100) == 25);
    }

    SECTION("Handles zero input")	{
        REQUIRE(gcd(0, 0) == 0);
        REQUIRE(gcd(0, 5) == 5);
        REQUIRE(gcd(7, 0) == 7);
    }
}
