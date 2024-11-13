#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 int n,p,q,r,ch;
 clrscr();
 cout<<"Enter the number:";
 cin>>n;
 p=n*n;
 q=sqrt(n);
 r=n*n*n;
 cout<<"\n1.squre";
 cout<<"\n2.squre root";
 cout<<"\n3.cube";
 cout<<"\nEnter your choice:";
 cin>>ch;
 switch(ch)
 {
  case 1:cout<<"squre is "<<p;
	 break;
  case 2:cout<<"squre root is "<<q;
	 break;
  case 3:cout<<"cube is "<<r;
	 break;
  case 4:cout<<"Enter choice between 1 to 3";
  }
  getch();
  }

