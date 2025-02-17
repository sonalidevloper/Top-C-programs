//string to long conversion
#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "123456";
    long num;

    num = atol(str);
    printf("Long value: %ld\n", num);

    return 0;
}
