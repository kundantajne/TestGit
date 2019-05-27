#include<iostream>
using namespace std;
namespace uk
{

	class A
	{
	public:
		void test()
		{
			cout << "Inside Uk"<<endl;
		}
	};
}
namespace us
{
	class A
	{
	public:
		void test()
		{
			cout << "Inside us"<<endl;
		}
	};
}

/*int main()
{
	uk::A obj1;
	obj1.test();

	us::A obj2;
	obj2.test();
	}*/


using namespace uk;
int main()
{
	A obj;
	obj.test();
}