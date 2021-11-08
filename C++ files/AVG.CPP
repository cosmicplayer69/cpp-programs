#include<iostream.h>
#include<conio.h>
class average
{
float a,b,c,avg;
public:average();
void calc();
void display();
};
average::average()
{
cout<<"enter any three numbers"<<endl;
cin>>a>>b>>c;
}
void average::calc()
{
avg=(a+b+c)/3;
}
void average::display()
{
cout<<" average of three numbers are "<<avg;
}
void main()
{
clrscr();
average obj;
obj.calc();
obj.display();
getch();
}