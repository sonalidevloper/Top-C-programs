//c program to display prime number between intervals using function 
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

void printPrimes(int start, int end) {
    printf("Prime numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++) {
        if (checkPrime(i)) { 
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main() {
    int start, end;
    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);
    printPrimes(start, end);

    return 0;
}
