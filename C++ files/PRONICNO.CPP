#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n;
cout<< "enter any number"<<endl;
cin>>n;
boolean flag = false;
for(int i =1;i<=n;i++)
{
if(i*(i+1)==n)
{
flag=true;
break;
}
}
if(flag)
cout<< "its a pronic number "<<endl;
else
cout<< "its not a pronic number "<<endl;
getch();
}