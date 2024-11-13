#include<iostream.h>
#include<conio.h>
void main()
{
 int n,c,r,s=0;
 clrscr();
 cout<<"Enter the number:";
 cin>>n;
 c=n;
 while (n>0)
 {
  r=n%10;
  s=r+(s*10);
  n=n/10;
  }
  if(c==s)
  {
   cout<<s<<" is palindrome";
   }
   else
   {
   cout<<s<<"\n is not palindrome";
   }
   getch();
   }