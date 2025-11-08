#include <stdio.h>

int main() {
    int choice;
    float radius, length, breadth, base, height, side, area;

    printf("===== AREA CALCULATION PROGRAM =====\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Triangle\n");
    printf("4. Area of Square\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter radius of Circle: ");
            scanf("%f", &radius);
            area = 3.1416 * radius * radius;
            printf("Area of Circle = %.2f square units\n", area);
            break;

        case 2:
            printf("Enter length and breadth of Rectangle: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            printf("Area of Rectangle = %.2f square units\n", area);
            break;

        case 3:
            printf("Enter base and height of Triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of Triangle = %.2f square units\n", area);
            break;

        case 4:
            printf("Enter side of Square: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of Square = %.2f square units\n", area);
            break;

        default:
            printf("Invalid choice! Please enter a number between 1 and 4.\n");
    }

    return 0;
}
