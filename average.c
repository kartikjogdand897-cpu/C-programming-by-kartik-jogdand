#include <stdio.h>

int main() {
    int n, i;
    float num, sum = 0, avg;

    // Taking how many numbers user wants to input
    printf("Enter how many numbers you want: ");
    scanf("%d", &n);

    // Loop to take 'n' numbers from user and add them
    for(i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum = sum + num;
    }

    // Calculating average
    avg = sum / n;

    // Displaying result
    printf("Average = %.2f", avg);

    return 0;
}
