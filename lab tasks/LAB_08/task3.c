#include<stdio.h>
#include <string.h>
int main()
{
	char firstName[20] , lastName[20],fullName[40];
	int countOfCharac = 0,i;
	printf("Enter your First Name:");
	scanf("%s",&firstName);
	printf("Enter your Last Name:");
	scanf("%s",&lastName);
	strcat(fullName,firstName);
	strcat(fullName," ");
	strcat(fullName,lastName);
	printf("Your Full Name is %s",fullName);
	return 0;
}
