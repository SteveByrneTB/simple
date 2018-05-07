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