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
include CMakeFiles/example2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/example2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/example2.dir/flags.make

CMakeFiles/example2.dir/example2.cpp.o: CMakeFiles/example2.dir/flags.make
CMakeFiles/example2.dir/example2.cpp.o: ../example2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/runtime-checks/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/example2.dir/example2.cpp.o"
	/home/zzc/llvm-13.0/build/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/example2.dir/example2.cpp.o -c /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/runtime-checks/example2.cpp

CMakeFiles/example2.dir/example2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example2.dir/example2.cpp.i"
	/home/zzc/llvm-13.0/build/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/runtime-checks/example2.cpp > CMakeFiles/example2.dir/example2.cpp.i

CMakeFiles/example2.dir/example2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example2.dir/example2.cpp.s"
	/home/zzc/llvm-13.0/build/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/runtime-checks/example2.cpp -o CMakeFiles/example2.dir/example2.cpp.s

# Object files for target example2
example2_OBJECTS = \
"CMakeFiles/example2.dir/example2.cpp.o"

# External object files for target example2
example2_EXTERNAL_OBJECTS =

example2: CMakeFiles/example2.dir/example2.cpp.o
example2: CMakeFiles/example2.dir/build.make
example2: CMakeFiles/example2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/runtime-checks/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable example2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/example2.dir/build: example2

.PHONY : CMakeFiles/example2.dir/build

CMakeFiles/example2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/example2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/example2.dir/clean

CMakeFiles/example2.dir/depend:
	cd /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/runtime-checks/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/runtime-checks /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/runtime-checks /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/runtime-checks/build /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/runtime-checks/build /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/runtime-checks/build/CMakeFiles/example2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/example2.dir/depend

