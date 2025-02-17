// c program to check whether a number is palindrome or not
#include <stdio.h>

int main() {
    int num, temp, rev = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;  
    while (temp > 0) {
        digit = temp % 10;       
        rev = rev * 10 + digit; 
        temp /= 10;             
    }
    if (num == rev)
        printf("Palindrome Number\n");
    else
        printf("Not a Palindrome Number\n");
    return 0;
}
