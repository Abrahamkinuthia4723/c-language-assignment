/*
Program to find compound interest by accepting the principle amount,time and rate values.
Author:Kinuthia Abraham Ngugi.
REG NO:CT101/G/22378/24.
Date:30/9/2024.
*/
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, amount, compoundInterest;

    printf("input Principal Amount (P): ");
    scanf("%f", &principal);

    printf("Input Rate of Interest (R) in percentage: ");
    scanf("%f", &rate);

    printf("Input Time (T) in years: ");
    scanf("%f", &time);
    
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    printf("\nPrincipal Amount (P): %.1f\n", principal);
    printf("Rate of Interest (R): %.1f%%\n", rate);
    printf("Time (T): %.1f years\n", time);
    printf("Total Amount (A): %.1f\n", amount);
    printf("Compound Interest (CI): %.1f\n", compoundInterest);

    return 0;
}