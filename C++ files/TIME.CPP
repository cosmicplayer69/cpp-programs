#include<iostream.h>
#include<conio.h>
class time
{
int hrs,min,sec;
public:
time()
{
hrs=0;
min=0;
sec=0;
}
void input();
void display();
time operator +(time);
};
void time::input()
{
cout<<"enter hrs,min,sec"<<endl;
cin>>hrs>>min>>sec;
}
void time::display()
{
cout<<hrs<<":"<<min<<":"<<sec<<endl;
}
time time::operator +(time t2)
{
time t;
t.hrs=hrs+t2.hrs;
t.min=min+t2.min;
t.sec=sec+t2.sec;
if(t.sec>=60)
{
t.sec=t.sec-60;
t.min=t.min+1;
}
if(t.min>=60)
{
t.min=t.min-60;
t.hrs=t.hrs+1;
}
return t;
}
void main()
{
clrscr();
time t1,t2,t3;
t1.input();
t2.input();
t3=t1+t2;
t1.display();
t2.display();
t3.display();
getch();
}





