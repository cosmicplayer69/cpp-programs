#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n;
int sum=0;
cout<<"enter any number "<<endl;
cin>>n;
for(int i=1;i<n;i++)
{
if(n%i==0)
sum=sum+i;
}
if(sum==n)
cout<< "it is a perfect number " <<endl;
else
cout<< "its not a perfect number "<<endl;
getch();
}
