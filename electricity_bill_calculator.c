#include <stdio.h>

int main() {
    int customerID, unitsConsumed;
    char customerName[50];
    float chargesPerUnit, totalBill;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    if (unitsConsumed <= 199) {
        chargesPerUnit = 1.20;
    } else if (unitsConsumed >= 200 && unitsConsumed < 400) {
        chargesPerUnit = 1.50;
    } else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        chargesPerUnit = 1.80;
    } else {
        chargesPerUnit = 2.00;
    }

    totalBill = unitsConsumed * chargesPerUnit;

    if (totalBill > 400) {
        totalBill += totalBill * 0.15;
    }

    if (totalBill < 100) {
        totalBill = 100;
    }

    printf("\nCustomer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charges per Unit: %.2f\n", chargesPerUnit);
    printf("Total Amount to Pay: %.2f\n", totalBill);

    return 0;
}
