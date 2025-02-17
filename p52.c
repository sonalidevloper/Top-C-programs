//c program to check prime number using function 
#include <stdio.h>


int checkPrime(int n) {
    if (n <= 1) 
        return 0;
    for (int i = 2; i < n; i++) { 
        if (n % i == 0) 
            return 0;
    }

    return 1; 
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calling the function and displaying result
    if (checkPrime(number))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}
