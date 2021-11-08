#include<iostream.h>
#include<conio.h>
class factorial
{
int a;
public:factorial();
void input();
void calc();
};
factorial::factorial()
{
a=0;
}
void factorial::input()
{
cout<<"enter any number"<<endl;
cin>>a;
}
void factorial::calc()
{
int fact =1;
for(int i=1;i<=a;i++)
{
fact=fact*i;
}
cout<<fact;
}
void main()
{
clrscr();
factorial obj;
obj.input();
obj.calc();
getch();
}