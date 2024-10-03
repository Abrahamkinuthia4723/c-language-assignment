/*
Program to calculate the fine for overdue library books.
Author:Kinuthia Abraham Ngugi.
REG NO:CT101/G/22378/24.
Date:28/9/2024.
*/
#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    int fineRate, fineAmount;

    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    
    printf("Enter Due Date (in days): ");
    scanf("%d", &dueDate);
    
    printf("Enter Return Date (in days): ");
    scanf("%d", &returnDate);

    daysOverdue = returnDate - dueDate;

    if (daysOverdue <= 7) {
        fineRate = 20;
    } else if (daysOverdue >= 8 && daysOverdue <= 14) {
        fineRate = 50;
    } else if (daysOverdue > 14) {
        fineRate = 100;
    } else {
        fineRate = 0;
    }

    fineAmount = fineRate * daysOverdue;

    printf("\nBook ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh. %d\n", fineRate);
    printf("Fine Amount: Ksh. %d\n", fineAmount);

    return 0;
}