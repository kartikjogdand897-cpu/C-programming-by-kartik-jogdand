#include <stdio.h>

int main() {
    int num, square, cube;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculating square and cube
    square = num * num;
    cube = num * num * num;

    // Displaying results
    printf("\n--- Results ---\n");
    printf("Number: %d\n", num);
    printf("Square: %d\n", square);
    printf("Cube: %d\n", cube);

    return 0;
}
