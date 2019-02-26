#include <stdio.h>
 
int main(void) 
{
	int m,r,p=1;
	scanf("%d",&m);
	while(m!=0)
	{
		r=n%10;
		p=p*r;
		m=m/10;
	}
	printf("\n%d",p);
	return 0;
}
