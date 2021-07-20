cmake_minimum_required(VERSION 3.5)

project(c_programming_a_modern_approach_2nd)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_C_FLAGS "-Wall -Wextra -pedantic -O0 -std=c99")
# set(CMAKE_C_FLAGS "-Wall -Wextra -pedantic -O2 -std=c99")

add_executable(_02_01_ _02_01_.c)
add_executable(_02_02_ _02_02_.c)
add_executable(_02_03_ _02_03_.c)
add_executable(_02_04_ _02_04_.c)
add_executable(_02_05_ _02_05_.c)
add_executable(_02_06_ _02_06_.c)
add_executable(_02_07_ _02_07_.c)
add_executable(_02_08_ _02_08_.c)

add_executable(_03_01_ _03_01_.c)
add_executable(_03_02_ _03_02_.c)
add_executable(_03_03_ _03_03_.c)
add_executable(_03_04_ _03_04_.c)
add_executable(_03_05_ _03_05_.c)
add_executable(_03_06_ _03_06_.c)

add_executable(_04_01_ _04_01_.c)

