#include <stdio.h>
int main()
{
    int j,m;
    scanf("%d",&m);
    for(j=1;j<m;j++)
    {
        if(m%j==0)
        {
            printf("%d ",j);
        }
    }
    return 0;
}
