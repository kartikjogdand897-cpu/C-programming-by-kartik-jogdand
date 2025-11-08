#include <stdio.h>

int main() {
    float inr, usd, eur, yen;  // Declaring variables

    // Taking input from user
    printf("Enter amount in Indian Rupees (INR): ");
    scanf("%f", &inr);

    // Conversion rates (approximate values)
    usd = inr / 83.10;   // 1 USD ≈ 83.10 INR
    eur = inr / 89.50;   // 1 EUR ≈ 89.50 INR
    yen = inr / 0.56;    // 1 YEN ≈ 0.56 INR

    // Displaying results
    printf("\nEquivalent Currency Values:\n");
    printf("US Dollars (USD): %.2f\n", usd);
    printf("Euros (EUR): %.2f\n", eur);
    printf("Japanese Yen (YEN): %.2f\n", yen);

    return 0;
}
