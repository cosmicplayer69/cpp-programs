#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a =0;
int d =0;
int sum =0;
cout<<"enter any number "<<endl;
cin>>a;
int b = a;
while(a>0)
{
d=a%10;
sum=sum+(d*d*d);
a=a/10;
}
if(sum==b)
cout<<"the number entered is armstrong number "<<endl;
else
cout<<"the number entered is not an armstrong number "<<endl;
getch();
}