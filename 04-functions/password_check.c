#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check_length(char password[]) {
    return strlen(password) >= 8;
}

int has_uppercase(char password[]) {
    for (int i = 0; password[i] != '\0'; i++) {
        if (isupper(password[i])) {
            return 1;
        }
    }
    return 0;
}

int has_number(char password[]) {
    for (int i = 0; password[i] != '\0'; i++) {
        if (isdigit(password[i])) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int MAX_LENGTH = 50;
    char password[MAX_LENGTH];

    printf("--- Password Strength Validator ---\n");
    printf("Min. 8 characters, at least 1 uppercase letter and 1 number.\n");
    printf("Enter your password: ");
    scanf("%s", password);

    int is_valid_length = check_length(password);
    int has_upper = has_uppercase(password);
    int has_digit = has_number(password);

    if (is_valid_length && has_upper && has_digit) {
        printf("\nStrong Password! Approved.\n");
    } else {
        printf("\nWeak Password! Please fix the following:\n");

        if (!is_valid_length) {
            printf("Password must have at least 8 characters.\n");
        }
        if (!has_upper) {
            printf("Password must have at least 1 uppercase letter.\n");
        }
        if (!has_digit) {
            printf("Password must have at least 1 numeric digit.\n");
        }
    }

    return 0;
}