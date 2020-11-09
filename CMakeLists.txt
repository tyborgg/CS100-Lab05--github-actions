CMAKE_MINIMUM_REQUIRED(VERSION 1.0)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(test
 src/rectangle.cpp
 tests/test.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)

