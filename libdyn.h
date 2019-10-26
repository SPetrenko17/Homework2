/*
 * "Copyright 2019 Sergei Petrenko"
 */
#ifndef DESKTOP_HOMEWORK2_DYNAMIC_LIBRARY_DYN_LIB_H_
#define DESKTOP_HOMEWORK2_DYNAMIC_LIBRARY_DYN_LIB_H_
int number_of_sequence1(char* chunk, char* sequence);
void *thread_func(void* thread_package);
int mt_run(char* sequence, int seq_size, char* log_path);

#endif  // DESKTOP_HOMEWORK2_DYNAMIC_LIBRARY_DYN_LIB_H_
