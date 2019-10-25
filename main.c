/*
 * "Copyright 2019 Sergei Petrenko"
 */
#include <stdio.h>
#include <stdlib.h>
#include "static_library/stat_lib.h"
#include "dynamic_library/dyn_lib.h"
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
    char* log_path = "./bible.txt";
    mt_run(sequence, i, log_path);
    run(sequence, i, log_path);
    return 0;
}