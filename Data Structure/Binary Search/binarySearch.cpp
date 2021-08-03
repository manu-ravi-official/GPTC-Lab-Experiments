#include<iostream>
using namespace std;
template <class T>class binary
{
    T array[10];
    int n;
    public:
        void readArray();
        void search();
        int binarySearch(int,int,T);
        
};
template <class T>void binary<T>::readArray()
{
    int i;
    cout<<"Enter the number of elements ";
    cin>>n;
    cout<<"\nEnter the elements ";
    for(i=0;i<n;i++)
    {
        cin>>array[i];
        
    }
}
template <class T>int binary<T>:: binarySearch(int lower,int upper,T element)
{
    int middle;
    middle=(lower+upper)/2;
    if(lower>upper)
		return -1;	
    else if(element==array[middle])
        return middle+1;
    else if(element>array[middle])
        binarySearch(middle+1,upper,element);
    else 
        binarySearch(lower,middle-1,element);  
              
}
template <class T>  void binary<T>:: search()
{
    int key,returnv;
    cout<<"\nSearch Element ";
    cin>>key;
    returnv=binarySearch(0,n-1,key);
    if(returnv==-1)
        cout<<"\nElement is not Present";
    else 
        cout<<"\nElement found in position "<<returnv;
        
    
}
int main()
{
    binary <int>b;
    b.readArray();
    b.search();
    return 0;
}
