#include <stdio.h>
//#include<string.h>
int main() 
{
 int n,a[50],i,j;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
   for(j=i+1;j<n;j++)
   {
     if(a[i]==a[j])
     {
       printf("%d",a[i]);
     }
   }
 }
  return 0;
}
