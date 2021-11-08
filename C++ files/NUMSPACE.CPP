#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char s;
int count =0;
cout<<" enter any line " <<endl;
cin>>s;
for(int i =0;i<s.length();i++)
{
if(s.charAt(i)==' ')
count++;
}
cout<< " number of places in the string are "<<count;
getch();
}