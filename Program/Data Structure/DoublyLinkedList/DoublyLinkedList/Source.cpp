#include<iostream>
using namespace std;
class Node
{
	int data;
	Node* next;
	Node* prev;
public:
	Node(int d)
	{
		data = d;
		next = NULL;
		prev = NULL;
	}

	void setdata(int d)
	{
		data = d;

	}
	void setNext(Node* n)
	{
		next = n;
	}
	void setPrev(Node* p)
	{
		prev = p;
	}

	int getData()
	{
		return data;
	}
	Node* getNext()
	{
		return next;
	}
	Node* getPrev()
	{
		return prev;
	}

};
class DLL
{
	Node* start;
public:
	DLL()
	{
		start = NULL;
	}

	void insert(int data)
	{

		Node* nn = new Node(data);
		//nn->setdata(data);
		//nn->setNext(NULL);
		//nn->setPrev(NULL);
		if (start==NULL)
		{ 
			start = nn;
		}
		else
		{
			Node* ep = start;
			while (ep->getNext() != NULL)
			{
				ep = ep->getNext();
				
			}
			ep->setNext(nn);
			nn->setPrev(ep);
		}
	}

	void Reverse()
	{
		Node* ep = start;
		if (start==NULL)
		{
			cout << "linked list Is Empty : ";
		}

		while (ep->getNext()!=NULL)
		{
			ep = ep->getNext();
		}
		cout << "Reverse Order : ";
		while (ep!=NULL)
		{
			cout << ep->getData()<<" ";
			ep = ep->getPrev();

		}

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
			Node* ep = start;
			while (ep->getNext()!=NULL)
			{
				cout << ep->getData()<<" ";
				ep = ep->getNext();
			}
			cout << ep->getData()<<" ";
		}
	
	}
};

int main()
{
	DLL d1;
	d1.insert(10);
	d1.insert(20);
	d1.insert(30);

	d1.Display();
	cout << endl;
	d1.Reverse();
	//d1.Display();
}