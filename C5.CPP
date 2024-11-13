#include<iostream.h>
#include<conio.h>
void main ()
{
 int i,j,a,b,r;
 clrscr();
 cout<<"enter the value of i & j:";
 cin>>i>>j;
 cout<<"enter the value of a & b:";
 cin>>a>>b;
 r=(3*i-2+j)%(2*a-b);
 cout<<"Result is:"<<r;
 getch();
 }