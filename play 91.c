#include <stdio.h>
int main()
{
  int n,i;
  int a[10];
  scanf("%d",&n);
  for(i=0;n>0;i++)
  {
    a[i]=n%2;
    n=n/2;
  }
  for(i=2;i>=0;i--)
  {
    printf("%d",a[i]);
  }
  
   return 0;
}
