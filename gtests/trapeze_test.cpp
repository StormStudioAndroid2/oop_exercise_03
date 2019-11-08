
#include "gtest/gtest.h"
#include "../Trapeze.h"

TEST(Trapeze, getSquare)
{
    double square;
    square = Trapeze({5.0,0.0},{10.0,0.0},{7.0,5.0},{10.0,5.0}).getSquare();
    ASSERT_NEAR(square, 20, 1.0e-11);
}
