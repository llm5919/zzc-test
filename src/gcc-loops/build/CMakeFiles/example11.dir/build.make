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
CMAKE_SOURCE_DIR = /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/gcc-loops

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/gcc-loops/build

# Include any dependencies generated for this target.
include CMakeFiles/example11.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/example11.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/example11.dir/flags.make

CMakeFiles/example11.dir/example11.cpp.o: CMakeFiles/example11.dir/flags.make
CMakeFiles/example11.dir/example11.cpp.o: ../example11.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/gcc-loops/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/example11.dir/example11.cpp.o"
	/home/zzc/llvm-13.0/build/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/example11.dir/example11.cpp.o -c /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/gcc-loops/example11.cpp

CMakeFiles/example11.dir/example11.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example11.dir/example11.cpp.i"
	/home/zzc/llvm-13.0/build/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/gcc-loops/example11.cpp > CMakeFiles/example11.dir/example11.cpp.i

CMakeFiles/example11.dir/example11.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example11.dir/example11.cpp.s"
	/home/zzc/llvm-13.0/build/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/gcc-loops/example11.cpp -o CMakeFiles/example11.dir/example11.cpp.s

# Object files for target example11
example11_OBJECTS = \
"CMakeFiles/example11.dir/example11.cpp.o"

# External object files for target example11
example11_EXTERNAL_OBJECTS =

example11: CMakeFiles/example11.dir/example11.cpp.o
example11: CMakeFiles/example11.dir/build.make
example11: libcommon.a
example11: CMakeFiles/example11.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/gcc-loops/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable example11"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example11.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/example11.dir/build: example11

.PHONY : CMakeFiles/example11.dir/build

CMakeFiles/example11.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/example11.dir/cmake_clean.cmake
.PHONY : CMakeFiles/example11.dir/clean

CMakeFiles/example11.dir/depend:
	cd /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/gcc-loops/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/gcc-loops /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/gcc-loops /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/gcc-loops/build /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/gcc-loops/build /home2/lilimin/llvm-test-suite-main/SingleSource/UnitTests/Vectorizer/src/gcc-loops/build/CMakeFiles/example11.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/example11.dir/depend

