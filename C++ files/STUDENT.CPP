#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class student
{
char name[20];
int roll;
public:
student()
{
strcpy(name,"abc");
roll=20;
}
void input();
void display();
};
void student::input()
{
cout<<"enter name"<<endl;
gets(name);
cout<<"enter roll"<<endl;
cin>>roll;
}
void student::display()
{
cout<<"name"<<name<<"roll"<<roll;
}
void main()
{
clrscr();
student obj;
obj.input();
obj.display();
getch();
}

