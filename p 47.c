#include <stdio.h>

int main()
{
    int p,q,r;
    float res;
    scanf("%d %d %d",&p,&q,&r);
    if(p>180 || q>180 || r>180)
    {
        printf("no");
    }
    else
    {
        if(p+q+r==180)
        {
            printf("yes");
        }
        else
        {
        printf("no");
        }
    }
    
return 0;
}
