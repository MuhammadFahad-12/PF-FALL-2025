#include<stdio.h>
int main ()
{
	char ch;
	
	printf("Enter character:");
	scanf("%c",&ch);
	
	if (ch>='A' && ch<='Z')
	{printf("Uppercase Letter");
	}
   else if (ch>='a' && ch<='z')
	{printf("Lowercase Letter");
	}
	
	else if (ch>='0' && ch<='9')
	{printf("Its a digit");
	}

else 
	{printf("Special Character");}

	return 0;
	}
