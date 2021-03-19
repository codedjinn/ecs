# CMakeList.txt : CMake project for cpp2, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project(ecs VERSION 0.1.0)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

set (CMAKE_CXX_STANDARD 11)

set(
    SOURCE_FILES
    framework/component.h
    framework/component_factory.h
    framework/entity_def.h
    framework/entity.h
    framework/entity.cpp
    framework/entity_manager.cpp
    framework/entity_manager.h
    game/TransformComponent.h
    logger.h
    logger.cpp
    main.cpp
)

add_executable(ecs ${SOURCE_FILES})

include_directories(C:/sfml2/include)

find_library(SFML2 sfml-graphics c:/SFML2/lib)
target_link_libraries(ecs LINK_PUBLIC ${SFML2})

find_library(SFML22 sfml-window c:/SFML2/lib)
target_link_libraries(ecs LINK_PUBLIC ${SFML22})

find_library(SFML21 sfml-system c:/SFML2/lib)
target_link_libraries(ecs LINK_PUBLIC ${SFML21})