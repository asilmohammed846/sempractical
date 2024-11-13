#include<iostream.h>
#include<conio.h>
void main()
{
 int a,b,*p,*q,add,sub,mul,div;
 clrscr();
 p=&a;
 q=&b;
 cout<<"Enter two numbers:";
 cin>>a>>b;
 add=*p+*q;
 sub=*p-*q;
 mul=(*p)*(*q);
 div=(*p)/(*q);
 cout<<"\nAddition is"<<add;
 cout<<"\nSubtraction is"<<sub;
 cout<<"\nMultiplication is"<<mul;
 cout<<"\nDivison is"<<div;
 getch();
 }




