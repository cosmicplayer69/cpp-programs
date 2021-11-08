#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a;
int count =0;
cout<<"enter any number "<<endl;
cin>>a;
for(int i =1;i<=a;i++)
{
if(a%i==0)
count++;
}
if(count==2)
cout<<"it is a prime number " <<endl;
else
cout<<"it is not a prime number "<<endl;
getch();
}