cmake_minimum_required(VERSION 3.15)
project(cpp_design_pattern)

set(CMAKE_CXX_STANDARD 20)

add_library(
        creation_builder STATIC
        creation/builder/main.cpp
        creation/builder/es1/foo.cpp
        creation/builder/es2/tag.cpp
        creation/builder/es3/person.h
        creation/builder/es3/person.cpp
        creation/builder/es3/personBuilder.h
        creation/builder/es3/personAddressBuilder.h
        creation/builder/es3/personJobBuilder.h
        creation/builder/es3/personBuilder.cpp
)


add_executable(cpp_design_pattern main.cpp)

target_link_libraries(cpp_design_pattern PRIVATE creation_builder)
