cmake_minimum_required(VERSION 3.10) 

set (CMAKE_C_COMPILER "/home/zzc/llvm-13.0/build/bin/clang")
set (CMAKE_CXX_COMPILER "/home/zzc/llvm-13.0/build/bin/clang++")
add_compile_options(-march=native -O3 -ffast-math -mprefer-vector-width=256 -mno-avx512f -Rpass=loop -I ${CMAKE_CURRENT_SOURCE_DIR}/common)

# set the project name 
project(gcc-loop) 

file(GLOB_RECURSE mains RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" "${CMAKE_CURRENT_SOURCE_DIR}/example*.cpp")
foreach(mainfile IN LISTS mains)
    # Get file name without directory
    get_filename_component(mainname ${mainfile} NAME_WE)
    add_executable(${mainname} ${mainfile})
    #target_compile_options(${mainname} PRIVATE -march=native -O3 -ffast-math -mprefer-vector-width=256 -mno-avx512f -Rpass=loop)
endforeach()
