#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
char ch[100];
scanf("%[^\n]",ch);
if(printf("%s",ch))
return 0;
}
