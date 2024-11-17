
#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c,*p1,*p2,*p3;
p1=&a;
p2=&b;
p3=&c;
cout<<"enter two number:" ;
cin>>*p1>>*p2;
cout<<"\n Before swapping a: "<<*p1<<"\n b:"<<*p2;
*p3=*p1;
*p1=*p2;
*p2=*p3;
cout<<"\n After swapping a: "<<*p1<<"\n b:"<<*p2;
getch();
}