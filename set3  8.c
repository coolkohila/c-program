#include <stdio.h>
int main() 
{
	int a[10],i,n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("\n enter the array elments:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		printf("\n%d %d",a[i],i);
	}
	return 0;
}
	
