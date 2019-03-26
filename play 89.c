#include <stdio.h>
int main()
{
    int n,k,M=0,f=1,d=1,i;
    scanf("%d %d",&n,&k);
    M=n-k;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    for(i=1;i<=M;i++)
    {
        d=d*i;
    }
    printf("%d",(f/(d)));
    return 0;
}
