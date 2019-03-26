#include <stdio.h>
int main()
{
    int a[10],n,i,j,m,maxi=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            m=(a[i] &a[j]);
            if(m>maxi)
            {
                maxi=m;
            }
        }
    }
    printf("%d",maxi);

    return 0;
}
