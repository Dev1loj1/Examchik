#include <gtest/gtest.h>
#include <stdexcept>
#include "../Triangle.h"

TEST(TriangleTest, ConstructorSetsValues) {
    Triangle triangle(10, 5);

    EXPECT_DOUBLE_EQ(triangle.getSide(), 10);
    EXPECT_DOUBLE_EQ(triangle.getHeight(), 5);
}

TEST(TriangleTest, CalculatesArea) {
    Triangle triangle(10, 5);

    EXPECT_DOUBLE_EQ(triangle.getArea(), 25);
}

TEST(TriangleTest, SetSideChangesValue) {
    Triangle triangle(10, 5);

    triangle.setSide(20);

    EXPECT_DOUBLE_EQ(triangle.getSide(), 20);
}

TEST(TriangleTest, SetHeightChangesValue) {
    Triangle triangle(10, 5);

    triangle.setHeight(8);

    EXPECT_DOUBLE_EQ(triangle.getHeight(), 8);
}

TEST(TriangleTest, InvalidSideInConstructorThrowsException) {
    EXPECT_THROW(
        Triangle(-10, 5),
        std::invalid_argument
    );
}

TEST(TriangleTest, InvalidHeightInConstructorThrowsException) {
    EXPECT_THROW(
        Triangle(10, 0),
        std::invalid_argument
    );
}

TEST(TriangleTest, SetSideThrowsExceptionForInvalidValue) {
    Triangle triangle(10, 5);

    EXPECT_THROW(
        triangle.setSide(0),
        std::invalid_argument
    );
}

TEST(TriangleTest, SetHeightThrowsExceptionForInvalidValue) {
    Triangle triangle(10, 5);

    EXPECT_THROW(
        triangle.setHeight(-1),
        std::invalid_argument
    );
}
