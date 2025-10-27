#include<stdio.h>
int main ()
{
	float tempCelsius,tempFarenheit;

	printf("Enter Temperature:");
	scanf("%f",&tempCelsius);
	tempFarenheit=((tempCelsius)*(9.0/5.0))+32;

	printf("Temperature in Farenheit is: %.2f",tempFarenheit);
	
	
	return 0;
	}


