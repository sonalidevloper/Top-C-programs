//interchange elements of first and last in a matrix across rows
#include <stdio.h>

void interchangeFirstLastRows(int mat[][3], int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        int temp = mat[0][j];
        mat[0][j] = mat[rows - 1][j];
        mat[rows - 1][j] = temp;
    }
}

void printMatrix(int mat[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("Original matrix:\n");
    printMatrix(mat, 3, 3);

    interchangeFirstLastRows(mat, 3, 3);

    printf("Matrix after interchanging first and last row:\n");
    printMatrix(mat, 3, 3);

    return 0;
}
