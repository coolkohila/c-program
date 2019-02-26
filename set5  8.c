#include<stdio.h>
int main()
{
  int a[50],i,num,avg,sum=0;
  printf("enter numbers:");
  scanf("%d",&num);
  for(i=0;i<num;i++)
  {
    scanf("%d",&a[i]);
  
  sum=sum+a[i];
  }
  avg=sum/num;
  printf("%d",avg);
  return 0;
}
