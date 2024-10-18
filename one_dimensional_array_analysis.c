/*
program which prompts the user to enter 10 integers, calculates and displays their sum, average, maximum, minimum, counts of positive and negative numbers, and outputs the sorted array.
Author: Kinuthia Abraham Ngugi.
REG NO: CT101/G/22378/24.
Date: 15/10/2024.
*/

#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;
    float average;
    int max, min;
    int positiveCount = 0, negativeCount = 0;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];

        if (i == 0) {
            max = min = arr[i];
        } else {
            if (arr[i] > max) max = arr[i];
            if (arr[i] < min) min = arr[i];
        }

        if (arr[i] > 0) positiveCount++;
        else if (arr[i] < 0) negativeCount++;
    }

    average = sum / 10.0;

    printf("The average of the array elements is: %.2f\n", average);
    printf("The maximum value is: %d\n", max);
    printf("The minimum value is: %d\n", min);
    printf("Count of positive numbers: %d\n", positiveCount);
    printf("Count of negative numbers: %d\n", negativeCount);

    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
