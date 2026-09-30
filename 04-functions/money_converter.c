#include <stdio.h>

void convert_usd_to_brl(float amount) {
    float converted = amount * 5.20;
    printf("$%.2f USD is equivalent to R$%.2f BRL\n", amount, converted);
}

void convert_brl_to_usd(float amount) {
    float converted = amount / 5.20;
    printf("R$%.2f BRL is equivalent to $%.2f USD\n", amount, converted);
}

int main() {
    float amount;
    int option;

    printf("--- Currency Converter ---\n");
    printf("1. Convert BRL to USD\n");
    printf("2. Convert USD to BRL\n");
    printf("0. Exit\n");
    printf("Choose an option: ");
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("Enter the amount in BRL: R$");
            scanf("%f", &amount);
            convert_brl_to_usd(amount);
            break;
        case 2:
            printf("Enter the amount in USD: $\n");
            scanf("%f", &amount);
            convert_usd_to_brl(amount);
            break;
        case 0:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid option!\n");
            break;
    }

    return 0;
}