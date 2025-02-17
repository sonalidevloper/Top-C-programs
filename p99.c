//print first letter of each word
#include <stdio.h>
#include <ctype.h>

void printFirstLetters(char str[]) {
    if (isalpha(str[0])) {
        printf("%c ", str[0]);
    }

    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ' && isalpha(str[i])) {
            printf("%c ", str[i]);
        }
    }
}

int main() {
    char str[] = "Hello world from C programming";

    printf("First letters of each word: ");
    printFirstLetters(str);
    printf("\n");

    return 0;
}
