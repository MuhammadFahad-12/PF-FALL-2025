https://leetcode.com/problems/longest-common-prefix/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";

    // Start with the first string as prefix
    char* prefix = strs[0];

    for (int i = 1; i < strsSize; i++) {
        int j = 0;

        // Compare characters of prefix and current string
        while (prefix[j] && strs[i][j] && prefix[j] == strs[i][j]) {
            j++;
        }

        // Cut the prefix to the matched length
        prefix[j] = '\0';

        // If prefix becomes empty, no need to check further
        if (j == 0) return "";
    }

    return prefix;
}