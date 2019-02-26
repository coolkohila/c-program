#include <stdio.h>
 
int main() 
{
	int num1,num2,sum;
	printf("enter the number1:");
	scanf("%d",&num1);
	printf("enter the number2:");
	scanf("%d",&num2);
	sum=num1+num2;
	if(sum%2==0)
	{
		printf("\neven");
	}
	else
	{
		printf("\nodd");
	}
	return 0;
}
