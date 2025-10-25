#include<stdio.h>
int main (void)
{
	int num1,num2;
	printf("Enter Number 1:");
	scanf("%d",&num1);
	printf("Enter Number 2:");
	scanf("%d",&num2);
	printf("Before Swapping: Number1=%d and Number2=%d",num1,num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("After Swapping: Number1=%d and Number2=%d",num1,num2);
}
