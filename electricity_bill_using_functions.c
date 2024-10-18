/*
program which calculates and displays the electricity bill for a customer based on the number of units consumed(using functions).
Author: Kinuthia Abraham Ngugi.
REG NO: CT101/G/22378/24.
Date: 17/10/2024.
*/

#include <stdio.h>

float computeChargePerUnit(int units) {
    if (units <= 199) {
        return 1.20;
    } else if (units >= 200 && units < 400) {
        return 1.50;
    } else if (units >= 400 && units < 600) {
        return 1.80;
    } else {
        return 2.00;
    }
}

float computeBaseBill(int units) {
    float chargePerUnit =computeChargePerUnit (units);
    return chargePerUnit * units;
}

float calculateTotalAmount(float bill) {
    if (bill > 400) {
        bill += bill * 0.15;  
    }
    if (bill < 100) {
        bill = 100;  
    }
    return bill;
}

void displayBill(int customerID, char customerName[], int units, float bill, float totalAmount) {
    printf("\nElectricity Bill:\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", units);
    printf("Charges per Unit: %.2f\n", computeChargePerUnit(units));
    printf("Total Amount to Pay: %.2f\n", totalAmount);
}

int main() {
    int customerID, units;
    char customerName[100];
    float bill, totalAmount;

    printf("Input Customer ID: ");
    scanf("%d", &customerID);
    printf("Input Customer Name: ");
    scanf("%s", customerName);
    printf("Input Units Consumed: ");
    scanf("%d", &units);

    bill = computeBaseBill(units);
    totalAmount = calculateTotalAmount(bill);

    displayBill(customerID, customerName, units, bill, totalAmount);

    return 0;
}
