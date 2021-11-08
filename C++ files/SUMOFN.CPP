#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n;
int sum =0;
cout<<"enter your value for n"<<endl;
cin>>n;
for(int i =1;i<=n;i++)
{
   sum = sum + i;
}
cout<<" sum of " <<n << " numbers is "<<sum;
getch();
}
