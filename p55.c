//c program to check whether a number can be express as sum of two prime number 
#include <stdio.h>
int checkPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main() {
    int number, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (i = 2; i <= number/ 2; i++) {
        if (checkPrime(i) && checkPrime(number - i)) {
            printf("%d = %d + %d\n", number, i, number - i);
            flag = 1;
        }
    }

    if (!flag)
        printf("%d cannot be expressed as the sum of two prime numbers.\n", number);

    return 0;
}
