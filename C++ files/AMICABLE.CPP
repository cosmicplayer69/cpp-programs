#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a;
int b;
int sum1 =0;
int sum2 =0;
cout<< "enter any 2 numbers"<<endl;
cin>>a>>b;
for(int i =1;i<a;i++)
{
if(a%i==0)
sum1=sum1+i;
}
for(int j=1;j<b;j++)
{
if(b%j==0)
sum2=sum2+j;
}
if(sum1==sum2)
cout<<"it is a amicable number"<<endl;
else
cout<<"it is not a amicable number"<<endl;
getch();
}