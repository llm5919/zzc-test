# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_SOURCE_DIR = /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/runtime-checks

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/runtime-checks/build

# Include any dependencies generated for this target.
include CMakeFiles/example8.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/example8.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/example8.dir/flags.make

CMakeFiles/example8.dir/example8.cpp.o: CMakeFiles/example8.dir/flags.make
CMakeFiles/example8.dir/example8.cpp.o: ../example8.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/runtime-checks/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/example8.dir/example8.cpp.o"
	/home/zzc/llvm-13.0/build/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/example8.dir/example8.cpp.o -c /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/runtime-checks/example8.cpp

CMakeFiles/example8.dir/example8.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example8.dir/example8.cpp.i"
	/home/zzc/llvm-13.0/build/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/runtime-checks/example8.cpp > CMakeFiles/example8.dir/example8.cpp.i

CMakeFiles/example8.dir/example8.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example8.dir/example8.cpp.s"
	/home/zzc/llvm-13.0/build/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/runtime-checks/example8.cpp -o CMakeFiles/example8.dir/example8.cpp.s

# Object files for target example8
example8_OBJECTS = \
"CMakeFiles/example8.dir/example8.cpp.o"

# External object files for target example8
example8_EXTERNAL_OBJECTS =

example8: CMakeFiles/example8.dir/example8.cpp.o
example8: CMakeFiles/example8.dir/build.make
example8: CMakeFiles/example8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/runtime-checks/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable example8"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example8.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/example8.dir/build: example8

.PHONY : CMakeFiles/example8.dir/build

CMakeFiles/example8.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/example8.dir/cmake_clean.cmake
.PHONY : CMakeFiles/example8.dir/clean

CMakeFiles/example8.dir/depend:
	cd /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/runtime-checks/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/runtime-checks /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/runtime-checks /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/runtime-checks/build /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/runtime-checks/build /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/runtime-checks/build/CMakeFiles/example8.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/example8.dir/depend
