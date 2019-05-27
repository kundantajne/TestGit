#include<iostream>
using namespace std;
//template<class T>
class SNode
{
	int data;
	 SNode* next;

public:
	 SNode(int d)
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

	void setNext(  SNode* p)
	{
		this->next = p;
	}

	 SNode* getNext()
	{
		return this->next;
	}
};
//template<class T>
class QSLL
{
	 SNode* Top;

public:
	QSLL()
	{
		Top = NULL;
	}



	void push(int data)
	{
		 SNode * nn = new  SNode(data);
		if (Top == NULL)
		{
			Top = nn;
		}
		else
		{
			nn->setNext(Top);
			Top = nn;
		}
	}
	void insertAtBeg(int data)
	{
		SNode * nn = new SNode(data);
		if (Top == NULL)
		{
			Top = nn;
		}
		else
		{
			nn->setNext(Top);
			Top = nn;
		}
	}
	int pop()
	{
		if (Top == NULL)
		{
			cout << "Stack Is Empty : ";
		}
		else
		{
			 SNode*dp = Top;
			Top = Top->getNext();
			int data;
			data = dp->getData();
			delete dp;
			return data;
		}

	}

	void display()
	{
		cout << "Displaying Stack  Using Linked List : " << endl;
		 SNode *ep = Top;
		if (Top == NULL)
		{
			cout << "Stack Is Empty: \n";
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
	friend ostream& operator<<(ostream &, QSLL &);
};

ostream& operator<<(ostream& o, QSLL & s)
{
	cout << "Displaying Stack Using Linked List : " << endl;
	 SNode*ep = s.Top;
	if (s.Top == NULL)
	{
		o << "Stack Is Empty: \n";
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
	//cout << l1 << endl;
	
	l1.push(5);
	l1.push(10);
	l1.push(15);
	l1.pop();
	l1.insertAtBeg(20);

	//l1.display();
	cout << l1;
	cout << "\n\n\n";

}
