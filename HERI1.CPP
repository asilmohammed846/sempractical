#include<iostream.h>
#include<conio.h>
class student
{
 public:
 int rollno;
 char name[20];
 void read()
 {
 cout<<"Enter student roll no:";
 cin>>rollno;
 cout<<"\nEnter Student name:";
 cin>>name;
 }
 };
 class test:public student
 {
   public:
   int mark1;
   int mark2;
   void read1()
   {
   cout<<"\nEnter first subject marks:";
   cin>>mark1;
   cout<<"\nEnter second subject marks:";
   cin>>mark2;
   }
   };
  class result:public test
  {
    private:
    int total;
    public:
    void calculate()
    {
    total=mark1+mark2;
    cout<<"\nTotal marks="<<total;
    }
    void display()
    {
      cout<<"\nRoll no is"<<rollno;
      cout<<"\nName is\t"<<name;
      cout<<"\nTotal marks="<<total;
      }
      };

    void main()
    {
     clrscr();
     result r;
     r.read();
     r.read1();
     r.calculate();
     r.display();
     getch();
     }




