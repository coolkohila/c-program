#include <stdio.h>

int main() 
{
	char s[20];
	int k,i;
	printf("enter the string and the k value:");
	scanf("%s" ,s);
  scanf("%d" ,&k);
	for(i=0;i<k;i++)
	{
		printf("\n%c",s[i]);
	}
	return 0;
}
