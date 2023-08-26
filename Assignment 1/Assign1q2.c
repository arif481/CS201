/*
MD ARIFUZZAMAN.
SCHOLAR ID: 2212045
ASSIGNMENT 2 DSA
*/

#include <stdio.h>
#include <string.h>

void multiplyLargeNumbers(const char* num1, const char* num2, char* result) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    
    if (len1 == 0 || len2 == 0) {
        result[0] = '0';
        result[1] = '\0';
        return;
    }

    int maxLen = len1 + len2;
    int resultArray[maxLen];
    for (int i = 0; i < maxLen; i++) {
        resultArray[i] = 0;
    }

    int offset1 = 0;
    int offset2 = 0;

    for (int i = len1 - 1; i >= 0; i--) {
        int carry = 0;
        int n1 = num1[i] - '0';
        offset2 = 0;

        for (int j = len2 - 1; j >= 0; j--) {
            int n2 = num2[j] - '0';
            int product = n1 * n2 + resultArray[offset1 + offset2] + carry;
            carry = product / 10;
            resultArray[offset1 + offset2] = product % 10;
            offset2++;
        }

        if (carry > 0)
            resultArray[offset1 + offset2] += carry;

        offset1++;
    }

    int i = maxLen - 1;
    while (i >= 0 && resultArray[i] == 0)
        i--;

    if (i == -1) {
        result[0] = '0';
        result[1] = '\0';
        return;
    }

    int idx = 0;
    while (i >= 0) {
        result[idx++] = resultArray[i] + '0';
        i--;
    }
    result[idx] = '\0';
}

int main() {
    char num1[1000];
    char num2[1000];
    char result[2000]; // To accommodate the possible size of the product
    printf("Enter the first number: ");
    scanf("%s", num1);
    printf("Enter the second number: ");
    scanf("%s", num2);
    
    if ((num1[0] == '-' || num2[0] == '-') && (num1[0] != '-' || num2[0] != '-'))
        printf("-");
    
    if (num1[0] == '-')
        memmove(num1, num1 + 1, strlen(num1));
    
    if (num2[0] == '-')
        memmove(num2, num2 + 1, strlen(num2));
    
    multiplyLargeNumbers(num1, num2, result);
    printf("Product: %s\n", result);
    
    return 0;
}
