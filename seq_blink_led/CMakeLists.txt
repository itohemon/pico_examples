cmake_minimum_required(VERSION 3.12)

# Pull in SDK (must be before project)
include(../pico_sdk_import.cmake)

project(seq_blink_led C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(main)

target_sources(main PRIVATE main.c control.c driver.c)

# Pull in our pico_stdlib which pulls in commonly used features
target_link_libraries(main pico_stdlib hardware_timer)

# create map/bin/hex file etc.
pico_add_extra_outputs(main)

