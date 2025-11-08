#include <stdio.h>
#define PI 3.14159   // Constant value of π defined

int main() {
    int choice;      // For user menu choice
    float a1, a2, a3;  // For triangle angles
    float degree, radian, angle;  // For conversions

    // Menu display for user
    printf("===== ANGLE CALCULATOR =====\n");
    printf("1. Check if three angles form a triangle\n");
    printf("2. Convert Degree to Radian\n");
    printf("3. Convert Radian to Degree\n");
    printf("4. Find Complementary Angle\n");
    printf("5. Find Supplementary Angle\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    // Using switch to perform chosen operation
    switch (choice) {
        case 1:
            // Triangle check
            printf("Enter three angles of triangle: ");
            scanf("%f %f %f", &a1, &a2, &a3);
            if (a1 + a2 + a3 == 180)
                printf("These angles can form a triangle.\n");
            else
                printf("These angles cannot form a triangle.\n");
            break;

        case 2:
            // Degree → Radian
            printf("Enter angle in degrees: ");
            scanf("%f", &degree);
            radian = degree * PI / 180;
            printf("Angle in radians: %.4f\n", radian);
            break;

        case 3:
            // Radian → Degree
            printf("Enter angle in radians: ");
            scanf("%f", &radian);
            degree = radian * 180 / PI;
            printf("Angle in degrees: %.4f\n", degree);
            break;

        case 4:
            // Complementary (90 - angle)
            printf("Enter angle in degrees: ");
            scanf("%f", &angle);
            if (angle < 90)
                printf("Complementary angle is: %.2f°\n", 90 - angle);
            else
                printf("No complementary angle exists (angle ≥ 90°).\n");
            break;

        case 5:
            // Supplementary (180 - angle)
            printf("Enter angle in degrees: ");
            scanf("%f", &angle);
            if (angle < 180)
                printf("Supplementary angle is: %.2f°\n", 180 - angle);
            else
                printf("No supplementary angle exists (angle ≥ 180°).\n");
            break;

        default:
            printf("Invalid choice! Please select 1-5.\n");
    }

    return 0;
}
