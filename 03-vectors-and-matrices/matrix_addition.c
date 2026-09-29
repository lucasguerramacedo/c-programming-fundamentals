#include <stdio.h>
#include <stdlib.h>

int main() {
    int matrix_a[3][3];
    int matrix_b[3][3];
    int sum_matrix[3][3];

    printf("--- Matrix Addition ---\n");

    printf("Enter elements for Matrix A:\n");
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf("Matrix A [%d][%d]: ", row, col);
            scanf("%d", &matrix_a[row][col]);
        }
    }

    printf("\nEnter elements for Matrix B:\n");
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf("Matrix B [%d][%d]: ", row, col);
            scanf("%d", &matrix_b[row][col]);
        }
    }

    printf("\nMatrix (A + B):\n");
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            sum_matrix[row][col] = matrix_a[row][col] + matrix_b[row][col];
            printf("%d \t", sum_matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}