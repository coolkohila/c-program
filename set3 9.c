#include <stdio.h>

int main() 
{
	int mint,hrs,mins,secs=00;
	printf("enter the time in minutes:");
	scanf("%d",&mint);
	hrs=mint/60;
	mins=mint%60;
	if(mins>60)
	{
		secs=mins%60;
		mins=mins-secs;
	}
	printf("%d %d %d",hrs,mins,secs);
	return 0;
