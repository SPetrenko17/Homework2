cmake_minimum_required(VERSION  3.11.4)
project(Homework2 C)

set(CMAKE_C_STANDARD 99)
find_package (Threads)
add_executable(Homework2 main.c dyn_lib.c dyn_lib.h stat_lib.c stat_lib.h)
target_link_libraries (Homework2 ${CMAKE_THREAD_LIBS_INIT})