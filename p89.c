//interchange element of first and las in a matrix across columns
#include <stdio.h>

void interchangeFirstLastColumns(int mat[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int temp = mat[i][0];
        mat[i][0] = mat[i][cols - 1];
        mat[i][cols - 1] = temp;
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

    interchangeFirstLastColumns(mat, 3, 3);

    printf("Matrix after interchanging first and last column:\n");
    printMatrix(mat, 3, 3);

    return 0;
}
