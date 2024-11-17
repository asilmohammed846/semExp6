#include<iostream.h>
#include<conio.h>
void main()
{
int  n,*p;
p=&n;

cout<<"Enter number :";
cin>>n;
cout<<"\n number is: "<<*p;
 int  x=*p;
cout<<"\n number is :"<<x;
cout<<"\n Its address is :"<<p;
getch();
}
