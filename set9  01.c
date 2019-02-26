#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int p,q,r,p1,q1,r1,p2,q2,r2;
  scanf("%d\t%d",&p,&q);
  scanf("%d\t%d",&p1,&q1);
  scanf("%d\t%d",&p2,&q2);
  r=abs(p-q);r1=abs(p1-q1);r2=abs(p2-q2);
  printf("%d\n%d\n%d",r,r1,r2);
  return 0;
}

