#include <stdio.h>
#include<conio.h>
void main()
{
	int n,g;
	scanf("%d",&n);
	int a[n];
	for(g=0;g<n;g++)
	scanf("%d",&a[g]);
	for(g=0;g<n;g++)
	{
		if(a[g]==g)
		printf("%d",a[g]);
	}

 getch();
}
