#include<iostream.h>
#include<conio.h>
void main()
{
 int a,b,c,ch;
 clrscr();
 cout<<" Enter two digits:";
 cin>>a>>b;
 cout<<"\n1.addtion";
 cout<<"\n2.subtraction";
 cout<<"\n3.multiplication";
 cout<<"\n4.division";
 cout<<" \nEnter your choice:";
 cin>>ch;
 switch(ch)
 {
  case 1: c=a+b;
	 cout<<"addition of two numbers is:"<<c;
	 break;
 case 2: c=a-b;
	cout<<"subtraction of two numbers is:"<<c;
	break;
 case 3: c=a*b;
	cout<<"multiplication of two numbers is:"<<c;
	break;
 case 4: c=a/b;
	cout<<"division of two numbers is:"<<c;
	break;
 case 5: cout<<"default";
       }
       getch();
       }