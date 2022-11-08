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

add_executable(translationTest
    $<TARGET_OBJECTS:treeKit>
    translationTest.cpp
)

add_executable(unionTest
    $<TARGET_OBJECTS:treeKit>
    unionTest.cpp
)

add_executable(differenceTest
    $<TARGET_OBJECTS:treeKit>
    differenceTest.cpp
)

add_executable(smoothUnionTest
    $<TARGET_OBJECTS:treeKit>
    smoothunionTest.cpp
)

add_executable(smoothDiffTest
    $<TARGET_OBJECTS:treeKit>
    smoothdiffTest.cpp
)