#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a=0;
for(int i=1;i<=4;i++)
{
a=i-1;
for(int j =1;j<=i;j++)
{
cout<<j;
}
for(int k=1;k<=(i-1);k++)
{
cout<<a--;
}
cout<<endl;
}
getch();
}
