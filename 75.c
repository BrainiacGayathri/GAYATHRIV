#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[10];
    int j,r;
    printf("Enter the string:");
    scanf("%s",a);
    j=strlen(a);
    r=j/2;
    a[r]='*';
    printf("%s",a);
    return 0;
}
