
#include <stdio.h>
#include <stdlib.h>

int main() {
    int number = -1;
    int odd_count = 0;
    int even_count = 0;

    printf("--- Odd and Even Tracker ---\n");
    printf("Enter numbers to check (Type 0 to stop).\n\n");

    while (number != 0) {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number != 0) {
            if (number % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
    }

    printf("\nTotal of EVEN numbers: %d\n", even_count);
    printf("Total of ODD numbers: %d\n", odd_count);

    return 0;
}