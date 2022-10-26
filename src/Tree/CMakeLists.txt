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

add_executable(toreTest
    $<TARGET_OBJECTS:galinKit>
    Shapes/tore.cpp
    Shapes/tore.hpp
    Shapes/toreTest.cpp
)