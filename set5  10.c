#include <stdio.h>
int main(void)
{
	int s;
  printf("enter num:");
	scanf("%d",&s);
  int i=2;
	while(i<=s)
	{
		if(i==s)
		{
			printf("yes");
		}
		i=i*2;
    }
	return 0;
}
