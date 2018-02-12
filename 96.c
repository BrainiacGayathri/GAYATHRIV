#include <stdio.h>
void main
{
	int a,i,c=0,n;
	scanf("%d %d",&a,&n);
	for(i=1;i<=n;i++)
	{
		if(a%i==0)
		c++;
	}
	if(c>2)
	printf("%d is the composite number",a);
	else
	printf("%d is not composite number",a);
	getch();
  }
