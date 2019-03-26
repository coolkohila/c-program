#include <stdio.h>
int main() 
{
  int i,n,a[100],sum=0,X,flag;
  scanf("%d %d",&n,&X);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
   sum=sum+a[i];
    if(sum==X)
    {
   flag=1;
    }
  }
  if(flag==1)
  printf("yes");
  else
  printf("no");
  return 0;
}
