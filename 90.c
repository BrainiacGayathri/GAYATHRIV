#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char c[100];
int k,i;
gets(c);
k=strlen(c);
for(i=0;i<k;i++)
{
	if(isdigit(c[i]))
	{
		printf("%c",c[i]);
	}
}
getch();
}
