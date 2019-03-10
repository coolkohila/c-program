#include <stdio.h>
#include<string.h>
int main() 
{
 char a1[100],b1[100];
 int i,k,m,c=0,flag;
 scanf("%s %s %d",a1,b1,&k);
 m=strlen(a1);
 for(i=0;i<m;i++)
 {
   if(a1[i]!=b1[i])
   {
     c++;
   }
   if(a1[i]!=b1[i] && c==k)
   {
     flag=1;
   }
   else
   flag=0;
 }
 if(flag==1)
 printf("yes");
 else 
 printf("No");
  return 0;
}

