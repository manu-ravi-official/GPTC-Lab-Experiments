#include<iostream>
using namespace std;
int main()
{
int num,reverse=0;
cout<<"Enter the number : ";
cin>>num;
while(num!=0)
	{
	int remainder=num%10;
	reverse=reverse*10+remainder;
	num/=10;
	}
cout<<"reversed number = "<<reverse<<endl;
}
