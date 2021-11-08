#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int count=0;
char a[100];
cout<<"enter sentence"<<endl;
gets(a);
for(int i =0;a[i]!='\0';i++)
{
if(a[i]==' ')
count++;
}
count=count+1;
cout<<"the no of words are"<<count;
getch();
}
