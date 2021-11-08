#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
int count=0;
char ch[100];
char s;
cout<<"enter any string"<<endl;
cin>>ch;
cout<<"enter the character of occurence"<<endl;
cin>>s;
for(int i=0;ch[i]!='\0';i++)
{
if(ch[i]==s)
count++;
}
count=count+1;
if(count!=0)
cout<<"no. of occurences are "<<count<<endl;
getch();
}
