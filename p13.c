#include<stdio.h>
void main()
{
    int a,k,s=0,m;
    scanf("%d",&a);
    while(a)
    {
        k=a%10;
        a=a/10;
        
    
m=k*k;
s=s+m;
}
printf("%d",s);
}
