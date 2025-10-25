#include<stdio.h>
int main(void)
{
int percentage;
printf("Enter your Percentage:");
scanf("%d",&percentage);
if(percentage>=90)
printf("Your grade is 'A'");
else if(percentage>=80)
printf("Your grade is 'B'");
else if(percentage>=70)
printf("Your grade is 'C'");
else if(percentage>=60)
printf("Your grade is 'D'");
else {
printf("You are FAIL!!!");}
return 0;
}
