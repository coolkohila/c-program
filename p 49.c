#include <stdio.h>
int main()
{
    int b,i;
    scanf("%d",&b);
    if(b>=-32768 && b<=32767)
    {
        printf("INT");
    }
    else
    {
        printf("LONG");
    }
return 0;
}
