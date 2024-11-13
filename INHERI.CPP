#include<iostream.h>
#include<conio.h>
class Data
{
 public:
 int r;
 void read()
 {
  cout<<"Enter the radius:";
  cin>>r;
  }
  };
  class Area:public Data
  {
   private:
   float result;
   public:
   void compute()
    {
      result=3.14*r*r;
      }
      void display()
      {
       cout<<"Area of circle="<<result;
       }
       };
       void main()
       {
	 clrscr();
	 Area a;
	 a.read();
	 a.compute();
	 a.display();
	 getch();
	 }





