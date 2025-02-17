//determine the unicode code point at a given index
#include <stdio.h>

void unicodeAt(char str[], int index) {
    if (str[index] != '\0') {
        printf("Unicode code point at index %d: %d\n", index, str[index]);
    } else {
        printf("Index out of bounds.\n");
    }
}

int main() {
    char str[] = "Hello";
    int index = 2;

    unicodeAt(str, index);

    return 0;
}
