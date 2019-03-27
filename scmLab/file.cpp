#include<iostream.h>
#include<conio.h>
class rectangle
{
public:
inline float area(float l,float b)
{
}
inline float volume(float l,float b,float{
}
};
void main()
{
int n;
float l,b,h,temp;
rectangle r;
clrscr();
do
{
cout<<“\n\tMENU:\n” ;
cout<<“1.Area of Rectangle\n2.Volume of Rectangle\n3.Exit\n”;
cout<<“\nEnter youer choice: \n”;
cin>>n;
switch(n)
{
case 1:
cout<<“\nEnter the Length , Breadth of rectangle: \n”;
cin>>l>>b;
temp=r.area(l,b);
cout<<“\nArea of Rectangle: “<<temp;
break;
case 2: cout<<“\nEnter the Length , Breadth &Hieght of rectangle: \n”;
cin>>l>>b>>h;
temp=r.volume(l,b,h);
cout<<“\nVolume of Rectangle: “<<temp;
break;
case 3:
break;
}
} while(n!=3);
getch();
}
