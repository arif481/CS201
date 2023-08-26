/*
MD ARIFUZZAMAN.
SCHOLAR ID: 2212045
ASSIGNMENT 2 DSA
*/

#include <stdio.h>

unsigned int power(unsigned int x, unsigned int y) {
    unsigned int result = 1;
    
    while (y > 0) {
        if (y % 2 == 1) {
            result *= x;
        }
        x *= x;
        y /= 2;
    }
    
    return result;
}

int main() {
    unsigned int base, exponent;
    
    printf("Enter the base: ");
    scanf("%u", &base);
    
    printf("Enter the exponent: ");
    scanf("%u", &exponent);
    
    unsigned int result = power(base, exponent);
    printf("%u\n", result);
    
    return 0;
}
