#include <stdio.h>

int main(void) 
{
	int i,a,m,s[20];
	scanf("%d %d",&a,&m);
	for(i=1;i<=a;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=1;i<=a;i++)
	{
		while(i==m)
		{
			printf("\n%d",s[i]);
			break;
		}
    
	}
	return 0;
}
