#include<stdio.h>
int main()
{
 int hr1,min1,hrs,mins,cou,cou1,sub;
 scanf("%d %d",&hr1,&min1);
 scanf("%d %d",&hrs,&mins);
 cou=hr1*60+min1;
 cou1=hrs*60+mins;
 sub=cou-cou1;
 if(sub>=60)
 {
  cou=sub/60;
  printf("%d ",cou);
  cou=sub%60;
  printf("%d",cou);
 }
 else
 {
  printf("0");
  printf(" %d",sub);
 }
 return 0;
}
