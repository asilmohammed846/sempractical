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
   void display1()
   {
    cout<<"Area of circle="<<result;
    }
    };
   class volume:public Area
   {
    public:
    float volume;
    void calculate()
    {
     volume=1.33*3.14*r*r*r;
     }
     void display2()
     {
      cout<<"\nvolume of sphere="<<volume;
      }
      };

      void main()
      {
	clrscr();
	volume v;
	v.read();
	v.compute();
	v.calculate();
	v.display1();
	v.display2();
	getch();
	}







