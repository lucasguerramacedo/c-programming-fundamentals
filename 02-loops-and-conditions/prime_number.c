#include <stdio.h>

int main() {
    int divisors_count;
    int MAX_LIMIT = 500;

    printf("--- Prime Numbers Finder ---\n");
    printf("Prime numbers between 1 and %d:\n\n", MAX_LIMIT);

    for (int number = 2; number <= MAX_LIMIT; number++) {
        divisors_count = 0;

        for (int divisor = 1; divisor <= number; divisor++) {
            if (number % divisor == 0) {
                divisors_count++;
            }
        }

        if (divisors_count == 2) {
            printf("%d ", number);
        }
    }

    printf("\n\n");
    return 0;
}