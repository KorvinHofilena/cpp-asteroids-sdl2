# Install script for directory: C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/src/d25248d823-5776a3607f.clean/tools

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/pkgs/yasm_x64-windows")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "OFF")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/tools/genmacro/cmake_install.cmake")
  include("C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/tools/genperf/cmake_install.cmake")
  include("C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/tools/re2c/cmake_install.cmake")

endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/tools/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
