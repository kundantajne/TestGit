#include<iostream>
using namespace std;
template<class T>
class myStack
{
	int size;
	T* stack;
	int top;
public:
	myStack()
	{
		this->size = 0;
		this->stack = NULL;
		this->top = -1;
	}

	myStack(int s)
	{
		this->size = s;
		stack =new T[this->size];
		top=-1;
	}
	void push(T data)
	{
		if (top==size-1)
		{
			cout << "Stack is full"<<endl;
		}
		else
		{
	
			this->stack[++top] = data;
		}
	}
	void pop()
	{
		if (top==-1)

		{
			cout << "Stack is empty"<<endl;
		}
		else
		{
			T data;
			data = this->stack[top--];
		}
	}

	/*int peep()
	{
		if (top!=-1)
		{
			return this->stack[top];
		}
		else
		{
			cout << "Stack is Empty";
		}
		return 0;
	}*/
	void display()
	{
		if (top>=0)
		{
			cout << "Stack Element Is :";

			for (int i = top;i>=0 ; i--)
			{
				cout << this->stack[i] << " " << endl;

			}
			cout << "\n";

		}
		else
		{
			cout << "Stack is Empty"<<endl;
		}
	}
};
int main()
{
	cout << "************************Integer*****************************";
	myStack<int> s1(5);

	cout << "Inserting Element Into Stack"<<endl;
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(40);
	s1.push(50);

	cout << "Displaying Stack Element After Push: " << endl;
	s1.display();

	cout << "Removing element From Stack"<<endl;
	s1.pop();

	cout << "Displaying Stack Element After Pop : " << endl;
	s1.display();

	/*int v1 = 35;
	if (s1.peep()>v1)
	{
		v1 = s1.pop();

	}

*/

	cout << "***********************Double*********************************"<<endl;

	myStack<double> d1(3);
	d1.push(10.50);
	d1.push(51.6);
	d1.push(60.64);
	d1.push(90);

	d1.display();

	d1.pop();
	d1.pop();
	d1.pop();
	d1.pop();

	d1.display();

	cout << "\n\n\n";


	cout << "*****************************Character******************************" << endl;

	myStack<char> c1(3);
	c1.push('k');
	c1.push('p');
	c1.push('T');

	c1.display();
	c1.push('s');

	c1.pop();
	c1.pop();
	c1.pop();
	//c1.pop();

	c1.display();

}