#include<iostream>
using namespace std;
class prime
{
	int a,k,i;
	public:
		int n1;
	

prime()
{
	cout<<"object is created "<<endl;

	cout<<endl<<"enter number : ";
	cin>>n1;
	int k;
	for(int i=2;i<=n1/2;i++)
	{
		if(n1%i==0)
		{
			k=0;
			break;
		}
		else
		{
			k=1;
		}
	}
	if(k==0)
	{
		cout<<n1<<" is not a prime number" <<endl;
	}
	else
	{
		cout<<n1<<" is a prime number" <<endl;
	}
}
~prime()
{
	cout<<endl<<"object is deleted"<<endl;
}
};
int main()
{
	prime p;
	
	return 0;
}

