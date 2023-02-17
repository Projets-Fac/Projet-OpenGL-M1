cmake_minimum_required(VERSION 3.10)

project(Projet_OpenGL)

# Stop if in the wrong place
if (CMAKE_SOURCE_DIR STREQUAL CMAKE_BINARY_DIR)
    message(FATAL_ERROR "Source and build directories must be different!")
endif()

# Find glfw
find_package(glfw3 3.3 REQUIRED)

# Create an executable
add_executable(main src/main.cpp src/glad.c)

# Link the executable to the libraries
target_link_libraries(main glfw)
target_include_directories(main PUBLIC include)