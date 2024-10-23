
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "array.h"

//random N x N matrix
void generate_random_matrix(int *matrix, int n) {
    srand(time(0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            *(matrix + i * n + j) = rand() % 11;
        }
    }
}

//print the matrix
void print_matrix(int *matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d ", *(matrix + i * n + j));
        }
        printf("\n");
    }
}

//calculate the sum of the main diagonal
int sum_main_diagonal(int *matrix, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(matrix + i * n + i);
    }
    return sum;
}

//calculate the sum of the secondary diagonal
int sum_secondary_diagonal(int *matrix, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(matrix + i * n + (n - i - 1));
    }
    return sum;
}
