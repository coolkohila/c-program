#include <stdio.h>
int main() 
{
	char a1[15],b1[15];
	scanf("%s %s",a1,b1);
	int i,j,flag;
	for(i=0;a1[i]!='\0';i++)
	{
		for(j=0;b1[j]!='\0';j++)
		{
			if(a1[i]==b1[j])
			{
				flag=1;
				break;
			}
			else
			{
				flag=0;
			}
		}
		if(flag==1)
		{
			printf("yes");
			break;
		}
		}
	if(flag==0)
	{
		printf("no");
	}
	return 0;
}
