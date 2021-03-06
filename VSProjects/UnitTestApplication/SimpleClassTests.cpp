#define _SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING
#include "gtest\gtest.h"
#include <SimpleClass.h>

TEST(SimpleClassTests, ComparisonALessThanB) {
	SimpleClass sc;
    EXPECT_FALSE(sc.Comparison(1, 2));
}

TEST(SimpleClassTests, ComparisonAGreaterThanB) {
	SimpleClass sc;
	EXPECT_FALSE(sc.Comparison(2, 1));
}

TEST(SimpleClassTests, ComparisonAEqualB) {
	SimpleClass sc;
	EXPECT_TRUE(sc.Comparison(2, 2));
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}