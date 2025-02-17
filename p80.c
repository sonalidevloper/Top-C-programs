//find the transpose
#include <stdio.h>

void transposeMatrix(int mat[][3], int trans[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            trans[j][i] = mat[i][j];
        }
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
    int trans[3][3];

    transposeMatrix(mat, trans, 3, 3);

    printf("Transpose of the matrix:\n");
    printMatrix(trans, 3, 3);

    return 0;
}
