/*
MD ARIFUZZAMAN.
SCHOLAR ID: 2212045
ASSIGNMENT 2 DSA
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* addLargeNumbers(const char* num1, const char* num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int maxLength = (len1 > len2) ? len1 : len2;
    
    char* sum = (char*)malloc((maxLength + 2) * sizeof(char));
    sum[maxLength + 1] = '\0'; // Null-terminate the sum
    
    int carry = 0;
    int i = len1 - 1, j = len2 - 1, k = maxLength;
    
    while (i >= 0 || j >= 0 || carry) {
        int digitSum = carry;
        if (i >= 0)
            digitSum += num1[i--] - '0';
        if (j >= 0)
            digitSum += num2[j--] - '0';
        
        carry = digitSum / 10;
        sum[k--] = (digitSum % 10) + '0';
    }
    
    char* finalSum = sum + k + 1;
    return finalSum;
}

int main() {
    char x[1000], y[1000];
    printf("Enter the first number: ");
    scanf("%s", x);
    printf("Enter the second number: ");
    scanf("%s", y);
    
    char* result = addLargeNumbers(x, y);
    printf("Sum: %s\n", result);
    
    free(result);
    
    return 0;
}
