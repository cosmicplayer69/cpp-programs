#include<iostream.h>
#include<conio.h>
class circle
{
int rad;
float area;
public:
void input();
void calc();
void display();
};
void circle::input()
{
cout<<"enter the radius "<<endl;
cin>>rad;
}
void circle::calc()
{
area = 3.14 * (rad*rad);
}
void circle::display()
{
cout<<"the area of the circle is "<<area<<endl;
}
void main()
{
clrscr();
circle obj;
obj.input();
obj.calc();
obj.display();
getch();
}