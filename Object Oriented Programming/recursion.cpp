 #include<iostream>
using namespace std;
int fact(int);
int main()
{

	int num;
	cout<<"enter a number : ";
	cin>>num;
	cout<<"Factorial of " <<num <<" is "<<fact(num)<<endl;
	return 0;
}
int fact(int n)
{
	if(n<=1)
		return 1;
	else
		return n*fact(n-1);
}
