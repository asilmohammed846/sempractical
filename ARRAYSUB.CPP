#include<iostream.h>
#include<conio.h>
void main ()
{
  int a[20],n,i,total=0,per;
  clrscr();
  cout<<"Enter no of subjects:";
  cin>>n;
  cout<<"\nEnter marks:";
  for(i=0;i<n;i++)
   {
    cin>>a[i];
    }
  for(i=0;i<n;i++)
    {
      total=total+a[i];
     }
     per=total/n;
  cout<<"percentage="<<per;
  getch();
 }