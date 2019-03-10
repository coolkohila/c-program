#include <stdio.h>
int main()
 {
	char c[10];
	scanf("%s",c);
	int i,flag=0;
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]>='0' && c[i]<='9')
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	printf("no");
	return 0;
}
