#include<stdio.h>
int main()
{
	float numerator,denominator,result;
	printf("Enter Numerator:");
	scanf("%f",&numerator);
	
	printf("Enter Denominator:");
	scanf("%f",&denominator);
	
	if (numerator ==0)
	{printf("Error");}
	
	else{
	 result=(numerator/denominator);}
	 printf("Result: %.2f",result);
	 return 0;
}
