#include<iostream>
using namespace std;
template<class T>
class Node
{
	T data;
	Node<T>* next;
public:

	Node(T  d)
	{
		data = d;
		next = NULL;
	}

	void setData(T d)
	{
		data = d;
	}
	void setNext(Node<T>* p)
	{
		next = p;
	}
	T getData()
	{
		return data;
	}
	Node<T>*  getNext()
	{
		return next;
	}


};
template<class T>
class SLL
{
	Node<T>* start;
public:

	SLL()
	{
		start = NULL;
	}

	void insert(T data)
	{
		Node<T>* nn = new Node<T>(data);
		if (start==NULL)
		{
			start = nn;
		}
		else
		{
			Node<T>* ep = start;
			while (ep->getNext()!=NULL)
			{
				ep = ep->getNext();
			}
			ep->setNext(nn);
		}
	}
	void insertAtBegin(T data)
	{
		Node<T>* nn = new Node<T>(data);
		if (start == NULL)
		{
			start = nn;
		}
		else
		{
			nn->setNext(start);
			start == nn;
		}
	}

	T removeFrombegin()
	{
		if (start==NULL)
		{
			cout << "Linked List Is Empty : ";
		}
		else
		{
			Node<T>* dp = start;
			start = start->getNext();
			T data;
			data = dp->getData();
			delete dp;
			return data;

		}

	}
	void removeFromEnd()
	{
		Node<T>* ep = start;
		if (start == NULL)
		{
			cout << "Linked List Is Empty : ";
		}
		else
		{
			while (ep->getNext()->getNext() != NULL)
			{
				ep = ep->getNext();
			}
			Node<T>* d1 = ep->getNext();
			ep->setNext(NULL);
			delete d1;
		}
	}

	void insertAtNthposition(T data,T n)
	{
		Node<T>* ep = new Node<T>(data);
		ep->setData(data);
		ep->setNext(NULL);
		if (n==1)
		{
			ep->setNext(start);
			start = ep;
			return;

		}
		Node<T>* ep1 = start;
		for (int i = 0; i < n-2; i++)
		{
			ep1 = ep1->getNext();

		}
		ep->setNext(ep1->getNext());
		ep1->setNext(ep);


	}
	void Display()
	{
		cout << "Linked List Is :  ";
		if (start == NULL)
		{
			cout << "linked list Is Empty : ";
		}
		else
		{
			Node<T>* ep = start;
			while (ep->getNext() != NULL)
			{
				cout << ep->getData() << " " << endl;
				ep = ep->getNext();
			}
			cout << ep->getData() << " " << endl;
		}
	}
};

int main()
{
	SLL<int> s1; 

	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insertAtNthposition(15, 2);



	s1.Display();

	s1.insertAtBegin(40);
	s1.Display();
	s1.removeFrombegin();
	s1.removeFromEnd();


	s1.Display();


	SLL<char> s2;

	s2.insert('k');
	s2.insert('p');
	s2.insert('t');
	s2.Display();

	s2.insertAtBegin('T');
	s2.Display();

	s2.insertAtNthposition('s', 3);
	s2.Display();

}