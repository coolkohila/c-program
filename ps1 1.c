#include <stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int k=0,i,j;
    printf("enter the string:");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        k++;
    }
    for(j=k-1;j>=0;j--)
    {
    printf("%c",a[j]);
    }
    return 0;
}

