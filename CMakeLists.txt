cmake_minimum_required(VERSION 3.16)
project(example_cpp_py)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

find_package(Eigen3 REQUIRED)
find_package(pybind11 REQUIRED)
find_package(example-cpp REQUIRED)

include_directories(
  ${EIGEN3_INCLUDE_DIRS}
)

pybind11_add_module(example_cpp_py python_module.cpp)
target_link_libraries(example_cpp_py INTERFACE example-cpp)
