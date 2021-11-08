#include<iostream.h>
#include<conio.h>
class ABC
{
clrscr();
int n1,n2;
public:
void getnumbers(int a,int b);
void display(void);
void operator -();
};
void ABC::getnumbers(int a,int b)
{
n1=a;
n2=b;
}
void ABC::display(void)
{
cout<<n1<<endl;
cout<<n2<<endl;
}
void ABC::operator -()
{
n1=-n1;
n2=-n2;
}
void main()
{
ABC obj;
obj.getnumbers(3,-5);
cout<<"before overloading";
obj.display();
-obj;
cout<<"after overloading:";
obj.display();
getch();
}