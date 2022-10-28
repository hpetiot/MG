add_executable(cylinderTest
    $<TARGET_OBJECTS:treeKit>
    cylinderTest.cpp
)

add_executable(sphereTest
    $<TARGET_OBJECTS:treeKit>
    sphereTest.cpp
)

add_executable(toreTest
    $<TARGET_OBJECTS:treeKit>
    toreTest.cpp
)

