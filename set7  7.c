#include <stdio.h>
int main() 
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	n=n+1;
	while(n%10!=0)
	{
		n=n+1;
	}
	printf("\n%d",n);
	return 0;
}
