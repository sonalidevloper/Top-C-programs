//split a string into anumber of sub strings
#include <stdio.h>
#include <string.h>

void splitString(char str[], char delimiter[]) {
    char *token = strtok(str, delimiter);

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, delimiter);
    }
}

int main() {
    char str[] = "Hello,World,This,Is,C";
    char delimiter[] = ",";

    printf("Substrings:\n");
    splitString(str, delimiter);

    return 0;
}
