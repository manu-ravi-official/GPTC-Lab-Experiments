#include<iostream>
using namespace std;
template <class T> class stack
{
	T st[10];
	int top;
	public:
	stack();
	int isfull();
	int isempty();
	void push(T);
	T pop();
	void list();
};
template <class T > stack<T>::stack()
{
	top=-1;
}
template<class T >stack<T>::isfull()
{
	if(top==9)
		return 1;
	else
		return 0;
}
template <class T >stack<T>::isempty()
{
	if (top==-1)
		return 1;
	else
		return 0;
}
template <class T>void stack<T>::push(T ele)
{
	top++;
	st[top]=ele;
}
template<class T>T stack<T>::pop()
{
	return st[top--];
}
template <class T>void stack<T>::list()
{
	if(isempty())
	{
		for(int i=top;i>=0;i--)
		{
			cout<<st[i];
			cout<<endl;
		}
	}
}

