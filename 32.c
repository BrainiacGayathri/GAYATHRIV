#include<stdio.h>
#include<string.h>
void main()
{
	int sum=1 ,b;
	char str[50];
  printf("Enter string");
  gets(str);
	b=strlen(str);
	for(int i=0;i<=b;i++)
	{
		if(str[i]==' ')
		{
		    sum=sum+1;
		}
	}
	printf("The no of character in the line is %d\n",sum);
  getch();
}
