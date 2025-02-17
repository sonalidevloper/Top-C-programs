//print boundry element of a matrix
#include <stdio.h>

void printBoundaryElements(int mat[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                printf("%d ", mat[i][j]);
            } else {
                printf("  "); // For better visualization
            }
        }
        printf("\n");
    }
}

int main() {
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("Boundary elements of the matrix:\n");
    printBoundaryElements(mat, 3, 3);

    return 0;
}
