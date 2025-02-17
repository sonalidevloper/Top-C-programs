//remove all occurances of an element in an array
#include <stdio.h>

int removeElement(int arr[], int n, int key) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != key) {
            arr[j++] = arr[i];
        }
    }
    return j;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;

    n = removeElement(arr, n, key);

    printf("Array after removing %d: ", key);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
