#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
  char a[100];
  int len,i;
  scanf("%s",a);
  len=strlen(a);
  for(i=0;i<len;i++)
  {
    if(i%2==0)
    {
      
      printf("%c",a[i]);

    }
  }
  printf("\n");
   for(i=0;i<len;i++)
  {        
    if(i%2!=0)
    {
     
      printf("%c",a[i]);
      
    }
  
  }
  return 0;
}
