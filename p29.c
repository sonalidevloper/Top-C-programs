// c program to find armstrong number betwwen 1 to 1000
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
    printf("Armstrong numbers between 1 and 1000 are:\n");

    for (int i = 1; i <= 1000; i++) {
        if (Armstrong(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
