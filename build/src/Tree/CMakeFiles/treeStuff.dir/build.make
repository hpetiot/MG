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
include src/Tree/CMakeFiles/treeStuff.dir/depend.make

# Include the progress variables for this target.
include src/Tree/CMakeFiles/treeStuff.dir/progress.make

# Include the compile flags for this target's objects.
include src/Tree/CMakeFiles/treeStuff.dir/flags.make

treeStuff: src/Tree/CMakeFiles/treeStuff.dir/build.make

.PHONY : treeStuff

# Rule to build all files generated by this target.
src/Tree/CMakeFiles/treeStuff.dir/build: treeStuff

.PHONY : src/Tree/CMakeFiles/treeStuff.dir/build

src/Tree/CMakeFiles/treeStuff.dir/clean:
	cd /home/hugo/Desktop/MG/build/src/Tree && $(CMAKE_COMMAND) -P CMakeFiles/treeStuff.dir/cmake_clean.cmake
.PHONY : src/Tree/CMakeFiles/treeStuff.dir/clean

src/Tree/CMakeFiles/treeStuff.dir/depend:
	cd /home/hugo/Desktop/MG/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hugo/Desktop/MG /home/hugo/Desktop/MG/src/Tree /home/hugo/Desktop/MG/build /home/hugo/Desktop/MG/build/src/Tree /home/hugo/Desktop/MG/build/src/Tree/CMakeFiles/treeStuff.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/Tree/CMakeFiles/treeStuff.dir/depend

