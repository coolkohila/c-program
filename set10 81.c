#include <stdio.h>
int main(void) 
{
	int a[10],b[10],c[10];
	int k,i,j;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		c[i]=a[i]-b[i];
	}
	for(i=0;i<k;i++)
	{
		printf("\n%d",c[i]);
	}
	return 0;
}
