#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter a number ::");
    scanf("%d",&a);
    if(a&1)
        printf("Odd Number");
    else
        printf("Even Number");
getch();
}
