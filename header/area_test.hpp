#ifndef __AREA_TEST_HPP__
#define __AREA_TEST_HPP__

#include "gtest/gtest.h"

#include "rectangle.hpp"

TEST(AreaTest, BothNeg) {
    Rectangle r1 = Rectangle(-4,-2);
    EXPECT_EQ(r1.area(), -1);
}
TEST(AreaTest, OneposOnezero) {
    Rectangle r1 = Rectangle(4,0);
    EXPECT_EQ(r1.area(), -1);
}
TEST(AreaTest, OneposOneneg) {
    Rectangle r1 = Rectangle(4,-2);
    EXPECT_EQ(r1.area(), -1);
}

TEST(AreaTest, ZeroArea)
{
        Rectangle r1(0,0);
        EXPECT_EQ(0,r1.area());
}

TEST(AreaTest, LargeArea)
{
        Rectangle r1(100,100);
        EXPECT_EQ(10000,r1.area());
}

TEST(AreaTest, RegularAreaNumbers)
{
        Rectangle r1(3,4);
        EXPECT_EQ(12, r1.area());
}

#endif //__AREA_TEST_HPP__
