//double to string conversion
#include <stdio.h>

int main() {
    double number = 123.456789;
    char str[30];

    sprintf(str, "%lf", number);
    printf("String representation: %s\n", str);

    return 0;
}
