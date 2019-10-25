cmake_minimum_required(VERSION  3.11.4)
project(Homework2 C)

set(CMAKE_C_STANDARD 99)
find_package (Threads)
add_executable(Homework2 main.c dynamic_library/dyn_lib.c dynamic_library/dyn_lib.h static_library/stat_lib.c static_library/stat_lib.h)