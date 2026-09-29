#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    float num1, num2;
    char operator_choice;

    printf("--- Interactive Calculator ---\n");
    printf("Enter the starting number: ");
    scanf("%f", &num1);

    do {
        printf("\nChoose an operation (+, -, /, *) or 'N' to cancel: ");
        scanf(" %c", &operator_choice);
        operator_choice = toupper(operator_choice);

        if (operator_choice == 'N') {
            printf("Calculator closed.\n");
            break;
        }

        printf("Enter the next number: ");
        scanf("%f", &num2);

        if (operator_choice == '+') {
            num1 = num1 + num2;
        } else if (operator_choice == '-') {
            num1 = num1 - num2;
        } else if (operator_choice == '/') {
            if (num2 != 0) {
                num1 = num1 / num2;
            } else {
                printf("ERROR: Division by zero is not allowed.\n");
                continue;
            }
        } else if (operator_choice == '*') {
            num1 = num1 * num2;
        } else {
            printf("Invalid operation.\n");
            continue;
        }

        printf("Current Result: %.2f\n", num1);

    } while (1);

    return 0;
}