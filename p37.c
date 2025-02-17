//c program to sum of fibonacci numbers at even indexes upto n terms 
#include <stdio.h>
int main() {
    int n, first = 0, second = 1, next, sum = 0;
    // Taking input
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Sequence: ");   
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)  
            sum += first;
        printf("%d ", first); 
        next = first + second; 
        first = second;
        second = next;
    }
    printf("\nSum of Fibonacci numbers at even indexes: %d\n", sum);

    return 0;
}
