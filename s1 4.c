#include<stdio.h>
int main(void) 
{
    
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);

    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
        printf(" alphabet");
    else
        printf(" not an alphabet");
        return 0;
}

