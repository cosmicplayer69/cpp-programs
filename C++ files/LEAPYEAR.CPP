#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a;
cout<<"enter any number"<<endl;
cin>>a;
if(a%100==0)
{
if(a%400==0)
cout<<"it is a cneturic leapyear"<<endl;
else
cout<<"it is not a centuric leapyear "<<endl;
}
else
{
if(a%4==0)
cout<<"it is a leap year"<<endl;
else
cout<<"it is not a leap year "<<endl;
}
getch();
}