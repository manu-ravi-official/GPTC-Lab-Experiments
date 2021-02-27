#include<iostream>
using namespace std;
template <class T>
class mypair
{
	T x,y;
	public:
	mypair(T first,T second)
	{
		x=first;
		y=second;
	}
T getmax();
};
template <class T>
T mypair<T>::getmax()
{
	T retval;
	retval=x>y?x:y;
	return retval;
}
int main()
{
	int n1,n2;
	cout<<"enter two number : ";
	cin>>n1>>n2;
	mypair <int> myobject(n1,n2);
	cout<<"largest number is : "<<myobject.getmax()<<endl;
}
