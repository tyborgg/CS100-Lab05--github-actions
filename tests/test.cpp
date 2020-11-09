  
#include "gtest/gtest.h"

#include "../header/rectangle.hpp"
#include "../header/area_test.hpp"
#include "../header/perimeter_test.hpp"
#include "../header/constructors_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
