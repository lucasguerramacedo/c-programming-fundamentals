#include <stdio.h>

int main() {
    int ROWS = 4;
    int COLS = 4;
    int matrix[ROWS][COLS];
    int target_number;
    int frequency_count = 0;


    printf("--- Matrix Frequency Search ---\n");
    printf("Enter the elements for the matrix:\n");

    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
            printf("Matrix [%d][%d]: ", row, col);
            scanf("%d", &matrix[row][col]);
        }
    }

    printf("\nEnter the number you want to search for: ");
    scanf("%d", &target_number);

    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
            if (matrix[row][col] == target_number) {
                frequency_count++;
            }
        }
    }

    printf("\nThe number %d appears %d time(s) in the matrix.\n", target_number, frequency_count);

    return 0;
}