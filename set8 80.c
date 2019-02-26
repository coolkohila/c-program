#include <stdio.h>
int main()
{
    int k,r=0,s=0;
    scanf("%d",&k);
    while(k!=0)
    {
        s=k%10;
        r=(r*10)+s;
        n=k/10;
    }
    k=r;
    r=0;
    s=0;
    while(k!=0)
    {
        s=k%10;
        if(s%2==1)
        {
            printf("%d ",s);
        }
        r=(r*10)+s;
        k=k/10;
        
    }
    return 0;
    
   
}
