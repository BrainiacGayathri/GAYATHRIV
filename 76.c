#include<stdio.h>
void main()
{
  int b,count=0,i,n;
  printf("enter the number");
  scanf("%d",&b);
  for(i=1;i<=b;i++)
  {
    if(n%i==0)
    
{
  count++;
}
  }
  if(count==2)
  {
    printf("no");
  }
  else
  {
    printf("yes");
  }
getch();

}
