#include <iostream>
#include <stdlib.h>
using namespace std;
template < class Item>
	class LinkedList
	{
		private:
			class Node
			{
				friend class LinkedList;
				private:
					Item value;
				Node * next;
				public:
					Node(Item val, Node *nx = NULL)
					{
						value = val;
						next = nx;
					}
			}*m_head, *m_tail;
		int m_size;
		public:
			LinkedList();
			~LinkedList();
			void addHead(Item);
			void display();
			int isEmpty();
			Item removeHead();
			void addTail(Item);
			Item removeTail();
	};
template < class Item > LinkedList<Item>::LinkedList()
{
	m_head = NULL;
	m_tail = NULL;
	m_size = 0;
}

template < class Item > LinkedList<Item>::~LinkedList()
{
	Node *here = m_head, *nextNode;
	while (here != NULL)
	{
		nextNode = here->next;
		delete here;
		here = nextNode;
	}
}

template < class Item > void LinkedList<Item>::addHead(Item ele)
{
	m_head = new Node(ele, m_head);
	if (m_tail == NULL)
	{
		m_tail = m_head;
	}

	cout << "Head Address : " << m_head << ", Tail Address : " << m_tail;
	m_size++;
}

template < class Item > int LinkedList<Item>::isEmpty()
{
	if (m_size == 0)
		return 1;
	else
		return 0;
}

template < class item > void LinkedList<item>::display()
{
	if (isEmpty())
		cout << "list is empty";
	else
	{
		Node *here = m_head;
		while (here != NULL)
		{
			cout << "Value : " << here->value << ", ";
			cout << "Head Address : " << here << ", Tail Address : " << here->next << endl;
			here = here->next;
		}
	}
}

template < class Item > Item LinkedList<Item>::removeHead()
{
	
	Node *oldnode = m_head;
	Item returnvalue = m_head->value;
	m_head = m_head->next;
	cout << "\nHead Address : " << oldnode;
	delete oldnode;
	m_size--;
	if (m_head == NULL)
		m_tail = NULL;
	return returnvalue;
}

template < class Item > void LinkedList<Item>::addTail(Item ele)
{
	if (isEmpty())
		addHead(ele);
	else
	{
		Node *oldtail = m_tail;
		m_tail = new Node(ele);
		oldtail->next = m_tail;
		m_size++;
		cout << "Head Address : " << m_tail ;

	}
}

template < class Item > Item LinkedList<Item>::removeTail()
{
	if (m_head == m_tail)
		return removeHead();
	Node *pretail = m_head;
	Item returnvalue = m_tail->value;
	while (pretail->next != m_tail)
		pretail = pretail->next;
	pretail->next = NULL;
	delete m_tail;
	m_size--;
	m_tail = pretail;
	return returnvalue;
}

int main()
{
	int ch;
	LinkedList<int> lst;
	int item;
	while (ch != 6)
	{
		cout << "\n\n * * * * * * * * * * * * * * * * * * *";
		cout << "\n1 - Add Head \n2 - Remove Head \n3 - Add Tail \n4 - Remove Tail\n5 - Display \n6 - exit \nEnter Your Choice : ";
		cin >> ch;
		switch (ch)
		{
			case 1:
				cout << "Enter the Element : ";
				cin >> item;
				lst.addHead(item);
				break;
			case 2:				
				
				if (lst.isEmpty())
					cout << "list is empty";
				else{
					cout << "Deleted Element : " << item;	
					item = lst.removeHead();
				}
				break;

			case 3:
				cout << "Enter the Element : ";
				cin >> item;
				lst.addTail(item);
				break;
			case 4:
				item = lst.removeTail();
				cout << "Deleted Tail Node : " << item;
				break;

			case 5:

				lst.display();
				break;
		}
	}
}
