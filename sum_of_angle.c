#include <stdio.h>   // Input-output functions ke liye header file

int main() {
    float a1, a2, a3, sum;   // 3 angles aur unka sum store karne ke liye variables

    // User se 3 angles input lena
    printf("Enter first angle of triangle: ");
    scanf("%f", &a1);

    printf("Enter second angle of triangle: ");
    scanf("%f", &a2);

    printf("Enter third angle of triangle: ");
    scanf("%f", &a3);

    // Sabhi angles ka sum nikalna
    sum = a1 + a2 + a3;

    // Output me total sum dikhana
    printf("\nSum of all three angles = %.2f degrees\n", sum);

    // Check karna ki kya ye triangle bana sakte hain (sum == 180)
    if (sum == 180)
        printf(" These angles can form a valid triangle.\n");
    else
        printf("These angles cannot form a triangle.\n");

    return 0;  
}
