#include<iostream>
using namespace std;

class Book
{
	char Bname[50];
	int id;
	char author[20];
	double price;

public:
	Book()
	{
		strcpy(Bname, "Not Given");
		id = 0;
		strcpy(author, "Not Given");
		price = 0;
	}
	Book(char* nm, int i, char* au, double pr)
	{
		strcpy(Bname,nm);
		id =i;
		strcpy(author,au);
		price =pr;

	}

	void setBookName(char * nm)
	{
		strcpy(Bname, nm);

	}
	void setId(int i)
	{
		id = i;
	}
	void setAuthor(char * au)
	{
		strcpy(author, au);
	}
	void setPrice(double pr)
	{
		price = pr;
	}
	char * getBookName()
	{
		return Bname;
	}
	int getId()
	{
		return id;
	}
	char * getAuthor()
	{
		return author;
	}
	double getPrice()
	{
		return price;
	}

	void display()
	{
		cout << "Book Details are : " << "\n Name Is : " << getBookName() << "\nId is : " << getId() << "\nAuthor is : " << getAuthor() << "\nPrice is : " << getPrice()<<endl;
	}



};

int main()
{
	Book b1;
	Book b2(" A Song of Ice and Fire", 1, " George R. R. Martin", 2436);
	b1.display();
	cout << "parameterized constructor : \n";
	b2.display();
	cout << "\n\n";
}