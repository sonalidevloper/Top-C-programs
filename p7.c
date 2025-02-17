
//c program to print ASCII value of a character
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Print ASCII value
    printf("The ASCII value of '%c' is %d\n", ch, ch);

    return 0;
}