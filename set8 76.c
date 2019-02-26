#include <stdio.h>
int main()
{
    int i,k,s=2;
    scanf("%d",&k);
    for(i=2;i<k;i++)
    {
        if(k%i==0)
        {
            s++;
        }
    }
    if(s>2)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
