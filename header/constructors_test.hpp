#ifndef __CONSTRUCTORS_TEST_HPP__
#define __CONSTRUCTORS_TEST_HPP__

#include "gtest/gtest.h"

#include "rectangle.hpp"

TEST(AreaTest, BothNegW) {
    Rectangle r1 = Rectangle(-4,-2);
    EXPECT_EQ(r1.get_width(),-4);
}
TEST(AreaTest, BothNegH) {
    Rectangle r1 = Rectangle(-4,-2);
    EXPECT_EQ(r1.get_height(),-2);
}

TEST(AreaTest, OneposOnezeroW) {
    Rectangle r1 = Rectangle(4,0);
    EXPECT_EQ(r1.get_width(),4);
}
TEST(AreaTest, OneposOnezeroH) {
    Rectangle r1 = Rectangle(4,0);
    EXPECT_EQ(r1.get_height(),0);
}

TEST(AreaTest, OneposOnenegW) {
    Rectangle r1 = Rectangle(4,-2);
    EXPECT_EQ(r1.get_width(),4);
}
TEST(AreaTest, OneposOnenegH) {
    Rectangle r1 = Rectangle(4,-2);
    EXPECT_EQ(r1.get_height(),-2);
}

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

#endif //__CONSTRUCTORS_TEST_HPP__

