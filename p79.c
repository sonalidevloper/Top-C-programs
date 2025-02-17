//check two matrices equal or not
#include <stdio.h>

int areMatricesEqual(int mat1[][3], int mat2[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat1[i][j] != mat2[i][j]) {
                return 0; // Matrices are not equal
            }
        }
    }
    return 1; // Matrices are equal
}

int main() {
    int mat1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    if (areMatricesEqual(mat1, mat2, 3, 3)) {
        printf("Matrices are equal.\n");
    } else {
        printf("Matrices are not equal.\n");
    }

    return 0;
}
