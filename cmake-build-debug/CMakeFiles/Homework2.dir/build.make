# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/sergei/Desktop/Homework2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sergei/Desktop/Homework2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Homework2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Homework2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Homework2.dir/flags.make

CMakeFiles/Homework2.dir/main.c.o: CMakeFiles/Homework2.dir/flags.make
CMakeFiles/Homework2.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sergei/Desktop/Homework2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Homework2.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Homework2.dir/main.c.o   -c /Users/sergei/Desktop/Homework2/main.c

CMakeFiles/Homework2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Homework2.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/sergei/Desktop/Homework2/main.c > CMakeFiles/Homework2.dir/main.c.i

CMakeFiles/Homework2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Homework2.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/sergei/Desktop/Homework2/main.c -o CMakeFiles/Homework2.dir/main.c.s

CMakeFiles/Homework2.dir/libdyn.c.o: CMakeFiles/Homework2.dir/flags.make
CMakeFiles/Homework2.dir/libdyn.c.o: ../libdyn.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sergei/Desktop/Homework2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Homework2.dir/libdyn.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Homework2.dir/libdyn.c.o   -c /Users/sergei/Desktop/Homework2/libdyn.c

CMakeFiles/Homework2.dir/libdyn.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Homework2.dir/libdyn.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/sergei/Desktop/Homework2/libdyn.c > CMakeFiles/Homework2.dir/libdyn.c.i

CMakeFiles/Homework2.dir/libdyn.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Homework2.dir/libdyn.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/sergei/Desktop/Homework2/libdyn.c -o CMakeFiles/Homework2.dir/libdyn.c.s

CMakeFiles/Homework2.dir/libstat.c.o: CMakeFiles/Homework2.dir/flags.make
CMakeFiles/Homework2.dir/libstat.c.o: ../libstat.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sergei/Desktop/Homework2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Homework2.dir/libstat.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Homework2.dir/libstat.c.o   -c /Users/sergei/Desktop/Homework2/libstat.c

CMakeFiles/Homework2.dir/libstat.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Homework2.dir/libstat.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/sergei/Desktop/Homework2/libstat.c > CMakeFiles/Homework2.dir/libstat.c.i

CMakeFiles/Homework2.dir/libstat.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Homework2.dir/libstat.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/sergei/Desktop/Homework2/libstat.c -o CMakeFiles/Homework2.dir/libstat.c.s

# Object files for target Homework2
Homework2_OBJECTS = \
"CMakeFiles/Homework2.dir/main.c.o" \
"CMakeFiles/Homework2.dir/libdyn.c.o" \
"CMakeFiles/Homework2.dir/libstat.c.o"

# External object files for target Homework2
Homework2_EXTERNAL_OBJECTS =

Homework2: CMakeFiles/Homework2.dir/main.c.o
Homework2: CMakeFiles/Homework2.dir/libdyn.c.o
Homework2: CMakeFiles/Homework2.dir/libstat.c.o
Homework2: CMakeFiles/Homework2.dir/build.make
Homework2: CMakeFiles/Homework2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sergei/Desktop/Homework2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable Homework2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Homework2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Homework2.dir/build: Homework2

.PHONY : CMakeFiles/Homework2.dir/build

CMakeFiles/Homework2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Homework2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Homework2.dir/clean

CMakeFiles/Homework2.dir/depend:
	cd /Users/sergei/Desktop/Homework2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sergei/Desktop/Homework2 /Users/sergei/Desktop/Homework2 /Users/sergei/Desktop/Homework2/cmake-build-debug /Users/sergei/Desktop/Homework2/cmake-build-debug /Users/sergei/Desktop/Homework2/cmake-build-debug/CMakeFiles/Homework2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Homework2.dir/depend

