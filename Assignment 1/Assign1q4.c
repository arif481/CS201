/*
MD ARIFUZZAMAN.
SCHOLAR ID: 2212045
ASSIGNMENT 2 DSA
*/


#include <stdio.h>

void computeDivision(int dividend, int divisor, int decimalPlaces) {
    // Base cases
    if (divisor == 0) {
        printf("Infinite\n");
        return;
    }
    if (dividend == 0) {
        printf("0\n");
        return;
    }
    if (decimalPlaces <= 0) {
        printf("%d\n", dividend / divisor);
        return;
    }

    // Handle negative numbers
    if (((dividend > 0) && (divisor < 0)) || ((dividend < 0) && (divisor > 0))) {
        printf("-");
        dividend = dividend > 0 ? dividend : -dividend;
        divisor = divisor > 0 ? divisor : -divisor;
    }

    // Compute integer part of the quotient
    int quotient = dividend / divisor;

    // Print integer part
    printf("%d", quotient);

    if (decimalPlaces > 0)
        printf(".");

    // Compute and print decimal part
    for (int i = 0; i < decimalPlaces; i++) {
        dividend = dividend - (divisor * quotient);
        if (dividend == 0)
            break;
        
        dividend = dividend * 10;
        quotient = dividend / divisor;

        if (i == 0)
            printf(".");
        
        printf("%d", quotient);
    }

    printf("\n");
}

int main() {
    int dividend = 22, divisor = 7, decimalPlaces = 19;
    computeDivision(dividend, divisor, decimalPlaces);
    return 0;
}
