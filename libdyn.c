/*
 * "Copyright 2019 Sergei Petrenko"
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <pthread.h>
#include <zconf.h>
#include "libdyn.h"//NOLINT
typedef struct {
    char* chunk;
    char* sequence;
}ThreadPackage;

static int mt_count = 0;

int number_of_sequence1(char* chunk, char* sequence) {
    int c = 0;
    char* p = strstr(chunk, sequence);
    while ( p != NULL ) {
        c++;
        p = strstr(chunk, sequence);
        chunk = p+1;
    }
    return c;
}

void *thread_func(void* thread_package) {
    ThreadPackage* tp = (ThreadPackage*)thread_package; //NOLINT
    char *chunk = tp->chunk;
    char *sequence = tp->sequence;
    mt_count += number_of_sequence1(chunk, sequence);
    return NULL;
}

int mt_run(char* sequence, int seq_size, char* log_path) {
    FILE* log_file;
    mt_count = 0;
    int thread_count = 10;
    int chunk_size = seq_size * 10;
    char **chunks = (char **)malloc(thread_count * sizeof(char**));//NOLINT
    for (int i = 0; i < thread_count; i++) {
        chunks[i] = (char *)malloc(chunk_size * sizeof(char*));//NOLINT
    }
    log_file = fopen(log_path, "r");
    while (!(feof(log_file))) {
        pthread_t *threads =
                (pthread_t *) malloc(thread_count * sizeof(pthread_t));//NOLINT
        ThreadPackage* threadPackages =
                (ThreadPackage*) //NOLINT
                        malloc(thread_count * sizeof(ThreadPackage));

        for (int i = 0; i < thread_count; i++) {
            fgets(chunks[i], chunk_size, log_file);
            threadPackages[i].chunk = chunks[i];
            threadPackages[i].sequence = sequence;
            pthread_create(&(threads[i]), NULL,
                           thread_func, &threadPackages[i]);

            if (!(feof(log_file))) {
                fseek(log_file, seq_size / 2, SEEK_CUR);
            }
        }
        for (int i = 0; i < thread_count; i++) {
            pthread_join(threads[i], NULL);
        }
        for ( int i = 0; i < thread_count; i++ ) {
            pthread_cancel(threads[i]);
        }
        free(threads);
    }
    for (int i = 0; i < thread_count; i++) {
        free(chunks[i]);
    }
    free(chunks);
    fclose(log_file);
    return mt_count;
}
