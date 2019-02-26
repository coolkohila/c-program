#include <stdio.h>
int main(void) 
{
	int m,l,r;
	scanf("%d",&m);
	scanf("%d %d",&l,&r);
	if(m>l && m<r)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}
return 0;
}
