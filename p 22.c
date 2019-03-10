#include <stdio.h>

int main(void) 
{
	int a,b,o,i,n;
	scanf("%d %d",&a,&b);
	for(i=2;i<=n;i++)
	{
		if(a%i==0 && b%i==0)
		{
			o=i;
		}
	}
	printf("%d",o);
	return 0;
}
