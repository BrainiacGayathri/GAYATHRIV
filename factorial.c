#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,fact=1;
printf("enter the number",num);
scanf("%d",&num);
for(i=0;i<=num;i++)
{
fact=fact+i;
}
printf("factorial is %d",fact);
getch();
}
