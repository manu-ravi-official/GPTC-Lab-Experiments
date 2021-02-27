#include<iostream>
using namespace std;
class student
	{
	protected:
		int rno;
		char name[50];
	public:
		void get()
		{
			cout<<"Enter the Roll no :";
			cin>>rno;
			cout<<"Enter name :";
			cin>>name;

		}
};
class mark
{
	protected:
		int m1,m2,m3,m4,m5;
	public:
		void getsm()
		{
			cout<<"Enter mark 1 :";
			cin>>m1;
			cout<<"Enter mark 2 :";
			cin>>m2;
			cout<<"Enter mark 3 :";
			cin>>m3;
			cout<<"Enter mark 4 :";
			cin>>m4;
			cout<<"Enter mark 5 :";
			cin>>m5;
		}
};
class marklist:public student,public mark
{
	int tot,avg,percent;
	public:
	void calculate()
	{
		tot=(m1+m2+m3+m4+m5);
		avg=tot/5;
		percent=(tot*100)/500;
	}
	void display()

	{
		cout<<" - - - - - - - - MARKLIST - - - - - - - - "<<endl;
		cout<<"Reg No : "<<rno<<endl<<"Name : "<<name<<endl;
		cout<<"Mark 1 = "<<m1<<endl;
		cout<<"Mark 2 = "<<m2<<endl;
		cout<<"Mark 3 = "<<m3<<endl;
		cout<<"Mark 4 = "<<m4<<endl;
		cout<<"Mark 5 = "<<m5<<endl;
		cout<<"Total : "<<tot<<endl;
		cout<<"Average : "<<avg<<endl;
		cout<<"Percentage : "<<percent<<" % "<<endl;
		if(percent>=90)
		cout<<"Over all Grade : S"<<endl;
		else if(percent>=80)
		cout<<"Over all Grade : A"<<endl;
		else if(percent>=70)
		cout<<"Over all Grade : B"<<endl;
		else if(percent>=60)
		cout<<"Over all Grade : C"<<endl;
		else if(percent>=50)
		cout<<"Over all Grade : D"<<endl;
		else if(percent>=40)
		cout<<"Over all Grade : E"<<endl;
		else if(percent<40)
		cout<<"Failed"<<endl;
	}
};
int main()
{

	marklist obj;
	obj.get();
	obj.getsm();
	obj.calculate();
	obj.display();

}
