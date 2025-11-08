#include <stdio.h>

int main() {
    int choice;
    float celsius, fahrenheit, kelvin;

    printf("===== Temperature Conversion Program =====\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("5. Fahrenheit to Kelvin\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 9 / 5) + 32;
            printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);
            break;

        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            celsius = (fahrenheit - 32) * 5 / 9;
            printf("Temperature in Celsius: %.2f°C\n", celsius);
            break;

        case 3:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);
            kelvin = celsius + 273.15;
            printf("Temperature in Kelvin: %.2fK\n", kelvin);
            break;

        case 4:
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &kelvin);
            celsius = kelvin - 273.15;
            printf("Temperature in Celsius: %.2f°C\n", celsius);
            break;

        case 5:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            kelvin = ((fahrenheit - 32) * 5 / 9) + 273.15;
            printf("Temperature in Kelvin: %.2fK\n", kelvin);
            break;

        case 6:
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &kelvin);
            fahrenheit = ((kelvin - 273.15) * 9 / 5) + 32;
            printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);
            break;

        default:
            printf("Invalid choice! Please enter a number between 1 and 6.\n");
    }

    return 0;
}
