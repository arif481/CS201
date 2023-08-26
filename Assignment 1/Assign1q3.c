/*
MD ARIFUZZAMAN.
SCHOLAR ID: 2212045
ASSIGNMENT 2 DSA
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* divideLargeNumber(const char* dividend, int divisor) {
    char* quotient = (char*)malloc((strlen(dividend) + 1) * sizeof(char));
    int quotientIdx = 0;
    
    int idx = 0;
    int temp = dividend[idx] - '0';
    
    while (temp < divisor)
        temp = temp * 10 + (dividend[++idx] - '0');
    
    while (dividend[idx] != '\0') {
        quotient[quotientIdx++] = (temp / divisor) + '0';
        temp = (temp % divisor) * 10 + dividend[++idx] - '0';
    }
    
    quotient[quotientIdx] = '\0';
    
    if (quotient[0] == '\0') {
        char* result = (char*)malloc(2 * sizeof(char));
        result[0] = '0';
        result[1] = '\0';
        free(quotient);
        return result;
    }
    
    return quotient;
}

int main() {
    char* dividend;
    char num[1000];
    int divisor;
    
    printf("Enter the dividend: ");
    scanf("%s", num);
    dividend = num;
    
    printf("Enter the divisor: ");
    scanf("%d", &divisor);
    
    char* result = divideLargeNumber(dividend, divisor);
    printf("Quotient: %s\n", result);
    
    free(result);
    return 0;
}
