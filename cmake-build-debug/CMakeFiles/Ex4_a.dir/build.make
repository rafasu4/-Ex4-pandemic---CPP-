# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/stycks/Downloads/Programs/CLion-2020.2.4/clion-2020.2.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/stycks/Downloads/Programs/CLion-2020.2.4/clion-2020.2.4/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/stycks/CLionProjects/Ex4_a

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/stycks/CLionProjects/Ex4_a/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Ex4_a.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Ex4_a.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ex4_a.dir/flags.make

CMakeFiles/Ex4_a.dir/main.cpp.o: CMakeFiles/Ex4_a.dir/flags.make
CMakeFiles/Ex4_a.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stycks/CLionProjects/Ex4_a/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Ex4_a.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Ex4_a.dir/main.cpp.o -c /home/stycks/CLionProjects/Ex4_a/main.cpp

CMakeFiles/Ex4_a.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ex4_a.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stycks/CLionProjects/Ex4_a/main.cpp > CMakeFiles/Ex4_a.dir/main.cpp.i

CMakeFiles/Ex4_a.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ex4_a.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stycks/CLionProjects/Ex4_a/main.cpp -o CMakeFiles/Ex4_a.dir/main.cpp.s

# Object files for target Ex4_a
Ex4_a_OBJECTS = \
"CMakeFiles/Ex4_a.dir/main.cpp.o"

# External object files for target Ex4_a
Ex4_a_EXTERNAL_OBJECTS =

Ex4_a: CMakeFiles/Ex4_a.dir/main.cpp.o
Ex4_a: CMakeFiles/Ex4_a.dir/build.make
Ex4_a: CMakeFiles/Ex4_a.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/stycks/CLionProjects/Ex4_a/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Ex4_a"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Ex4_a.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ex4_a.dir/build: Ex4_a

.PHONY : CMakeFiles/Ex4_a.dir/build

CMakeFiles/Ex4_a.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Ex4_a.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Ex4_a.dir/clean

CMakeFiles/Ex4_a.dir/depend:
	cd /home/stycks/CLionProjects/Ex4_a/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/stycks/CLionProjects/Ex4_a /home/stycks/CLionProjects/Ex4_a /home/stycks/CLionProjects/Ex4_a/cmake-build-debug /home/stycks/CLionProjects/Ex4_a/cmake-build-debug /home/stycks/CLionProjects/Ex4_a/cmake-build-debug/CMakeFiles/Ex4_a.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Ex4_a.dir/depend

