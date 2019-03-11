#include <stdio.h>
int main()
{
    int a,b1=0,c,i;
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%1==0)
        {
            b1=1;
            break;
        }
    }
    if(b1==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
return 0;
}
