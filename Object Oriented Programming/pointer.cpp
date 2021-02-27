#include<iostream>
using namespace std;
int main()
{
float *ptr,num;
cout<<"enter the number : ";
cin>>num;
ptr=&num;
cout<<"The value of ptr is : "<<num<<endl;
(*ptr)++;
cout<<"incremented ptr is : "<<num<<endl;
(*ptr)--;
cout<<"decremented ptr is : "<<num<<endl;
*ptr=*ptr*2;
cout<<"ptr * 2 is : "<<num<<endl;
*ptr=*ptr/3;
cout<<"ptr/3 is : "<<num<<endl;
*ptr =*ptr-6;
cout<<"ptr-6 is : "<<num<<endl;
*ptr=*ptr+5;
cout<<"ptr+5 is : "<<num<<endl;
}
