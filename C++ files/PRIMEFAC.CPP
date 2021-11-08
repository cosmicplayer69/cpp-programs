#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n;
cout<<"enter any number"<<endl;
cin>>n;
int count =0;
for(int i=1;i<=n;i++)
{ count=0;
if(n%i==0)
{
for(int j=1;j<=i;j++)
{
if(i%j==0)
count++;
}
}
if(count==2)
cout<<"the prime factors are"<<i;
}
getch();
}