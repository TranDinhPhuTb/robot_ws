# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/phu/robot_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/phu/robot_ws/build

# Include any dependencies generated for this target.
include chapter2_tutorials/CMakeFiles/example4.dir/depend.make

# Include the progress variables for this target.
include chapter2_tutorials/CMakeFiles/example4.dir/progress.make

# Include the compile flags for this target's objects.
include chapter2_tutorials/CMakeFiles/example4.dir/flags.make

chapter2_tutorials/CMakeFiles/example4.dir/src/example4.cpp.o: chapter2_tutorials/CMakeFiles/example4.dir/flags.make
chapter2_tutorials/CMakeFiles/example4.dir/src/example4.cpp.o: /home/phu/robot_ws/src/chapter2_tutorials/src/example4.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/phu/robot_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object chapter2_tutorials/CMakeFiles/example4.dir/src/example4.cpp.o"
	cd /home/phu/robot_ws/build/chapter2_tutorials && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/example4.dir/src/example4.cpp.o -c /home/phu/robot_ws/src/chapter2_tutorials/src/example4.cpp

chapter2_tutorials/CMakeFiles/example4.dir/src/example4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example4.dir/src/example4.cpp.i"
	cd /home/phu/robot_ws/build/chapter2_tutorials && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/phu/robot_ws/src/chapter2_tutorials/src/example4.cpp > CMakeFiles/example4.dir/src/example4.cpp.i

chapter2_tutorials/CMakeFiles/example4.dir/src/example4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example4.dir/src/example4.cpp.s"
	cd /home/phu/robot_ws/build/chapter2_tutorials && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/phu/robot_ws/src/chapter2_tutorials/src/example4.cpp -o CMakeFiles/example4.dir/src/example4.cpp.s

# Object files for target example4
example4_OBJECTS = \
"CMakeFiles/example4.dir/src/example4.cpp.o"

# External object files for target example4
example4_EXTERNAL_OBJECTS =

/home/phu/robot_ws/devel/lib/chapter2_tutorials/example4: chapter2_tutorials/CMakeFiles/example4.dir/src/example4.cpp.o
/home/phu/robot_ws/devel/lib/chapter2_tutorials/example4: chapter2_tutorials/CMakeFiles/example4.dir/build.make
/home/phu/robot_ws/devel/lib/chapter2_tutorials/example4: /opt/ros/noetic/lib/libroscpp.so
/home/phu/robot_ws/devel/lib/chapter2_tutorials/example4: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/phu/robot_ws/devel/lib/chapter2_tutorials/example4: /usr/lib/x86_64-linux-gnu/libboost_chrono.so.1.71.0
/home/phu/robot_ws/devel/lib/chapter2_tutorials/example4: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.71.0
/home/phu/robot_ws/devel/lib/chapter2_tutorials/example4: /opt/ros/noetic/lib/librosconsole.so
/home/phu/robot_ws/devel/lib/chapter2_tutorials/example4: /opt/ros/noetic/lib/librosconsole_log4cxx.so
/home/phu/robot_ws/devel/lib/chapter2_tutorials/example4: /opt/ros/noetic/lib/librosconsole_backend_interface.so
/home/phu/robot_ws/devel/lib/chapter2_tutorials/example4: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/phu/robot_ws/devel/lib/chapter2_tutorials/example4: /usr/lib/x86_64-linux-gnu/libboost_regex.so.1.71.0
/home/phu/robot_ws/devel/lib/chapter2_tutorials/example4: /opt/ros/noetic/lib/libxmlrpcpp.so
/home/phu/robot_ws/devel/lib/chapter2_tutorials/example4: /opt/ros/noetic/lib/libdynamic_reconfigure_config_init_mutex.so
/home/phu/robot_ws/devel/lib/chapter2_tutorials/example4: /opt/ros/noetic/lib/libroscpp_serialization.so
/home/phu/robot_ws/devel/lib/chapter2_tutorials/example4: /opt/ros/noetic/lib/librostime.so
/home/phu/robot_ws/devel/lib/chapter2_tutorials/example4: /usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.71.0
/home/phu/robot_ws/devel/lib/chapter2_tutorials/example4: /opt/ros/noetic/lib/libcpp_common.so
/home/phu/robot_ws/devel/lib/chapter2_tutorials/example4: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.71.0
/home/phu/robot_ws/devel/lib/chapter2_tutorials/example4: /usr/lib/x86_64-linux-gnu/libboost_thread.so.1.71.0
/home/phu/robot_ws/devel/lib/chapter2_tutorials/example4: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/phu/robot_ws/devel/lib/chapter2_tutorials/example4: chapter2_tutorials/CMakeFiles/example4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/phu/robot_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/phu/robot_ws/devel/lib/chapter2_tutorials/example4"
	cd /home/phu/robot_ws/build/chapter2_tutorials && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
chapter2_tutorials/CMakeFiles/example4.dir/build: /home/phu/robot_ws/devel/lib/chapter2_tutorials/example4

.PHONY : chapter2_tutorials/CMakeFiles/example4.dir/build

chapter2_tutorials/CMakeFiles/example4.dir/clean:
	cd /home/phu/robot_ws/build/chapter2_tutorials && $(CMAKE_COMMAND) -P CMakeFiles/example4.dir/cmake_clean.cmake
.PHONY : chapter2_tutorials/CMakeFiles/example4.dir/clean

chapter2_tutorials/CMakeFiles/example4.dir/depend:
	cd /home/phu/robot_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/phu/robot_ws/src /home/phu/robot_ws/src/chapter2_tutorials /home/phu/robot_ws/build /home/phu/robot_ws/build/chapter2_tutorials /home/phu/robot_ws/build/chapter2_tutorials/CMakeFiles/example4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : chapter2_tutorials/CMakeFiles/example4.dir/depend

