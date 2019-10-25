/*
 * "Copyright 2019 Sergei Petrenko"
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <pthread.h>
#include <zconf.h>
typedef struct {
    char* chunk;
    char* sequence;
}ThreadPackage;

static int mt_count = 0;

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
void run(char* sequeance, int seq_size, char* log_path) {
    FILE* log_file;
    int count = 0;
    int chunk_size = seq_size * 10;
    char* chunk[chunk_size];//NOLINT
    log_file = fopen(log_path, "r");
    while (!(feof(log_file))) {
        fgets(chunk, chunk_size, log_file);
        count += number_of_sequence(chunk, sequeance);
        if (!(feof(log_file))) {
            fseek(log_file, seq_size / 2, SEEK_CUR);
        }
    }
    printf("\n[OT]Вхождений: %d", count);
}
void *thread_func(void* thread_package) {
    ThreadPackage* tp = (ThreadPackage*)thread_package; //NOLINT
    char *chunk = tp->chunk;
    char *sequence = tp->sequence;
    mt_count += number_of_sequence(chunk, sequence);
    return NULL;
}

int mt_run(char* sequeance, int seq_size, char* log_path) {
    FILE* log_file;
    int thread_count = 5;
    int chunk_size = seq_size * 10;
    int **chunks = (char **)malloc(thread_count * sizeof(char*));//NOLINT
    for (int i = 0; i < thread_count; i++) {
        chunks[i] = (char *)malloc(chunk_size * sizeof(char));//NOLINT
    }
    log_file = fopen(log_path, "r");
    while (!(feof(log_file))) {
        pthread_t *threads =
                (pthread_t *) malloc(thread_count * sizeof(pthread_t));//NOLINT
        ThreadPackage* threadPackages =
                (ThreadPackage**) //NOLINT
                        malloc(thread_count * sizeof( ThreadPackage));

        for (int i = 0; i < thread_count; i++) {
            fgets(chunks[i], chunk_size, log_file);
            threadPackages[i].chunk = chunks[i];
            threadPackages[i].sequence = sequeance;
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
    printf("\n[MT]Вхождений:  %d", mt_count);
    return mt_count;
}

int main() {
    size_t len_max = 128;
    size_t seq_size = 0;
    char *sequeance = malloc(len_max);
    seq_size = len_max;
    printf("\nEnter a string:");
    char c = EOF;
    int i = 0;
    while ((c = getchar()) != '\n' && c != EOF) {
        sequeance[i++] = c;
        if (i == seq_size) {
            seq_size = i + len_max;
            sequeance = realloc(sequeance, seq_size);
        }
    }
    sequeance[i] = '\0';
    i++;
    char* log_path = "./enwik8.txt";
    mt_run(sequeance, i, log_path);
    run(sequeance, i, log_path);
    return 0;
}