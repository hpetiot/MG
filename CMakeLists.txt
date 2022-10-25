cmake_minimum_required(VERSION 3.18)

# set the project name

project(MG)
#set(CMAKE_POSITION_INDEPENDENT_CODE ON) # -fPIC equivalent
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
include_directories(
        src/GalinStuff
        src/Tree/Shapes
        src/Tree/Operations
)
link_libraries(
        GL
        GLEW
        SDL2
        SDL2_image
)

add_library(galinKit OBJECT
        src/GalinStuff/box.cpp
        src/GalinStuff/box.h
        src/GalinStuff/camera.cpp
        src/GalinStuff/camera.h
        src/GalinStuff/color.h
        src/GalinStuff/evector.cpp
        src/GalinStuff/implicits.cpp
        src/GalinStuff/implicits.h
        src/GalinStuff/mathematics.h
        src/GalinStuff/mesh.cpp
        src/GalinStuff/mesh.h
        src/GalinStuff/meshcolor.cpp
        src/GalinStuff/meshcolor.h
        src/GalinStuff/ray.cpp
        src/GalinStuff/ray.h
        src/GalinStuff/triangle.cpp
        )

add_subdirectory(src/Tree)