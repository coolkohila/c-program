#include <stdio.h>
int main()
{
  int num;
printf("enter a year");
scanf("%d",&num);
if(num%4==0)
{
printf("leap year");
}
else
{
printf(" not a leap year");
}
return 0;
}
