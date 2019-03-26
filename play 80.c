#include <stdio.h>
int main()
{
  int a[10],i,j,t,n,ANS;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	for(j=i+1;j<=n;j++)
             {
             if(a[i]>a[j])
             {
             t=a[i];
             a[i]=a[j];
             a[j]=t;
             }
                 }
             ANS=a[2]-a[1];
             printf("%d",ANS);
    return 0;
}
