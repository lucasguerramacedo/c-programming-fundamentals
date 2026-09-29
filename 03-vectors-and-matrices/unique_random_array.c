#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE];
    int current_number;
    int is_duplicate;


    srand(time(NULL));

    printf("--- Unique Random Array Generator ---\n");

    for (int i = 0; i < ARRAY_SIZE; i++) {
        do {
            current_number = (rand() % 100) + 1;
            is_duplicate = 0;

            for (int j = 0; j < i; j++) {
                if (numbers[j] == current_number) {
                    is_duplicate = 1;
                    break;
                }
            }
        } while (is_duplicate);

        numbers[i] = current_number;
    }

    printf("\nGenerated unique numbers:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}