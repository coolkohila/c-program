#include<stdio.h>
int main()
{
int n,i,m=0;
scanf("%d",&n);
while(n!=0)
{
  n=n/10;
  m++;
}
printf("%d",m);
return 0;
}
