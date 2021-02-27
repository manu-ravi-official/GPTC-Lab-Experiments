#include<iostream>
using namespace std;
struct student
{
	int reg_no;
	char name[50];
	int subject1;
	int subject2;
	int subject3;
};
int main()
{
	int n=0,total=0,i;
	float avg;
	cout<<"Enter nummber of students :";
	cin>>n;
	struct student st[n];
	for(i=0;i<n;i++)
	{
	total=0;
	cout<<endl<<"enter name of student "<<i+1<<":";
	cin>>st[i].name;
	cout<<"enter mark 1 of "<<st[i].name<<":";
	cin>>st[i].subject1;
	cout<<"enter mark 2 of "<<st[i].name<<":";
	cin>>st[i].subject2;
	cout<<"enter mark 3 of "<<st[i].name<<":";
	cin>>st[i].subject3;
	total=st[i].subject1+st[i].subject2+st[i].subject3;
	avg=total/3;
	cout<<"Average mark of "<<st[i].name<<"is ="<<avg<<endl;
	}
cout<<endl<<"End of the program"<<endl;
return 0;
}
