//find the determinant of a matrix
#include <stdio.h>

int determinantOfMatrix(int mat[3][3]) {
    int det = mat[0][0] * (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1]) -
              mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0]) +
              mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);
    return det;
}

int main() {
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int det = determinantOfMatrix(mat);

    printf("Determinant of the matrix: %d\n", det);

    return 0;
}
