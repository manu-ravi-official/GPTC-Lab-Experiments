#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int a,b,c,d;
float root1,root2;
cout<<"Enter Coefficients of the equation : "<<endl<<"coefficients of x: ";
cin>>a;
cout<<" coefficients of y: " ;
cin>>b;
cout<<" coefficients of z: " ;
cin>>c;
d=(b*b)-(4*a*c);
if(d>0)
{
cout<<"roots are real and unequal :"<<endl;
root1=(-b+sqrt(d))/(2*a);
root2=(-b-sqrt(d))/(2*a);
cout<<"root 1 = "<<root1<<endl<<"root 2="<<root2<<endl;
}
else if(d==0)
{
cout<<"roots are real and equal ";
root1=(-b+sqrt(d))/(2*a);
cout<<endl<<"root1 ="<<root1<<endl<<"root 2 ="<<root1<<endl;
}
else
{
cout<<"Roots are imaginary "<<endl;
}
}

