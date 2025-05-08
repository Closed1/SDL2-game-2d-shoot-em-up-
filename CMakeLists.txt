cmake_minimum_required(VERSION 3.10)
project(ShootEmUp)

# Find SDL2
find_package(PkgConfig REQUIRED)
pkg_check_modules(SDL2 REQUIRED sdl2)

# Add include directories and link directories
include_directories(${SDL2_INCLUDE_DIRS})
link_directories(${SDL2_LIBRARY_DIRS})

# Add source files
set(SOURCES
    src/main.c
    src/init.c
    src/draw.c
    src/input.c
)

# Create the executable
add_executable(ShootEmUp ${SOURCES})

# Link SDL2 to the executable
target_link_libraries(ShootEmUp ${SDL2_LIBRARIES})
