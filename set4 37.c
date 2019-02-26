#include <stdio.h>
   int main(void)
   {
    int a,b,k;
    scanf("%d %d",&a,&b);
    k=b;
    b=a;
    a=k;
    printf("%d %d",a,b);
}
