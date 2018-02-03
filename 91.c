#include<stdio.h>
void main()
{
int l,b,h,e,d;
printf("enter the values");
scanf("%d%d%d",&l,&b,&h);
e=2*(l*b+b*h+l*h);
printf("total surface of a cuboid is %d",e);
d=l*b*h;
printf("volume of cuboid is %d",d);
getch();
}
