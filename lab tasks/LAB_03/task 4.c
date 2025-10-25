#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Program: Binary operations with Bitwise Operators.\n");

    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    printf("BITWISE AND OPERATOR = %d\n", num1 & num2);
    printf("BITWISE OR OPERATOR = %d\n", num1 | num2);
    printf("BITWISE NOT OPERATOR (num1) = %d\n", ~num1);
    printf("BITWISE XOR OPERATOR = %d\n", num1 ^ num2);
    printf("LEFT SHIFT (num1<<1) = %d\n", num1 << 1);
    printf("RIGHT SHIFT (num2>>1) = %d\n", num2 >> 1);

    return 0;
}

