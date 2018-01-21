#include<stdio.h>
#include<string.h>
int main()
{
char string1[100],string2[100];
int i,j,l1,l2;
scanf("%s %s",&string1,&string2);
l1=strlen(string1);
l2=strlen(string2);
if(l1>l2)
{
    printf("%s is greater",string1);
}
else
{
    printf("%s is lesser string",string2);
}
return 0;
getch();
}
