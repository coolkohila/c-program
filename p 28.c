#include <stdio.h>
int main()
{
    char b[50];
    int i,j=0;
    scanf("%[^\n]s",b);
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]==' ')
        {
            b[i]='$';
        }
    }
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]!='$') 
        {
            printf("%c",b[i]);
        }
    }
    return 0;
}
