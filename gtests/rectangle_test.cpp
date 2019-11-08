#include "gtest/gtest.h"
#include "../Rectangle.h"

TEST(Rectangle, getSquare)
{
    double square;
    square = Rectangle({1.0,0.0},{5.0,0.0},{5.0,5.0},{1.0,5.0}).getSquare();
    ASSERT_NEAR(square, 20, 1.0e-11);
}
