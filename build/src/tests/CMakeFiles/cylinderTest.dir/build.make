# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hugo/Desktop/MG

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hugo/Desktop/MG/build

# Include any dependencies generated for this target.
include src/tests/CMakeFiles/cylinderTest.dir/depend.make

# Include the progress variables for this target.
include src/tests/CMakeFiles/cylinderTest.dir/progress.make

# Include the compile flags for this target's objects.
include src/tests/CMakeFiles/cylinderTest.dir/flags.make

src/tests/CMakeFiles/cylinderTest.dir/cylinderTest.cpp.o: src/tests/CMakeFiles/cylinderTest.dir/flags.make
src/tests/CMakeFiles/cylinderTest.dir/cylinderTest.cpp.o: ../src/tests/cylinderTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hugo/Desktop/MG/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/tests/CMakeFiles/cylinderTest.dir/cylinderTest.cpp.o"
	cd /home/hugo/Desktop/MG/build/src/tests && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cylinderTest.dir/cylinderTest.cpp.o -c /home/hugo/Desktop/MG/src/tests/cylinderTest.cpp

src/tests/CMakeFiles/cylinderTest.dir/cylinderTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cylinderTest.dir/cylinderTest.cpp.i"
	cd /home/hugo/Desktop/MG/build/src/tests && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hugo/Desktop/MG/src/tests/cylinderTest.cpp > CMakeFiles/cylinderTest.dir/cylinderTest.cpp.i

src/tests/CMakeFiles/cylinderTest.dir/cylinderTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cylinderTest.dir/cylinderTest.cpp.s"
	cd /home/hugo/Desktop/MG/build/src/tests && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hugo/Desktop/MG/src/tests/cylinderTest.cpp -o CMakeFiles/cylinderTest.dir/cylinderTest.cpp.s

# Object files for target cylinderTest
cylinderTest_OBJECTS = \
"CMakeFiles/cylinderTest.dir/cylinderTest.cpp.o"

# External object files for target cylinderTest
cylinderTest_EXTERNAL_OBJECTS = \
"/home/hugo/Desktop/MG/build/src/Tree/CMakeFiles/treeKit.dir/Node.cpp.o" \
"/home/hugo/Desktop/MG/build/src/Tree/CMakeFiles/treeKit.dir/Shapes/Shape.cpp.o" \
"/home/hugo/Desktop/MG/build/src/Tree/CMakeFiles/treeKit.dir/Shapes/cylinder.cpp.o" \
"/home/hugo/Desktop/MG/build/src/Tree/CMakeFiles/treeKit.dir/Shapes/sphere.cpp.o" \
"/home/hugo/Desktop/MG/build/src/Tree/CMakeFiles/treeKit.dir/Shapes/tore.cpp.o" \
"/home/hugo/Desktop/MG/build/CMakeFiles/galinKit.dir/src/GalinStuff/box.cpp.o" \
"/home/hugo/Desktop/MG/build/CMakeFiles/galinKit.dir/src/GalinStuff/camera.cpp.o" \
"/home/hugo/Desktop/MG/build/CMakeFiles/galinKit.dir/src/GalinStuff/evector.cpp.o" \
"/home/hugo/Desktop/MG/build/CMakeFiles/galinKit.dir/src/GalinStuff/implicits.cpp.o" \
"/home/hugo/Desktop/MG/build/CMakeFiles/galinKit.dir/src/GalinStuff/mesh.cpp.o" \
"/home/hugo/Desktop/MG/build/CMakeFiles/galinKit.dir/src/GalinStuff/meshcolor.cpp.o" \
"/home/hugo/Desktop/MG/build/CMakeFiles/galinKit.dir/src/GalinStuff/ray.cpp.o" \
"/home/hugo/Desktop/MG/build/CMakeFiles/galinKit.dir/src/GalinStuff/triangle.cpp.o"

../bin/cylinderTest: src/tests/CMakeFiles/cylinderTest.dir/cylinderTest.cpp.o
../bin/cylinderTest: src/Tree/CMakeFiles/treeKit.dir/Node.cpp.o
../bin/cylinderTest: src/Tree/CMakeFiles/treeKit.dir/Shapes/Shape.cpp.o
../bin/cylinderTest: src/Tree/CMakeFiles/treeKit.dir/Shapes/cylinder.cpp.o
../bin/cylinderTest: src/Tree/CMakeFiles/treeKit.dir/Shapes/sphere.cpp.o
../bin/cylinderTest: src/Tree/CMakeFiles/treeKit.dir/Shapes/tore.cpp.o
../bin/cylinderTest: CMakeFiles/galinKit.dir/src/GalinStuff/box.cpp.o
../bin/cylinderTest: CMakeFiles/galinKit.dir/src/GalinStuff/camera.cpp.o
../bin/cylinderTest: CMakeFiles/galinKit.dir/src/GalinStuff/evector.cpp.o
../bin/cylinderTest: CMakeFiles/galinKit.dir/src/GalinStuff/implicits.cpp.o
../bin/cylinderTest: CMakeFiles/galinKit.dir/src/GalinStuff/mesh.cpp.o
../bin/cylinderTest: CMakeFiles/galinKit.dir/src/GalinStuff/meshcolor.cpp.o
../bin/cylinderTest: CMakeFiles/galinKit.dir/src/GalinStuff/ray.cpp.o
../bin/cylinderTest: CMakeFiles/galinKit.dir/src/GalinStuff/triangle.cpp.o
../bin/cylinderTest: src/tests/CMakeFiles/cylinderTest.dir/build.make
../bin/cylinderTest: src/tests/CMakeFiles/cylinderTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hugo/Desktop/MG/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../bin/cylinderTest"
	cd /home/hugo/Desktop/MG/build/src/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cylinderTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/tests/CMakeFiles/cylinderTest.dir/build: ../bin/cylinderTest

.PHONY : src/tests/CMakeFiles/cylinderTest.dir/build

src/tests/CMakeFiles/cylinderTest.dir/clean:
	cd /home/hugo/Desktop/MG/build/src/tests && $(CMAKE_COMMAND) -P CMakeFiles/cylinderTest.dir/cmake_clean.cmake
.PHONY : src/tests/CMakeFiles/cylinderTest.dir/clean

src/tests/CMakeFiles/cylinderTest.dir/depend:
	cd /home/hugo/Desktop/MG/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hugo/Desktop/MG /home/hugo/Desktop/MG/src/tests /home/hugo/Desktop/MG/build /home/hugo/Desktop/MG/build/src/tests /home/hugo/Desktop/MG/build/src/tests/CMakeFiles/cylinderTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/tests/CMakeFiles/cylinderTest.dir/depend
