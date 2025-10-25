#include<stdio.h>
int main (void)
{
	int taxRate,salary;
	float tax,remSalary;
	printf("Enter Salary:");
	scanf("%d",&salary);
	printf("Enter Tax Rate:");
	scanf("%d",&taxRate);
	tax=salary * (taxRate / 100.0);
	remSalary=salary-tax;
	printf("Total Salary: %d\n",salary);
	printf("Tax: %.2f\n",tax);
	printf("Actual salary :%.2f\n",remSalary);
	return 0;
}
