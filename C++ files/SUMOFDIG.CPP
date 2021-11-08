#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n;
int d;
int sum =0;
cout<< "enter any number"<<endl;
cin>>n;
while(n>0)
{
d=n%10;
sum=sum+d;
n=n/10;
}
cout<< "sum of digts is " <<sum;
getch();
}