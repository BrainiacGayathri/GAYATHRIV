#include <stdio.h>
#include <conio.h>
void main()
{
    int n1, n2, j, gcd, lcm;
    scanf("%d %d",&n1,&n2);
    for(j=1; j <= n1 && j <= n2; ++j)
    {   
        if(n1%j==0 && n2%j==0)
            gcd = j;
    }
    lcm = (n1*n2)/gcd;
    printf("%d",lcm);
    getch();
    }
