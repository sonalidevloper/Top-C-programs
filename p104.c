//insert an string into another string
#include <stdio.h>
#include <string.h>

void insertString(char mainStr[], char insertStr[], int position) {
    int mainLen = strlen(mainStr);
    int insertLen = strlen(insertStr);

    if (position < 0 || position > mainLen) {
        printf("Invalid position.\n");
        return;
    }

    for (int i = mainLen; i >= position; i--) {
        mainStr[i + insertLen] = mainStr[i];
    }

    for (int i = 0; i < insertLen; i++) {
        mainStr[position + i] = insertStr[i];
    }
}

int main() {
    char mainStr[100] = "Hello World";
    char insertStr[] = "Beautiful ";
    int position = 6;

    insertString(mainStr, insertStr, position);

    printf("Modified string: %s\n", mainStr);

    return 0;
}
