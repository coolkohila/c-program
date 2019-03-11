#include<stdio.h>
int main()
{
    int a1,b,c,i;
    float res;
    scanf("%d",&a1);
    for(i=1;i<=a1;i++)
    {
        if(i%2==1 && a1%i==0)
        {
            printf("%d ",i);
            }
    }
    return 0;
}
 
