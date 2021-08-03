#include<iostream>
using namespace std;
int main();
template <class T >class linear
{
    T arr[10];
    int n;
    public:
    void readArray();
    int linearSearch(T);
};
template<class T>void linear<T>::readArray()
{
    int i;
    cout<<"\nEnter the number of element : ";
    cin>>n;
    cout<<"\nEnter the lements : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
}
template <class T >int linear<T>::linearSearch(T key)
{
        int i;
        for(i=0;i<n;i++)
        {
            if(key==arr[i])
                return i+1;
                
        }
        return -1;
}
int main()
{
        int key,returnValue;
        linear<int> l;
        l.readArray();
        cout<<"\nEnter the element to search ";
        cin>>key;
        returnValue=l.linearSearch(key);
        if(returnValue==-1)
            cout<<"\nElement Found";
        else
            cout<<"\nElement found in position "<<returnValue;
        return 0;
}
