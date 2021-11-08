#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a;
int d;
double sum = 0;
int rev = 0;
cout<<"enter any number"<<endl;
cin>>a;
int temp = a;
while(a>0)
{
d=a%10;
rev=rev*10+d;
a=a/10;
}
while(rev>0)
{
d=rev%10;
sum=sum+math.h(d,i);
rev = rev/10;
}
if(temp==sum)
cout<< " the number entered is a weakarm number"<<endl;
else
cout<< "its not a weakarm number"<<endl;
getch();
}
