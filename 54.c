#include<stdio.h>
#include<conio.h>
void main()
{
int num;
printf("\n enter a number");
scanf("%d",num);
if(num%2==0)
{
printf("even:%d",num);
}
else
{
printf("less_even:%d",num-1);
}
getch();
}
