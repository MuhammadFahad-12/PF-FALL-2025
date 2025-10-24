#include <stdio.h>

int main() {
    float salary, taxRate, taxAmount, netSalary;

    printf("Enter your salary: ");
    scanf("%f", &salary);

    printf("Enter tax rate (in percentage): ");
    scanf("%f", &taxRate);

    taxAmount = (taxRate / 100) * salary;   // Calculate tax
    netSalary = salary - taxAmount;         // Salary after tax

    printf("\nTax to be paid: %.2f\n", taxAmount);
    printf("Salary after paying tax: %.2f\n", netSalary);

    return 0;
}
