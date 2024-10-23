#include <stdio.h>
#include <stdlib.h>
#include "array.h"

int main() {
    int n;

    printf("Enter the size of the array (N): ");
    scanf("%d", &n);

    //allocate memory for the matrix
    int *matrix = (int *)malloc(n * n * sizeof(int));
    if (matrix == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    //generate and print the matrix
    generate_random_matrix(matrix, n);
    printf("Generated Matrix:\n");
    print_matrix(matrix, n);

    //calculate and print the sums of the diagonals
    int main_diag_sum = sum_main_diagonal(matrix, n);
    int secondary_diag_sum = sum_secondary_diagonal(matrix, n);

    printf("Sum of the main diagonal: %d\n", main_diag_sum);
    printf("Sum of the secondary diagonal: %d\n", secondary_diag_sum);

    //free the allocated memory
    free(matrix);

    return 0;
}
