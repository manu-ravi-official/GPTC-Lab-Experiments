#include<iostream>
using namespace std;
void swap(int *,int *);
int main()
{

	int a,b;
	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	cout<<endl<<"Before swapping :"<<a<<","<<b;
	swap(&a,&b);
	return 0;
}
void swap(int *a,int *b)
{


	int temp=*a;
	*a=*b;
	*b=temp;
	cout<<endl<<"After swapping : "<<*a<<","<<*b<<endl;
 
cout<<a;
}
