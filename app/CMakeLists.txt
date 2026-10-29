cmake_minimum_required(VERSION 3.9)

project(app)

find_package(pybind11 CONFIG REQUIRED)

add_executable(app
    main.cpp
)

target_link_libraries(app PRIVATE
    pybind11::embed
)