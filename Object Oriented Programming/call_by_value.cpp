#include<iostream>
using namespace std;
double power(int,int);
int main()
{

	int a,b;
	double pow;
	cout<<"Enter first number :";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	pow=power(a,b);
	cout<<a<<"^"<<b<<"="<<pow<<endl;
	return 0;

}
double power(int a,int b)
{

int i,pow=1;
for(i=1;i<=b;i++)
{
	pow*=a;
}
return pow;
}
