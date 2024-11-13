#include<iostream.h>
#include<conio.h>
class student
{
 public:
 char name[20];
 int rollno;
 void read1()
 {
   cout<<"\nEnter name of the student:";
   cin>>name;
   cout<<"\nEnter roll no of the student:";
   cin>>rollno;
   }
  };
  class engg_student:public student
  {
    private:
    char sub_name[20];
    public:
    void read2()
    {
      cout<<"\nEnter name of the subject:";
      cin>>sub_name;
      }
      void display1()
      {
       cout<<"\nName of the student is\t"<<name;
       cout<<"\nRoll no of the student is\t"<<rollno;
       cout<<"\nSubject name\t"<<sub_name;
       }
       };

   class diploma_student:public student
   {
     private:
     int result;
     public:
     void read3()
     {
       cout<<"\nResult=";
       cin>>result;
       }
       void display2()
       {
	cout<<"\nName of the student is\t"<<name;
	cout<<"\nRoll no of the student is\t"<<rollno;
	cout<<"\nresult=\t"<<result;
	}
	};
      void main()
     {
      clrscr();
      engg_student s1;
      diploma_student d1;
      s1.read1();
      s1.read2();
      s1.display1();
      d1.read1();
      d1.read3();
      d1.display2();
      getch();
      }








