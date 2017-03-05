cmake_minimum_required(VERSION 3.6)
project(cxxblas)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
find_package(LAPACK REQUIRED)

add_subdirectory(include)
set(CXXBLAS_INCLUDE_DIR "${CMAKE_CURRENT_BINARY_DIR}/include")
include_directories("${CXXBLAS_INCLUDE_DIR}")

set(CXXBLAS_LIBRARIES ${LAPACK_LIBRARIES})

if(NOT CXXBLAS_NO_EXAMPLES)
  add_subdirectory(examples)
endif()
