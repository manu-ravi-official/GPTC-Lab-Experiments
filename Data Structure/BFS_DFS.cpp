#include<iostream>
using namespace std;

template <class T> class stack
{
    int st[10];
    int top;
    public:
        stack();
        void push(T);
        T pop();
        void list();
        bool isfull();
        bool isempty();
};

template <class T> stack<T>::stack()
{
    top = -1;
}

template <class T> void stack<T>::push(T ele)
{
    if(isfull())
    {
        cout<<"Stack is full "<<endl;
    }
    // cout<<top<<endl;
    ++top;
    // cout<<top<<endl;
    st[top] = ele;
   
    // return;
}

template <class T> bool stack<T>::isfull()
{
    if(top==9)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

template <class T> bool stack<T>::isempty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

template <class T> T stack<T>::pop()
{
    T popped_element = st[top];
    top--;
    return popped_element;
}

template <class T> void stack<T>::list()
{
    // cout<<top<<endl;
    for(int i=top;i>=0;i--)
    {
        cout<<"Elements in the stack - "<<st[i]<<" ";
    }
    cout<<endl;
}

template <class T>
class queue
{
    T q[10];
    int front,rear;
    public:
        queue();
        int isFull();
        int isEmpty();
        void enqueue(T);
        T dequeue(T);
        void list();
};
template<class T>queue<T>::queue()
{
    front=rear=-1;
}
template<class T>int queue<T>::isFull()
{
    if(rear==9)
        return 1;
    else
        return 0;
}
template<class T>int queue<T>::isEmpty()
{
    if(rear==-1)
        return 1;
    else
        return 0;
}
template<class T>void queue<T>::enqueue(T ele)
{
    if(!isFull())
    {
        q[rear++];
        q[rear]=ele;
        if(front==-1)
            front=0;
    }    
    else
        cout<<"stack overflow";
}
template<class T>T queue<T>::dequeue(T ele)
{
   
    ele=q[front];
    if(front==rear)
        front=rear=-1;
       
    front=front+1;
    return ele;
}
template<class T>void queue<T>::list()
{
    if(!isEmpty())
    {
        for(int i=front;i<=rear;i++)
            cout<<" "<<q[i]<<" ";
    }
    else{
        cout<<"queue is empty";
       
    }
}

template <class T>
class graph
{
    int nodes;
    T gr[10][10];
    int visited[10];
    public:
    graph();
        void readGraph();
        void dispGraph();
        void dfs(int);
        void bfs(int);
};

template <class T> graph<T>::graph()
{
   // nodes = 6;
   cout<<"\nEnter number of Nodes :";
   cin>>nodes;
}

template <class T> void graph<T>::readGraph()
{
    int e,i,j,k;
    cout<<"Enter the number of edges ";
    cin>>e;
    cout<<"Enter the edges ";
    for(i=0;i<e;i++)
    {
        cin>>j>>k;
        gr[j][k]=1;
    }
    
}

template <class T> void graph<T>::dispGraph()
{
    int i,j;
    for(i=0;i<=nodes;i++)
    {
        for(j=0;j<=nodes;j++)
        {
            if(gr[i][j]==1)
                cout<<"1  ";
            else
                cout<<"0  ";
        }
        cout<<endl;
    }
}

template <class T> void graph<T>::dfs(int n)
{ 
    
    
    int i;
    for(i=0;i<=nodes;i++)
    {
        visited[i]=0;
    }
    visited[n]=1;
    stack<int> s;
    s.push(n);
    while(!s.isempty())
    {
        n=s.pop();
        cout<<n<<"  ";
        for(int j=0;j<=nodes;j++)
        {
            if(gr[n][j]==1 && visited[j]==0)
            {
                visited[j]=1;
                s.push(j);
            }
        }
    }
}

template <class T> void graph<T>::bfs(int n)
{ 
    
    
    int i;
    for(i=0;i<=nodes;i++)
    {
        visited[i]=0;
    }
    visited[n]=1;
    queue<int> s;
    s.enqueue(n);
    while(!s.isEmpty())
    {
        n=s.dequeue(n);
        cout<<n<<"  ";
        for(int j=0;j<=nodes;j++)
        {
            if(gr[n][j]==1 && visited[j]==0)
            {
                visited[j]=1;
                s.enqueue(j);
            }
        }
    }
}

int main()
{
    graph<int> g;
    g.readGraph();
    g.dispGraph();
    cout<<"\n DFS \n";
    g.dfs(1);
    cout<<"\n BFS \n";
    g.bfs(1);
}
