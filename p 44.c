#include<stdio.h>
#include<string.h>
int main()
{
int n,i,s,k;
char str2[100];
scanf("%s",&str2);
scanf("%d",&n);
k=strlen(str2);
s=n%k;
for(i=s;str2[i]!='\0';i++)
{
printf("%c",str2[i]);
}
for(i=0;i<s;i++)
{
printf("%c",str2[i]);
}
return 0;
}
