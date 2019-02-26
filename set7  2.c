#include <stdio.h>
#include<string.h>
int main()
{
	char ch[10];
	scanf("%s",ch);
	int i,temp=0,n;
	n=strlen(ch);
	for(i=0;i<n;i++)
	{
		if(ch[i]=='1' || ch[i]=='0')
		{
			temp=1;
		}
		else
		{
			temp=0;
			break;
		}
	}
	if(temp==1)
	{
		printf("yes");
	}
  else
  {
    printf("no");
  }
}
