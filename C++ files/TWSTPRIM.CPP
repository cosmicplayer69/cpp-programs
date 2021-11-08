#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int d;
int rev =0;
int count1;
int count2;
int a;
cout<<" enter any number"<<endl;
cin>>a;
for(int i =1;i<=a;i++)
{
if(a%i==0)
count1++;
}
while(a>0)
{
d=a%10;
rev = rev * 10 + d;
a=a/10;
}
for(int j=1;j<=rev;j++k)
{
if(rev%j==0)
count2++;
}
if(count1==2&&count2==2)
cout<<" the number entered is a twisted prime"<<endl;
else
cout<<" the number entered is not a twisted prime "<<endl;
getch();
}