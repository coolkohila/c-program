#include <stdio.h>
int main()
{
	int n,temp=0;
	scanf("%d",&n);
	int a[100];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		temp=temp^a[i];
	}
	printf("%d",temp);
	return 0;
}
