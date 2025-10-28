#include<stdio.h>
int main ()
{
	int side1,side2,side3;
	printf("Enter side1:");
	scanf("%d",&side1);
	printf("Enter side2:");
	scanf("%d",&side2);
    printf("Enter side3:");
	scanf("%d",&side3);
	
	if ((side1+side2>side3) && (side2+side3>side1) && (side3+side1>side2))
	
		
	
	{ if ((side1==side2) && (side2==side3))
	{printf("It is an equilateral triangle");}
	
		
	else if ((side1==side2) || (side2==side3) || (side3==side1))
	{printf("It is an isosceles triangle");}

	else if ((side1!=side2) && (side2!=side3) && (side3!=side1))
	{printf("It is scalene triangle");}
}
	
	 
else
	{printf("It is not a valid triangle");}
	
	
	
	
		
}
