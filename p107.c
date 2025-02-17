//float to string conversion#include <stdio.h>

#include <stdio.h>

int main() {
    float number = 12.345;
    char str[20];

    sprintf(str, "%f", number);
    printf("String representation: %s\n", str);

    return 0;
}
