#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "gtest/gtest.h"
#include "func.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST(get_gc_content, handles_valid_input) {
	EXPECT_DOUBLE_EQ(get_gc_content("AGCTATAG"), 0.375);
	EXPECT_DOUBLE_EQ(get_gc_content("CGCTATAG"), 0.5);
}

TEST(get_reverse_string, handles_valid_input) {
	EXPECT_EQ(get_reverse_string("AGCTATAG"), "GATATCGA");
	EXPECT_EQ(get_reverse_string("CGCTATAG"), "GATATCGC");
}

TEST(get_dna_complement, handles_valid_input) {
	EXPECT_EQ(get_dna_complement("AAAACCCGGT"), "ACCGGGTTTT");
	EXPECT_EQ(get_dna_complement("CCCGGAAAAT"), "ATTTTCCGGG");
}