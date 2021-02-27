#include<iostream>
using namespace std;
class c_polygon
{
	protected:
	int a ,b;
	public:
		void getdata()
		{
			cin>>a>>b;
		}
		virtual int area()
		{
		}
};
class c_rectangle:public c_polygon
{
	public:
	int area()
	{
		return a*b;
	}
};
class c_triangle:public c_polygon
{
	public:
	int  area()	
	{
		return ((a*b)/2);
	}
};
int main()
{
	c_rectangle r;
	c_triangle t;
	c_polygon *p;
	p=&r;
	cout<<endl<<"enter length & breadth of rectangle : ";
	p->getdata();
	cout<<endl<<"area of rectangle is : "<<p->area();
	p=&t;
	cout<<endl<<"enter base and height of triangle : ";
	p->getdata();
	cout<<endl<<"area of triangle is : "<<p->area()<<endl;
};

