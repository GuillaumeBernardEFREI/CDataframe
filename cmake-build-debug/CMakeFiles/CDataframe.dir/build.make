# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2023.3.4\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2023.3.4\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\samue\CLionProjects\CDataframe-Guigui

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\samue\CLionProjects\CDataframe-Guigui\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CDataframe.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CDataframe.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CDataframe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CDataframe.dir/flags.make

CMakeFiles/CDataframe.dir/main.c.obj: CMakeFiles/CDataframe.dir/flags.make
CMakeFiles/CDataframe.dir/main.c.obj: C:/Users/samue/CLionProjects/CDataframe-Guigui/main.c
CMakeFiles/CDataframe.dir/main.c.obj: CMakeFiles/CDataframe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\samue\CLionProjects\CDataframe-Guigui\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CDataframe.dir/main.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/CDataframe.dir/main.c.obj -MF CMakeFiles\CDataframe.dir\main.c.obj.d -o CMakeFiles\CDataframe.dir\main.c.obj -c C:\Users\samue\CLionProjects\CDataframe-Guigui\main.c

CMakeFiles/CDataframe.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/CDataframe.dir/main.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\samue\CLionProjects\CDataframe-Guigui\main.c > CMakeFiles\CDataframe.dir\main.c.i

CMakeFiles/CDataframe.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/CDataframe.dir/main.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\samue\CLionProjects\CDataframe-Guigui\main.c -o CMakeFiles\CDataframe.dir\main.c.s

CMakeFiles/CDataframe.dir/column.c.obj: CMakeFiles/CDataframe.dir/flags.make
CMakeFiles/CDataframe.dir/column.c.obj: C:/Users/samue/CLionProjects/CDataframe-Guigui/column.c
CMakeFiles/CDataframe.dir/column.c.obj: CMakeFiles/CDataframe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\samue\CLionProjects\CDataframe-Guigui\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/CDataframe.dir/column.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/CDataframe.dir/column.c.obj -MF CMakeFiles\CDataframe.dir\column.c.obj.d -o CMakeFiles\CDataframe.dir\column.c.obj -c C:\Users\samue\CLionProjects\CDataframe-Guigui\column.c

CMakeFiles/CDataframe.dir/column.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/CDataframe.dir/column.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\samue\CLionProjects\CDataframe-Guigui\column.c > CMakeFiles\CDataframe.dir\column.c.i

CMakeFiles/CDataframe.dir/column.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/CDataframe.dir/column.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\samue\CLionProjects\CDataframe-Guigui\column.c -o CMakeFiles\CDataframe.dir\column.c.s

CMakeFiles/CDataframe.dir/list.c.obj: CMakeFiles/CDataframe.dir/flags.make
CMakeFiles/CDataframe.dir/list.c.obj: C:/Users/samue/CLionProjects/CDataframe-Guigui/list.c
CMakeFiles/CDataframe.dir/list.c.obj: CMakeFiles/CDataframe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\samue\CLionProjects\CDataframe-Guigui\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/CDataframe.dir/list.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/CDataframe.dir/list.c.obj -MF CMakeFiles\CDataframe.dir\list.c.obj.d -o CMakeFiles\CDataframe.dir\list.c.obj -c C:\Users\samue\CLionProjects\CDataframe-Guigui\list.c

CMakeFiles/CDataframe.dir/list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/CDataframe.dir/list.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\samue\CLionProjects\CDataframe-Guigui\list.c > CMakeFiles\CDataframe.dir\list.c.i

CMakeFiles/CDataframe.dir/list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/CDataframe.dir/list.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\samue\CLionProjects\CDataframe-Guigui\list.c -o CMakeFiles\CDataframe.dir\list.c.s

CMakeFiles/CDataframe.dir/cdataframe.c.obj: CMakeFiles/CDataframe.dir/flags.make
CMakeFiles/CDataframe.dir/cdataframe.c.obj: C:/Users/samue/CLionProjects/CDataframe-Guigui/cdataframe.c
CMakeFiles/CDataframe.dir/cdataframe.c.obj: CMakeFiles/CDataframe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\samue\CLionProjects\CDataframe-Guigui\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/CDataframe.dir/cdataframe.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/CDataframe.dir/cdataframe.c.obj -MF CMakeFiles\CDataframe.dir\cdataframe.c.obj.d -o CMakeFiles\CDataframe.dir\cdataframe.c.obj -c C:\Users\samue\CLionProjects\CDataframe-Guigui\cdataframe.c

CMakeFiles/CDataframe.dir/cdataframe.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/CDataframe.dir/cdataframe.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\samue\CLionProjects\CDataframe-Guigui\cdataframe.c > CMakeFiles\CDataframe.dir\cdataframe.c.i

CMakeFiles/CDataframe.dir/cdataframe.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/CDataframe.dir/cdataframe.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\samue\CLionProjects\CDataframe-Guigui\cdataframe.c -o CMakeFiles\CDataframe.dir\cdataframe.c.s

# Object files for target CDataframe
CDataframe_OBJECTS = \
"CMakeFiles/CDataframe.dir/main.c.obj" \
"CMakeFiles/CDataframe.dir/column.c.obj" \
"CMakeFiles/CDataframe.dir/list.c.obj" \
"CMakeFiles/CDataframe.dir/cdataframe.c.obj"

# External object files for target CDataframe
CDataframe_EXTERNAL_OBJECTS =

CDataframe.exe: CMakeFiles/CDataframe.dir/main.c.obj
CDataframe.exe: CMakeFiles/CDataframe.dir/column.c.obj
CDataframe.exe: CMakeFiles/CDataframe.dir/list.c.obj
CDataframe.exe: CMakeFiles/CDataframe.dir/cdataframe.c.obj
CDataframe.exe: CMakeFiles/CDataframe.dir/build.make
CDataframe.exe: CMakeFiles/CDataframe.dir/linkLibs.rsp
CDataframe.exe: CMakeFiles/CDataframe.dir/objects1.rsp
CDataframe.exe: CMakeFiles/CDataframe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\samue\CLionProjects\CDataframe-Guigui\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable CDataframe.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CDataframe.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CDataframe.dir/build: CDataframe.exe
.PHONY : CMakeFiles/CDataframe.dir/build

CMakeFiles/CDataframe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CDataframe.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CDataframe.dir/clean

CMakeFiles/CDataframe.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\samue\CLionProjects\CDataframe-Guigui C:\Users\samue\CLionProjects\CDataframe-Guigui C:\Users\samue\CLionProjects\CDataframe-Guigui\cmake-build-debug C:\Users\samue\CLionProjects\CDataframe-Guigui\cmake-build-debug C:\Users\samue\CLionProjects\CDataframe-Guigui\cmake-build-debug\CMakeFiles\CDataframe.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/CDataframe.dir/depend

