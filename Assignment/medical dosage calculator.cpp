#include <stdio.h>

int main()
{
	float weight, dosage;
	
	printf("Enter the patient's wieght (kg):");
	scanf("%f", &weight);
	
	// Calculation 
	dosage = weight * 0.8;
	
	//Output 
	printf("The dosage(mg) for the patient is: %.2f\n",dosage);
return 0;	
}
