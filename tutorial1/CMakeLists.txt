cmake_minimum_required(VERSION 3.9)
project(hello_mp)

find_package(OpenMP REQUIRED)
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE OpenMP::OpenMP_CXX)

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_14)
target_compile_options(${PROJECT_NAME} PRIVATE -Werror)
set(CMAKE_VERBOSE_MAKEFILE ON)
