#ifndef __CONSTRUCTOR_TESTS_HPP__
#define __CONSTRUCTOR_TESTS_HPP__

#include "gtest/gtest.h"
#include "../header/rectangle.hpp"


TEST(ConstructorTest, ZeroHeightAndWidth)
{
	Rectangle r1(0,0);
	EXPECT_EQ(0,r1.get_height());
}

TEST(ConstructorTest, NegativeParameters)
{
	Rectangle r1(-2,-1);
	EXPECT_EQ(-2,r1.get_width());
}

TEST(ConstructorTest, NormalParameters)
{
	Rectangle r1(3,4);
	EXPECT_EQ(4,r1.get_height());
}
#endif //__CONSTRUCTOR_TESTS_HPP__
