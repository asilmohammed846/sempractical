#include<iostream.h>
#include<conio.h>
void main ()
{
  int a,b,c,*p1,*p2,*p3;
  clrscr();
  p1=&a;
  p2=&b;
  p3=&c;
  cout<<"Enter two numbers:";
  cin>>a>>b;
   *p3=*p1;
   *p1=*p2;
   *p2=*p3;
  cout<<"After swapping\t"<<*p1;
  cout<<"\t"<<*p2;
  getch();
  }






