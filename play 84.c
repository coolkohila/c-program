#include <stdio.h>
int main()
{
	int n,t=0;
	scanf("%d",&n);
	int a[100];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		t=t|a[i];
	}
	printf("%d",t);
	return 0;
}
