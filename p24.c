// c program to make a simple claculator

#include <stdio.h>

void main() {
    int a, b;
    float result; // Changed to float for division accuracy
    char operator;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Clearing input buffer before reading character
    while ((getchar()) != '\n');

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    switch (operator) {
        case '+':
            result = a + b;
            printf("Addition of two numbers is: %.2f\n", result);
            break;

        case '-':
            result = a - b;
            printf("Subtraction of two numbers is: %.2f\n", result);
            break;

        case '*':
            result = a * b;
            printf("Multiplication of two numbers is: %.2f\n", result);
            break;

        case '/':
            if (b != 0) {
                result = (float)a / b; 
                printf("Division of two numbers is: %.2f\n", result);
            } else {
                printf("Error! A number cannot be divided by 0.\n");
            }
            break;

        default:
            printf("Enter a valid operator.\n");
            break;
    }
}
