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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/choigaeun/CLionProjects/DLinkedList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/choigaeun/CLionProjects/DLinkedList/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DLinkedList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DLinkedList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DLinkedList.dir/flags.make

CMakeFiles/DLinkedList.dir/main.c.o: CMakeFiles/DLinkedList.dir/flags.make
CMakeFiles/DLinkedList.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/choigaeun/CLionProjects/DLinkedList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/DLinkedList.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/DLinkedList.dir/main.c.o   -c /Users/choigaeun/CLionProjects/DLinkedList/main.c

CMakeFiles/DLinkedList.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/DLinkedList.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/choigaeun/CLionProjects/DLinkedList/main.c > CMakeFiles/DLinkedList.dir/main.c.i

CMakeFiles/DLinkedList.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/DLinkedList.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/choigaeun/CLionProjects/DLinkedList/main.c -o CMakeFiles/DLinkedList.dir/main.c.s

CMakeFiles/DLinkedList.dir/dlinkedlist.c.o: CMakeFiles/DLinkedList.dir/flags.make
CMakeFiles/DLinkedList.dir/dlinkedlist.c.o: ../dlinkedlist.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/choigaeun/CLionProjects/DLinkedList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/DLinkedList.dir/dlinkedlist.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/DLinkedList.dir/dlinkedlist.c.o   -c /Users/choigaeun/CLionProjects/DLinkedList/dlinkedlist.c

CMakeFiles/DLinkedList.dir/dlinkedlist.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/DLinkedList.dir/dlinkedlist.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/choigaeun/CLionProjects/DLinkedList/dlinkedlist.c > CMakeFiles/DLinkedList.dir/dlinkedlist.c.i

CMakeFiles/DLinkedList.dir/dlinkedlist.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/DLinkedList.dir/dlinkedlist.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/choigaeun/CLionProjects/DLinkedList/dlinkedlist.c -o CMakeFiles/DLinkedList.dir/dlinkedlist.c.s

CMakeFiles/DLinkedList.dir/stack.c.o: CMakeFiles/DLinkedList.dir/flags.make
CMakeFiles/DLinkedList.dir/stack.c.o: ../stack.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/choigaeun/CLionProjects/DLinkedList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/DLinkedList.dir/stack.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/DLinkedList.dir/stack.c.o   -c /Users/choigaeun/CLionProjects/DLinkedList/stack.c

CMakeFiles/DLinkedList.dir/stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/DLinkedList.dir/stack.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/choigaeun/CLionProjects/DLinkedList/stack.c > CMakeFiles/DLinkedList.dir/stack.c.i

CMakeFiles/DLinkedList.dir/stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/DLinkedList.dir/stack.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/choigaeun/CLionProjects/DLinkedList/stack.c -o CMakeFiles/DLinkedList.dir/stack.c.s

# Object files for target DLinkedList
DLinkedList_OBJECTS = \
"CMakeFiles/DLinkedList.dir/main.c.o" \
"CMakeFiles/DLinkedList.dir/dlinkedlist.c.o" \
"CMakeFiles/DLinkedList.dir/stack.c.o"

# External object files for target DLinkedList
DLinkedList_EXTERNAL_OBJECTS =

DLinkedList: CMakeFiles/DLinkedList.dir/main.c.o
DLinkedList: CMakeFiles/DLinkedList.dir/dlinkedlist.c.o
DLinkedList: CMakeFiles/DLinkedList.dir/stack.c.o
DLinkedList: CMakeFiles/DLinkedList.dir/build.make
DLinkedList: CMakeFiles/DLinkedList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/choigaeun/CLionProjects/DLinkedList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable DLinkedList"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DLinkedList.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DLinkedList.dir/build: DLinkedList

.PHONY : CMakeFiles/DLinkedList.dir/build

CMakeFiles/DLinkedList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DLinkedList.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DLinkedList.dir/clean

CMakeFiles/DLinkedList.dir/depend:
	cd /Users/choigaeun/CLionProjects/DLinkedList/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/choigaeun/CLionProjects/DLinkedList /Users/choigaeun/CLionProjects/DLinkedList /Users/choigaeun/CLionProjects/DLinkedList/cmake-build-debug /Users/choigaeun/CLionProjects/DLinkedList/cmake-build-debug /Users/choigaeun/CLionProjects/DLinkedList/cmake-build-debug/CMakeFiles/DLinkedList.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DLinkedList.dir/depend
