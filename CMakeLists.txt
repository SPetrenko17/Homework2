cmake_minimum_required(VERSION  3.11.4)
project(Homework2 C)

set(CMAKE_C_STANDARD 99)
find_package (Threads)
add_executable(Homework2 main.c libdyn.c libdyn.h libstat.c libstat.h)
target_link_libraries (Homework2 ${CMAKE_THREAD_LIBS_INIT})