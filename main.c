/*
 * "Copyright 2019 Sergei Petrenko"
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "libstat.h"//NOLINT
#include "libdyn.h"//NOLINT
void test(char* log_path, char* sequence);
void tests();
int main() {
    //tests();

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
    printf("%s %d %s %d", "mt:", res_mt, " ot:", res_ot);
    return 0;
}
void tests(){
    test("./enwik8.txt","namespace");
    test("./enwik8.txt","hello");
    test("./enwik8.txt","name");
}
void test(char* log_path, char* sequence) {
    int size = strlen(sequence);
    int res_mt = mt_run(sequence, size, log_path);
    int res_ot = run(sequence, size, log_path);
    assert(res_mt == res_ot);
}
