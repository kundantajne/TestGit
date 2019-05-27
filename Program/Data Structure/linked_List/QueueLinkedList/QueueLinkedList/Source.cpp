#include<iostream>
using namespace std;
//template<class T>
class QNode
{
	int data;
	 QNode* next;

public:
	 QNode(int d)
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

	void setNext( QNode* p)
	{
		this->next = p;
	}

	 QNode* getNext()
	{
		return this->next;
	}
};
//template<class T>
class QSLL
{
	 QNode* start;

public:
	 QSLL()
	{
		start = NULL;
	}

	void insert(int data)
	{
		 QNode* nm = new  QNode(data);

		if (this->start == NULL)
		{
			start = nm;
		}
		else
		{
			 QNode* ep = start;
			while (ep->getNext() != NULL)
			{
				ep = ep->getNext();
			}
			ep->setNext(nm);
		}

	}

	int removeFromBegin()
	{
		if (start == NULL)
		{
			cout << "LInked List Is Empty : ";
		}
		else
		{
			 QNode*dp = start;
			start = start->getNext();
			int data;
			data = dp->getData();
			delete dp;
			return data;
		}

	}

	void display()
	{
		cout << "Displaying Linked List : " << endl;
		 QNode *ep = start;
		if (start == NULL)
		{
			cout << "Linked List Is Empty: \n";
		}
		else
		{
			while (ep != NULL)
			{
				cout << ep->getData() << " " << endl;
				ep = ep->getNext();

			}
			cout << ep->getData() << " " << endl;


		}

	}
	friend ostream& operator<<(ostream &,  QSLL &);
};
//template<class T>
ostream& operator<<(ostream& o,  QSLL & s)
{
	cout << "Displaying Linked List : " << endl;
	 QNode*ep = s.start;
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
	 QSLL l1;
	//l1.display();
	cout << l1 << endl;
	l1.insert(10);
	l1.insert(20);
	l1.insert(30);
	l1.insert(40);
	
	l1.removeFromBegin();
	cout << l1;
	cout << "\n\n\n";


}
