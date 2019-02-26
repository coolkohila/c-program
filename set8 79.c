include <stdio.h>

int main(void) 
{
	char s[50],t[50];
	int i,m,j;
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
		for(j=i+1;s[j]!='\0';j++)
		{
			if(s[i]>s[j])
			{
				t[m]=s[i];
				s[i]=s[j];
				s[j]=t[m];
		}
    
 }
	}
	printf("\n%s",s);
}
