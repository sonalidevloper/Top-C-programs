//add or conactenate two strings
#include <stdio.h>
#include <string.h>

void concatenateStrings(char str1[], char str2[], char result[]) {
    strcpy(result, str1);   
    strcat(result, str2);   
}

int main() {
    char str1[50] = "Hello, ";
    char str2[50] = "World!";
    char result[100];

    concatenateStrings(str1, str2, result);

    printf("Concatenated string: %s\n", result);

    return 0;
}
