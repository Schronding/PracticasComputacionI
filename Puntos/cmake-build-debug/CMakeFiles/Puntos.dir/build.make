# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Users\Coron\AppData\Local\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\Coron\AppData\Local\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Coron\OneDrive\Escritorio\GitHub\PracticasComputacionI\Puntos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Coron\OneDrive\Escritorio\GitHub\PracticasComputacionI\Puntos\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\Puntos.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\Puntos.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Puntos.dir\flags.make

CMakeFiles\Puntos.dir\Puntos.cpp.obj: CMakeFiles\Puntos.dir\flags.make
CMakeFiles\Puntos.dir\Puntos.cpp.obj: ..\Puntos.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Coron\OneDrive\Escritorio\GitHub\PracticasComputacionI\Puntos\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Puntos.dir/Puntos.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Puntos.dir\Puntos.cpp.obj /FdCMakeFiles\Puntos.dir\ /FS -c C:\Users\Coron\OneDrive\Escritorio\GitHub\PracticasComputacionI\Puntos\Puntos.cpp
<<

CMakeFiles\Puntos.dir\Puntos.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Puntos.dir/Puntos.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\Puntos.dir\Puntos.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Coron\OneDrive\Escritorio\GitHub\PracticasComputacionI\Puntos\Puntos.cpp
<<

CMakeFiles\Puntos.dir\Puntos.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Puntos.dir/Puntos.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Puntos.dir\Puntos.cpp.s /c C:\Users\Coron\OneDrive\Escritorio\GitHub\PracticasComputacionI\Puntos\Puntos.cpp
<<

CMakeFiles\Puntos.dir\Punto.cpp.obj: CMakeFiles\Puntos.dir\flags.make
CMakeFiles\Puntos.dir\Punto.cpp.obj: ..\Punto.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Coron\OneDrive\Escritorio\GitHub\PracticasComputacionI\Puntos\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Puntos.dir/Punto.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Puntos.dir\Punto.cpp.obj /FdCMakeFiles\Puntos.dir\ /FS -c C:\Users\Coron\OneDrive\Escritorio\GitHub\PracticasComputacionI\Puntos\Punto.cpp
<<

CMakeFiles\Puntos.dir\Punto.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Puntos.dir/Punto.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\Puntos.dir\Punto.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Coron\OneDrive\Escritorio\GitHub\PracticasComputacionI\Puntos\Punto.cpp
<<

CMakeFiles\Puntos.dir\Punto.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Puntos.dir/Punto.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Puntos.dir\Punto.cpp.s /c C:\Users\Coron\OneDrive\Escritorio\GitHub\PracticasComputacionI\Puntos\Punto.cpp
<<

# Object files for target Puntos
Puntos_OBJECTS = \
"CMakeFiles\Puntos.dir\Puntos.cpp.obj" \
"CMakeFiles\Puntos.dir\Punto.cpp.obj"

# External object files for target Puntos
Puntos_EXTERNAL_OBJECTS =

Puntos.exe: CMakeFiles\Puntos.dir\Puntos.cpp.obj
Puntos.exe: CMakeFiles\Puntos.dir\Punto.cpp.obj
Puntos.exe: CMakeFiles\Puntos.dir\build.make
Puntos.exe: CMakeFiles\Puntos.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Coron\OneDrive\Escritorio\GitHub\PracticasComputacionI\Puntos\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Puntos.exe"
	"C:\Users\Coron\AppData\Local\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Puntos.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Puntos.dir\objects1.rsp @<<
 /out:Puntos.exe /implib:Puntos.lib /pdb:C:\Users\Coron\OneDrive\Escritorio\GitHub\PracticasComputacionI\Puntos\cmake-build-debug\Puntos.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Puntos.dir\build: Puntos.exe
.PHONY : CMakeFiles\Puntos.dir\build

CMakeFiles\Puntos.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Puntos.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Puntos.dir\clean

CMakeFiles\Puntos.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\Coron\OneDrive\Escritorio\GitHub\PracticasComputacionI\Puntos C:\Users\Coron\OneDrive\Escritorio\GitHub\PracticasComputacionI\Puntos C:\Users\Coron\OneDrive\Escritorio\GitHub\PracticasComputacionI\Puntos\cmake-build-debug C:\Users\Coron\OneDrive\Escritorio\GitHub\PracticasComputacionI\Puntos\cmake-build-debug C:\Users\Coron\OneDrive\Escritorio\GitHub\PracticasComputacionI\Puntos\cmake-build-debug\CMakeFiles\Puntos.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Puntos.dir\depend

