//wap to get a non repeating character from the given string
#include <stdio.h>
#include <string.h>

char firstNonRepeatingChar(char str[]) {
    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }

    return '\0';
}

int main() {
    char str[] = "programming";
    char result = firstNonRepeatingChar(str);

    if (result != '\0') {
        printf("First non-repeating character: %c\n", result);
    } else {
        printf("No non-repeating character found.\n");
    }

    return 0;
}
