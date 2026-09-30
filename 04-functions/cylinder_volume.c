#include <stdio.h>

float calculate_cylinder_volume(float height, float diameter) {
    float radius = diameter / 2;
    float pi = 3.14159265358979323846;
    float volume = pi * (radius * radius) * height;
    return volume;
}

int main() {
    float height, diameter, volume;

    printf("--- Cylinder Volume Calculator ---\n");
    printf("Enter the height: ");
    scanf("%f", &height);

    printf("Enter the diameter: ");
    scanf("%f", &diameter);

    volume = calculate_cylinder_volume(height, diameter);

    printf("Cylinder Volume: %.2f cubic\n", volume);

    return 0;
}