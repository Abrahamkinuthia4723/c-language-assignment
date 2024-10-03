/*
Program to calculate simple interest by accepyting the principle amount ,time and rate values.
Author:Kinuthia Abraham Ngugi.
REG NO:CT101/G/22378/24.
Date:27/9/2024.
*/
#include <stdio.h>

int main() {
    float principal_amount, time, rate, simple_interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal_amount);
    
    printf("Enter time (per annum) : ");
    scanf("%f", &time);
    
    printf("Enter the rate : ");
    scanf("%f", &rate);

    simple_interest = (principal_amount * time * rate) / 100;

    printf("The simple interest is %.1f\n", simple_interest);

    return 0;
}