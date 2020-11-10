#ifndef __PERIMETER_TEST_HPP__
#define __PERIMETER_TEST_HPP__

#include "gtest/gtest.h"

#include "rectangle.hpp"

TEST(PerimeterTest, BothNeg) {
    Rectangle r1 = Rectangle(-4,-2);
    EXPECT_EQ(r1.perimeter(), -1);
}
TEST(PerimeterTest, OneposOnezero) {
    Rectangle r1 = Rectangle(4,0);
    EXPECT_EQ(r1.perimeter(), -1);
}
TEST(PerimeterTest, OneposOneneg) {
    Rectangle r1 = Rectangle(4,-2);
    EXPECT_EQ(r1.perimeter(), -1);
}

TEST(PerimeterTest, ZeroPerimeter)
{
	Rectangle r1(0,0);
	EXPECT_EQ(-1,r1.perimeter());
}

TEST(PerimeterTest, LargePerimeter)
{
	Rectangle r1(999,999);
	EXPECT_EQ(3996,r1.perimeter());
}

TEST(PerimeterTest, NormalPerimeter)
{
	Rectangle r1(3,4);
	EXPECT_EQ(14,r1.perimeter());
}

#endif //__PERIMETER_TEST_HPP__

