//https://leetcode.com/problems/valid-parentheses/

#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool isValid(char* s) {
    int n = strlen(s);
    if (n == 0) return true;

    // Stack to store opening brackets
    char* stack = (char*)malloc(n);
    int top = -1;

    for (int i = 0; i < n; i++) {
        char c = s[i];

        // Push opening brackets
        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        }
        else {
            // If stack is empty -> invalid
            if (top == -1) {
                free(stack);
                return false;
            }

            char topChar = stack[top--];

            // Check matching pairs
            if ((c == ')' && topChar != '(') ||
                (c == '}' && topChar != '{') ||
                (c == ']' && topChar != '[')) {
                free(stack);
                return false;
            }
        }
    }

    // If stack empty -> valid, else invalid
    bool result = (top == -1);

    free(stack);
    return result;
}