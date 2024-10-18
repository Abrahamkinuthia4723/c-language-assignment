/*
The program prompts the user to enter elements of a 3x3x3 array, calculates and displays the maximum and minimum values, the product of all elements, counts positive and negative numbers, checks for the presence of a specific number, and prints the entire array in a structured format.
Author: Kinuthia Abraham Ngugi.
REG NO: CT101/G/22378/24.
Date: 14/10/2024.
*/

#include <stdio.h>

int main() {
    int array[3][3][3];
    int max, min, product = 1;
    int positiveCount = 0, negativeCount = 0, specificNumber, found = 0;

    printf("Enter the elements of a 3x3x3 array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                printf("Element [%d][%d][%d]: ", i + 1, j + 1, k + 1);
                scanf("%d", &array[i][j][k]);

                if (i == 0 && j == 0 && k == 0) {
                    max = min = array[i][j][k];
                } else {
                    if (array[i][j][k] > max) {
                        max = array[i][j][k];
                    }
                    if (array[i][j][k] < min) {
                        min = array[i][j][k];
                    }
                }

                product *= array[i][j][k];

                if (array[i][j][k] > 0) {
                    positiveCount++;
                } else if (array[i][j][k] < 0) {
                    negativeCount++;
                }
            }
        }
    }

    printf("The maximum value in the array is: %d\n", max);
    printf("The minimum value in the array is: %d\n", min);
    printf("The product of all elements is: %d\n", product);
    printf("Count of positive numbers: %d\n", positiveCount);
    printf("Count of negative numbers: %d\n", negativeCount);

    printf("Enter a number to search for in the array: ");
    scanf("%d", &specificNumber);
    
    for (int i = 0; i < 3 && !found; i++) {
        for (int j = 0; j < 3 && !found; j++) {
            for (int k = 0; k < 3 && !found; k++) {
                if (array[i][j][k] == specificNumber) {
                    found = 1;
                }
            }
        }
    }

    if (found) {
        printf("The number %d is found in the array.\n", specificNumber);
    } else {
        printf("The number %d is not found in the array.\n", specificNumber);
    }

    printf("The elements of the array are:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                printf("Element [%d][%d][%d]: %d\n", i + 1, j + 1, k + 1, array[i][j][k]);
            }
        }
    }

    return 0;
}
