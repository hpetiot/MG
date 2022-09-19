cmake_minimum_required(VERSION 3.18)

# set the project name

project(MG)
#set(CMAKE_POSITION_INDEPENDENT_CODE ON) # -fPIC equivalent
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
include_directories(
        src/gKit
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

add_library(gKitLib OBJECT
        src/gKit/app.cpp
        src/gKit/app.h
        src/gKit/app_camera.cpp
        src/gKit/app_camera.h
        src/gKit/app_time.cpp
        src/gKit/app_time.h
        src/gKit/color.cpp
        src/gKit/color.h
        src/gKit/draw.cpp
        src/gKit/draw.h
        src/gKit/envmap.cpp
        src/gKit/envmap.h
        src/gKit/files.cpp
        src/gKit/files.h
        src/gKit/framebuffer.cpp
        src/gKit/framebuffer.h
        src/gKit/gamepads.cpp
        src/gKit/gamepads.h
        src/gKit/glcore.h
        src/gKit/image.cpp
        src/gKit/image.h
        src/gKit/image_hdr.cpp
        src/gKit/image_hdr.h
        src/gKit/image_io.cpp
        src/gKit/image_io.h
        src/gKit/mat.cpp
        src/gKit/mat.h
        src/gKit/materials.h
        src/gKit/mesh.cpp
        src/gKit/mesh.h
        src/gKit/orbiter.cpp
        src/gKit/orbiter.h
        src/gKit/program.cpp
        src/gKit/program.h
        src/gKit/quaternion.h
        src/gKit/rgbe.cpp
        src/gKit/rgbe.h
        src/gKit/text.cpp
        src/gKit/text.h
        src/gKit/texture.cpp
        src/gKit/texture.h
        src/gKit/uniforms.cpp
        src/gKit/uniforms.h
        src/gKit/vec.cpp
        src/gKit/vec.h
        src/gKit/wavefront.cpp
        src/gKit/wavefront.h
        src/gKit/wavefront_fast.cpp
        src/gKit/wavefront_fast.h
        src/gKit/widgets.cpp
        src/gKit/widgets.h
        src/gKit/window.cpp
        src/gKit/window.h
        )

add_library(galinKit OBJECT
        src/GalinStuff/box.h
        src/GalinStuff/box.cpp
        src/GalinStuff/camera.h
        src/GalinStuff/camera.cpp
        src/GalinStuff/color.h
        src/GalinStuff/evector.cpp
        src/GalinStuff/implicits.h
        src/GalinStuff/mathematics.h
        src/GalinStuff/mesh.h
        src/GalinStuff/meshcolor.h
        src/GalinStuff/ray.h
        src/GalinStuff/triangle.cpp
        )
