#include<iostream.h>
#include<conio.h>
void main()
{
 int s;
 clrscr();
 cout<<"Enter your exam score:";
 cin>>s;
 if(s>=90)
 {
  cout<<"\nGrade is A";
  }
  else if(s>=80 && s<=89)
  {
   cout<<"\nGrade is B";
   }
   else if(s>=70 && s<=79)
   {
    cout<<"\nGrade is c";
    }
    else if(s>=60 && s<=69)
    {
     cout<<"\nGrade is D";
     }
     else
      {
       cout<<"\nGrade is F";
       }
       getch();
       }
