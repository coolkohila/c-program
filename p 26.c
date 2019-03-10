#include <stdio.h>
int main() 
{
	char b[20];
	int i;
	scanf("%[^\n]s",b);
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]==' ')
		{
			b[i]='$';
			break;
		}
	}
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]==' ')
		{
			b[i]='+';
		}
	}
	for(i=0;b[i]!='\0';i++)
	{
	if(b[i]=='$')
	{
		b[i]=' ';
	}
	if(b[i]!='+')
	{
	printf("%c",b[i]);
	}
	}
	return 0;
}

