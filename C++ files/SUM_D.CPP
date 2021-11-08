#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class sumofdig
{
int n;
public:
sumofdig();
void input();
void sum();
};
void sumofdig::input()
{
cout<<"enter any number"<<endl;
cin>>n;
}
void sumofdig::sum()
{
int d;
int s=0;
while(n>0)
{
d=n%10;
s=s+d;
n=n/10;
}
cout<<"the sum of digits is "<<s;
}
sumofdig::sumofdig()
{n=0;
}
void main()
{
clrscr();
sumofdig obj;
obj.input();
obj.sum();
getch();
}