#include <stdio.h>

int main() {
    int numbers[6];
    int reversed[6];

    printf("--- Array Reversal ---\n");

    for (int i = 0; i < 6; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 5; i >= 0; i--) {
        reversed[5 - i] = numbers[i];
    }

    printf("\nReversed\n");

    for (int i = 0; i < 6; i++) {
        printf("%d\n", reversed[i]);
    }

    return 0;
}