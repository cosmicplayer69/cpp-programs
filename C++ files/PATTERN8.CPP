#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
for(int i=1;i<=4;i++)
{
for(int k =1;k<=(i-1);k++)
{
cout<<"*";
}
for(int j = 1;j<=(k+2);j++)
{
cout<<j;
}
cout<<endl;
}
getch();