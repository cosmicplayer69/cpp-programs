#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n;
int i=1;
int sum = 0;
cout<<" enter any value of n "<<endl;
cin>>n;
while(i<=n)
{
sum = sum + i;
i++;
}
cout<<" total sum of " << n <<"  numbers is " << sum;
getch();
}