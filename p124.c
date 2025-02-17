//sort a 2d array of string
#include <stdio.h>
#include <string.h>

void sortStrings(char *arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                char *temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    char *arr[] = {"banana", "apple", "cherry", "mango", "grape"};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", arr[i]);
    }

    sortStrings(arr, size);

    printf("\nAfter sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}
