#include <stdio.h>
#include<conio.h>
void main() 
{
	int n,k,i,a[10],t;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	printf("%d",a[k-1]);
	getch();
}
