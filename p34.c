//c program to display prime numbers between intervals
#include <stdio.h>
int main() {
    int start, end, i, j, isPrime;
    // Taking input
    printf("Enter the start of the interval: ");
    scanf("%d", &start);
    printf("Enter the end of the interval: ");
    scanf("%d", &end);
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (i = start; i <= end; i++) {
        if (i < 2) continue; 
        isPrime = 1;
        for (j = 2; j * j <= i; j++) {  
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }
    return 0;
}
