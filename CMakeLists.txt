cmake_minimum_required(VERSION 3.9)

if (WIN32)
    set(CMAKE_PREFIX_PATH "D:/DevCode/SDK/pybind" ${CMAKE_PREFIX_PATH})
endif()

project(pybind_demo)

add_subdirectory(force)
add_subdirectory(app)
