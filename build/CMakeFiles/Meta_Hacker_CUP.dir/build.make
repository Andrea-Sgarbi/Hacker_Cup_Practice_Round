# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = /opt/local/bin/cmake

# The command to remove a file.
RM = /opt/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/andrea/VSCode Projects/Hacker_Cup_Practice_Round"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/andrea/VSCode Projects/Hacker_Cup_Practice_Round/build"

# Include any dependencies generated for this target.
include CMakeFiles/Meta_Hacker_Cup.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Meta_Hacker_Cup.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Meta_Hacker_Cup.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Meta_Hacker_Cup.dir/flags.make

CMakeFiles/Meta_Hacker_Cup.dir/D.cpp.o: CMakeFiles/Meta_Hacker_Cup.dir/flags.make
CMakeFiles/Meta_Hacker_Cup.dir/D.cpp.o: /Users/andrea/VSCode\ Projects/Hacker_Cup_Practice_Round/D.cpp
CMakeFiles/Meta_Hacker_Cup.dir/D.cpp.o: CMakeFiles/Meta_Hacker_Cup.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/andrea/VSCode Projects/Hacker_Cup_Practice_Round/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Meta_Hacker_Cup.dir/D.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Meta_Hacker_Cup.dir/D.cpp.o -MF CMakeFiles/Meta_Hacker_Cup.dir/D.cpp.o.d -o CMakeFiles/Meta_Hacker_Cup.dir/D.cpp.o -c "/Users/andrea/VSCode Projects/Hacker_Cup_Practice_Round/D.cpp"

CMakeFiles/Meta_Hacker_Cup.dir/D.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Meta_Hacker_Cup.dir/D.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/andrea/VSCode Projects/Hacker_Cup_Practice_Round/D.cpp" > CMakeFiles/Meta_Hacker_Cup.dir/D.cpp.i

CMakeFiles/Meta_Hacker_Cup.dir/D.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Meta_Hacker_Cup.dir/D.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/andrea/VSCode Projects/Hacker_Cup_Practice_Round/D.cpp" -o CMakeFiles/Meta_Hacker_Cup.dir/D.cpp.s

# Object files for target Meta_Hacker_Cup
Meta_Hacker_Cup_OBJECTS = \
"CMakeFiles/Meta_Hacker_Cup.dir/D.cpp.o"

# External object files for target Meta_Hacker_Cup
Meta_Hacker_Cup_EXTERNAL_OBJECTS =

Meta_Hacker_Cup: CMakeFiles/Meta_Hacker_Cup.dir/D.cpp.o
Meta_Hacker_Cup: CMakeFiles/Meta_Hacker_Cup.dir/build.make
Meta_Hacker_Cup: CMakeFiles/Meta_Hacker_Cup.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/andrea/VSCode Projects/Hacker_Cup_Practice_Round/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Meta_Hacker_Cup"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Meta_Hacker_Cup.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Meta_Hacker_Cup.dir/build: Meta_Hacker_Cup
.PHONY : CMakeFiles/Meta_Hacker_Cup.dir/build

CMakeFiles/Meta_Hacker_Cup.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Meta_Hacker_Cup.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Meta_Hacker_Cup.dir/clean

CMakeFiles/Meta_Hacker_Cup.dir/depend:
	cd "/Users/andrea/VSCode Projects/Hacker_Cup_Practice_Round/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/andrea/VSCode Projects/Hacker_Cup_Practice_Round" "/Users/andrea/VSCode Projects/Hacker_Cup_Practice_Round" "/Users/andrea/VSCode Projects/Hacker_Cup_Practice_Round/build" "/Users/andrea/VSCode Projects/Hacker_Cup_Practice_Round/build" "/Users/andrea/VSCode Projects/Hacker_Cup_Practice_Round/build/CMakeFiles/Meta_Hacker_Cup.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Meta_Hacker_Cup.dir/depend

