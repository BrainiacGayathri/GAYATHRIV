#include<stdio.h>
#include<conio.h>
int main()
{
int n,count=0;
scanf("%d",&n);
while(n!=0)
{
n=n/10;
++count;
}
printf("\nDigits=%d",count);
return 0;
getch();
}
