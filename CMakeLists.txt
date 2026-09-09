cmake_minimum_required(VERSION 3.20)

project(Examchik)

set(CMAKE_CXX_STANDARD 11)

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

add_executable(
        Examchik
        main.cpp
)

target_link_libraries(
        Examchik
        PRIVATE
        triangle
)