#include <stdio.h>
   int main(void) {
   int i,k=0;
  char s[100];
  scanf("%[^\n]s",s);
  for(i=0;s[i]!='\0';i++) 
  {
    if(s[i]==' ')
    {

    }
    else
    {
    
      k++;
    }
  }
printf("%d",k);
}
