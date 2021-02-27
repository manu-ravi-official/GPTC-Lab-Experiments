// Push, Pop, List using Template

#include <iostream>
using namespace std;
template <class T>
class stack {
    int top;
    T stk[10];

public:
    stack();
    void push(T);
    int pop(T);
    int isfull();
    int isempty();
    void list();
};
template <class T>
stack<T>::stack()
{
    top = -1;
}
template <class T>
int stack<T>::isfull()
{
    if (top == 9)
        return 1;
    else
        return 0;
}
template <class T>
int stack<T>::isempty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
template <class T>
void stack<T>::push(T ele)
{
    if (!isfull()) {
        top++;
        stk[top] = ele;
        cout << "Inserted " << ele;
    }
    else {
        cout << "Stack Overflow";
    }
}
template <class T>
void stack<T>::list()
{
    for (int i = top; i >= 0; i--) {
        cout << stk[i] << "\t";
    }
    if (isempty()) {
        cout << "Empty stack";
    }
}
template <class T>
int stack<T>::pop(T ele)
{
    if (!isempty()) {
        cout << "removed " << ele;
        return stk[top--];
    }
    else {
        cout << "Stack Underflow";
    }
}
int main()
{
    int ch = 0, elem;
    stack<int> st;
    while (ch != 4) {
        cout << endl
             << "\n1.push\t"
             << "2.pop\t"
             << "3.list\t"
             << "4.exit\t" << endl;
        cout << "enter your option : ";
        cin >> ch;
        switch (ch) {
        case 1:
            cout << endl
                 << "\nenter the element to push : ";
            cin >> elem;
            st.push(elem);
            break;

        case 2:
            st.pop(elem);
            break;

        case 3:
            st.list();
            break;

        default:
            cout << " Invalid ";
            break;
        }
    }
}
