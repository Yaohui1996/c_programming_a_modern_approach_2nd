cmake_minimum_required(VERSION 3.5)

project(c_programming_a_modern_approach_2nd)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_C_FLAGS "-Wall -Wextra -pedantic -O0 -std=c99")
# set(CMAKE_C_FLAGS "-Wall -Wextra -pedantic -O2 -std=c99")

add_executable(_02_01_ _02_01_.c)
add_executable(_02_02_ _02_02_.c)
add_executable(_02_03_ _02_03_.c)
add_executable(_02_04_ _02_04_.c)
