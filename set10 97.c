#include <stdio.h>
int main(void) 
{
int k,rem,rev=0;
scanf("%d",&k);
while(k!=0)
{
rem=k%10;
rev=rev*10+rem;
k=k/10; 
} 
printf("\n%d",rev);
return 0;
}
