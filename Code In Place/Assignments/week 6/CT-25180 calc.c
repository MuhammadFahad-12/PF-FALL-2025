#include <stdio.h>

int main()
{
    int num1, num2,result;
    char operator;
    printf("Enter your num1: ");
    scanf("%d", &num1);
    printf("Enter your num2: ");
    scanf("%d", &num2);
    printf("Operation to be performed (+,-,/,*,%%): ");
    scanf(" %c", &operator);
    if ((operator == '%'||operator == '/') && num2 == 0) {
        printf("Invalid operation.");
        return 0;
    }
    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    case '%':
        result = num1 % num2;
        break;
    default:
        printf("Invalid Operator!");
        return 0;
    }
    printf("Result: %d", result);
    return 0;
}