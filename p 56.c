#include <stdio.h>
#include<string.h>
int main()
 {
	char *a,b;
  int i,n;
	gets(a);
  scanf("%c",&b);
  n=strlen(a);
	for(i=1;i<=n;i++)
	{
		if(a[i]==b)
		{
			printf("%d",i+1);
		}
	}
	return 0;
}
