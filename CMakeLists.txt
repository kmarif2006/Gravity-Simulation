cmake_minimum_required(VERSION 3.10)
project(GravitySim)

set(CMAKE_CXX_STANDARD 17)

# Use MinGW/MSYS2 include directories
include_directories(
    "C:/msys64/mingw64/include"      # GLEW headers
    "C:/msys64/mingw64/include/GLFW" # GLFW headers
    "C:/Libraries/glm"               # GLM headers if used
)

# Use MinGW/MSYS2 library directory
link_directories(
    "C:/msys64/mingw64/lib"          # GLEW & GLFW libraries
)

# Add executable
add_executable(GravitySim src/gravity_sim.cpp)

# Link libraries
target_link_libraries(GravitySim glfw3 glew32 opengl32 gdi32)
