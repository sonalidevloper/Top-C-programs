//add 2 binary strings 
#include <stdio.h>
#include <string.h>

void addBinaryStrings(char bin1[], char bin2[], char result[]) {
    int len1 = strlen(bin1);
    int len2 = strlen(bin2);
    int carry = 0, i = len1 - 1, j = len2 - 1, k = (len1 > len2 ? len1 : len2);

    result[k + 1] = '\0'; 

    while (i >= 0 || j >= 0 || carry) {
        int bit1 = (i >= 0) ? bin1[i] - '0' : 0;
        int bit2 = (j >= 0) ? bin2[j] - '0' : 0;
        int sum = bit1 + bit2 + carry;

        result[k] = (sum % 2) + '0';
        carry = sum / 2; 

        i--; j--; k--;
    }
    if (result[0] == '0') {
        for (int m = 0; result[m] != '\0'; m++) {
            result[m] = result[m + 1];
        }
    }
}

int main() {
    char bin1[50] = "1101";
    char bin2[50] = "1011";
    char result[51]; 

    addBinaryStrings(bin1, bin2, result);

    printf("Sum of binary strings: %s\n", result);

    return 0;
}
