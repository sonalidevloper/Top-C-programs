//c program to check whether a number is prime or not
#include <stdio.h>
int main() {
    int num, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1) {
        printf("Not a Prime Number\n");
        return 0;
    }
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
        printf("Prime Number\n");
    else
        printf("Not a Prime Number\n");
    return 0;
}
