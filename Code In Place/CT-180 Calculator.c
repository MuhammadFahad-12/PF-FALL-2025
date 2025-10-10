#include <stdio.h>
int main ()
{
  int num1,num2,result;
  char operation;
  printf("Calculator!!!\n");
  printf("Enter the value of num1:");
  scanf("%d",&num1);
  printf("Enter the value of num2:");
  scanf("%d",&num2);
  printf("Enter the Opertion you want to apply For ex: +,-,*,/ and %");
  scanf(" %c",&operation);
  switch(operation){
  	 case '+':
  	 	result = num1+num2;
  	 	printf("The Addition of  given Numbers is:%d",result);
  	 	break;
	case '-':
  	 	result = num1-num2;
  	 	printf("The Subtraction of given Numbers is:%d",result);
  	 	break;
  	case '*':
  	 	result = num1*num2;
  	 	printf("The Multiplication of given Numbers is:%d",result);
  	 	break;
  	case '/':
  		if(num2!=0){
  		result = num1/num2;
  	 	printf("The Division of given Numbers is:%d",result);
		}else{
			printf("Incorrect Denomiator(num2)! Denominator can never be equal to zero");
		}
  	 	break;
  	case '%':
  	 	if(num2!=0){
  		result = num1 % num2;
  	 	printf("The Remainder of given Numbers is:%d",result);
		}else{
			printf("Incorrect Denomiator(num2)! Denominator can never be equal to zero");
		}
  	 	break;
  	default:
  	  printf("Invalid Operation! Only +,-,/,* and % available");
  }
}
