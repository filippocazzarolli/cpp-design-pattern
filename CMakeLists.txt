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

add_library(
        creation_factory STATIC
        creation/factory/main.cpp
        creation/factory/method/point.cpp
        creation/factory/friend-class/point.cpp
        creation/factory/inner-class/point.cpp
        creation/factory/abstract/hotDrink.hpp
        creation/factory/abstract/drinkFactory.hpp
        creation/factory/abstract/hotDrinkFactory.hpp
)

add_library(
        creation_prototype STATIC
        creation/prototype/main.cpp
)

add_library(
        creation_singleton STATIC
        creation/singleton/main.cpp
        creation/singleton/singletonClass.cpp
)

add_library(
        structure_adapter STATIC
        structure/adapter/main.cpp
        structure/adapter/simple.cpp
        structure/adapter/polymorphism.cpp
)

add_library(
        structure_bridge STATIC
        structure/bridge/main.cpp
        structure/bridge/es1.cpp
)

add_library(
        structure_composite STATIC
        structure/composite/main.cpp
        structure/composite/es1.cpp
)

add_library(
        structure_decorator STATIC
        structure/decorator/main.cpp
        structure/decorator/dynamic.cpp
        structure/decorator/static.cpp
        structure/decorator/pointer.cpp
        structure/decorator/function.cpp
)

add_library(
        structure_facade STATIC
        structure/facade/main.cpp
        structure/facade/es1.cpp
)

add_executable(cpp_design_pattern main.cpp)

target_link_libraries(cpp_design_pattern PRIVATE creation_builder)
target_link_libraries(cpp_design_pattern PRIVATE creation_factory)
target_link_libraries(cpp_design_pattern PRIVATE creation_prototype)
target_link_libraries(cpp_design_pattern PRIVATE creation_singleton)
target_link_libraries(cpp_design_pattern PRIVATE structure_adapter)
target_link_libraries(cpp_design_pattern PRIVATE structure_decorator)
target_link_libraries(cpp_design_pattern PRIVATE structure_facade)
