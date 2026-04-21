cmake_minimum_required(VERSION 3.10)
project(altitude_calculator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
    src/lib/main.cpp 
    src/lib/utils/Convert.cpp
)

add_executable(calculator ${SOURCES})

target_include_directories(calculator PRIVATE src/lib/include)