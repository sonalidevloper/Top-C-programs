//array rotation 
#include <stdio.h>

void rotateArray(int arr[], int n, int d) {
    int temp[d];
    
    // Store first d elements in temp
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // Shift remaining elements to the left
    for (int i = 0; i < n - d; i++) {
        arr[i] = arr[i + d];
    }

    // Move temp elements to the end
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2; // Number of positions to rotate

    rotateArray(arr, n, d);

    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
