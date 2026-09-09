cmake_minimum_required(VERSION 3.20)

project(Examchik)

set(CMAKE_CXX_STANDARD 11)

# -----------------------------
# Статическая библиотека
# -----------------------------

add_library(
        triangle
        STATIC
        Triangle.cpp
)

target_include_directories(
        triangle
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

# -----------------------------
# Основная программа
# -----------------------------

add_executable(
        Examchik
        main.cpp
)

target_link_libraries(
        Examchik
        PRIVATE
        triangle
)

# -----------------------------
# GoogleTest
# -----------------------------

include(FetchContent)

FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.17.0.zip
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
        TriangleTests
        tests/TriangleTests.cpp
)

target_link_libraries(
        TriangleTests
        PRIVATE
        triangle
        GTest::gtest_main
)

include(GoogleTest)

gtest_discover_tests(TriangleTests)