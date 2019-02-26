#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{

int a[100],n=10,i,min;
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
   min=a[0];
  for(i=1;i<n;i++)
  {
 
  if(min>a[i])
  {
    min=a[i];
  }}
  printf("%d",min);
	return 0;
}
