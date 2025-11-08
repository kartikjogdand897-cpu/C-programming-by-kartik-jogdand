#include <stdio.h>
#include <math.h>   // For sqrt() function

int main() {
    double num, result;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%lf", &num);

    // Checking for negative input
    if (num < 0) {
        printf("Square root of a negative number is not real.\n");
    } else {
        // Using sqrt() function from math.h
        result = sqrt(num);
        printf("The square root of %.2lf is %.2lf\n", num, result);
    }

    return 0;
}
