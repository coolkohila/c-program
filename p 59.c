#include <stdio.h>

int main()
{
    int n,i,k1,a[100];
  scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
  if(a[i]==0)
  {
   
    k1=i;
  }
}
  
for(i=0;i<k1;i++)
{
  if(a[i]!=0)
  {
    printf("%d\t",a[i]);
  }
}

    return 0;
}
