#include <stdio.h>
int main()
{
    int n, originalNumber, r, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &n);

    originalNumber = n;

    while (originalNumber != 0)
    {
        r = originalNumber%10;
        result += r*r*r;
        originalNumber /= 10;
    }

    if(result ==n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);

    return 0;
}
