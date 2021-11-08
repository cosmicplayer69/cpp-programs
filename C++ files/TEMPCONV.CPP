#include<iostream.h>
#include<conio.h>
class temperature
{
float cel;
float f;
public:temperature();
void convert();
void print();
};
temperature::temperature()
{
cout<<"enter degree celsius "<<endl;
cin>>cel;
}
void temperature::convert()
{
f=cel * 9/5 + 32;
}
void temperature::print()
{
cout<<"the degree fahrainheit is "<<f;
}
void main()
{
clrscr();
temperature obj;
obj.convert();
obj.print();
getch();
}