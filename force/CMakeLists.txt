cmake_minimum_required(VERSION 3.9)

project(Force)

find_package(pybind11 CONFIG REQUIRED)

add_library(ForceCore SHARED
    predefined.h
    Force.cpp
    Force.h
    SCForce.cpp
    SCForce.h
    MCForce.cpp
    MCForce.h
    ForceList.cpp
    ForceList.h
)

if(MSVC)
  target_compile_options(ForceCore PRIVATE /wd4251)
endif()
target_compile_definitions(ForceCore PRIVATE FORCE_LIB)
target_include_directories(ForceCore PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

pybind11_add_module(Force MODULE pymod.cpp)
if(MSVC)
  target_compile_options(Force PRIVATE /wd4251)
endif()
target_link_libraries(Force PRIVATE ForceCore)

if (WIN32)
    add_custom_command(TARGET ForceCore POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "$<TARGET_FILE:ForceCore>"
            "$<TARGET_FILE_DIR:app>"
        VERBATIM
    )
    add_custom_command(TARGET Force POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "$<TARGET_FILE:Force>"
            "$<TARGET_FILE_DIR:app>"
        VERBATIM
    )
endif()