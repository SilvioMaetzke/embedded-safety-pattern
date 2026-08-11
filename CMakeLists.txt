cmake_minimum_required(VERSION 3.10)
project(embedded_safety_patterns)

set(CMAKE_CXX_STANDARD 17)

include_directories(src)

add_executable(run_tests
    tests/watchdog_tests.cpp
    tests/state_machine_tests.cpp
    tests/fault_manager_tests.cpp

    src/watchdog/watchdog.cpp
    src/state_machine/state_machine.cpp
    src/fault_manager/fault_manager.cpp
    src/safe_startup/startup_sequence.cpp
)
