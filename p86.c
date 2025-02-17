//rotate matrix element
#include <stdio.h>

void rotateMatrix(int mat[][3], int rows, int cols) {
    int rotated[3][3];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            rotated[j][rows - 1 - i] = mat[i][j];
        }
    }

    // Copy rotated matrix back to original
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mat[i][j] = rotated[i][j];
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

    rotateMatrix(mat, 3, 3);

    printf("Rotated matrix (90 degrees clockwise):\n");
    printMatrix(mat, 3, 3);

    return 0;
}
