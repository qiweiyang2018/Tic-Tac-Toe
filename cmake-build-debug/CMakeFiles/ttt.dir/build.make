# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /home/qiwei/resharper/clion-2018.3.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/qiwei/resharper/clion-2018.3.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/qiwei/CLionProjects/tic-tac-toe

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/qiwei/CLionProjects/tic-tac-toe/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ttt.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ttt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ttt.dir/flags.make

CMakeFiles/ttt.dir/main.cpp.o: CMakeFiles/ttt.dir/flags.make
CMakeFiles/ttt.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qiwei/CLionProjects/tic-tac-toe/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ttt.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ttt.dir/main.cpp.o -c /home/qiwei/CLionProjects/tic-tac-toe/main.cpp

CMakeFiles/ttt.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ttt.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qiwei/CLionProjects/tic-tac-toe/main.cpp > CMakeFiles/ttt.dir/main.cpp.i

CMakeFiles/ttt.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ttt.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qiwei/CLionProjects/tic-tac-toe/main.cpp -o CMakeFiles/ttt.dir/main.cpp.s

CMakeFiles/ttt.dir/ai.cpp.o: CMakeFiles/ttt.dir/flags.make
CMakeFiles/ttt.dir/ai.cpp.o: ../ai.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qiwei/CLionProjects/tic-tac-toe/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ttt.dir/ai.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ttt.dir/ai.cpp.o -c /home/qiwei/CLionProjects/tic-tac-toe/ai.cpp

CMakeFiles/ttt.dir/ai.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ttt.dir/ai.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qiwei/CLionProjects/tic-tac-toe/ai.cpp > CMakeFiles/ttt.dir/ai.cpp.i

CMakeFiles/ttt.dir/ai.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ttt.dir/ai.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qiwei/CLionProjects/tic-tac-toe/ai.cpp -o CMakeFiles/ttt.dir/ai.cpp.s

CMakeFiles/ttt.dir/board.cpp.o: CMakeFiles/ttt.dir/flags.make
CMakeFiles/ttt.dir/board.cpp.o: ../board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qiwei/CLionProjects/tic-tac-toe/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ttt.dir/board.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ttt.dir/board.cpp.o -c /home/qiwei/CLionProjects/tic-tac-toe/board.cpp

CMakeFiles/ttt.dir/board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ttt.dir/board.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qiwei/CLionProjects/tic-tac-toe/board.cpp > CMakeFiles/ttt.dir/board.cpp.i

CMakeFiles/ttt.dir/board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ttt.dir/board.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qiwei/CLionProjects/tic-tac-toe/board.cpp -o CMakeFiles/ttt.dir/board.cpp.s

# Object files for target ttt
ttt_OBJECTS = \
"CMakeFiles/ttt.dir/main.cpp.o" \
"CMakeFiles/ttt.dir/ai.cpp.o" \
"CMakeFiles/ttt.dir/board.cpp.o"

# External object files for target ttt
ttt_EXTERNAL_OBJECTS =

ttt: CMakeFiles/ttt.dir/main.cpp.o
ttt: CMakeFiles/ttt.dir/ai.cpp.o
ttt: CMakeFiles/ttt.dir/board.cpp.o
ttt: CMakeFiles/ttt.dir/build.make
ttt: CMakeFiles/ttt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/qiwei/CLionProjects/tic-tac-toe/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ttt"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ttt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ttt.dir/build: ttt

.PHONY : CMakeFiles/ttt.dir/build

CMakeFiles/ttt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ttt.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ttt.dir/clean

CMakeFiles/ttt.dir/depend:
	cd /home/qiwei/CLionProjects/tic-tac-toe/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/qiwei/CLionProjects/tic-tac-toe /home/qiwei/CLionProjects/tic-tac-toe /home/qiwei/CLionProjects/tic-tac-toe/cmake-build-debug /home/qiwei/CLionProjects/tic-tac-toe/cmake-build-debug /home/qiwei/CLionProjects/tic-tac-toe/cmake-build-debug/CMakeFiles/ttt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ttt.dir/depend

