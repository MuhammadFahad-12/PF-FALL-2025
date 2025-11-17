//https://leetcode.com/problems/palindrome-number/
#include <stdbool.h>

bool isPalindrome(int x) {
    // Negative numbers cannot be palindrome
    if (x < 0)
        return false;

    long reversed = 0;
    int original = x;

    while (x != 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }

    return reversed == original;
}
