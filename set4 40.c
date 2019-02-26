#include <stdio.h>
int main()
{
    int i, k, t1 =1,t2 = 1,t3;
    scanf("%d", &k);
    for(i=1;i<=k;++i)
    {
        printf("\n%d",t1);
        t3=t1+t2;
        t1=t2;
        t2=t3;
    }
}
