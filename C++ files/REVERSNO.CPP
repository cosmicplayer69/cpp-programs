#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n;
int d;
int rev = 0;
cout<<" enter any number "<<endl;
cin>>n;
while(n>0)
{
d=n%10;
rev=rev*10+d;
n=n/10;
}
cout<<" the reversed number is " <<rev;
getch();
}