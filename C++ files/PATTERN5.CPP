#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a=0;
for(int i =1;i<=5;i++)
{
a=i;
for(int j =1;j<=i;j++)
{
cout<<a--;
}
cout<<endl;
}
getch();
}