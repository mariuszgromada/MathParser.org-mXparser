cmake_minimum_required(VERSION 3.22)
project(MathParserOrgMxParserRoot LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(lib)
add_subdirectory(tests)
add_subdirectory(working-tests)