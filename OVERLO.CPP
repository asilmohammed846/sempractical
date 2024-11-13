#include<iostream.h>
#include<conio.h>
float area(float r)
{
  float a;
  a=3.14*r*r;
  return a;
  }
float area(float l,float b)
{
 float ar;
 ar=0.5*l*b;
 return ar;
 }

  void main()
  {
    clrscr();
    float x,r=8.7;
    float y,l=5.3,b=2.6;
    x=area(r);
    cout<<"Area of circle="<<x<<endl;
    y=area(l,b);
    cout<<"Area of triangle="<<y<<endl;
    getch();
    }







