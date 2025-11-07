#include <stdio.h>

int main() {
    int num1, num2;
    char operation;
    
    printf("Simple Calculator\n");
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    switch(operation) {
        case '+':
            printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("Result: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Invalid operation!\n");
    }
    
    return 0;
}