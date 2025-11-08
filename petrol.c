#include <stdio.h>

int main() {
    float price_per_litre, litres, total_cost;

    // Taking input from user
    printf("Enter petrol price per litre (in Rs): ");
    scanf("%f", &price_per_litre);

    printf("Enter quantity of petrol (in litres): ");
    scanf("%f", &litres);

    // Calculating total cost
    total_cost = price_per_litre * litres;

    // Displaying the result
    printf("\n--- Petrol Bill Summary ---\n");
    printf("Price per litre: Rs %.2f\n", price_per_litre);
    printf("Quantity: %.2f litres\n", litres);
    printf("Total Cost: Rs %.2f\n", total_cost);

    return 0;
}
