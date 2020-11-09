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

#endif //__PERIMETER_TEST_HPP__

