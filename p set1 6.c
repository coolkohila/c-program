#include<stdio.h>
int main()
{
 char a[50],b[50];
 int i,p=0,p1=0;
 gets(a);
 gets(b);
 for(i=0;a[i]!='\0';i++)
 {
  if(a[i]==a[i+1])
  {
   p++;
  }
 }
 for(i=0;b[i]!='\0';i++)
 {
  if(b[i]==b[i+1])
  {
   p1++;
  }
 }
 if(p==p1)
 {
 printf("yes");
 }
 else
 {
 printf("No");
 } 
 return 0;
 }

