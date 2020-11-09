#ifndef __PERIMETER_TESTS_HPP__
#define __PERIMETER_TESTS_HPP__

#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(PerimeterTest, ZeroPerimeter)
{
	Rectangle r1(0,0);
	EXPECT_EQ(0,r1.perimeter());
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

#endif //__PERIMETER_TESTS_HPP__

