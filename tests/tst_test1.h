#ifndef EQUATATION_TEST_H
#define EQUATATION_TEST_H

#include <gtest/gtest.h>

extern "C" {
#include "myfunc.h"
}

TEST(equatationTest, num0) {
    ASSERT_EQ(Func(1, 4, 4).count, 2);
    ASSERT_NEAR(Func(1, 4, 4).x1, -2.00, 0.001);
    ASSERT_NEAR(Func(1, 4, 4).x2, -2.00, 0.001);
}

TEST(equatationTest, num1) {
    ASSERT_EQ(Func(1, -4, 4).count, 2);
    ASSERT_NEAR(Func(1, -4, 4).x1, 2.00, 0.001);
    ASSERT_NEAR(Func(1, -4, 4).x2, 2.00, 0.001);
}

TEST(equatationTest, num2) {
    ASSERT_EQ(Func(1, 1, 4).count, 0);
}

TEST(equatationTest, num3) {
    ASSERT_EQ(Func(0, 0, 2).count, 0);
}

TEST(equatationTest, num4) {
    ASSERT_EQ(Func(0, 2, 2).count, 1);
    ASSERT_NEAR(Func(0, 2, 2).x1, -1.00, 0.001);
}

TEST(equatationTest, num5) {
    ASSERT_EQ(Func(0, 0, 1).count, 0);
}

TEST(equatationTest, num6) {
    ASSERT_EQ(Func(6, 7, 10).count, 0);
}
#endif // EQUATATION_TEST_H
