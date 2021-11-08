#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,temp;
cout<<"enter any two numbers "<<endl;
cin>>a>>b;
temp=a;
a=b;
b=temp;
cout<<"after swap "<<a<<b;
getch();
}
