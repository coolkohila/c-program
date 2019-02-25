
#include <stdio.h>
int main(void) 
{
	int number,count=0;
	printf("enter the number");
	scanf("%d",&number);
	while(number!=0)
	{
		number=number/10;
		count++;
	}
	printf("\n%d",count);
	return 0;
}
