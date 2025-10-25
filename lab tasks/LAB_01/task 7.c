#include <stdio.h>

int main(void)
{
    int num1, num2, add, subt, multi, mod;
    float div;

    printf("Program: Arithmetic operations.\n");

    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    // Performing Calculations
    add = num1 + num2;
    subt = num1 - num2;
    multi = num1 * num2;
    div = (float)num1 / num2; 
    mod = num1 % num2;

    printf("Addition = %d\n", add);
    printf("Subtraction = %d\n", subt);
    printf("Multiplication = %d\n", multi);
    printf("Division = %.2f\n", div);
    printf("Modulus = %d\n", mod);

    return 0;
}
