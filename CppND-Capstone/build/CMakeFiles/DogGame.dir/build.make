# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.15.0/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.15.0/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/build

# Include any dependencies generated for this target.
include CMakeFiles/DogGame.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DogGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DogGame.dir/flags.make

CMakeFiles/DogGame.dir/src/main.cpp.o: CMakeFiles/DogGame.dir/flags.make
CMakeFiles/DogGame.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DogGame.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DogGame.dir/src/main.cpp.o -c /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/src/main.cpp

CMakeFiles/DogGame.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DogGame.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/src/main.cpp > CMakeFiles/DogGame.dir/src/main.cpp.i

CMakeFiles/DogGame.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DogGame.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/src/main.cpp -o CMakeFiles/DogGame.dir/src/main.cpp.s

CMakeFiles/DogGame.dir/src/game.cpp.o: CMakeFiles/DogGame.dir/flags.make
CMakeFiles/DogGame.dir/src/game.cpp.o: ../src/game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/DogGame.dir/src/game.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DogGame.dir/src/game.cpp.o -c /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/src/game.cpp

CMakeFiles/DogGame.dir/src/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DogGame.dir/src/game.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/src/game.cpp > CMakeFiles/DogGame.dir/src/game.cpp.i

CMakeFiles/DogGame.dir/src/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DogGame.dir/src/game.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/src/game.cpp -o CMakeFiles/DogGame.dir/src/game.cpp.s

CMakeFiles/DogGame.dir/src/renderer.cpp.o: CMakeFiles/DogGame.dir/flags.make
CMakeFiles/DogGame.dir/src/renderer.cpp.o: ../src/renderer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/DogGame.dir/src/renderer.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DogGame.dir/src/renderer.cpp.o -c /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/src/renderer.cpp

CMakeFiles/DogGame.dir/src/renderer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DogGame.dir/src/renderer.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/src/renderer.cpp > CMakeFiles/DogGame.dir/src/renderer.cpp.i

CMakeFiles/DogGame.dir/src/renderer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DogGame.dir/src/renderer.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/src/renderer.cpp -o CMakeFiles/DogGame.dir/src/renderer.cpp.s

CMakeFiles/DogGame.dir/src/inputHandler.cpp.o: CMakeFiles/DogGame.dir/flags.make
CMakeFiles/DogGame.dir/src/inputHandler.cpp.o: ../src/inputHandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/DogGame.dir/src/inputHandler.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DogGame.dir/src/inputHandler.cpp.o -c /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/src/inputHandler.cpp

CMakeFiles/DogGame.dir/src/inputHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DogGame.dir/src/inputHandler.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/src/inputHandler.cpp > CMakeFiles/DogGame.dir/src/inputHandler.cpp.i

CMakeFiles/DogGame.dir/src/inputHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DogGame.dir/src/inputHandler.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/src/inputHandler.cpp -o CMakeFiles/DogGame.dir/src/inputHandler.cpp.s

CMakeFiles/DogGame.dir/src/player.cpp.o: CMakeFiles/DogGame.dir/flags.make
CMakeFiles/DogGame.dir/src/player.cpp.o: ../src/player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/DogGame.dir/src/player.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DogGame.dir/src/player.cpp.o -c /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/src/player.cpp

CMakeFiles/DogGame.dir/src/player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DogGame.dir/src/player.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/src/player.cpp > CMakeFiles/DogGame.dir/src/player.cpp.i

CMakeFiles/DogGame.dir/src/player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DogGame.dir/src/player.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/src/player.cpp -o CMakeFiles/DogGame.dir/src/player.cpp.s

CMakeFiles/DogGame.dir/src/maze.cpp.o: CMakeFiles/DogGame.dir/flags.make
CMakeFiles/DogGame.dir/src/maze.cpp.o: ../src/maze.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/DogGame.dir/src/maze.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DogGame.dir/src/maze.cpp.o -c /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/src/maze.cpp

CMakeFiles/DogGame.dir/src/maze.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DogGame.dir/src/maze.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/src/maze.cpp > CMakeFiles/DogGame.dir/src/maze.cpp.i

CMakeFiles/DogGame.dir/src/maze.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DogGame.dir/src/maze.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/src/maze.cpp -o CMakeFiles/DogGame.dir/src/maze.cpp.s

CMakeFiles/DogGame.dir/src/cell.cpp.o: CMakeFiles/DogGame.dir/flags.make
CMakeFiles/DogGame.dir/src/cell.cpp.o: ../src/cell.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/DogGame.dir/src/cell.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DogGame.dir/src/cell.cpp.o -c /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/src/cell.cpp

CMakeFiles/DogGame.dir/src/cell.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DogGame.dir/src/cell.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/src/cell.cpp > CMakeFiles/DogGame.dir/src/cell.cpp.i

CMakeFiles/DogGame.dir/src/cell.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DogGame.dir/src/cell.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/src/cell.cpp -o CMakeFiles/DogGame.dir/src/cell.cpp.s

# Object files for target DogGame
DogGame_OBJECTS = \
"CMakeFiles/DogGame.dir/src/main.cpp.o" \
"CMakeFiles/DogGame.dir/src/game.cpp.o" \
"CMakeFiles/DogGame.dir/src/renderer.cpp.o" \
"CMakeFiles/DogGame.dir/src/inputHandler.cpp.o" \
"CMakeFiles/DogGame.dir/src/player.cpp.o" \
"CMakeFiles/DogGame.dir/src/maze.cpp.o" \
"CMakeFiles/DogGame.dir/src/cell.cpp.o"

# External object files for target DogGame
DogGame_EXTERNAL_OBJECTS =

DogGame: CMakeFiles/DogGame.dir/src/main.cpp.o
DogGame: CMakeFiles/DogGame.dir/src/game.cpp.o
DogGame: CMakeFiles/DogGame.dir/src/renderer.cpp.o
DogGame: CMakeFiles/DogGame.dir/src/inputHandler.cpp.o
DogGame: CMakeFiles/DogGame.dir/src/player.cpp.o
DogGame: CMakeFiles/DogGame.dir/src/maze.cpp.o
DogGame: CMakeFiles/DogGame.dir/src/cell.cpp.o
DogGame: CMakeFiles/DogGame.dir/build.make
DogGame: CMakeFiles/DogGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable DogGame"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DogGame.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DogGame.dir/build: DogGame

.PHONY : CMakeFiles/DogGame.dir/build

CMakeFiles/DogGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DogGame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DogGame.dir/clean

CMakeFiles/DogGame.dir/depend:
	cd /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/build /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/build /Users/kathrinradtke/Desktop/Repos/CppNanodegreeCapstone/CppND-Capstone/build/CMakeFiles/DogGame.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DogGame.dir/depend

