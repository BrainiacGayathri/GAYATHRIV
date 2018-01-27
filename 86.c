#include <stdio.h>
void main(void)
{
	int k,n,f=0;
	printf("\nEnter the number: ");
	scanf("%d",&n);
	for(k=2;k<=n/2;k++)
	{
		if(n%k==0)
		{
			f=1;
		}
	}
	if(f==0)
	{
		printf("\n%d is a prime number",n);
	}
	else
	{
		printf("\n%d is not a prime number",n);
	}
  getch();
}
