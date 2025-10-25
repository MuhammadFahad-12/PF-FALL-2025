#include <stdio.h>

int main(void)
{
	printf("Find Minimum Of Two Numbers\n");
    int num1, num2;
    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number: ");
    scanf("%d", &num2);
    
    if(num1<num2){
    	printf("Minimum number is: %d\n", num1);
	}
	else{
		printf("Minimum number is: %d\n", num2);
	}

    
    return 0;
}
