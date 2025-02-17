//long to string 
#include <stdio.h>

int main() {
    long num = 123456;
    char str[20];

    sprintf(str, "%ld", num);
    printf("String representation: %s\n", str);

    return 0;
}
