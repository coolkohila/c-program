#include <stdio.h>
//#include<string.h>
int main() 
{
 int n,a[50],i;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
   if(a[i]<n)
   {
     printf("%d\t",a[i]);
   }
 }
  return 0;
}
