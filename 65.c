#include <stdio.h>
int main(void)
{
char k[100];
scanf("%[^\n]s",k);
if(printf("%s",k))
	return 0;
}
