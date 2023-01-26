cmake_minimum_required(VERSION 3.20)
project(zxc)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXE_LINKER_FLAGS "-static -static-libgcc")
set(SFML_STATIC_LIBRARIES TRUE)

add_executable(zxc zxc.cpp)

set(SFML_DIR "lib/sfml/GCC 7.3.0 MinGW (SEH) - 64-bit/SFML-2.5.1/lib/cmake/SFML")

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
target_link_libraries(zxc sfml-graphics sfml-audio)
