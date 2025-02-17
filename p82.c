//find  ormal an trace
#include <stdio.h>
#include <math.h>

void findTraceAndNormal(int mat[3][3], int size) {
    int trace = 0;
    double normal = 0;

    for (int i = 0; i < size; i++) {
        trace += mat[i][i]; // Sum of diagonal elements
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            normal += mat[i][j] * mat[i][j]; // Sum of squares of all elements
        }
    }

    normal = sqrt(normal); // Square root of the sum

    printf("Trace of the matrix: %d\n", trace);
    printf("Normal of the matrix: %.2f\n", normal);
}

int main() {
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    findTraceAndNormal(mat, 3);

    return 0;
}
