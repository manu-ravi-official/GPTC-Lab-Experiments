#include<iostream>
using namespace std;
template <class T> class large
{
T var1,var2;
public:
void largest(T,T);
};
template <class T> void large<T>::largest(T val1, T val2)
{
if(val1>val2)
	cout<<"\nLargest one is "<<val1;
else
	cout<<"\nLargest one is "<<val2;
}
int main()
{
large <int> lar1;
lar1.largest(35,23);
large <char> lar2;
lar2.largest('a','c');
}
