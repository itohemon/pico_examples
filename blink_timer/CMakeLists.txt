cmake_minimum_required(VERSION 3.12)

# Pull in SDK (must be before project)
include(../pico_sdk_import.cmake)

project(hunter_pico_examples C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(blink_timer)

target_sources(blink_timer PRIVATE blink_timer.c)

# Pull in our pico_stdlib which pulls in commonly used features
target_link_libraries(blink_timer pico_stdlib hardware_timer)

# create map/bin/hex file etc.
pico_add_extra_outputs(blink_timer)
