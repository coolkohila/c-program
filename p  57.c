#include <stdio.h>
int main() 
{
	char a[15],b;
	scanf("%s %c",a,&b);
	int i,c=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b)
		{
			c=c+1;
		}
	}
	printf("%d",c);
  return 0;
}
