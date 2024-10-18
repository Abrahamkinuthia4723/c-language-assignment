/*
Program to count occurrences of a specific element in a 4x4 matrix.
Author: Kinuthia Abraham Ngugi.
REG NO: CT101/G/22378/24.
Date: 16/10/2024.
*/

#include <stdio.h>

int main() {
    int matrix[4][4], target, count = 0;

    printf("Input the elements of a 4x4 matrix:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Input the element to count: ");
    scanf("%d", &target);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] == target) {
                count++;
            }
        }
    }

    printf("Element %d appears %d times in the matrix.\n", target, count);

    return 0;
}