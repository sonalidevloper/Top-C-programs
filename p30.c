//  c program to find armstrong number between two intervals
#include <stdio.h>
#include <math.h>


int Armstrong(int num) {
    int sum = 0, temp, digit, digits = 0;

    temp = num;
    while (temp > 0) {  
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) {  
        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == num);
}

int main() {
    int start, end;
    printf("Enter the start of the interval: ");
    scanf("%d", &start);
    printf("Enter the end of the interval: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (Armstrong(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
