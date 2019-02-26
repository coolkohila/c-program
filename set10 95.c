#include <stdio.h>
#include<math.h>
int main(void) 
{
	float p,r,kohi;
	int s,n;
	scanf("%f %d %f",&p,&n,&r);
	kohi=((p*n*r)/100);
	s=floor(kohi);
	printf("\n%d",s);
	return 0;
}
