//comapre two strings lexicographiocally
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "apple";
    char str2[] = "banana";

    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("Strings are equal lexicographically.\n");
    } else if (result < 0) {
        printf("\"%s\" comes before \"%s\" lexicographically.\n", str1, str2);
    } else {
        printf("\"%s\" comes after \"%s\" lexicographically.\n", str1, str2);
    }

    return 0;
}
