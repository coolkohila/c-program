#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[50],b[50];
	int n1,n2;
	printf("enter the string1:");
	scanf("%s",a);
	printf("enter the string2:");
	scanf("%s",b);
	n1=strlen(a);
	n2=strlen(b);
	if(n1>n2)
	{
		printf("\n%s",a);
	}
	else if(n2>n1)
	{
		printf("\n%s",b);
	}
	else
	{
		printf("\n %s",);
	}
	return 0;
}
