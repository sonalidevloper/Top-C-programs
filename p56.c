//wap to print sum of natural number using recursion 
#include <stdio.h>
int sumNatural(int n) {
    if (n == 0) return 0;
    return n + sumNatural(n - 1);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of first %d natural numbers = %d\n", num, sumNatural(num));

    return 0;
}
