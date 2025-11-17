//https://leetcode.com/problems/plus-one/
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    // Allocate memory for the result (may need +1 for carry)
    int* result = (int*)malloc((digitsSize + 1) * sizeof(int));
    
    int carry = 1;  // Start with adding 1
    for (int i = digitsSize - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        result[i + 1] = sum % 10;  // Store the digit
        carry = sum / 10;          // Update carry
    }
    
    if (carry) {
        result[0] = carry;
        *returnSize = digitsSize + 1;
        return result;  // Result starts from index 0
    } else {
        *returnSize = digitsSize;
        // Shift result one position left because result[0] is unused
        for (int i = 0; i < digitsSize; i++) {
            result[i] = result[i + 1];
        }
        return result;
    }
}