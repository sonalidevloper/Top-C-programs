//return a pointer from a function
#include <stdio.h>

int* getPointer() {
    static int num = 10;  
    return &num;
}

int main() {
    int *ptr = getPointer();
    printf("Value: %d\n", *ptr);

    return 0;
}
