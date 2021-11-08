#include<iostream.h>
#include<conio.h>
class fibonacci
{
int n;
int t1;
int t2;
int t3;
public:fibonacci();
void input();
void calc();
};
fibonacci::fibonacci()
{
t1=0;
t2=1;
t3=0;
}
void fibonacci::input()
{
cout<<"enter for how many terms "<<endl;
cin>>n;
cout<<t1;
cout<<t2;
}
void fibonacci::calc()
{
for(int i=1;i<=n-2;i++)
{
t3=t1+t2;
cout<<t3<<endl;
t1=t2;
t2=t3;
}
}
void main()
{
clrscr();
fibonacci obj;
obj.input();
obj.calc();
getch();
}

