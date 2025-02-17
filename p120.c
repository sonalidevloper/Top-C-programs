//declare a two dimensional array of pointers in c
#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30, d = 40;
    int *arr[2][2] = { {&a, &b}, {&c, &d} };

    printf("Values: %d %d %d %d\n", *arr[0][0], *arr[0][1], *arr[1][0], *arr[1][1]);

    return 0;
}
