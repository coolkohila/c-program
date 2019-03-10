#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
int p,a,pp1,aa1,f=0,i,j;
scanf("%d\t%d",&p,&a);
for(i=0;i<p;i++)
{
  for(j=0;j<p;j++)

  {
    pp1=2*(i+j);
    aa1=i*j;
    if(p==pp1&&a==aa1)
    {
      f=1;
    }
  }
}
if(f==1)
printf("yes");
else 
printf("no");
return 0;
}
