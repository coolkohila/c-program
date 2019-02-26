#include <stdio.h>
int main(void) 
{
char s1[50];
int i=0,flag=0;
scanf("%s",s1);
while(s1[i]!='\0')
{
if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='A'|s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U')
flag=1;
i++;
}
if(flag==1)
{
	printf("\nyes");
}
else
{
	printf("\n no");
}
return 0;
}
