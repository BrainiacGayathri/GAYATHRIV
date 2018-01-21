
#include<stdio.h>
int main()
{
    int a,b,d;
    scanf("%d %d",&a,&b);
    a=a^b;
    b=a^b;
    d=a^b;
    printf("%d %d",a,b);
    return 0;
    getch();
    
}
