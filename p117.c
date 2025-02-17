//decimal to binary
#include <stdio.h>

void decimalToBinary(int num) {
    int binary[32], i = 0;

    if (num == 0) {
        printf("0");
        return;
    }

    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int decimalNum = 10;

    printf("Binary representation: ");
    decimalToBinary(decimalNum);
    printf("\n");

    return 0;
}
