/*
 * "Copyright 2019 Sergei Petrenko"
 */
#include <stdio.h>
#include <string.h>
#include <zconf.h>
#include "libstat.h"//NOLINT
int number_of_sequence(char* chunk, char* sequence) {
    int c = 0;
    char* p = strstr(chunk, sequence);
    while ( p != NULL ) {
        c++;
        p = strstr(chunk, sequence);
        chunk = p+1;
    }
    return c;
}
int run(char* sequence, int seq_size, char* log_path) {
    FILE* log_file;
    int count = 0;
    int chunk_size = seq_size * 10;
    char chunk[chunk_size];//NOLINT
    log_file = fopen(log_path, "r");
    while (!(feof(log_file))) {
        fgets(chunk, chunk_size, log_file);
        count += number_of_sequence(chunk, sequence);
        if (!(feof(log_file))) {
            fseek(log_file, seq_size / 2, SEEK_CUR);
        }
    }
    fclose(log_file);

    return count;
}
