#include <stdio.h>
   int main(void)
   {
   int i,k=1;
  char s[100];
  scanf("%[^\n]s",s);
  for(i=0;s[i]!='\0';i++) 
  {
    if(s[i]==' ')
    {
       k++;
    }
    else
    {
    }
  }
printf("%d",k);
}
