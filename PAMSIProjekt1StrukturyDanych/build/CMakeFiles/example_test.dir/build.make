# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/grzegorz/Pulpit/repo/grzegorzsmolakpamsi/Struktury danych/PAMSIProjekt1StrukturyDanych"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/grzegorz/Pulpit/repo/grzegorzsmolakpamsi/Struktury danych/PAMSIProjekt1StrukturyDanych/build"

# Include any dependencies generated for this target.
include CMakeFiles/example_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/example_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/example_test.dir/flags.make

CMakeFiles/example_test.dir/src/example_test.cpp.o: CMakeFiles/example_test.dir/flags.make
CMakeFiles/example_test.dir/src/example_test.cpp.o: ../src/example_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/grzegorz/Pulpit/repo/grzegorzsmolakpamsi/Struktury danych/PAMSIProjekt1StrukturyDanych/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/example_test.dir/src/example_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/example_test.dir/src/example_test.cpp.o -c "/home/grzegorz/Pulpit/repo/grzegorzsmolakpamsi/Struktury danych/PAMSIProjekt1StrukturyDanych/src/example_test.cpp"

CMakeFiles/example_test.dir/src/example_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example_test.dir/src/example_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/grzegorz/Pulpit/repo/grzegorzsmolakpamsi/Struktury danych/PAMSIProjekt1StrukturyDanych/src/example_test.cpp" > CMakeFiles/example_test.dir/src/example_test.cpp.i

CMakeFiles/example_test.dir/src/example_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example_test.dir/src/example_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/grzegorz/Pulpit/repo/grzegorzsmolakpamsi/Struktury danych/PAMSIProjekt1StrukturyDanych/src/example_test.cpp" -o CMakeFiles/example_test.dir/src/example_test.cpp.s

CMakeFiles/example_test.dir/src/example_test.cpp.o.requires:

.PHONY : CMakeFiles/example_test.dir/src/example_test.cpp.o.requires

CMakeFiles/example_test.dir/src/example_test.cpp.o.provides: CMakeFiles/example_test.dir/src/example_test.cpp.o.requires
	$(MAKE) -f CMakeFiles/example_test.dir/build.make CMakeFiles/example_test.dir/src/example_test.cpp.o.provides.build
.PHONY : CMakeFiles/example_test.dir/src/example_test.cpp.o.provides

CMakeFiles/example_test.dir/src/example_test.cpp.o.provides.build: CMakeFiles/example_test.dir/src/example_test.cpp.o


# Object files for target example_test
example_test_OBJECTS = \
"CMakeFiles/example_test.dir/src/example_test.cpp.o"

# External object files for target example_test
example_test_EXTERNAL_OBJECTS =

example_test: CMakeFiles/example_test.dir/src/example_test.cpp.o
example_test: CMakeFiles/example_test.dir/build.make
example_test: CMakeFiles/example_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/grzegorz/Pulpit/repo/grzegorzsmolakpamsi/Struktury danych/PAMSIProjekt1StrukturyDanych/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable example_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/example_test.dir/build: example_test

.PHONY : CMakeFiles/example_test.dir/build

CMakeFiles/example_test.dir/requires: CMakeFiles/example_test.dir/src/example_test.cpp.o.requires

.PHONY : CMakeFiles/example_test.dir/requires

CMakeFiles/example_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/example_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/example_test.dir/clean

CMakeFiles/example_test.dir/depend:
	cd "/home/grzegorz/Pulpit/repo/grzegorzsmolakpamsi/Struktury danych/PAMSIProjekt1StrukturyDanych/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/grzegorz/Pulpit/repo/grzegorzsmolakpamsi/Struktury danych/PAMSIProjekt1StrukturyDanych" "/home/grzegorz/Pulpit/repo/grzegorzsmolakpamsi/Struktury danych/PAMSIProjekt1StrukturyDanych" "/home/grzegorz/Pulpit/repo/grzegorzsmolakpamsi/Struktury danych/PAMSIProjekt1StrukturyDanych/build" "/home/grzegorz/Pulpit/repo/grzegorzsmolakpamsi/Struktury danych/PAMSIProjekt1StrukturyDanych/build" "/home/grzegorz/Pulpit/repo/grzegorzsmolakpamsi/Struktury danych/PAMSIProjekt1StrukturyDanych/build/CMakeFiles/example_test.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/example_test.dir/depend

