#include <stdio.h>
#include<conio.h>
void main() 
{
	int n,remainder,prod=1;
	scanf("%d",&n);
	while(n!=0)
	{
		remainder=n%10;
		prod=prod*remainder;
		n=n/10;
	}
	printf("\n%d",prod);
	getch();
}
