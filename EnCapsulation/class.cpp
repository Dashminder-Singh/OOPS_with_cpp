#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class Book
{
private:
	int bookid;
	char title[20];
	float price;
public:
	void input()
	{
	cout<<"Enter Book id , Name and Price: ";
	cin>>bookid;
	if(bookid<0)
		bookid=-bookid;
	cin.ignore();
	cin.getline(title,20);
	cin>>price;
	}
	void display()
	{
		cout<<"Book id: "<<bookid<<"\n"
		<<"Book title: "<<title<<"\n"<<"Book price: "<<price<<"\n\n";
	}
};

int main()
{
	Book b1,b2,b3;
	b1.input();
	b1.display();

	b2.input();
	b2.display();

	b3.input();
	b3.display();
	getch();
	return 0;
}