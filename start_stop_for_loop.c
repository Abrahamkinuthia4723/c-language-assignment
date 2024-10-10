/*
Program to print numbers in a range and calculate their sum using a for loop.
Author: Kinuthia Abraham Ngugi.
REG NO: CT101/G/22378/24.
Date: 7/10/2024.
*/

#include <stdio.h>

int main() {
    int start, stop, sum = 0;

    printf("Enter the starting value: ");
    scanf("%d", &start);
    printf("Enter the stopping value: ");
    scanf("%d", &stop);

    printf("The numbers from %d to %d are:\n", start, stop);
    for (int i = start; i <= stop; i++) {
        printf("%d\n", i);
        sum += i;  
    }

    printf("The sum of the numbers from %d to %d is: %d\n", start, stop, sum);
    
    return 0;
}