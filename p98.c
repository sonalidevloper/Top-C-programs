//check a pangram string
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPangram(char str[]) {
    int alphabet[26] = {0};
    int index;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            index = tolower(str[i]) - 'a';
            alphabet[index] = 1;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (alphabet[i] == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[] = "The quick brown fox jumps over the lazy dog";

    if (isPangram(str)) {
        printf("The string is a pangram.\n");
    } else {
        printf("The string is not a pangram.\n");
    }

    return 0;
}
