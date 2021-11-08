#include<iostream.h>
#include<conio.h>
class circle
{
int rad;
int area;
public:
circle()
{
rad=0;
}
void input();
void display();
circle operator +(circle);
};
void circle::input()
{
cout<<"enter radius"<<endl;
cin>>rad;
}
void circle::display()
{
area=3.14*rad*rad;
cout<<"area is"<<area<<endl;
}
circle circle::operator +(circle c2)
{
circle c;
c.rad=rad+c2.rad;
return c;
}
void main()
{
circle c1,c2,c3;
c1.input();
c2.input();
c3=c1+c2;
c1.display();
c2.display();
c3.display();
getch();
}

