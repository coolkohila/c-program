#include<stdio.h>
int main(void)
{
int a,b,c;
printf("enter the three values");
scanf("%d %d %d",&a,&b,&c);
if(a>b)
{
if(a>c)
printf("%d",a);
else
printf("%d",c);
}
else
{
if(c>b)
printf("%d",c);
else
printf("%d",b);
return 0;
}
}
