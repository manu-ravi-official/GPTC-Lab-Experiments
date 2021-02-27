#include<iostream>
using namespace std;
int main()
{
int a,b,sum,product,difference,mod;
int z,y;
char op,quit;
do
{
cout<<"enter first number : ";
cin>>a;
cout<<"enter second number : ";
cin>>b;
cout<<"enter operator for operation ";
cin>>op;
switch(op)
{
case '+':
	sum=a+b;
	cout<<a<<"+"<<b<<"="<<sum<<endl;
	break;
case '-':
	difference=a-b;
	cout<<a<<"-"<<b<<"="<<difference<<endl;
	break;
case '*':
	product=a*b;
	cout<<a<<"*"<<b<<"="<<product<<endl;
	break;
case '/':
	if(b==0)
	{
	cout<<"invalid operation";
	break;
	}
	else
	{
		cout<<a<<"/"<<b<<"="<<a/b<<endl;
	}
	break;
case '%':
	z=a;
	y=b;
	mod=z%y;
	cout<<a<<"%"<<b<<"="<<mod<<endl;
	break;
	default:
	cout<<"invalid operation"<<endl;
	break;
}
cout<<endl<<"enter 'c' to continue :"<<endl;
cout<<"press any other key to quit :";
cin>>quit;
cout<<endl<<endl;
}while((quit=='c')||(quit=='C'));

cout<<endl<<"END OF THE PROGRAM";

return 0;
}
