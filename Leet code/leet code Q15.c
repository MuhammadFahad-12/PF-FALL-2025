//https://leetcode.com/problems/add-binary/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* addBinary(char* a, char* b) {
    int n = strlen(a);
    int m = strlen(b);
    int maxLen = n > m ? n : m;

    // Allocate memory for the result (+1 for possible carry +1 for '\0')
    char* result = (char*)malloc(maxLen + 2);
    result[maxLen + 1] = '\0';

    int i = n - 1;      // Pointer for a
    int j = m - 1;      // Pointer for b
    int k = maxLen;      // Pointer for result
    int carry = 0;

    // Add digits from right to left
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';

        result[k--] = (sum % 2) + '0';
        carry = sum / 2;
    }

    // If carry is 1, it goes at result[k]
    if (carry) {
        result[k] = '1';
        return result + k;  // Return pointer starting at carry
    } else {
        return result + k + 1;  // Return pointer starting at first digit
    }
}