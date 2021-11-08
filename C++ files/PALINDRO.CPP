#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n;
int d;
int n1;
cout<< "enter any number "<<endl;
cin>>n;
n1=n;
int rev =0;
while(n>0)
{
d=n%10;
rev=rev*10+d;
n=n/10;
}
if(n1==rev)
cout<< "the number is a palindrome "<<endl;
else
cout<< "the number is not a palindrome "<<endl;
getch();
}