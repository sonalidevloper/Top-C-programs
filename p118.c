//binary to decimal
#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long binaryNum) {
    int decimalNum = 0, i = 0, remainder;

    while (binaryNum != 0) {
        remainder = binaryNum % 10;
        decimalNum += remainder * pow(2, i);
        binaryNum /= 10;
        i++;
    }

    return decimalNum;
}

int main() {
    long long binaryNum = 1010;

    printf("Decimal representation: %d\n", binaryToDecimal(binaryNum));

    return 0;
}
