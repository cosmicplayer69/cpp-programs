#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
class hcf
{
int n,p;
int h;
public:
hcf();
void calc();
void input();
void display();
};
hcf::hcf()
{
n=p=h=0;
}
void hcf::input()
{
cout<<"enter numbers" <<endl;
cin>>n>>p;
}
void hcf::calc()
{
for(int i =1;i<=n;i++)
{
if(n%i==0&&p%i==0)
h=i;
}
}
void hcf::display()
{
cout<<" the greatest common divisor is "<<h;
}
void main()
{
clrscr();
hcf obj;
obj.input();
obj.calc();
obj.display();
getch();
}
