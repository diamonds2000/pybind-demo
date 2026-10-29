cmake_minimum_required(VERSION 3.9)

project(Model)

find_package(pybind11 CONFIG REQUIRED)

add_library(ModelCore SHARED
    predefined.h
    model.cpp
    model.h
)
if(MSVC)
  target_compile_options(ModelCore PRIVATE /wd4251)
endif()
target_compile_definitions(ModelCore PRIVATE MODEL_LIB)
target_link_libraries(ModelCore PRIVATE ForceCore)

pybind11_add_module(Model MODULE pymod.cpp)
if(MSVC)
  target_compile_options(Model PRIVATE /wd4251)
endif()
target_link_libraries(Model PRIVATE 
    ForceCore
    ModelCore
)

if (WIN32)
    add_custom_command(TARGET ModelCore POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "$<TARGET_FILE:ModelCore>"
            "$<TARGET_FILE_DIR:app>"
        VERBATIM
    )
    add_custom_command(TARGET Model POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "$<TARGET_FILE:Model>"
            "$<TARGET_FILE_DIR:app>"
        VERBATIM
    )
endif()