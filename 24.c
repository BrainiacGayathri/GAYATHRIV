#include<iostream.h>
void main()
{
int a[100],i,j,t,n;
cout<<"enter the size of array";
cin>>n;
cout<<"enter the values";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
if(a[i])>a[j])
   { 
    t=a[i];
    a[i]=a[j];
    a[j]=t;
    }
}
for(i=0;i<n;i++)
{
cout<<"\nsorted elements are"
cout<<"\t%d"<<a[i];
getch();
}
}
