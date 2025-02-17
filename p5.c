
//c program to check a number is prime or not
#include <stdio.h>
#include <math.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    
    for (i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            printf("%d is not a prime number.\n", num);
            return 0; 
        }
    }

    printf("%d is a prime number.\n", num);
    return 0;
}