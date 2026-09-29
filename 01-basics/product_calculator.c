#include <stdio.h>
#include <stdlib.h>

int main() {
    char product_name[30];
    float price;
    int quantity;

    printf("--- Product Calculator ---\n");

    printf("Enter the product name: ");
    scanf("%29s", product_name);

    printf("Enter the product price: $");
    scanf("%f", &price);

    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    float total_value = price * quantity;

    printf("\nProduct: %s\n", product_name);
    printf("Total Value: $%.2f\n", total_value);

    return 0;
}