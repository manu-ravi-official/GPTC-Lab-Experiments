#include<iostream>
using namespace std;
int main()
{
int a=0,b=1,c=0,n;
cout<<"Enter the number of terms : ";
cin>>n;
cout<<a<<" "<<b<<" ";
for(int i=3;i<=n;i++)
{
c=a+b;
a=b;
b=c;
cout<<c<<" ";
}}
