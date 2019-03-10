#include<stdio.h>
int main()
{
    int b,k,i,n=1,c=0;
    scanf("%d %d",&b,&k);
    for(i=1;i<=b;i++)
    {
       n=n*k;
        if(n==b)
        {
            c++;
            break;
        }
        
     }
        if(c==0)
        printf("no");
        else
        printf("yes");
  return 0;
}
