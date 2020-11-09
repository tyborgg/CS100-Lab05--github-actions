#include "gtest/gtest.h"

#include "../header/rectangle.hpp"
//#include "../src/rectangle.cpp"
#include "area_tests.hpp"
#include "perimeter_tests.hpp"
#include "constructor_tests.hpp"
int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
