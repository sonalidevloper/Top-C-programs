//to check if a string is a palindrome using pointers
#include <stdio.h>
#include <string.h>

int isPalindrome(char *str) {
    char *left = str;
    char *right = str + strlen(str) - 1;

    while (left < right) {
        if (*left != *right) {
            return 0;  
        }
        left++;
        right--;
    }
    return 1;  
}

int main() {
    char str[] = "madam";

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
