#include <stdio.h>
#include<conio.h>
void main()
{
    int n, temp, digit, sum = 0;
 
    printf("Enter the number ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        digit = n % 10;
        sum  = sum + digit;
        n =n/ 10;
    }
    printf("%d", sum);
}
