#include<stdio.h>
int main()

{
    int c=0,n,k,i,a[50];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)

  {
     
     c++;
  
  }
    }
    printf("%d",c);
    
    return 0;
    
}
