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

#endif //__AREA_TEST_HPP__
