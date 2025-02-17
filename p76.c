//copy all the elements from one array to another
#include <stdio.h>

void copyArray(int source[], int destination[], int n) {
    for (int i = 0; i < n; i++) {
        destination[i] = source[i];
    }
}

int main() {
    int source[] = {1, 2, 3, 4, 5};
    int n = sizeof(source) / sizeof(source[0]);
    int destination[n];

    copyArray(source, destination, n);

    printf("Copied array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", destination[i]);
    }

    return 0;
}
