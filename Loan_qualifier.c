/*
Program to check whether a person is eligible for a loan .
Author:Kinuthia Abraham Ngugi.
REG NO:CT101/G/22378/24.
Date:29/9/2024.
*/

#include <stdio.h>

int main() {
    int age;
    float income;

    printf("input your age: ");
    scanf("%d", &age);

    printf("input your annual income: ");
    scanf("%f", &income);

    if (age >= 21 && income >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}