add_executable(sphereTest
    $<TARGET_OBJECTS:galinKit>
    Shapes/sphere.cpp
    Shapes/sphere.hpp
    Shapes/sphereTest.cpp
)

add_executable(cylinderTest
    $<TARGET_OBJECTS:galinKit>
    Shapes/cylinder.cpp
    Shapes/cylinder.hpp
    Shapes/cylinderTest.cpp
)