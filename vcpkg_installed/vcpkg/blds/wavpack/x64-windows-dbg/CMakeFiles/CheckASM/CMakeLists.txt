cmake_minimum_required(VERSION 3.31.6-msvc6)
set(CMAKE_MODULE_PATH "")
project(CheckASM ASM)
file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/result.cmake"
  "set(CMAKE_ASM_COMPILER \"${CMAKE_ASM_COMPILER}\")\n"
  
  )