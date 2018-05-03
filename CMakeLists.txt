cmake_minimum_required(VERSION 3.10)
project(walkar)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake_modules)
set(SFML_ROOT ${CMAKE_CURRENT_LIST_DIR}/SFML-2.4.2)

find_package(SFML 2 REQUIRED window graphics system)
find_package(OPENGL REQUIRED)

include_directories(${SFML_INCLUDE_DIR})

add_executable(walkar main.cpp GameBus.cpp GameBus.h)
target_link_libraries(walkar ${SFML_LIBRARIES} ${SFML_DEPENDENCIES} ${OPENGL_LIBARIES})