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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.17.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.17.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/ivastival/OneDrive/Developer/Maya/Maya_Study/source/Study_03 - New CMakeLists"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/ivastival/OneDrive/Developer/Maya/Maya_Study/source/Study_03 - New CMakeLists/build"

# Include any dependencies generated for this target.
include CMakeFiles/myPluginCMake.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/myPluginCMake.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/myPluginCMake.dir/flags.make

CMakeFiles/myPluginCMake.dir/myCommand.cpp.o: CMakeFiles/myPluginCMake.dir/flags.make
CMakeFiles/myPluginCMake.dir/myCommand.cpp.o: ../myCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/ivastival/OneDrive/Developer/Maya/Maya_Study/source/Study_03 - New CMakeLists/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/myPluginCMake.dir/myCommand.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myPluginCMake.dir/myCommand.cpp.o -c "/Users/ivastival/OneDrive/Developer/Maya/Maya_Study/source/Study_03 - New CMakeLists/myCommand.cpp"

CMakeFiles/myPluginCMake.dir/myCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myPluginCMake.dir/myCommand.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/ivastival/OneDrive/Developer/Maya/Maya_Study/source/Study_03 - New CMakeLists/myCommand.cpp" > CMakeFiles/myPluginCMake.dir/myCommand.cpp.i

CMakeFiles/myPluginCMake.dir/myCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myPluginCMake.dir/myCommand.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/ivastival/OneDrive/Developer/Maya/Maya_Study/source/Study_03 - New CMakeLists/myCommand.cpp" -o CMakeFiles/myPluginCMake.dir/myCommand.cpp.s

CMakeFiles/myPluginCMake.dir/pluginMaya.cpp.o: CMakeFiles/myPluginCMake.dir/flags.make
CMakeFiles/myPluginCMake.dir/pluginMaya.cpp.o: ../pluginMaya.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/ivastival/OneDrive/Developer/Maya/Maya_Study/source/Study_03 - New CMakeLists/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/myPluginCMake.dir/pluginMaya.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myPluginCMake.dir/pluginMaya.cpp.o -c "/Users/ivastival/OneDrive/Developer/Maya/Maya_Study/source/Study_03 - New CMakeLists/pluginMaya.cpp"

CMakeFiles/myPluginCMake.dir/pluginMaya.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myPluginCMake.dir/pluginMaya.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/ivastival/OneDrive/Developer/Maya/Maya_Study/source/Study_03 - New CMakeLists/pluginMaya.cpp" > CMakeFiles/myPluginCMake.dir/pluginMaya.cpp.i

CMakeFiles/myPluginCMake.dir/pluginMaya.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myPluginCMake.dir/pluginMaya.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/ivastival/OneDrive/Developer/Maya/Maya_Study/source/Study_03 - New CMakeLists/pluginMaya.cpp" -o CMakeFiles/myPluginCMake.dir/pluginMaya.cpp.s

# Object files for target myPluginCMake
myPluginCMake_OBJECTS = \
"CMakeFiles/myPluginCMake.dir/myCommand.cpp.o" \
"CMakeFiles/myPluginCMake.dir/pluginMaya.cpp.o"

# External object files for target myPluginCMake
myPluginCMake_EXTERNAL_OBJECTS =

myPluginCMake.bundle: CMakeFiles/myPluginCMake.dir/myCommand.cpp.o
myPluginCMake.bundle: CMakeFiles/myPluginCMake.dir/pluginMaya.cpp.o
myPluginCMake.bundle: CMakeFiles/myPluginCMake.dir/build.make
myPluginCMake.bundle: /Users/ivastival/OneDrive/Developer/Maya/Maya_Study/devkitBase/lib/libOpenMaya.dylib
myPluginCMake.bundle: /Users/ivastival/OneDrive/Developer/Maya/Maya_Study/devkitBase/lib/libOpenMayaRender.dylib
myPluginCMake.bundle: /Users/ivastival/OneDrive/Developer/Maya/Maya_Study/devkitBase/lib/libOpenMayaUI.dylib
myPluginCMake.bundle: /Users/ivastival/OneDrive/Developer/Maya/Maya_Study/devkitBase/lib/libFoundation.dylib
myPluginCMake.bundle: CMakeFiles/myPluginCMake.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/ivastival/OneDrive/Developer/Maya/Maya_Study/source/Study_03 - New CMakeLists/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library myPluginCMake.bundle"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/myPluginCMake.dir/link.txt --verbose=$(VERBOSE)
	/usr/local/Cellar/cmake/3.17.2/bin/cmake -E copy /Users/ivastival/OneDrive/Developer/Maya/Maya_Study/source/Study_03\ -\ New\ CMakeLists/build/myPluginCMake.bundle /Users/ivastival/OneDrive/Developer/Maya/Maya_Study/source/Study_03\ -\ New\ CMakeLists/build/../../../plugins

# Rule to build all files generated by this target.
CMakeFiles/myPluginCMake.dir/build: myPluginCMake.bundle

.PHONY : CMakeFiles/myPluginCMake.dir/build

CMakeFiles/myPluginCMake.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/myPluginCMake.dir/cmake_clean.cmake
.PHONY : CMakeFiles/myPluginCMake.dir/clean

CMakeFiles/myPluginCMake.dir/depend:
	cd "/Users/ivastival/OneDrive/Developer/Maya/Maya_Study/source/Study_03 - New CMakeLists/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/ivastival/OneDrive/Developer/Maya/Maya_Study/source/Study_03 - New CMakeLists" "/Users/ivastival/OneDrive/Developer/Maya/Maya_Study/source/Study_03 - New CMakeLists" "/Users/ivastival/OneDrive/Developer/Maya/Maya_Study/source/Study_03 - New CMakeLists/build" "/Users/ivastival/OneDrive/Developer/Maya/Maya_Study/source/Study_03 - New CMakeLists/build" "/Users/ivastival/OneDrive/Developer/Maya/Maya_Study/source/Study_03 - New CMakeLists/build/CMakeFiles/myPluginCMake.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/myPluginCMake.dir/depend

