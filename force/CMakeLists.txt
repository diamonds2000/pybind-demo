cmake_minimum_required(VERSION 3.12)

set(CMAKE_PREFIX_PATH "D:/DevCode/SDK/pybind" ${CMAKE_PREFIX_PATH})

project(Force)

find_package(pybind11 CONFIG REQUIRED)

pybind11_add_module(Force
    pymod.cpp
    Force.cpp
    Force.h
    SCForce.cpp
    SCForce.h
    MCForce.cpp
    MCForce.h
    ForceList.cpp
    ForceList.h
)

