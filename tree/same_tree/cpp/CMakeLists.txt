cmake_minimum_required(VERSION 3.10)

project(binary_tree_inorder_traversal)

set(CMAKE_CXX_STANDARD 11)

# find GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# headers
include_directories(${CMAKE_SOURCE_DIR}/../../_include)

set(SOURCE_FILES 
    solution.cpp
    tests.cpp
)

add_executable(RunTests ${SOURCE_FILES})

target_link_libraries(RunTests ${GTEST_LIBRARIES} pthread)