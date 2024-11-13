#include<iostream.h>
#include<conio.h>
class student
{
 public:
 int rollno;
 char name[20];
 void read1()
 {
  cout<<"\nEnter name of the student:";
  cin>>name;
  cout<<"\nEnter roll no of the student:";
  cin>>rollno;
  }
 };
 class teacher
 {
  public:
  char name1[20];
  char sub[20];
  void read2()
  {
    cout<<"\nEnter name of the teacher:";
    cin>>name1;
    cout<<"\nEnter name of the subject:";
    cin>>sub;
    }
  };
  class info:public student,public teacher
  {
   public:
   void display()
   {
    cout<<"\nName of the student is\t"<<name;
    cout<<"\nRoll number of the student is\t"<<rollno;
    cout<<"\nName of the teacher is\t"<<name1;
    cout<<"\nName of the subject is\t"<<sub;
    }
    };
  void main()
  {
   clrscr();
   info i;
   i.read1();
   i.read2();
   i.display();
   getch();
   }





