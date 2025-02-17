//reverse a string using recursion
#include <stdio.h>
#include <string.h>

void reverseStringRec(char str[], int left, int right) {
    if (left >= right) {
        return;
    }

    char temp = str[left];
    str[left] = str[right];
    str[right] = temp;

    reverseStringRec(str, left + 1, right - 1);
}

int main() {
    char str[] = "hello";

    reverseStringRec(str, 0, strlen(str) - 1);

    printf("Reversed string: %s\n", str);

    return 0;
}
