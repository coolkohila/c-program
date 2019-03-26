#include<stdio.h>
int main()
{
  int A,B,i,s=1;
  scanf("%d %d",&A,&B);
  for(i=1;i<=B;i++)
  {
   s=s*A;
  }
  printf("%d",s);
  return 0;
}
