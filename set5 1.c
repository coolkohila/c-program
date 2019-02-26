#include <stdio.h>

int main() 
{
	char a[50];
	int k,i;
	printf("enter the string:");
	scanf("%s",&a);
	printf("enter the number:");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		printf("\n%s",a);
	}
	return 0;
}
