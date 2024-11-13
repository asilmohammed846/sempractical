#include<iostream.h>
#include<conio.h>
void main ()
{
 int n,a=0,b=1,c,i;
 clrscr();
 cout<<"Enter the no of terms:";
 cin>>n;
 for(i=0;i<n;i++)
 {
 cout<<"\n"<<a;
  c=a+b;
  a=b;
  b=c;
  }
  cout<<"\nfibonacci of given term is "<<c;
  getch();
  }
