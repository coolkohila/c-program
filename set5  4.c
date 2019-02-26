#include <stdio.h>

int main() 
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	if(num>=1 && num<=10)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}
	return 0;
}
