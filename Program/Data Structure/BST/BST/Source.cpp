#include<iostream>
using namespace std;

class Node
{
	int data;
	Node* left;
	Node* right;

public:
	Node(int d)
	{
		data = d;
		left = NULL;
		right = NULL;
	}
	void setData(int d)
	{
		data = d;
	}
	void setleft(Node* l)
	{
		left = l;
	}

	void setright(Node* r)
	{
		right = r;
	}
	int getData()
	{
		return data;
	}

	Node* getLeft()
	{
		return left;
	}
	Node* getRight()
	{
		return right;
	}
};

class BST
{
	Node* Root;
public:
	BST()
	{
		Root = NULL;
	}

	void Insert(int data)
	{
		Node* nn = new Node(data);
		Node* parent = NULL;
		if (Root==NULL)
		{
			Root = nn;
		}
		else
		{
			Node* current;
			current = NULL;
			while (current)
			{
				parent = current;
				if (nn->getData()>current->getData())
				{
					current = current->getRight();
				}
				else
				{
					current = current->getLeft();
				}
			}
			if (nn->getData()>parent->getData())
			{
				parent->setright(nn);
			}
			else
			{
				parent->setleft(nn);
			}

		}


	}

	void inorder()
	{
		Node* in = Root;
		if (in==NULL)
		{
			return;
		}
		in = in->getLeft();
		cout << in->getData();
		in = in->getRight();
		
	}


};

int main()
{
	BST b1;
	b1.Insert(10);
	b1.Insert(5);
	b1.Insert(20);
	b1.inorder();
}