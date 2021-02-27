#include<iostream>
using namespace std;
class student
{
	char rno[10];
	char name[10];
	float m1,m2,m3,m4,m5,total,percent;
	public:
		void read_data();
		void compute();
		void display();
		void grade();
};
void student::read_data()
{ 
cout<<"Enter roll number :";
cin>>rno;
cout<<"Enter the student name : ";
cin>>name;
cout<<"Enter the mark 1: ";
cin>>m1;
cout<<"Enter the mark 2 : ";
cin>>m2;
cout<<"Enter the mark 3 : ";
cin>>m3;
cout<<"Enter the mark 4 : ";
cin>>m4;
cout<<"Enter the mark 5 : ";
cin>>m5;
}
void student::compute()
{
	total=(m1+m2+m3+m4+m5);
	percent=(total*100)/500;
}

void student::display()
{
	cout<<"\n\n marklist of "<<name;
	cout<<"\n";
	cout<<endl<<"name : "<<name;
	cout<<endl<<"roll no : "<<rno;
	cout<<endl<<"mark1 : "<<m1;
	cout<<endl<<"mark2 : "<<m2;
	cout<<endl<<"mark3: "<<m3;
	cout<<endl<<"mark4 : "<<m4;
	cout<<endl<<"mark5 : "<<m5;
	cout<<endl<<"Total mark : "<<total;
	cout<<endl<<"Percentage : "<<percent;
}

void student::grade()
{
	if(percent>=90)
		cout<<endl<<"grade : S"<<endl;
	else if(percent>=80)
		cout<<endl<<"grade : A"<<endl;
	else if(percent>=70)
		cout<<endl<<"grade : B"<<endl;
	else if(percent>=60)
		cout<<endl<<"grade : C"<<endl;
	else if(percent>=50)
		cout<<endl<<"grade : D"<<endl;
	else if(percent>=40)
		cout<<endl<<"grade : E"<<endl;
	else if(percent<40)
		cout<<endl<<"Failed"<<endl;
}

int main()
{
	student r;
	r.read_data();
	r.compute();
	r.display();
	r.grade();
};






















