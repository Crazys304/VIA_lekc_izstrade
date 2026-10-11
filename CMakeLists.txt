cmake_minimum_required(VERSION 3.20)
project(VIA_lekc_izstrade)

set(CMAKE_CXX_STANDARD 14)

# Kopīgās funkcijas vienā bibliotēkā
add_library(core functions.cpp)

# Galvenā programma
add_executable(VIA_lekc_izstrade main.cpp)
target_link_libraries(VIA_lekc_izstrade core)

# Testu programma
enable_testing()
add_executable(tests tests.cpp)
target_link_libraries(tests core)
add_test(NAME unit_tests COMMAND tests)