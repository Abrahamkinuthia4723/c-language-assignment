#include <stdio.h>

int main() {
    int start, stop, sum = 0;

    printf("Enter the starting value: ");
    scanf("%d", &start);
    printf("Enter the stopping value: ");
    scanf("%d", &stop);

    printf("The numbers from %d to %d are:\n", start, stop);
    int i = start;
    while (i <= stop) {
        printf("%d\n", i);
        sum += i; 
        i++;
    }

    printf("The sum of the numbers from %d to %d is: %d\n", start, stop, sum);
    
    return 0;
}