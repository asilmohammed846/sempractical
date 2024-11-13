#include<iostream.h>
#include<conio.h>
void main ()
{
 int n,c,r,arm=0;
 clrscr();
 cout<<"Enter the number:";
 cin>>n;
 c=n;
 while (n>0)
 {
  r=n%10;
  arm+=(r*r*r);
  n=n/10;
  }
  if(arm==c)
   {
    cout<<"\nThe given number is a Armstrong number.";
    }
    else
     {
      cout<<"\nThe given number is not a Armstrong number.";
      }
      getch();
      }
