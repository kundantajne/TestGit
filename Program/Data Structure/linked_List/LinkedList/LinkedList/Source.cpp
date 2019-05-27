#include<iostream>
using namespace std;
//template<class T>
class Node
{
	int data;
	Node* next;

public:
	Node(int d)
	{
		data = d;
		next = NULL;
	}
	void setData(int d)
	{
		data = d;
	}
	int getData()
	{
		return data;
	}

	void setNext(Node* p)
	{
		this->next = p;
	}

	Node* getNext()
	{
		return this->next;
	}
};
//template<class T>
class SLL
{
	Node* start;

public:
	SLL()
	{
		start = NULL;
	}

	void insert(int data)
	{
		Node* nm = new Node(data);

		if (this->start==NULL)
		{
			start = nm;
		}
		else
		{
			Node* ep = start;
			while (ep->getNext()!=NULL)
			{
				ep = ep->getNext();
			}
			ep->setNext(nm);
		}

	}

	void insertAtBeg(int data)
	{
		Node * nn = new Node(data);
		if (start==NULL)
		{
			start = nn;
		}
		else
		{
			nn->setNext(start);
			start = nn;
		}
	}
	int removeFromBegin()
	{
		if (start==NULL)
		{
			cout << "LInked List Is Empty : ";
		}
		else
		{
			Node*dp = start;
			start = start->getNext();
			int data;
			data = dp->getData();
			delete dp;
			return data;
		}
		
	}
	void removeFromEnd()
	{
		Node* ep = start;
		if (start==NULL)
		{
			cout << "Linked List Is Empty : ";
		}
		else
		{
			while (ep->getNext()->getNext()!=NULL)
			{
				ep = ep->getNext();
			}
			Node* d1 = ep->getNext();
			ep->setNext(NULL);
			delete d1;
		}
	}
	void display()
	{
		cout << "Displaying Linked List : " << endl;
		Node *ep = start;
		if (start==NULL)
		{
			cout << "Linked List Is Empty: \n";
		}
		else
		{
			while (ep != NULL)
			{
				cout << ep->getData()<<" "<<endl;
				ep = ep->getNext();

			}
			cout << ep->getData() << " " << endl;
			

		}
		
	}
	friend ostream& operator<<(ostream &, SLL &);
};
//template<class T>
ostream& operator<<(ostream& o, SLL & s)
{
	cout << "Displaying Linked List : " << endl;
	Node*ep = s.start;
	if (s.start == NULL)
	{
		o << "Linked List Is Empty: \n";
	}
	else
	{
		while (ep != NULL)
		{
			o << ep->getData() << " " << endl;
			ep = ep->getNext();

		}
		o << ep->getData() << " " << endl;


	}
	return o;
}

int main()
{
	SLL l1;
	//l1.display();
	cout << l1<<endl;
	l1.insert(10);
	l1.insert(20);

	l1.insert(30);
	l1.insert(40);
	l1.removeFromEnd();
	l1.insertAtBeg(5);
	l1.insertAtBeg(9);
	cout << l1;
	l1.removeFromBegin();

	//l1.display();
	cout << l1;
	cout << "Remove From End : \n";

	//cout << l1;
	cout << "\n\n\n";


	/*l1.display();
	SLL<char> s2;
	cout << s2;
	s2.insert('k');
	s2.insert('p');
	s2.insert('t');
	//s2.display();
	cout << "\n\n\n";*/
}
