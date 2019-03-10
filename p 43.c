#include<stdio.h>
#include<string.h>
int main()
{
char a1[100],b1[100];
int n,l,i,j,c=0;
scanf("%s\t%s",a1,b1);
n=strlen(a1);
l=strlen(b1);

for(i=n-l;i<n;i++)
{
  for(j=0;j<l;j++)
  {
  if(a1[i]==b1[j])
  {
   c=c+1;
  }
  }
}
if(c==l)
{
  printf("yes");
}
else
{
  printf("no");
}
return 0;
}
