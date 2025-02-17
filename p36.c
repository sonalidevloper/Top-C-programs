//c program to find all factors of a natural number 
#include <stdio.h>
int main() {
    int num, i;
    // Taking input
    printf("Enter a natural number: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0)  
            printf("%d ", i);
    }
    return 0;
}
