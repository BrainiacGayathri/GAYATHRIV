#include <stdio.h>
#include<conio.h>
void main()
{
  int n1, n2, i, t, num, rem;
  printf("Enter interval");
  scanf("%d %d", &n1, &n2);
  printf("Armstrong numbers between %d an %d are", n1, n2);
  for(i=n1+1; i<n2; ++i)
  {
	  temp=i;
      num=0;
      while(t!=0)
      {
          rem=(t%10);
          num+=rem*rem*rem;
          t/=10;
      }
      if(i==num)
          printf("%d ",i);
      }
      getch();
  }
