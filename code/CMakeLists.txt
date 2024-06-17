cmake_minimum_required(VERSION 3.27)
project(code)

set(CMAKE_CXX_STANDARD 20)

add_executable(code main.cpp
    src/MachineContext.cpp
    src/InitialMachineState.cpp
    src/AMachineState.cpp
    src/BMachineState.cpp
    src/MachineState.cpp)

target_include_directories(code PRIVATE include)
