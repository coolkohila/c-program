#include <stdio.h>
int main()
{

	int a[10],i,c=1,N;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<N;i++)
	{
		if(a[i]<a[i+1])
		{
			c=c+1;
		}
		if(a[i]>a[i+1])
		{
			break;
		}
	}
	printf("%d",c);
    return 0;
}
