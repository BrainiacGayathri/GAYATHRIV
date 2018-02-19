#include <stdio.h>
#include<conio.h>
void main() 
{
	int j,a,d,i,sum=0;
	printf("enter the first term\n");
	scanf("%d",&a);
	printf("enter the difference\n");
	scanf("%d",&d);
	printf("enter the no of terms\n");
	scanf("%d",&j);
    for(i=0;i<j;i++)
    {
        sum=sum+(a+i*d);
    }
    printf("%d",sum);
    getch();
    }
