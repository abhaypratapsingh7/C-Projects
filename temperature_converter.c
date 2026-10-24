#include <stdio.h>

float celsius_to_fahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

float fahrenheit_to_celsius(float f) {
    return (f - 32) * 5 / 9;
}

int main() {
    int choice;
    float value;

    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Choose 1 or 2: ");
    scanf("%d", &choice);

    printf("Enter temperature: ");
    scanf("%f", &value);

    if (choice == 1)
        printf("%.2f C = %.2f F\n", value, celsius_to_fahrenheit(value));
    else if (choice == 2)
        printf("%.2f F = %.2f C\n", value, fahrenheit_to_celsius(value));
    else
        printf("Invalid choice.\n");

    return 0;
}
