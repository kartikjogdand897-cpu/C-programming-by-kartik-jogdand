#include <stdio.h>
#include <math.h>  // for pow() function (used in compound interest)

int main() {
    float principal, rate, time, simple_interest, compound_interest;

    // Taking input from user
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Formula for Simple Interest
    simple_interest = (principal * rate * time) / 100;

    // Formula for Compound Interest
    compound_interest = principal * (pow((1 + rate / 100), time)) - principal;

    // Displaying results
    printf("\n--- Interest Calculation Results ---\n");
    printf("Simple Interest = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);

    return 0;
}
