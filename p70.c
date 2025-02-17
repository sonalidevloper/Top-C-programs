//sort  thye elements of the array  in descending order
#include <stdio.h>

int main() {
    int arr[] = {50, 20, 40, 10, 30}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) { 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array in Descending Order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
