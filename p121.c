//find the largest element in an arrau using pointer
#include <stdio.h>

int findLargest(int *arr, int size) {
    int *ptr = arr;
    int max = *ptr;

    for (int i = 1; i < size; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    return max;
}

int main() {
    int arr[] = {10, 25, 78, 45, 89, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Largest element: %d\n", findLargest(arr, size));

    return 0;
}
