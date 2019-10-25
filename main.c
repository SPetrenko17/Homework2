/*
 * "Copyright 2019 Sergei Petrenko"
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "static_library/stat_lib.h"
#include "dynamic_library/dyn_lib.h"
void test();
int main() {
    size_t len_max = 128;
    size_t seq_size = 0;
    char *sequence = malloc(len_max);
    seq_size = len_max;
    printf("\nEnter a string:");
    char c = EOF;
    size_t i = 0;
    while ((c = getchar()) != '\n' && c != EOF) {
        sequence[i++] = c;
        if (i == seq_size) {
            seq_size = i + len_max;
            sequence = realloc(sequence, seq_size);
        }
    }
    sequence[i] = '\0';
    i++;
    char* log_path = "./enwik8.txt";
    int res_mt = mt_run(sequence, i, log_path);
    int res_ot = run(sequence, i, log_path);
    return 0;
}
void test(char* log_path, char* sequence) {
    int size = strlen(sequence);
    int res_mt = mt_run(sequence, size, log_path);
    int res_ot = run(sequence, size, log_path);
}
