//compute the sum of diagonasis of a matrix
#include <stdio.h>

void sumOfDiagonals(int mat[][3], int size) {
    int primarySum = 0, secondarySum = 0;

    for (int i = 0; i < size; i++) {
        primarySum += mat[i][i]; // Primary diagonal
        secondarySum += mat[i][size - 1 - i]; // Secondary diagonal
    }

    // If matrix size is odd, subtract the middle element (counted twice)
    if (size % 2 != 0) {
        secondarySum -= mat[size / 2][size / 2];
    }

    printf("Sum of primary diagonal: %d\n", primarySum);
    printf("Sum of secondary diagonal: %d\n", secondarySum);
    printf("Total sum of diagonals: %d\n", primarySum + secondarySum);
}

int main() {
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    sumOfDiagonals(mat, 3);

    return 0;
}
