//https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
#include <string.h>

int strStr(char* haystack, char* needle) {
    int n = strlen(haystack);
    int m = strlen(needle);

    // If needle is empty, return 0
    if (m == 0) return 0;

    // Loop through haystack
    for (int i = 0; i <= n - m; i++) {
        int j = 0;

        // Compare substring
        while (j < m && haystack[i + j] == needle[j]) {
            j++;
        }

        // If full match found
        if (j == m) {
            return i;
        }
    }

    return -1;  // No match found
}