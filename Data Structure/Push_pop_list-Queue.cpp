#include<iostream>
using namespace std;
template <class T>
class queue
{
	T q[10];
	int front,rear;
		public:
		  queue();
		  int isfull();
		  int isempty();
		  void enqueue(T);
		  T dequeue(); 
		  void list();  
 };
template <class T> queue <T>::queue()
{
	front = -1;
	rear = -1;
}
template <class T> int queue <T>::isfull()
{
	if(rear==9)
		return 1;
	else
		return 0;	
}
template <class T> int queue <T>::isempty()
{
	if(rear==-1)
		return 1;
	else
		return 0;
}
template <class T> void queue <T>::enqueue(T ele)
{
	if(!isfull())
	{
		q[rear++];
		q[rear]=ele;
		if(front==-1)
			front=0;
	}
	else
	{
		cout<<" Stack Overflow ";
	}
}
template <class T> T queue <T>::dequeue()
{
	T ele;
	ele=q[front];
	if(front==rear)
	{
		front=rear=-1;
	}
	front=front+1;
	return ele;
}
template <class T> void queue <T>::list()
{
	if(!isempty())
	{
		for(int i=front;i<=rear;i++)
		{
		cout<<"  " <<q[i]<<"  " ;
		}
	}
	else
	{
		cout<<" Queue is Empty " ;
	}
}
int main()
{
	queue <int> q1;
	int choice,ele;
	while(choice!=4)
	{
		cout <<"\n ----------------------- \n 1 - INSERT ";
		cout <<"\n 2 - DELETE ";
		cout <<"\n 3 - LIST ";
		cout <<"\n 4 - EXIT ";
		cout <<"\n Enter your Choice : ";
		cin>>choice;
		switch(choice)
		{
		case 1:
			cout<<" Enter the Element to Push : " ;
			cin>>ele;
			q1.enqueue(ele);
			cout<<" Inserted Element : "<<ele;
			break;
		case 2:	
			if(!q1.isempty())
			{
				cout<<" Deleted Element : "<<q1.dequeue();
			}
			else
			{
				cout<<" Queue is Empty ";
			}
			break;
		case 3 :
			cout<<" Elements in Queue : ";
			q1.list();
			break;
		case 4 :
			cout<<" End : ";
			break;	
		default :
			cout<<" Invalid Choice ";
			break;
			
		}
	}
}

